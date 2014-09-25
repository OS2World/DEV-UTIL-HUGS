module Win32Brush where

import StdDIS
import Win32Types
import GDITypes


----------------------------------------------------------------
-- Brush
----------------------------------------------------------------

createSolidBrush :: COLORREF -> IO HBRUSH
createSolidBrush arg1 =
  prim_Win32Brush_cpp_createSolidBrush arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Brush_cpp_createSolidBrush :: Word32 -> IO (Addr,Int,Addr)

createHatchBrush :: HatchStyle -> COLORREF -> IO HBRUSH
createHatchBrush gc_arg1 arg2 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  prim_Win32Brush_cpp_createHatchBrush arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Brush_cpp_createHatchBrush :: Word32 -> Word32 -> IO (Addr,Int,Addr)

createPatternBrush :: HBITMAP -> IO HBRUSH
createPatternBrush arg1 =
  prim_Win32Brush_cpp_createPatternBrush arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Brush_cpp_createPatternBrush :: Addr -> IO (Addr,Int,Addr)

deleteBrush :: HBRUSH -> IO ()
deleteBrush arg1 =
  prim_Win32Brush_cpp_deleteBrush arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Brush_cpp_deleteBrush :: Addr -> IO (Int,Addr)

----------------------------------------------------------------

type StockBrush   = WORD

wHITE_BRUSH :: StockBrush
wHITE_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_wHITE_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_wHITE_BRUSH :: IO (Word32)
lTGRAY_BRUSH :: StockBrush
lTGRAY_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_lTGRAY_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_lTGRAY_BRUSH :: IO (Word32)
gRAY_BRUSH :: StockBrush
gRAY_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_gRAY_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_gRAY_BRUSH :: IO (Word32)
dKGRAY_BRUSH :: StockBrush
dKGRAY_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_dKGRAY_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_dKGRAY_BRUSH :: IO (Word32)
bLACK_BRUSH :: StockBrush
bLACK_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_bLACK_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_bLACK_BRUSH :: IO (Word32)
nULL_BRUSH :: StockBrush
nULL_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_nULL_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_nULL_BRUSH :: IO (Word32)
hOLLOW_BRUSH :: StockBrush
hOLLOW_BRUSH =
  unsafePerformIO(
    prim_Win32Brush_cpp_hOLLOW_BRUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Brush_cpp_hOLLOW_BRUSH :: IO (Word32)

getStockBrush :: StockBrush -> IO HBRUSH
getStockBrush gc_arg1 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  prim_Win32Brush_cpp_getStockBrush arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Brush_cpp_getStockBrush :: Word32 -> IO (Addr,Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------

needPrims_hugs 2
