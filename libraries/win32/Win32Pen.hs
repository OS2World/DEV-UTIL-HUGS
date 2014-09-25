module Win32Pen where

import StdDIS
import Win32Types
import GDITypes


----------------------------------------------------------------
-- Stock Objects
----------------------------------------------------------------

type StockPen   = WORD

wHITE_PEN :: StockPen
wHITE_PEN =
  unsafePerformIO(
    prim_Win32Pen_cpp_wHITE_PEN >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_wHITE_PEN :: IO (Word32)
bLACK_PEN :: StockPen
bLACK_PEN =
  unsafePerformIO(
    prim_Win32Pen_cpp_bLACK_PEN >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_bLACK_PEN :: IO (Word32)
nULL_PEN :: StockPen
nULL_PEN =
  unsafePerformIO(
    prim_Win32Pen_cpp_nULL_PEN >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_nULL_PEN :: IO (Word32)

getStockPen :: StockPen -> IO HPEN
getStockPen gc_arg1 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  prim_Win32Pen_cpp_getStockPen arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Pen_cpp_getStockPen :: Word32 -> IO (Addr,Int,Addr)

deletePen :: HPEN -> IO ()
deletePen arg1 =
  prim_Win32Pen_cpp_deletePen arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Pen_cpp_deletePen :: Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- Creating pens
----------------------------------------------------------------

type PenStyle   = Int32

pS_SOLID :: PenStyle
pS_SOLID =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_SOLID >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_SOLID :: IO (Int)
pS_DASH :: PenStyle
pS_DASH =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_DASH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_DASH :: IO (Int)
pS_DOT :: PenStyle
pS_DOT =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_DOT >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_DOT :: IO (Int)
pS_DASHDOT :: PenStyle
pS_DASHDOT =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_DASHDOT >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_DASHDOT :: IO (Int)
pS_DASHDOTDOT :: PenStyle
pS_DASHDOTDOT =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_DASHDOTDOT >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_DASHDOTDOT :: IO (Int)
pS_NULL :: PenStyle
pS_NULL =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_NULL >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_NULL :: IO (Int)
pS_INSIDEFRAME :: PenStyle
pS_INSIDEFRAME =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_INSIDEFRAME >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_INSIDEFRAME :: IO (Int)
pS_USERSTYLE :: PenStyle
pS_USERSTYLE =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_USERSTYLE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_USERSTYLE :: IO (Int)
pS_ALTERNATE :: PenStyle
pS_ALTERNATE =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_ALTERNATE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_ALTERNATE :: IO (Int)
pS_STYLE_MASK :: PenStyle
pS_STYLE_MASK =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_STYLE_MASK >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_STYLE_MASK :: IO (Int)

pS_ENDCAP_ROUND :: PenStyle
pS_ENDCAP_ROUND =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_ENDCAP_ROUND >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_ENDCAP_ROUND :: IO (Int)
pS_ENDCAP_SQUARE :: PenStyle
pS_ENDCAP_SQUARE =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_ENDCAP_SQUARE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_ENDCAP_SQUARE :: IO (Int)
pS_ENDCAP_FLAT :: PenStyle
pS_ENDCAP_FLAT =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_ENDCAP_FLAT >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_ENDCAP_FLAT :: IO (Int)
pS_ENDCAP_MASK :: PenStyle
pS_ENDCAP_MASK =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_ENDCAP_MASK >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_ENDCAP_MASK :: IO (Int)

{-
If PS_JOIN_MASK is not defined with your GNU Windows32 header files,
you'll have to define it.
-}
pS_JOIN_ROUND :: PenStyle
pS_JOIN_ROUND =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_JOIN_ROUND >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_JOIN_ROUND :: IO (Int)
pS_JOIN_BEVEL :: PenStyle
pS_JOIN_BEVEL =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_JOIN_BEVEL >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_JOIN_BEVEL :: IO (Int)
pS_JOIN_MITER :: PenStyle
pS_JOIN_MITER =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_JOIN_MITER >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_JOIN_MITER :: IO (Int)

pS_COSMETIC :: PenStyle
pS_COSMETIC =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_COSMETIC >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_COSMETIC :: IO (Int)
pS_GEOMETRIC :: PenStyle
pS_GEOMETRIC =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_GEOMETRIC >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_GEOMETRIC :: IO (Int)
pS_TYPE_MASK :: PenStyle
pS_TYPE_MASK =
  unsafePerformIO(
    prim_Win32Pen_cpp_pS_TYPE_MASK >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Pen_cpp_pS_TYPE_MASK :: IO (Int)

createPen :: PenStyle -> INT -> COLORREF -> IO HPEN
createPen gc_arg1 gc_arg2 arg3 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  case ( fromIntegral  gc_arg2) of { arg2 ->
  prim_Win32Pen_cpp_createPen arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}}
primitive prim_Win32Pen_cpp_createPen :: Int -> Int -> Word32 -> IO (Addr,Int,Addr)

-- Not very well supported on Win'95
-- %fun NullHANDLE ExtCreatePen :: PenStyle -> INT -> LOGBRUSH -> [StyleBit] -> IO HPEN

-- ToDo: CreatePenIndirect

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
