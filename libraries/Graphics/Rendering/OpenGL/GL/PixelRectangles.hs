--------------------------------------------------------------------------------
-- |
-- Module      :  Graphics.Rendering.OpenGL.GL.PixelRectangles
-- Copyright   :  (c) Sven Panne 2003
-- License     :  BSD-style (see the file libraries/OpenGL/LICENSE)
-- 
-- Maintainer  :  sven_panne@yahoo.com
-- Stability   :  provisional
-- Portability :  portable
--
-- This module corresponds to section 3.6 (Pixel Rectangles) of the OpenGL 1.4
-- specs.
--
--------------------------------------------------------------------------------

module Graphics.Rendering.OpenGL.GL.PixelRectangles (
   -- * Pixel Storage Modes
   PixelStoreDirection(..), swapBytes, lsbFirst, rowLength, skipRows,
   skipPixels, rowAlignment, imageHeight, skipImages,

   -- * Pixel Transfer Modes
   PixelTransferStage(..),
   mapColor, mapStencil, indexShift, indexOffset, depthScale, depthBias,
   rgbaScale, rgbaBias,

   -- * Pixel Maps
   PixelMapComponent, PixelMap(..), GLpixelmap, maxPixelMapTable,
   pixelMapIToI, pixelMapSToS, pixelMapIToR, pixelMapIToG, pixelMapIToB,
   pixelMapIToA, pixelMapRToR, pixelMapGToG, pixelMapBToB, pixelMapAToA,

   -- * Color Tables
   colorTableEnabled, colorTableScale, colorTableBias, colorTableFormat,
   colorTableWidth,
   colorTableRGBASizes, colorTableLuminanceSize, colorTableIntesitySize,

   -- * Convolution Filter
   maxConvolutionSize,

   -- * Drawing Pixels
   PixelFormat(..), drawPixels,

   -- * Pixel Zoom
   pixelZoom
) where

import Control.Monad ( liftM, liftM2 )
import Data.Word
import Foreign.ForeignPtr ( ForeignPtr, mallocForeignPtrArray, withForeignPtr )
import Foreign.Marshal.Alloc ( alloca )
import Foreign.Marshal.Array ( allocaArray, peekArray, pokeArray, withArray )
import Foreign.Marshal.Utils ( with )
import Foreign.Ptr ( Ptr )
import Foreign.Storable ( Storable(..) )
import Graphics.Rendering.OpenGL.GL.Capability (
   EnableCap(CapColorTable,CapPostConvolutionColorTable,
             CapPostColorMatrixColorTable),
   makeCapability )
import Graphics.Rendering.OpenGL.GL.BasicTypes (
   GLenum, GLint, GLuint, GLsizei, GLfloat, Capability )
import Graphics.Rendering.OpenGL.GL.CoordTrans ( Size(..) )
import Graphics.Rendering.OpenGL.GL.DataType ( marshalDataType )
import Graphics.Rendering.OpenGL.GL.VertexArrays ( DataType )
import Graphics.Rendering.OpenGL.GL.Extensions (
   FunPtr, unsafePerformIO, Invoker, getProcAddress )
import Graphics.Rendering.OpenGL.GL.GLboolean (
   GLboolean, marshalGLboolean, unmarshalGLboolean )
import Graphics.Rendering.OpenGL.GL.PixelFormat (
   PixelFormat(..), marshalPixelFormat )
import Graphics.Rendering.OpenGL.GL.QueryUtils (
   GetPName(GetUnpackSwapBytes,GetUnpackLSBFirst,GetUnpackRowLength,
            GetUnpackSkipRows,GetUnpackSkipPixels,GetUnpackAlignment,
            GetUnpackImageHeight,GetUnpackSkipImages,GetPackSwapBytes,
            GetPackLSBFirst,GetPackRowLength,GetPackSkipRows,GetPackSkipPixels,
            GetPackAlignment,GetPackImageHeight,GetPackSkipImages,
            GetMapColor,GetMapStencil,GetIndexShift,GetIndexOffset,
            GetRedScale,GetGreenScale,GetBlueScale,GetAlphaScale,GetDepthScale,
            GetRedBias,GetGreenBias,GetBlueBias,GetAlphaBias,GetDepthBias,
            GetPostConvolutionRedScale,GetPostConvolutionGreenScale,
            GetPostConvolutionBlueScale,GetPostConvolutionAlphaScale,
            GetPostConvolutionRedBias,GetPostConvolutionGreenBias,
            GetPostConvolutionBlueBias,GetPostConvolutionAlphaBias,
            GetPostColorMatrixRedScale,GetPostColorMatrixGreenScale,
            GetPostColorMatrixBlueScale,GetPostColorMatrixAlphaScale,
            GetPostColorMatrixRedBias,GetPostColorMatrixGreenBias,
            GetPostColorMatrixBlueBias,GetPostColorMatrixAlphaBias,
            GetMaxPixelMapTable,GetPixelMapIToISize,GetPixelMapSToSSize,
            GetPixelMapIToRSize,GetPixelMapIToGSize,GetPixelMapIToBSize,
            GetPixelMapIToASize,GetPixelMapRToRSize,GetPixelMapGToGSize,
            GetPixelMapBToBSize,GetPixelMapAToASize,
            GetMaxConvolutionWidth, GetMaxConvolutionHeight,
            GetZoomX,GetZoomY),
   getBoolean1, getInteger1, getSizei1, getFloat1 )
import Graphics.Rendering.OpenGL.GL.StateVar (
   GettableStateVar, makeGettableStateVar, StateVar, makeStateVar )
import Graphics.Rendering.OpenGL.GL.Texturing (
   PixelInternalFormat, unmarshalPixelInternalFormat )
import Graphics.Rendering.OpenGL.GL.VertexSpec ( Color4(..) )

--------------------------------------------------------------------------------













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































--------------------------------------------------------------------------------

data PixelStoreDirection =
     Pack
   | Unpack
   deriving ( Eq, Ord, Show )

--------------------------------------------------------------------------------

data PixelStore =
     UnpackSwapBytes
   | UnpackLSBFirst
   | UnpackRowLength
   | UnpackSkipRows
   | UnpackSkipPixels
   | UnpackAlignment
   | PackSwapBytes
   | PackLSBFirst
   | PackRowLength
   | PackSkipRows
   | PackSkipPixels
   | PackAlignment
   | PackSkipImages
   | PackImageHeight
   | UnpackSkipImages
   | UnpackImageHeight

marshalPixelStore :: PixelStore -> GLenum
marshalPixelStore x = case x of
   UnpackSwapBytes -> 0xcf0
   UnpackLSBFirst -> 0xcf1
   UnpackRowLength -> 0xcf2
   UnpackSkipRows -> 0xcf3
   UnpackSkipPixels -> 0xcf4
   UnpackAlignment -> 0xcf5
   PackSwapBytes -> 0xd00
   PackLSBFirst -> 0xd01
   PackRowLength -> 0xd02
   PackSkipRows -> 0xd03
   PackSkipPixels -> 0xd04
   PackAlignment -> 0xd05
   PackSkipImages -> 0x806b
   PackImageHeight -> 0x806c
   UnpackSkipImages -> 0x806d
   UnpackImageHeight -> 0x806e

--------------------------------------------------------------------------------

swapBytes :: PixelStoreDirection -> StateVar Bool
swapBytes Pack   = pixelStoreb GetPackSwapBytes PackSwapBytes
swapBytes Unpack = pixelStoreb GetUnpackSwapBytes UnpackSwapBytes

lsbFirst :: PixelStoreDirection -> StateVar Bool
lsbFirst Pack   = pixelStoreb GetPackLSBFirst PackLSBFirst
lsbFirst Unpack = pixelStoreb GetUnpackLSBFirst UnpackLSBFirst

rowLength :: PixelStoreDirection -> StateVar GLint
rowLength Pack   = pixelStorei GetPackRowLength PackRowLength
rowLength Unpack = pixelStorei GetUnpackRowLength UnpackRowLength

skipRows :: PixelStoreDirection -> StateVar GLint
skipRows Pack   = pixelStorei GetPackSkipRows PackSkipRows
skipRows Unpack = pixelStorei GetUnpackSkipRows UnpackSkipRows

skipPixels :: PixelStoreDirection -> StateVar GLint
skipPixels Pack   = pixelStorei GetPackSkipPixels PackSkipPixels
skipPixels Unpack = pixelStorei GetUnpackSkipPixels PackSkipPixels

rowAlignment :: PixelStoreDirection -> StateVar GLint
rowAlignment Pack   = pixelStorei GetPackAlignment PackAlignment
rowAlignment Unpack = pixelStorei GetUnpackAlignment UnpackAlignment

imageHeight :: PixelStoreDirection -> StateVar GLint
imageHeight Pack   = pixelStorei GetPackImageHeight PackImageHeight
imageHeight Unpack = pixelStorei GetUnpackImageHeight PackImageHeight

skipImages :: PixelStoreDirection -> StateVar GLint
skipImages Pack   = pixelStorei GetPackSkipImages PackSkipImages
skipImages Unpack = pixelStorei GetUnpackSkipImages PackSkipImages

--------------------------------------------------------------------------------

pixelStoreb :: GetPName -> PixelStore -> StateVar Bool
pixelStoreb pn ps =
   makeStateVar
      (getBoolean1 unmarshalGLboolean pn)
      (glPixelStorei (marshalPixelStore ps) . fromIntegral . marshalGLboolean)

pixelStorei :: GetPName -> PixelStore -> StateVar GLint
pixelStorei pn ps =
   makeStateVar
      (getInteger1 id pn)
      (glPixelStorei (marshalPixelStore ps))

foreign import stdcall unsafe "HsOpenGL.h glPixelStorei" glPixelStorei ::
   GLenum -> GLint -> IO ()

--------------------------------------------------------------------------------

data PixelTransfer =
     MapColor
   | MapStencil
   | IndexShift
   | IndexOffset
   | RedScale
   | RedBias
   | GreenScale
   | GreenBias
   | BlueScale
   | BlueBias
   | AlphaScale
   | AlphaBias
   | DepthScale
   | DepthBias
   | PostConvolutionRedScale
   | PostConvolutionGreenScale
   | PostConvolutionBlueScale
   | PostConvolutionAlphaScale
   | PostConvolutionRedBias
   | PostConvolutionGreenBias
   | PostConvolutionBlueBias
   | PostConvolutionAlphaBias
   | PostColorMatrixRedScale
   | PostColorMatrixGreenScale
   | PostColorMatrixBlueScale
   | PostColorMatrixAlphaScale
   | PostColorMatrixRedBias
   | PostColorMatrixGreenBias
   | PostColorMatrixBlueBias
   | PostColorMatrixAlphaBias

marshalPixelTransfer :: PixelTransfer -> GLenum
marshalPixelTransfer x = case x of
   MapColor -> 0xd10
   MapStencil -> 0xd11
   IndexShift -> 0xd12
   IndexOffset -> 0xd13
   RedScale -> 0xd14
   RedBias -> 0xd15
   GreenScale -> 0xd18
   GreenBias -> 0xd19
   BlueScale -> 0xd1a
   BlueBias -> 0xd1b
   AlphaScale -> 0xd1c
   AlphaBias -> 0xd1d
   DepthScale -> 0xd1e
   DepthBias -> 0xd1f
   PostConvolutionRedScale -> 0x801c
   PostConvolutionGreenScale -> 0x801d
   PostConvolutionBlueScale -> 0x801e
   PostConvolutionAlphaScale -> 0x801f
   PostConvolutionRedBias -> 0x8020
   PostConvolutionGreenBias -> 0x8021
   PostConvolutionBlueBias -> 0x8022
   PostConvolutionAlphaBias -> 0x8023
   PostColorMatrixRedScale -> 0x80b4
   PostColorMatrixGreenScale -> 0x80b5
   PostColorMatrixBlueScale -> 0x80b6
   PostColorMatrixAlphaScale -> 0x80b7
   PostColorMatrixRedBias -> 0x80b8
   PostColorMatrixGreenBias -> 0x80b9
   PostColorMatrixBlueBias -> 0x80ba
   PostColorMatrixAlphaBias -> 0x80bb

--------------------------------------------------------------------------------

data PixelTransferStage =
     PreConvolution
   | PostConvolution
   | PostColorMatrix
   deriving ( Eq, Ord, Show )

stageToTarget :: PixelTransferStage -> ColorTableTarget
stageToTarget s = case s of
   PreConvolution  -> ColorTable
   PostConvolution -> PostConvolutionColorTable
   PostColorMatrix -> PostColorMatrixColorTable

stageToEnableCap :: PixelTransferStage -> EnableCap
stageToEnableCap s = case s of
   PreConvolution  -> CapColorTable
   PostConvolution -> CapPostConvolutionColorTable
   PostColorMatrix -> CapPostColorMatrixColorTable

stageToGetScales ::
      PixelTransferStage
   -> (GetPName, GetPName, GetPName, GetPName)
stageToGetScales s = case s of
   PreConvolution  -> (GetRedScale,
                       GetGreenScale,
                       GetBlueScale,
                       GetAlphaScale)
   PostConvolution -> (GetPostConvolutionRedScale,
                       GetPostConvolutionGreenScale,
                       GetPostConvolutionBlueScale,
                       GetPostConvolutionAlphaScale)
   PostColorMatrix -> (GetPostColorMatrixRedScale,
                       GetPostColorMatrixGreenScale,
                       GetPostColorMatrixBlueScale,
                       GetPostColorMatrixAlphaScale)

stageToSetScales ::
      PixelTransferStage
   -> (PixelTransfer, PixelTransfer, PixelTransfer, PixelTransfer)
stageToSetScales s = case s of
   PreConvolution  -> (RedScale,
                       GreenScale,
                       BlueScale,
                       AlphaScale)
   PostConvolution -> (PostConvolutionRedScale,
                       PostConvolutionGreenScale,
                       PostConvolutionBlueScale,
                       PostConvolutionAlphaScale)
   PostColorMatrix -> (PostColorMatrixRedScale,
                       PostColorMatrixGreenScale,
                       PostColorMatrixBlueScale,
                       PostColorMatrixAlphaScale)

stageToGetBiases ::
      PixelTransferStage
   -> (GetPName, GetPName, GetPName, GetPName)
stageToGetBiases s = case s of
   PreConvolution  -> (GetRedBias,
                       GetGreenBias,
                       GetBlueBias,
                       GetAlphaBias)
   PostConvolution -> (GetPostConvolutionRedBias,
                       GetPostConvolutionGreenBias,
                       GetPostConvolutionBlueBias,
                       GetPostConvolutionAlphaBias)
   PostColorMatrix -> (GetPostColorMatrixRedBias,
                       GetPostColorMatrixGreenBias,
                       GetPostColorMatrixBlueBias,
                       GetPostColorMatrixAlphaBias)

stageToSetBiases ::
      PixelTransferStage
   -> (PixelTransfer, PixelTransfer, PixelTransfer, PixelTransfer)
stageToSetBiases s = case s of
   PreConvolution  -> (RedBias,
                       GreenBias,
                       BlueBias,
                       AlphaBias)
   PostConvolution -> (PostConvolutionRedBias,
                       PostConvolutionGreenBias,
                       PostConvolutionBlueBias,
                       PostConvolutionAlphaBias)
   PostColorMatrix -> (PostColorMatrixRedBias,
                       PostColorMatrixGreenBias,
                       PostColorMatrixBlueBias,
                       PostColorMatrixAlphaBias)

--------------------------------------------------------------------------------

mapColor :: StateVar Bool
mapColor = pixelTransferb GetMapColor MapColor

mapStencil :: StateVar Bool
mapStencil = pixelTransferb GetMapStencil MapStencil

indexShift :: StateVar GLint
indexShift = pixelTransferi GetIndexShift IndexShift

indexOffset :: StateVar GLint
indexOffset = pixelTransferi GetIndexOffset IndexOffset

depthScale :: StateVar GLfloat
depthScale = pixelTransferf GetDepthScale DepthScale

depthBias :: StateVar GLfloat
depthBias = pixelTransferf GetDepthBias DepthBias

rgbaScale :: PixelTransferStage -> StateVar (Color4 GLfloat)
rgbaScale s = pixelTransfer4f (stageToGetScales s) (stageToSetScales s)

rgbaBias :: PixelTransferStage -> StateVar (Color4 GLfloat)
rgbaBias s = pixelTransfer4f (stageToGetBiases s) (stageToSetBiases s)

--------------------------------------------------------------------------------

pixelTransferb :: GetPName -> PixelTransfer -> StateVar Bool
pixelTransferb pn pt =
   makeStateVar
      (getBoolean1 unmarshalGLboolean pn)
      (glPixelTransferi (marshalPixelTransfer pt) .
       fromIntegral . marshalGLboolean)

pixelTransferi :: GetPName -> PixelTransfer -> StateVar GLint
pixelTransferi pn pt =
   makeStateVar
      (getInteger1 id pn)
      (glPixelTransferi (marshalPixelTransfer pt))

foreign import stdcall unsafe "HsOpenGL.h glPixelTransferi" glPixelTransferi ::
   GLenum -> GLint -> IO ()

pixelTransferf :: GetPName -> PixelTransfer -> StateVar GLfloat
pixelTransferf pn pt =
   makeStateVar
      (getFloat1 id pn)
      (glPixelTransferf (marshalPixelTransfer pt))

pixelTransfer4f ::
      (GetPName,      GetPName,      GetPName,      GetPName)
   -> (PixelTransfer, PixelTransfer, PixelTransfer, PixelTransfer)
   -> StateVar (Color4 GLfloat)
pixelTransfer4f (pr, pg, pb, pa) (tr, tg, tb, ta) = makeStateVar get4f set4f
   where get4f = do
            r <- getFloat1 id pr
            g <- getFloat1 id pg
            b <- getFloat1 id pb
            a <- getFloat1 id pa
            return $ Color4 r g b a
         set4f (Color4 r g b a) = do
            glPixelTransferf (marshalPixelTransfer tr) r
            glPixelTransferf (marshalPixelTransfer tg) g
            glPixelTransferf (marshalPixelTransfer tb) b
            glPixelTransferf (marshalPixelTransfer ta) a

foreign import stdcall unsafe "HsOpenGL.h glPixelTransferf" glPixelTransferf ::
   GLenum -> GLfloat -> IO ()

--------------------------------------------------------------------------------

data PixelMap' =
     PixelMapIToI
   | PixelMapSToS
   | PixelMapIToR
   | PixelMapIToG
   | PixelMapIToB
   | PixelMapIToA
   | PixelMapRToR
   | PixelMapGToG
   | PixelMapBToB
   | PixelMapAToA

marshalPixelMap :: PixelMap' -> GLenum
marshalPixelMap x = case x of
   PixelMapIToI -> 0xc70
   PixelMapSToS -> 0xc71
   PixelMapIToR -> 0xc72
   PixelMapIToG -> 0xc73
   PixelMapIToB -> 0xc74
   PixelMapIToA -> 0xc75
   PixelMapRToR -> 0xc76
   PixelMapGToG -> 0xc77
   PixelMapBToB -> 0xc78
   PixelMapAToA -> 0xc79

pixelMapToGetPName :: PixelMap' -> GetPName
pixelMapToGetPName x = case x of
   PixelMapIToI -> GetPixelMapIToISize
   PixelMapSToS -> GetPixelMapSToSSize
   PixelMapIToR -> GetPixelMapIToRSize
   PixelMapIToG -> GetPixelMapIToGSize
   PixelMapIToB -> GetPixelMapIToBSize
   PixelMapIToA -> GetPixelMapIToASize
   PixelMapRToR -> GetPixelMapRToRSize
   PixelMapGToG -> GetPixelMapGToGSize
   PixelMapBToB -> GetPixelMapBToBSize
   PixelMapAToA -> GetPixelMapAToASize

--------------------------------------------------------------------------------

maxPixelMapTable :: GettableStateVar GLsizei
maxPixelMapTable = makeGettableStateVar $ getSizei1 id GetMaxPixelMapTable

--------------------------------------------------------------------------------

class Storable c => PixelMapComponent c where
   getPixelMapv :: GLenum -> Ptr c -> IO ()
   pixelMapv :: GLenum -> GLsizei -> Ptr c -> IO ()

instance PixelMapComponent Word32 where
   getPixelMapv = glGetPixelMapuiv
   pixelMapv = glPixelMapuiv

foreign import stdcall unsafe "HsOpenGL.h glGetPixelMapuiv" glGetPixelMapuiv ::
   GLenum -> Ptr GLuint -> IO ()

foreign import stdcall unsafe "HsOpenGL.h glPixelMapuiv" glPixelMapuiv ::
   GLenum -> GLsizei -> Ptr GLuint -> IO ()

instance PixelMapComponent Float where
   getPixelMapv = glGetPixelMapfv
   pixelMapv = glPixelMapfv

foreign import stdcall unsafe "HsOpenGL.h glGetPixelMapfv" glGetPixelMapfv ::
   GLenum -> Ptr GLfloat -> IO ()

foreign import stdcall unsafe "HsOpenGL.h glPixelMapfv" glPixelMapfv ::
   GLenum -> GLsizei -> Ptr GLfloat -> IO ()

--------------------------------------------------------------------------------

class PixelMap m where
   withNewPixelMap ::
      PixelMapComponent c => GLsizei -> (Ptr c -> IO ()) -> IO (m c)
   withPixelMap ::
      PixelMapComponent c => m c -> (GLsizei -> Ptr c -> IO a) -> IO a
   newPixelMap :: PixelMapComponent c => [c] -> IO (m c)
   getPixelMapComponents :: PixelMapComponent c => m c -> IO [c]

   withNewPixelMap size act =
      allocaArray (fromIntegral size) $ \p -> do
         act p
         components <- peekArray (fromIntegral size) p
         newPixelMap components

   withPixelMap m act = do
      components <- getPixelMapComponents m
      withArray components $ act (fromIntegral (length components))

   newPixelMap elements =
      withNewPixelMap (fromIntegral (length elements)) $ flip pokeArray elements

   getPixelMapComponents m =
      withPixelMap m $ (peekArray . fromIntegral)

--------------------------------------------------------------------------------

data GLpixelmap a = GLpixelmap GLsizei (ForeignPtr a)

   deriving ( Eq, Ord, Show )


instance PixelMap GLpixelmap where
   withNewPixelMap size f = do
      fp <- mallocForeignPtrArray (fromIntegral size)
      withForeignPtr fp f
      return $ GLpixelmap size fp

   withPixelMap (GLpixelmap size fp) f = withForeignPtr fp (f size)

--------------------------------------------------------------------------------

pixelMapIToI :: PixelMap m => StateVar (m GLuint)
pixelMapIToI = pixelMapXToY PixelMapIToI

pixelMapSToS :: PixelMap m => StateVar (m GLuint)
pixelMapSToS = pixelMapXToY PixelMapSToS

pixelMapIToR :: PixelMap m => StateVar (m GLfloat)
pixelMapIToR = pixelMapXToY PixelMapIToR

pixelMapIToG :: PixelMap m => StateVar (m GLfloat)
pixelMapIToG = pixelMapXToY PixelMapIToG

pixelMapIToB :: PixelMap m => StateVar (m GLfloat)
pixelMapIToB = pixelMapXToY PixelMapIToB

pixelMapIToA :: PixelMap m => StateVar (m GLfloat)
pixelMapIToA = pixelMapXToY PixelMapIToA

pixelMapRToR :: PixelMap m => StateVar (m GLfloat)
pixelMapRToR = pixelMapXToY PixelMapRToR

pixelMapGToG :: PixelMap m => StateVar (m GLfloat)
pixelMapGToG = pixelMapXToY PixelMapGToG

pixelMapBToB :: PixelMap m => StateVar (m GLfloat)
pixelMapBToB = pixelMapXToY PixelMapBToB

pixelMapAToA :: PixelMap m => StateVar (m GLfloat)
pixelMapAToA = pixelMapXToY PixelMapAToA

pixelMapXToY :: (PixelMap m, PixelMapComponent c) => PixelMap' -> StateVar (m c)
pixelMapXToY pm =
   makeStateVar
      (do size <- getInteger1 fromIntegral (pixelMapToGetPName pm)
          withNewPixelMap size $ getPixelMapv (marshalPixelMap pm))
      (\theMap -> withPixelMap theMap $ pixelMapv (marshalPixelMap pm))

--------------------------------------------------------------------------------

colorTableEnabled :: PixelTransferStage -> StateVar Capability
colorTableEnabled = makeCapability . stageToEnableCap

--------------------------------------------------------------------------------

foreign import stdcall unsafe "dynamic" dyn_glColorTable :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glColorTable :: (GLenum -> GLenum -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glColorTable = dyn_glColorTable ptr_glColorTable ; ptr_glColorTable :: FunPtr a ; ptr_glColorTable = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glColorTable")) ; {-# NOINLINE ptr_glColorTable #-}

foreign import stdcall unsafe "dynamic" dyn_glColorSubTable :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glColorSubTable :: (GLenum -> GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glColorSubTable = dyn_glColorSubTable ptr_glColorSubTable ; ptr_glColorSubTable :: FunPtr a ; ptr_glColorSubTable = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glColorSubTable")) ; {-# NOINLINE ptr_glColorSubTable #-}

foreign import stdcall unsafe "dynamic" dyn_glCopyColorTable :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLint -> GLint -> GLsizei -> IO ()) ; glCopyColorTable :: (GLenum -> GLenum -> GLint -> GLint -> GLsizei -> IO ()) ; glCopyColorTable = dyn_glCopyColorTable ptr_glCopyColorTable ; ptr_glCopyColorTable :: FunPtr a ; ptr_glCopyColorTable = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glCopyColorTable")) ; {-# NOINLINE ptr_glCopyColorTable #-}

foreign import stdcall unsafe "dynamic" dyn_glCopyColorSubTable :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLsizei -> GLint -> GLint -> GLsizei -> IO ()) ; glCopyColorSubTable :: (GLenum -> GLsizei -> GLint -> GLint -> GLsizei -> IO ()) ; glCopyColorSubTable = dyn_glCopyColorSubTable ptr_glCopyColorSubTable ; ptr_glCopyColorSubTable :: FunPtr a ; ptr_glCopyColorSubTable = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glCopyColorSubTable")) ; {-# NOINLINE ptr_glCopyColorSubTable #-}

foreign import stdcall unsafe "dynamic" dyn_glGetColorTable :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetColorTable :: (GLenum -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetColorTable = dyn_glGetColorTable ptr_glGetColorTable ; ptr_glGetColorTable :: FunPtr a ; ptr_glGetColorTable = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetColorTable")) ; {-# NOINLINE ptr_glGetColorTable #-}

--------------------------------------------------------------------------------

data ColorTableTarget =
     ColorTable
   | PostConvolutionColorTable
   | PostColorMatrixColorTable
   | ProxyColorTable
   | ProxyPostConvolutionColorTable
   | ProxyPostColorMatrixColorTable

marshalColorTableTarget :: ColorTableTarget -> GLenum
marshalColorTableTarget x = case x of
   ColorTable -> 0x80d0
   PostConvolutionColorTable -> 0x80d1
   PostColorMatrixColorTable -> 0x80d2
   ProxyColorTable -> 0x80d3
   ProxyPostConvolutionColorTable -> 0x80d4
   ProxyPostColorMatrixColorTable -> 0x80d5

--------------------------------------------------------------------------------

data ColorTablePName =
     ColorTableScale
   | ColorTableBias
   | ColorTableFormat
   | ColorTableWidth
   | ColorTableRedSize
   | ColorTableGreenSize
   | ColorTableBlueSize
   | ColorTableAlphaSize
   | ColorTableLuminanceSize
   | ColorTableIntensitySize

marshalColorTablePName :: ColorTablePName -> GLenum
marshalColorTablePName x = case x of
   ColorTableScale -> 0x80d6
   ColorTableBias -> 0x80d7
   ColorTableFormat -> 0x80d8
   ColorTableWidth -> 0x80d9
   ColorTableRedSize -> 0x80da
   ColorTableGreenSize -> 0x80db
   ColorTableBlueSize -> 0x80dc
   ColorTableAlphaSize -> 0x80dd
   ColorTableLuminanceSize -> 0x80de
   ColorTableIntensitySize -> 0x80df

--------------------------------------------------------------------------------

colorTableScale :: PixelTransferStage -> StateVar (Color4 GLfloat)
colorTableScale = colorTableScaleBias ColorTableScale

colorTableBias :: PixelTransferStage -> StateVar (Color4 GLfloat)
colorTableBias = colorTableScaleBias ColorTableBias

colorTableScaleBias ::
   ColorTablePName -> PixelTransferStage -> StateVar (Color4 GLfloat)
colorTableScaleBias p stage =
   makeStateVar (getColorTableParameterC4 t p) (colorTableParameterC4 t p)
   where t = stageToTarget stage

getColorTableParameterC4 ::
   ColorTableTarget -> ColorTablePName -> IO (Color4 GLfloat) 
getColorTableParameterC4 t p =
   alloca $ \buf -> do
      glGetColorTableParameterfv
         (marshalColorTableTarget t)
         (marshalColorTablePName p)
         buf
      peek buf

foreign import stdcall unsafe "dynamic" dyn_glGetColorTableParameterfv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr (Color4 GLfloat) -> IO ()) ; glGetColorTableParameterfv :: (GLenum -> GLenum -> Ptr (Color4 GLfloat) -> IO ()) ; glGetColorTableParameterfv = dyn_glGetColorTableParameterfv ptr_glGetColorTableParameterfv ; ptr_glGetColorTableParameterfv :: FunPtr a ; ptr_glGetColorTableParameterfv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetColorTableParameterfv")) ; {-# NOINLINE ptr_glGetColorTableParameterfv #-}

colorTableParameterC4 ::
   ColorTableTarget -> ColorTablePName -> Color4 GLfloat -> IO ()
colorTableParameterC4 t p c =
   with c $
      glColorTableParameterfv
         (marshalColorTableTarget t)
         (marshalColorTablePName p)

foreign import stdcall unsafe "dynamic" dyn_glColorTableParameterfv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr (Color4 GLfloat) -> IO ()) ; glColorTableParameterfv :: (GLenum -> GLenum -> Ptr (Color4 GLfloat) -> IO ()) ; glColorTableParameterfv = dyn_glColorTableParameterfv ptr_glColorTableParameterfv ; ptr_glColorTableParameterfv :: FunPtr a ; ptr_glColorTableParameterfv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glColorTableParameterfv")) ; {-# NOINLINE ptr_glColorTableParameterfv #-}

--------------------------------------------------------------------------------

colorTableFormat :: PixelTransferStage -> GettableStateVar PixelInternalFormat
colorTableFormat stage =
   makeGettableStateVar $
      liftM (unmarshalPixelInternalFormat . fromIntegral) $
         getColorTableParameteri (stageToTarget stage) ColorTableFormat

getColorTableParameteri :: ColorTableTarget -> ColorTablePName -> IO GLsizei
getColorTableParameteri t p =
   alloca $ \buf -> do
      glGetColorTableParameteriv
         (marshalColorTableTarget t)
         (marshalColorTablePName p)
         buf
      liftM fromIntegral $ peek buf

foreign import stdcall unsafe "dynamic" dyn_glGetColorTableParameteriv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetColorTableParameteriv :: (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetColorTableParameteriv = dyn_glGetColorTableParameteriv ptr_glGetColorTableParameteriv ; ptr_glGetColorTableParameteriv :: FunPtr a ; ptr_glGetColorTableParameteriv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetColorTableParameteriv")) ; {-# NOINLINE ptr_glGetColorTableParameteriv #-}

--------------------------------------------------------------------------------

colorTableWidth :: PixelTransferStage -> GettableStateVar GLsizei
colorTableWidth stage =
   makeGettableStateVar $
      getColorTableParameteri (stageToTarget stage) ColorTableWidth

--------------------------------------------------------------------------------

colorTableRGBASizes ::
   PixelTransferStage -> GettableStateVar (Color4 GLsizei)
colorTableRGBASizes s =
   makeGettableStateVar $ do
      let t = stageToTarget s
      r <- getColorTableParameteri t ColorTableRedSize
      g <- getColorTableParameteri t ColorTableGreenSize
      b <- getColorTableParameteri t ColorTableBlueSize
      a <- getColorTableParameteri t ColorTableAlphaSize
      return $ Color4 r g b a

colorTableLuminanceSize ::
   PixelTransferStage -> GettableStateVar GLsizei
colorTableLuminanceSize stage =
   makeGettableStateVar $
      getColorTableParameteri (stageToTarget stage) ColorTableLuminanceSize

colorTableIntesitySize ::
   PixelTransferStage -> GettableStateVar GLsizei
colorTableIntesitySize s =
   makeGettableStateVar $
      getColorTableParameteri (stageToTarget s) ColorTableIntensitySize

--------------------------------------------------------------------------------

maxConvolutionSize :: GettableStateVar Size
maxConvolutionSize =
   makeGettableStateVar $
      liftM2 Size (getSizei1 id GetMaxConvolutionWidth)
                  (getSizei1 id GetMaxConvolutionHeight)

foreign import stdcall unsafe "dynamic" dyn_glConvolutionFilter1D :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glConvolutionFilter1D :: (GLenum -> GLenum -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glConvolutionFilter1D = dyn_glConvolutionFilter1D ptr_glConvolutionFilter1D ; ptr_glConvolutionFilter1D :: FunPtr a ; ptr_glConvolutionFilter1D = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glConvolutionFilter1D")) ; {-# NOINLINE ptr_glConvolutionFilter1D #-}

foreign import stdcall unsafe "dynamic" dyn_glConvolutionFilter2D :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glConvolutionFilter2D :: (GLenum -> GLenum -> GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()) ; glConvolutionFilter2D = dyn_glConvolutionFilter2D ptr_glConvolutionFilter2D ; ptr_glConvolutionFilter2D :: FunPtr a ; ptr_glConvolutionFilter2D = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glConvolutionFilter2D")) ; {-# NOINLINE ptr_glConvolutionFilter2D #-}

foreign import stdcall unsafe "dynamic" dyn_glConvolutionParameterf :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLfloat -> IO ()) ; glConvolutionParameterf :: (GLenum -> GLenum -> GLfloat -> IO ()) ; glConvolutionParameterf = dyn_glConvolutionParameterf ptr_glConvolutionParameterf ; ptr_glConvolutionParameterf :: FunPtr a ; ptr_glConvolutionParameterf = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glConvolutionParameterf")) ; {-# NOINLINE ptr_glConvolutionParameterf #-}

foreign import stdcall unsafe "dynamic" dyn_glConvolutionParameterfv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glConvolutionParameterfv :: (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glConvolutionParameterfv = dyn_glConvolutionParameterfv ptr_glConvolutionParameterfv ; ptr_glConvolutionParameterfv :: FunPtr a ; ptr_glConvolutionParameterfv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glConvolutionParameterfv")) ; {-# NOINLINE ptr_glConvolutionParameterfv #-}

foreign import stdcall unsafe "dynamic" dyn_glConvolutionParameteri :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLint -> IO ()) ; glConvolutionParameteri :: (GLenum -> GLenum -> GLint -> IO ()) ; glConvolutionParameteri = dyn_glConvolutionParameteri ptr_glConvolutionParameteri ; ptr_glConvolutionParameteri :: FunPtr a ; ptr_glConvolutionParameteri = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glConvolutionParameteri")) ; {-# NOINLINE ptr_glConvolutionParameteri #-}

foreign import stdcall unsafe "dynamic" dyn_glConvolutionParameteriv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glConvolutionParameteriv :: (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glConvolutionParameteriv = dyn_glConvolutionParameteriv ptr_glConvolutionParameteriv ; ptr_glConvolutionParameteriv :: FunPtr a ; ptr_glConvolutionParameteriv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glConvolutionParameteriv")) ; {-# NOINLINE ptr_glConvolutionParameteriv #-}

foreign import stdcall unsafe "dynamic" dyn_glCopyConvolutionFilter1D :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLint -> GLint -> GLsizei -> IO ()) ; glCopyConvolutionFilter1D :: (GLenum -> GLenum -> GLint -> GLint -> GLsizei -> IO ()) ; glCopyConvolutionFilter1D = dyn_glCopyConvolutionFilter1D ptr_glCopyConvolutionFilter1D ; ptr_glCopyConvolutionFilter1D :: FunPtr a ; ptr_glCopyConvolutionFilter1D = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glCopyConvolutionFilter1D")) ; {-# NOINLINE ptr_glCopyConvolutionFilter1D #-}

foreign import stdcall unsafe "dynamic" dyn_glCopyConvolutionFilter2D :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLint -> GLint -> GLsizei -> GLsizei -> IO ()) ; glCopyConvolutionFilter2D :: (GLenum -> GLenum -> GLint -> GLint -> GLsizei -> GLsizei -> IO ()) ; glCopyConvolutionFilter2D = dyn_glCopyConvolutionFilter2D ptr_glCopyConvolutionFilter2D ; ptr_glCopyConvolutionFilter2D :: FunPtr a ; ptr_glCopyConvolutionFilter2D = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glCopyConvolutionFilter2D")) ; {-# NOINLINE ptr_glCopyConvolutionFilter2D #-}

foreign import stdcall unsafe "dynamic" dyn_glGetConvolutionFilter :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetConvolutionFilter :: (GLenum -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetConvolutionFilter = dyn_glGetConvolutionFilter ptr_glGetConvolutionFilter ; ptr_glGetConvolutionFilter :: FunPtr a ; ptr_glGetConvolutionFilter = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetConvolutionFilter")) ; {-# NOINLINE ptr_glGetConvolutionFilter #-}

foreign import stdcall unsafe "dynamic" dyn_glGetConvolutionParameterfv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glGetConvolutionParameterfv :: (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glGetConvolutionParameterfv = dyn_glGetConvolutionParameterfv ptr_glGetConvolutionParameterfv ; ptr_glGetConvolutionParameterfv :: FunPtr a ; ptr_glGetConvolutionParameterfv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetConvolutionParameterfv")) ; {-# NOINLINE ptr_glGetConvolutionParameterfv #-}

foreign import stdcall unsafe "dynamic" dyn_glGetConvolutionParameteriv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetConvolutionParameteriv :: (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetConvolutionParameteriv = dyn_glGetConvolutionParameteriv ptr_glGetConvolutionParameteriv ; ptr_glGetConvolutionParameteriv :: FunPtr a ; ptr_glGetConvolutionParameteriv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetConvolutionParameteriv")) ; {-# NOINLINE ptr_glGetConvolutionParameteriv #-}

foreign import stdcall unsafe "dynamic" dyn_glSeparableFilter2D :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> Ptr a -> IO ()) ; glSeparableFilter2D :: (GLenum -> GLenum -> GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> Ptr a -> IO ()) ; glSeparableFilter2D = dyn_glSeparableFilter2D ptr_glSeparableFilter2D ; ptr_glSeparableFilter2D :: FunPtr a ; ptr_glSeparableFilter2D = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glSeparableFilter2D")) ; {-# NOINLINE ptr_glSeparableFilter2D #-}

foreign import stdcall unsafe "dynamic" dyn_glGetSeparableFilter :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLenum -> Ptr a -> Ptr a -> Ptr a -> IO ()) ; glGetSeparableFilter :: (GLenum -> GLenum -> GLenum -> Ptr a -> Ptr a -> Ptr a -> IO ()) ; glGetSeparableFilter = dyn_glGetSeparableFilter ptr_glGetSeparableFilter ; ptr_glGetSeparableFilter :: FunPtr a ; ptr_glGetSeparableFilter = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetSeparableFilter")) ; {-# NOINLINE ptr_glGetSeparableFilter #-}

--------------------------------------------------------------------------------

foreign import stdcall unsafe "dynamic" dyn_glHistogram :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLsizei -> GLenum -> GLboolean -> IO ()) ; glHistogram :: (GLenum -> GLsizei -> GLenum -> GLboolean -> IO ()) ; glHistogram = dyn_glHistogram ptr_glHistogram ; ptr_glHistogram :: FunPtr a ; ptr_glHistogram = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glHistogram")) ; {-# NOINLINE ptr_glHistogram #-}

foreign import stdcall unsafe "dynamic" dyn_glResetHistogram :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> IO ()) ; glResetHistogram :: (GLenum -> IO ()) ; glResetHistogram = dyn_glResetHistogram ptr_glResetHistogram ; ptr_glResetHistogram :: FunPtr a ; ptr_glResetHistogram = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glResetHistogram")) ; {-# NOINLINE ptr_glResetHistogram #-}

foreign import stdcall unsafe "dynamic" dyn_glGetHistogram :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLboolean -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetHistogram :: (GLenum -> GLboolean -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetHistogram = dyn_glGetHistogram ptr_glGetHistogram ; ptr_glGetHistogram :: FunPtr a ; ptr_glGetHistogram = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetHistogram")) ; {-# NOINLINE ptr_glGetHistogram #-}

foreign import stdcall unsafe "dynamic" dyn_glGetHistogramParameterfv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glGetHistogramParameterfv :: (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glGetHistogramParameterfv = dyn_glGetHistogramParameterfv ptr_glGetHistogramParameterfv ; ptr_glGetHistogramParameterfv :: FunPtr a ; ptr_glGetHistogramParameterfv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetHistogramParameterfv")) ; {-# NOINLINE ptr_glGetHistogramParameterfv #-}

foreign import stdcall unsafe "dynamic" dyn_glGetHistogramParameteriv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetHistogramParameteriv :: (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetHistogramParameteriv = dyn_glGetHistogramParameteriv ptr_glGetHistogramParameteriv ; ptr_glGetHistogramParameteriv :: FunPtr a ; ptr_glGetHistogramParameteriv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetHistogramParameteriv")) ; {-# NOINLINE ptr_glGetHistogramParameteriv #-}

--------------------------------------------------------------------------------

foreign import stdcall unsafe "dynamic" dyn_glMinmax :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> GLboolean -> IO ()) ; glMinmax :: (GLenum -> GLenum -> GLboolean -> IO ()) ; glMinmax = dyn_glMinmax ptr_glMinmax ; ptr_glMinmax :: FunPtr a ; ptr_glMinmax = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glMinmax")) ; {-# NOINLINE ptr_glMinmax #-}

foreign import stdcall unsafe "dynamic" dyn_glResetMinmax :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> IO ()) ; glResetMinmax :: (GLenum -> IO ()) ; glResetMinmax = dyn_glResetMinmax ptr_glResetMinmax ; ptr_glResetMinmax :: FunPtr a ; ptr_glResetMinmax = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glResetMinmax")) ; {-# NOINLINE ptr_glResetMinmax #-}

foreign import stdcall unsafe "dynamic" dyn_glGetMinmax :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLboolean -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetMinmax :: (GLenum -> GLboolean -> GLenum -> GLenum -> Ptr a -> IO ()) ; glGetMinmax = dyn_glGetMinmax ptr_glGetMinmax ; ptr_glGetMinmax :: FunPtr a ; ptr_glGetMinmax = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetMinmax")) ; {-# NOINLINE ptr_glGetMinmax #-}

foreign import stdcall unsafe "dynamic" dyn_glGetMinmaxParameterfv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glGetMinmaxParameterfv :: (GLenum -> GLenum -> Ptr GLfloat -> IO ()) ; glGetMinmaxParameterfv = dyn_glGetMinmaxParameterfv ptr_glGetMinmaxParameterfv ; ptr_glGetMinmaxParameterfv :: FunPtr a ; ptr_glGetMinmaxParameterfv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetMinmaxParameterfv")) ; {-# NOINLINE ptr_glGetMinmaxParameterfv #-}

foreign import stdcall unsafe "dynamic" dyn_glGetMinmaxParameteriv :: Graphics.Rendering.OpenGL.GL.Extensions.Invoker (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetMinmaxParameteriv :: (GLenum -> GLenum -> Ptr GLint -> IO ()) ; glGetMinmaxParameteriv = dyn_glGetMinmaxParameteriv ptr_glGetMinmaxParameteriv ; ptr_glGetMinmaxParameteriv :: FunPtr a ; ptr_glGetMinmaxParameteriv = unsafePerformIO (Graphics.Rendering.OpenGL.GL.Extensions.getProcAddress ("GL_ARB_imaging") ("glGetMinmaxParameteriv")) ; {-# NOINLINE ptr_glGetMinmaxParameteriv #-}

--------------------------------------------------------------------------------

drawPixels :: Size -> PixelFormat -> DataType -> Ptr a -> IO ()
drawPixels (Size w h) f t =
   glDrawPixels w h (marshalPixelFormat f) (marshalDataType t)

foreign import stdcall unsafe "HsOpenGL.h glDrawPixels" glDrawPixels ::
   GLsizei -> GLsizei -> GLenum -> GLenum -> Ptr a -> IO ()

--------------------------------------------------------------------------------

pixelZoom :: StateVar (GLfloat, GLfloat)
pixelZoom =
   makeStateVar
      (liftM2 (,) (getFloat1 id GetZoomX) (getFloat1 id GetZoomY))
      (uncurry glPixelZoom)

foreign import stdcall unsafe "HsOpenGL.h glPixelZoom" glPixelZoom ::
   GLfloat -> GLfloat -> IO ()
