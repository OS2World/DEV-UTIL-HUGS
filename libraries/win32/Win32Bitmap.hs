module Win32Bitmap where

import StdDIS
import Win32Types
import GDITypes


----------------------------------------------------------------
-- Resources
----------------------------------------------------------------

-- Yoiks - name clash
-- %dis bitmap x = addr ({LPTSTR} x)
-- 
-- type Bitmap = LPCTSTR
-- 
-- intToBitmap :: Int -> Bitmap
-- intToBitmap i = makeIntResource (toWord i)
-- 
-- %fun LoadBitmap :: MbHINSTANCE -> Bitmap -> IO HBITMAP
-- %fail { res1 == 0 } { ErrorString("LoadBitmap") }
--  
-- %const Bitmap  
-- % [ OBM_CLOSE        = { MAKEINTRESOURCE(OBM_CLOSE)       }
-- % , OBM_UPARROW      = { MAKEINTRESOURCE(OBM_UPARROW)     }
-- % , OBM_DNARROW      = { MAKEINTRESOURCE(OBM_DNARROW)     }
-- % , OBM_RGARROW      = { MAKEINTRESOURCE(OBM_RGARROW)     }
-- % , OBM_LFARROW      = { MAKEINTRESOURCE(OBM_LFARROW)     }
-- % , OBM_REDUCE       = { MAKEINTRESOURCE(OBM_REDUCE)      }
-- % , OBM_ZOOM         = { MAKEINTRESOURCE(OBM_ZOOM)        }
-- % , OBM_RESTORE      = { MAKEINTRESOURCE(OBM_RESTORE)     }
-- % , OBM_REDUCED      = { MAKEINTRESOURCE(OBM_REDUCED)     }
-- % , OBM_ZOOMD        = { MAKEINTRESOURCE(OBM_ZOOMD)       }
-- % , OBM_RESTORED     = { MAKEINTRESOURCE(OBM_RESTORED)    }
-- % , OBM_UPARROWD     = { MAKEINTRESOURCE(OBM_UPARROWD)    }
-- % , OBM_DNARROWD     = { MAKEINTRESOURCE(OBM_DNARROWD)    }
-- % , OBM_RGARROWD     = { MAKEINTRESOURCE(OBM_RGARROWD)    }
-- % , OBM_LFARROWD     = { MAKEINTRESOURCE(OBM_LFARROWD)    }
-- % , OBM_MNARROW      = { MAKEINTRESOURCE(OBM_MNARROW)     }
-- % , OBM_COMBO        = { MAKEINTRESOURCE(OBM_COMBO)       }
-- % , OBM_UPARROWI     = { MAKEINTRESOURCE(OBM_UPARROWI)    }
-- % , OBM_DNARROWI     = { MAKEINTRESOURCE(OBM_DNARROWI)    }
-- % , OBM_RGARROWI     = { MAKEINTRESOURCE(OBM_RGARROWI)    }
-- % , OBM_LFARROWI     = { MAKEINTRESOURCE(OBM_LFARROWI)    }
-- % , OBM_OLD_CLOSE    = { MAKEINTRESOURCE(OBM_OLD_CLOSE)   }   
-- % , OBM_SIZE         = { MAKEINTRESOURCE(OBM_SIZE)        }
-- % , OBM_OLD_UPARROW  = { MAKEINTRESOURCE(OBM_OLD_UPARROW) }   
-- % , OBM_OLD_DNARROW  = { MAKEINTRESOURCE(OBM_OLD_DNARROW) }   
-- % , OBM_OLD_RGARROW  = { MAKEINTRESOURCE(OBM_OLD_RGARROW) }   
-- % , OBM_OLD_LFARROW  = { MAKEINTRESOURCE(OBM_OLD_LFARROW) }   
-- % , OBM_BTSIZE       = { MAKEINTRESOURCE(OBM_BTSIZE)      }
-- % , OBM_CHECK        = { MAKEINTRESOURCE(OBM_CHECK)       }
-- % , OBM_CHECKBOXES   = { MAKEINTRESOURCE(OBM_CHECKBOXES)  }   
-- % , OBM_BTNCORNERS   = { MAKEINTRESOURCE(OBM_BTNCORNERS)  }   
-- % , OBM_OLD_REDUCE   = { MAKEINTRESOURCE(OBM_OLD_REDUCE)  }   
-- % , OBM_OLD_ZOOM     = { MAKEINTRESOURCE(OBM_OLD_ZOOM)    }
-- % , OBM_OLD_RESTORE  = { MAKEINTRESOURCE(OBM_OLD_RESTORE) }   
-- % ]

----------------------------------------------------------------
-- Raster Ops
----------------------------------------------------------------


type RasterOp3 = Word32
type RasterOp4 = Word32

sRCCOPY :: RasterOp3
sRCCOPY =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sRCCOPY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sRCCOPY :: IO (Word32)
sRCPAINT :: RasterOp3
sRCPAINT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sRCPAINT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sRCPAINT :: IO (Word32)
sRCAND :: RasterOp3
sRCAND =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sRCAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sRCAND :: IO (Word32)
sRCINVERT :: RasterOp3
sRCINVERT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sRCINVERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sRCINVERT :: IO (Word32)
sRCERASE :: RasterOp3
sRCERASE =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sRCERASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sRCERASE :: IO (Word32)
nOTSRCCOPY :: RasterOp3
nOTSRCCOPY =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_nOTSRCCOPY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_nOTSRCCOPY :: IO (Word32)
nOTSRCERASE :: RasterOp3
nOTSRCERASE =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_nOTSRCERASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_nOTSRCERASE :: IO (Word32)
mERGECOPY :: RasterOp3
mERGECOPY =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_mERGECOPY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_mERGECOPY :: IO (Word32)
mERGEPAINT :: RasterOp3
mERGEPAINT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_mERGEPAINT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_mERGEPAINT :: IO (Word32)
pATCOPY :: RasterOp3
pATCOPY =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_pATCOPY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_pATCOPY :: IO (Word32)
pATPAINT :: RasterOp3
pATPAINT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_pATPAINT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_pATPAINT :: IO (Word32)
pATINVERT :: RasterOp3
pATINVERT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_pATINVERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_pATINVERT :: IO (Word32)
dSTINVERT :: RasterOp3
dSTINVERT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_dSTINVERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_dSTINVERT :: IO (Word32)
bLACKNESS :: RasterOp3
bLACKNESS =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_bLACKNESS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_bLACKNESS :: IO (Word32)
wHITENESS :: RasterOp3
wHITENESS =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_wHITENESS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_wHITENESS :: IO (Word32)

mAKEROP4 :: RasterOp3 -> RasterOp3 -> RasterOp4
mAKEROP4 arg1 arg2 =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_mAKEROP4 arg1 arg2 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_mAKEROP4 :: Word32 -> Word32 -> IO (Word32)

----------------------------------------------------------------
-- BITMAP
----------------------------------------------------------------

type BITMAP =
  ( LONG    -- bmType
  , LONG    -- bmWidth
  , LONG    -- bmHeight
  , LONG    -- bmWidthBytes
  , WORD    -- bmPlanes   
  , WORD    -- bmBitsPixel
  , LPVOID  -- bmBits
  )


type LPBITMAP = Addr

setBITMAP :: LPBITMAP -> BITMAP -> IO ()
setBITMAP arg1 gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8,gc_arg10,gc_arg12,gc_arg14) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  case ( fromIntegral  gc_arg10) of { gc_arg11 ->
  case ( fromIntegral  gc_arg12) of { gc_arg13 ->
  prim_Win32Bitmap_cpp_setBITMAP arg1 gc_arg3 gc_arg5 gc_arg7 gc_arg9 gc_arg11 gc_arg13 gc_arg14}}}}}}}
primitive prim_Win32Bitmap_cpp_setBITMAP :: Addr -> Int -> Int -> Int -> Int -> Word32 -> Word32 -> Addr -> IO ()

marshall_bITMAP_ :: BITMAP -> IO LPBITMAP
marshall_bITMAP_ bmp = do
  lpbmp <- malloc sizeofBITMAP
  setBITMAP lpbmp bmp
  return lpbmp

----------------------------------------------------------------
-- Misc
----------------------------------------------------------------

deleteBitmap :: HBITMAP -> IO ()
deleteBitmap arg1 =
  prim_Win32Bitmap_cpp_deleteBitmap arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Bitmap_cpp_deleteBitmap :: Addr -> IO (Int,Addr)

createCompatibleBitmap :: HDC -> Int32 -> Int32 -> IO HBITMAP
createCompatibleBitmap arg1 gc_arg1 gc_arg2 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Bitmap_cpp_createCompatibleBitmap arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}}
primitive prim_Win32Bitmap_cpp_createCompatibleBitmap :: Addr -> Int -> Int -> IO (Addr,Int,Addr)

createBitmap :: INT -> INT -> UINT -> UINT -> MbLPVOID -> IO HBITMAP
createBitmap gc_arg1 gc_arg2 arg3 arg4 arg5 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  case ( fromIntegral  gc_arg2) of { arg2 ->
  (case arg5 of {
      Nothing -> (return (nullAddr));
      (Just arg5) -> (return ((arg5)))
   }) >>= \ (arg5) ->
  prim_Win32Bitmap_cpp_createBitmap arg1 arg2 arg3 arg4 arg5 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}}
primitive prim_Win32Bitmap_cpp_createBitmap :: Int -> Int -> Word32 -> Word32 -> Addr -> IO (Addr,Int,Addr)

createBitmapIndirect :: LPBITMAP -> IO HBITMAP
createBitmapIndirect arg1 =
  prim_Win32Bitmap_cpp_createBitmapIndirect arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Bitmap_cpp_createBitmapIndirect :: Addr -> IO (Addr,Int,Addr)

createDIBPatternBrushPt :: LPVOID -> ColorFormat -> IO HBRUSH
createDIBPatternBrushPt arg1 arg2 =
  prim_Win32Bitmap_cpp_createDIBPatternBrushPt arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Bitmap_cpp_createDIBPatternBrushPt :: Addr -> Word32 -> IO (Addr,Int,Addr)

----------------------------------------------------------------
-- Querying
----------------------------------------------------------------

getBitmapDimensionEx :: HBITMAP -> IO SIZE
getBitmapDimensionEx h =
  prim_Win32Bitmap_cpp_getBitmapDimensionEx h >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))
primitive prim_Win32Bitmap_cpp_getBitmapDimensionEx :: Addr -> IO (Int,Int,Int,Addr)

setBitmapDimensionEx :: HBITMAP -> SIZE -> IO SIZE
setBitmapDimensionEx h gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  prim_Win32Bitmap_cpp_setBitmapDimensionEx h gc_arg3 gc_arg5 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))}}}
primitive prim_Win32Bitmap_cpp_setBitmapDimensionEx :: Addr -> Int -> Int -> IO (Int,Int,Int,Addr)

getBitmapInfo :: HBITMAP -> IO BITMAP
getBitmapInfo x =
  prim_Win32Bitmap_cpp_getBitmapInfo x >>= \ (gc_res2,gc_res4,gc_res6,gc_res8,gc_res10,gc_res12,gc_res13,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       let gc_res5 = ( fromIntegral  (gc_res6)) in
       let gc_res7 = ( fromIntegral  (gc_res8)) in
       let gc_res9 = ( fromIntegral  (gc_res10)) in
       let gc_res11 = ( fromIntegral  (gc_res12)) in
       (return ((gc_res1,gc_res3,gc_res5,gc_res7,gc_res9,gc_res11,gc_res13)))
primitive prim_Win32Bitmap_cpp_getBitmapInfo :: Addr -> IO (Int,Int,Int,Int,Word32,Word32,Addr,Int,Addr)

----------------------------------------------------------------
--
----------------------------------------------------------------

type BitmapCompression = WORD

bI_RGB :: BitmapCompression
bI_RGB =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_bI_RGB >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Bitmap_cpp_bI_RGB :: IO (Word32)
bI_RLE8 :: BitmapCompression
bI_RLE8 =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_bI_RLE8 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Bitmap_cpp_bI_RLE8 :: IO (Word32)
bI_RLE4 :: BitmapCompression
bI_RLE4 =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_bI_RLE4 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Bitmap_cpp_bI_RLE4 :: IO (Word32)
bI_BITFIELDS :: BitmapCompression
bI_BITFIELDS =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_bI_BITFIELDS >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Bitmap_cpp_bI_BITFIELDS :: IO (Word32)

type ColorFormat = DWORD

dIB_PAL_COLORS :: ColorFormat
dIB_PAL_COLORS =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_dIB_PAL_COLORS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_dIB_PAL_COLORS :: IO (Word32)
dIB_RGB_COLORS :: ColorFormat
dIB_RGB_COLORS =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_dIB_RGB_COLORS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_dIB_RGB_COLORS :: IO (Word32)

----------------------------------------------------------------
-- BITMAPINFO
----------------------------------------------------------------

type LPBITMAPINFO = Addr

----------------------------------------------------------------
-- BITMAPINFOHEADER
----------------------------------------------------------------

type BITMAPINFOHEADER =
 ( DWORD              -- biSize      -- sizeof(BITMAPINFOHEADER)
 , LONG               -- biWidth
 , LONG               -- biHeight
 , WORD               -- biPlanes
 , WORD               -- biBitCount  -- 1, 4, 8, 16, 24 or 32
 , BitmapCompression  -- biCompression
 , DWORD              -- biSizeImage
 , LONG               -- biXPelsPerMeter
 , LONG               -- biYPelsPerMeter
 , Maybe DWORD        -- biClrUsed
 , Maybe DWORD        -- biClrImportant
 )

type LPBITMAPINFOHEADER   = Addr

getBITMAPINFOHEADER_ :: LPBITMAPINFOHEADER -> IO BITMAPINFOHEADER
getBITMAPINFOHEADER_ arg1 =
  prim_Win32Bitmap_cpp_getBITMAPINFOHEADER_ arg1 >>= \ (gc_res1,gc_res3,gc_res5,gc_res7,gc_res9,gc_res11,gc_res12,gc_res14,gc_res16,gc_res18,gc_res20) ->
  let gc_res2 = ( fromIntegral  (gc_res3)) in
  let gc_res4 = ( fromIntegral  (gc_res5)) in
  let gc_res6 = ( fromIntegral  (gc_res7)) in
  let gc_res8 = ( fromIntegral  (gc_res9)) in
  let gc_res10 = ( fromIntegral  (gc_res11)) in
  let gc_res13 = ( fromIntegral  (gc_res14)) in
  let gc_res15 = ( fromIntegral  (gc_res16)) in
  (if 0 == (gc_res18)
   then return Nothing
   else (return ((Just gc_res18)))) >>= \ gc_res17 ->
  (if 0 == (gc_res20)
   then return Nothing
   else (return ((Just gc_res20)))) >>= \ gc_res19 ->
  (return ((gc_res1,gc_res2,gc_res4,gc_res6,gc_res8,gc_res10,gc_res12,gc_res13,gc_res15,gc_res17,gc_res19)))
primitive prim_Win32Bitmap_cpp_getBITMAPINFOHEADER_ :: Addr -> IO (Word32,Int,Int,Word32,Word32,Word32,Word32,Int,Int,Word32,Word32)


----------------------------------------------------------------
-- BITMAPFILEHEADER
----------------------------------------------------------------

type BITMAPFILEHEADER =
 ( WORD   -- bfType      -- "BM" == 0x4d42
 , DWORD  -- bfSize      -- number of bytes in file
 , WORD   -- bfReserved1 -- == 0
 , WORD   -- bfReserved2 -- == 0
 , DWORD  -- bfOffBits   -- == (char*) bits - (char*) filehdr
 )

type LPBITMAPFILEHEADER = Addr

getBITMAPFILEHEADER :: LPBITMAPFILEHEADER -> IO BITMAPFILEHEADER
getBITMAPFILEHEADER arg1 =
  prim_Win32Bitmap_cpp_getBITMAPFILEHEADER arg1 >>= \ (gc_res2,gc_res3,gc_res5,gc_res7,gc_res8) ->
  let gc_res1 = ( fromIntegral  (gc_res2)) in
  let gc_res4 = ( fromIntegral  (gc_res5)) in
  let gc_res6 = ( fromIntegral  (gc_res7)) in
  (return ((gc_res1,gc_res3,gc_res4,gc_res6,gc_res8)))
primitive prim_Win32Bitmap_cpp_getBITMAPFILEHEADER :: Addr -> IO (Word32,Word32,Word32,Word32,Word32)

sizeofBITMAP :: Word32
sizeofBITMAP =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sizeofBITMAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sizeofBITMAP :: IO (Word32)
sizeofBITMAPINFO :: Word32
sizeofBITMAPINFO =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sizeofBITMAPINFO >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sizeofBITMAPINFO :: IO (Word32)
sizeofBITMAPINFOHEADER :: Word32
sizeofBITMAPINFOHEADER =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sizeofBITMAPINFOHEADER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sizeofBITMAPINFOHEADER :: IO (Word32)
sizeofBITMAPFILEHEADER :: Word32
sizeofBITMAPFILEHEADER =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sizeofBITMAPFILEHEADER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sizeofBITMAPFILEHEADER :: IO (Word32)
sizeofLPBITMAPFILEHEADER :: Word32
sizeofLPBITMAPFILEHEADER =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_sizeofLPBITMAPFILEHEADER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_sizeofLPBITMAPFILEHEADER :: IO (Word32)

----------------------------------------------------------------
-- CreateBMPFile
----------------------------------------------------------------

-- A (large) helper function - courtesy of Microsoft

-- Includes "dumpBMP.c" for non-ghc backends.

createBMPFile :: String -> HBITMAP -> HDC -> IO ()
createBMPFile gc_arg1 arg2 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32Bitmap_cpp_createBMPFile arg1 arg2 arg3
primitive prim_Win32Bitmap_cpp_createBMPFile :: Addr -> Addr -> Addr -> IO ()

----------------------------------------------------------------
-- Device Independent Bitmaps
----------------------------------------------------------------

cBM_INIT :: DWORD
cBM_INIT =
  unsafePerformIO(
    prim_Win32Bitmap_cpp_cBM_INIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Bitmap_cpp_cBM_INIT :: IO (Word32)

getDIBits :: HDC -> HBITMAP -> INT -> INT -> MbLPVOID -> LPBITMAPINFO -> ColorFormat -> IO INT
getDIBits arg1 arg2 gc_arg1 gc_arg2 arg5 arg6 arg7 =
  case ( fromIntegral  gc_arg1) of { arg3 ->
  case ( fromIntegral  gc_arg2) of { arg4 ->
  (case arg5 of {
      Nothing -> (return (nullAddr));
      (Just arg5) -> (return ((arg5)))
   }) >>= \ (arg5) ->
  prim_Win32Bitmap_cpp_getDIBits arg1 arg2 arg3 arg4 arg5 arg6 arg7 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))}}
primitive prim_Win32Bitmap_cpp_getDIBits :: Addr -> Addr -> Int -> Int -> Addr -> Addr -> Word32 -> IO (Int,Int,Addr)

setDIBits :: HDC -> HBITMAP -> INT -> INT -> LPVOID -> LPBITMAPINFO -> ColorFormat -> IO INT
setDIBits arg1 arg2 gc_arg1 gc_arg2 arg5 arg6 arg7 =
  case ( fromIntegral  gc_arg1) of { arg3 ->
  case ( fromIntegral  gc_arg2) of { arg4 ->
  prim_Win32Bitmap_cpp_setDIBits arg1 arg2 arg3 arg4 arg5 arg6 arg7 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))}}
primitive prim_Win32Bitmap_cpp_setDIBits :: Addr -> Addr -> Int -> Int -> Addr -> Addr -> Word32 -> IO (Int,Int,Addr)

createDIBitmap :: HDC -> LPBITMAPINFOHEADER -> DWORD -> LPVOID -> LPBITMAPINFO -> ColorFormat -> IO HBITMAP
createDIBitmap arg1 arg2 arg3 arg4 arg5 arg6 =
  prim_Win32Bitmap_cpp_createDIBitmap arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Bitmap_cpp_createDIBitmap :: Addr -> Addr -> Word32 -> Addr -> Addr -> Word32 -> IO (Addr,Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------


needPrims_hugs 2
