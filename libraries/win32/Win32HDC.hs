module Win32HDC
	( module Win32HDC
	) where

import Win32Types
import StdDIS
import GDITypes


---------------- Macros to set/get fields of HDC ----------------









----------------------------------------------------------------

setArcDirection :: HDC -> ArcDirection -> IO ArcDirection
setArcDirection arg1 gc_arg1 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  prim_Win32HDC_cpp_setArcDirection arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))}
primitive prim_Win32HDC_cpp_setArcDirection :: Addr -> Word32 -> IO (Word32,Int,Addr)
getArcDirection :: HDC -> IO ArcDirection
getArcDirection arg1 =
  prim_Win32HDC_cpp_getArcDirection arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32HDC_cpp_getArcDirection :: Addr -> IO (Word32,Int,Addr)
       
setPolyFillMode :: HDC -> PolyFillMode -> IO PolyFillMode
setPolyFillMode arg1 gc_arg1 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  prim_Win32HDC_cpp_setPolyFillMode arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))}
primitive prim_Win32HDC_cpp_setPolyFillMode :: Addr -> Word32 -> IO (Word32,Int,Addr)
getPolyFillMode :: HDC -> IO PolyFillMode
getPolyFillMode arg1 =
  prim_Win32HDC_cpp_getPolyFillMode arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32HDC_cpp_getPolyFillMode :: Addr -> IO (Word32,Int,Addr)
       
setGraphicsMode :: HDC -> GraphicsMode -> IO GraphicsMode
setGraphicsMode arg1 arg2 =
  prim_Win32HDC_cpp_setGraphicsMode arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setGraphicsMode :: Addr -> Word32 -> IO (Word32,Int,Addr)
getGraphicsMode :: HDC -> IO GraphicsMode
getGraphicsMode arg1 =
  prim_Win32HDC_cpp_getGraphicsMode arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getGraphicsMode :: Addr -> IO (Word32,Int,Addr)
       
setStretchBltMode :: HDC -> StretchBltMode -> IO StretchBltMode
setStretchBltMode arg1 arg2 =
  prim_Win32HDC_cpp_setStretchBltMode arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setStretchBltMode :: Addr -> Word32 -> IO (Word32,Int,Addr)
getStretchBltMode :: HDC -> IO StretchBltMode
getStretchBltMode arg1 =
  prim_Win32HDC_cpp_getStretchBltMode arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getStretchBltMode :: Addr -> IO (Word32,Int,Addr)
       
setBkColor :: HDC -> COLORREF -> IO COLORREF
setBkColor arg1 arg2 =
  prim_Win32HDC_cpp_setBkColor arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setBkColor :: Addr -> Word32 -> IO (Word32,Int,Addr)
getBkColor :: HDC -> IO COLORREF
getBkColor arg1 =
  prim_Win32HDC_cpp_getBkColor arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getBkColor :: Addr -> IO (Word32,Int,Addr)

-- FIXME: cygwin32-b18 headers (which ghc assumes) does
-- not define CLR_INVALID, hence the #ifdef'ing.



setTextColor :: HDC -> COLORREF -> IO COLORREF
setTextColor arg1 arg2 =
  prim_Win32HDC_cpp_setTextColor arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setTextColor :: Addr -> Word32 -> IO (Word32,Int,Addr)
getTextColor :: HDC -> IO COLORREF
getTextColor arg1 =
  prim_Win32HDC_cpp_getTextColor arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getTextColor :: Addr -> IO (Word32,Int,Addr)
{-

-}
       
setBkMode :: HDC -> BackgroundMode -> IO BackgroundMode
setBkMode arg1 arg2 =
  prim_Win32HDC_cpp_setBkMode arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setBkMode :: Addr -> Word32 -> IO (Word32,Int,Addr)
getBkMode :: HDC -> IO BackgroundMode
getBkMode arg1 =
  prim_Win32HDC_cpp_getBkMode arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getBkMode :: Addr -> IO (Word32,Int,Addr)

setBrushOrgEx :: HDC -> Int -> Int -> IO POINT
setBrushOrgEx arg1 arg2 arg3 =
  prim_Win32HDC_cpp_setBrushOrgEx arg1 arg2 arg3 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))
primitive prim_Win32HDC_cpp_setBrushOrgEx :: Addr -> Int -> Int -> IO (Int,Int,Int,Addr)

getBrushOrgEx :: HDC -> IO POINT
getBrushOrgEx arg1 =
  prim_Win32HDC_cpp_getBrushOrgEx arg1 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))
primitive prim_Win32HDC_cpp_getBrushOrgEx :: Addr -> IO (Int,Int,Int,Addr)

setTextAlign :: HDC -> TextAlignment -> IO TextAlignment
setTextAlign arg1 arg2 =
  prim_Win32HDC_cpp_setTextAlign arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setTextAlign :: Addr -> Word32 -> IO (Word32,Int,Addr)
getTextAlign :: HDC -> IO TextAlignment
getTextAlign arg1 =
  prim_Win32HDC_cpp_getTextAlign arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getTextAlign :: Addr -> IO (Word32,Int,Addr)

setTextCharacterExtra :: HDC -> Int -> IO Int
setTextCharacterExtra arg1 arg2 =
  prim_Win32HDC_cpp_setTextCharacterExtra arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setTextCharacterExtra :: Addr -> Int -> IO (Int,Int,Addr)
getTextCharacterExtra :: HDC -> IO Int
getTextCharacterExtra arg1 =
  prim_Win32HDC_cpp_getTextCharacterExtra arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getTextCharacterExtra :: Addr -> IO (Int,Int,Addr)

getMiterLimit :: HDC -> IO Float
getMiterLimit arg1 =
  prim_Win32HDC_cpp_getMiterLimit arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getMiterLimit :: Addr -> IO (Float,Int,Addr)

setMiterLimit :: HDC -> Float -> IO Float
setMiterLimit arg1 arg2 =
  prim_Win32HDC_cpp_setMiterLimit arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_setMiterLimit :: Addr -> Float -> IO (Float,Int,Addr)

----------------------------------------------------------------

saveDC :: HDC -> IO Int
saveDC arg1 =
  prim_Win32HDC_cpp_saveDC arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_saveDC :: Addr -> IO (Int,Int,Addr)

restoreDC :: HDC -> Int -> IO ()
restoreDC arg1 arg2 =
  prim_Win32HDC_cpp_restoreDC arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32HDC_cpp_restoreDC :: Addr -> Int -> IO (Int,Addr)

----------------------------------------------------------------
-- Macros for getting/selecting objects in HDCs
----------------------------------------------------------------





----------------------------------------------------------------

getCurrentBitmap :: HDC -> IO HBITMAP
getCurrentBitmap arg1 =
  prim_Win32HDC_cpp_getCurrentBitmap arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getCurrentBitmap :: Addr -> IO (Addr,Int,Addr)
getCurrentBrush :: HDC -> IO HBRUSH
getCurrentBrush arg1 =
  prim_Win32HDC_cpp_getCurrentBrush arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getCurrentBrush :: Addr -> IO (Addr,Int,Addr)
getCurrentFont :: HDC -> IO HFONT
getCurrentFont arg1 =
  prim_Win32HDC_cpp_getCurrentFont arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getCurrentFont :: Addr -> IO (Addr,Int,Addr)
getCurrentPalette :: HDC -> IO HPALETTE
getCurrentPalette arg1 =
  prim_Win32HDC_cpp_getCurrentPalette arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getCurrentPalette :: Addr -> IO (Addr,Int,Addr)
getCurrentPen :: HDC -> IO HPEN
getCurrentPen arg1 =
  prim_Win32HDC_cpp_getCurrentPen arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_getCurrentPen :: Addr -> IO (Addr,Int,Addr)

selectBitmap :: HDC -> HBITMAP -> IO HBITMAP
selectBitmap arg1 arg2 =
  prim_Win32HDC_cpp_selectBitmap arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_selectBitmap :: Addr -> Addr -> IO (Addr,Int,Addr)
selectBrush :: HDC -> HBRUSH -> IO HBRUSH
selectBrush arg1 arg2 =
  prim_Win32HDC_cpp_selectBrush arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_selectBrush :: Addr -> Addr -> IO (Addr,Int,Addr)
selectFont :: HDC -> HFONT -> IO HFONT
selectFont arg1 arg2 =
  prim_Win32HDC_cpp_selectFont arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_selectFont :: Addr -> Addr -> IO (Addr,Int,Addr)
selectPen :: HDC -> HPEN -> IO HPEN
selectPen arg1 arg2 =
  prim_Win32HDC_cpp_selectPen arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_selectPen :: Addr -> Addr -> IO (Addr,Int,Addr)

----------------------------------------------------------------
--
----------------------------------------------------------------

selectPalette :: HDC -> HPALETTE -> Bool -> IO HPALETTE
selectPalette arg1 arg2 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32HDC_cpp_selectPalette arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_selectPalette :: Addr -> Addr -> Int -> IO (Addr,Int,Addr)

selectRgn :: HDC -> HRGN -> IO RegionType
selectRgn arg1 arg2 =
  prim_Win32HDC_cpp_selectRgn arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32HDC_cpp_selectRgn :: Addr -> ForeignObj -> IO (Word32,Int,Addr)

selectClipRgn :: HDC -> MbHRGN -> IO RegionType
selectClipRgn arg1 arg2 =
  (case arg2 of {
      Nothing -> (return (nullFinalHANDLE));
      (Just arg2) -> (return ((arg2)))
   }) >>= \ (arg2) ->
  prim_Win32HDC_cpp_selectClipRgn arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32HDC_cpp_selectClipRgn :: Addr -> ForeignObj -> IO (Word32,Int,Addr)

extSelectClipRgn :: HDC -> MbHRGN -> ClippingMode -> IO RegionType
extSelectClipRgn arg1 arg2 arg3 =
  (case arg2 of {
      Nothing -> (return (nullFinalHANDLE));
      (Just arg2) -> (return ((arg2)))
   }) >>= \ (arg2) ->
  prim_Win32HDC_cpp_extSelectClipRgn arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32HDC_cpp_extSelectClipRgn :: Addr -> ForeignObj -> Word32 -> IO (Word32,Int,Addr)

selectClipPath :: HDC -> ClippingMode -> IO RegionType
selectClipPath arg1 arg2 =
  prim_Win32HDC_cpp_selectClipPath arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32HDC_cpp_selectClipPath :: Addr -> Word32 -> IO (Word32,Int,Addr)

----------------------------------------------------------------
-- Misc
----------------------------------------------------------------

cancelDC :: HDC -> IO ()
cancelDC arg1 =
  prim_Win32HDC_cpp_cancelDC arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32HDC_cpp_cancelDC :: Addr -> IO (Int,Addr)

createCompatibleDC :: MbHDC -> IO HDC
createCompatibleDC arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32HDC_cpp_createCompatibleDC arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32HDC_cpp_createCompatibleDC :: Addr -> IO (Addr,Int,Addr)

deleteDC :: HDC -> IO ()
deleteDC arg1 =
  prim_Win32HDC_cpp_deleteDC arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32HDC_cpp_deleteDC :: Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
