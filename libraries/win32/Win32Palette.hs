module Win32Palette where

import StdDIS
import Win32Types
import GDITypes


----------------------------------------------------------------
-- Palettes
----------------------------------------------------------------

type StockPalette   = WORD

dEFAULT_PALETTE :: StockPalette
dEFAULT_PALETTE =
  unsafePerformIO(
    prim_Win32Palette_cpp_dEFAULT_PALETTE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Palette_cpp_dEFAULT_PALETTE :: IO (Word32)

getStockPalette :: StockPalette -> IO HPALETTE
getStockPalette gc_arg1 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  prim_Win32Palette_cpp_getStockPalette arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Palette_cpp_getStockPalette :: Word32 -> IO (Addr,Int,Addr)

deletePalette :: HPALETTE -> IO ()
deletePalette arg1 =
  prim_Win32Palette_cpp_deletePalette arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Palette_cpp_deletePalette :: Addr -> IO (Int,Addr)

pALETTERGB :: BYTE -> BYTE -> BYTE -> COLORREF
pALETTERGB gc_arg1 gc_arg2 gc_arg3 =
  unsafePerformIO(
    case ( fromIntegral   gc_arg1) of { arg1 ->
    case ( fromIntegral   gc_arg2) of { arg2 ->
    case ( fromIntegral   gc_arg3) of { arg3 ->
    prim_Win32Palette_cpp_pALETTERGB arg1 arg2 arg3 >>= \ (res1) ->
    (return (res1))}}})
primitive prim_Win32Palette_cpp_pALETTERGB :: Word32 -> Word32 -> Word32 -> IO (Word32)
pALETTEINDEX :: WORD -> COLORREF
pALETTEINDEX gc_arg1 =
  unsafePerformIO(
    case ( fromIntegral  gc_arg1) of { arg1 ->
    prim_Win32Palette_cpp_pALETTEINDEX arg1 >>= \ (res1) ->
    (return (res1))})
primitive prim_Win32Palette_cpp_pALETTEINDEX :: Word32 -> IO (Word32)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
