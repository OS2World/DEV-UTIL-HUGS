module Win32Region where

import StdDIS
import Win32Types
import GDITypes


----------------------------------------------------------------
-- Regions
----------------------------------------------------------------

combineRgn :: HRGN -> HRGN -> HRGN -> ClippingMode -> IO RegionType
combineRgn arg1 arg2 arg3 arg4 =
  prim_Win32Region_combineRgn arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32Region_combineRgn :: ForeignObj -> ForeignObj -> ForeignObj -> Word32 -> IO (Word32,Int,Addr)

offsetRgn :: HRGN -> INT -> INT -> IO RegionType
offsetRgn arg1 gc_arg1 gc_arg2 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Region_offsetRgn arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))}}
primitive prim_Win32Region_offsetRgn :: ForeignObj -> Int -> Int -> IO (Word32,Int,Addr)

getRgnBox :: HRGN -> LPRECT -> IO RegionType
getRgnBox arg1 arg2 =
  prim_Win32Region_getRgnBox arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (res1)) in
       (return (gc_res1))
primitive prim_Win32Region_getRgnBox :: ForeignObj -> Addr -> IO (Word32,Int,Addr)

createEllipticRgn :: INT -> INT -> INT -> INT -> IO HRGN
createEllipticRgn gc_arg1 gc_arg2 gc_arg3 gc_arg4 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  case ( fromIntegral  gc_arg2) of { arg2 ->
  case ( fromIntegral  gc_arg3) of { arg3 ->
  case ( fromIntegral  gc_arg4) of { arg4 ->
  prim_Win32Region_createEllipticRgn arg1 arg2 arg3 arg4 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))}}}}
primitive prim_Win32Region_createEllipticRgn :: Int -> Int -> Int -> Int -> IO (Addr,Addr,Int,Addr)

createEllipticRgnIndirect :: LPRECT -> IO HRGN
createEllipticRgnIndirect arg1 =
  prim_Win32Region_createEllipticRgnIndirect arg1 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))
primitive prim_Win32Region_createEllipticRgnIndirect :: Addr -> IO (Addr,Addr,Int,Addr)

createRectRgn :: INT -> INT -> INT -> INT -> IO HRGN
createRectRgn gc_arg1 gc_arg2 gc_arg3 gc_arg4 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  case ( fromIntegral  gc_arg2) of { arg2 ->
  case ( fromIntegral  gc_arg3) of { arg3 ->
  case ( fromIntegral  gc_arg4) of { arg4 ->
  prim_Win32Region_createRectRgn arg1 arg2 arg3 arg4 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))}}}}
primitive prim_Win32Region_createRectRgn :: Int -> Int -> Int -> Int -> IO (Addr,Addr,Int,Addr)

createRectRgnIndirect :: LPRECT -> IO HRGN
createRectRgnIndirect arg1 =
  prim_Win32Region_createRectRgnIndirect arg1 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))
primitive prim_Win32Region_createRectRgnIndirect :: Addr -> IO (Addr,Addr,Int,Addr)

createRoundRectRgn :: INT -> INT -> INT -> INT -> INT -> INT -> IO HRGN
createRoundRectRgn gc_arg1 gc_arg2 gc_arg3 gc_arg4 gc_arg5 gc_arg6 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  case ( fromIntegral  gc_arg2) of { arg2 ->
  case ( fromIntegral  gc_arg3) of { arg3 ->
  case ( fromIntegral  gc_arg4) of { arg4 ->
  case ( fromIntegral  gc_arg5) of { arg5 ->
  case ( fromIntegral  gc_arg6) of { arg6 ->
  prim_Win32Region_createRoundRectRgn arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))}}}}}}
primitive prim_Win32Region_createRoundRectRgn :: Int -> Int -> Int -> Int -> Int -> Int -> IO (Addr,Addr,Int,Addr)

createPolygonRgn :: [POINT] -> PolyFillMode -> IO HRGN
createPolygonRgn gc_arg1 gc_arg3 =
  (marshall_listLenPOINT_ gc_arg1) >>= \ (gc_arg2) ->
  case gc_arg2 of { (ps,num_ps) ->
  case ( fromIntegral  gc_arg3) of { mode ->
  prim_Win32Region_createPolygonRgn ps num_ps mode >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))}}
primitive prim_Win32Region_createPolygonRgn :: Addr -> Int -> Word32 -> IO (Addr,Addr,Int,Addr)

-- Needs to do proper error test for EqualRgn; GSL ???
equalRgn :: HRGN -> HRGN -> IO Bool
equalRgn arg1 arg2 =
  prim_Win32Region_equalRgn arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Region_equalRgn :: ForeignObj -> ForeignObj -> IO (Int)

fillRgn :: HDC -> HRGN -> HBRUSH -> IO ()
fillRgn arg1 arg2 arg3 =
  prim_Win32Region_fillRgn arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Region_fillRgn :: Addr -> ForeignObj -> Addr -> IO (Int,Addr)

invertRgn :: HDC -> HRGN -> IO ()
invertRgn arg1 arg2 =
  prim_Win32Region_invertRgn arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Region_invertRgn :: Addr -> ForeignObj -> IO (Int,Addr)

paintRgn :: HDC -> HRGN -> IO ()
paintRgn arg1 arg2 =
  prim_Win32Region_paintRgn arg1 arg2
primitive prim_Win32Region_paintRgn :: Addr -> ForeignObj -> IO ()
-- Evil hack to get rid of error message that doesn't seem to mean
-- anything and is very hard to repeat.
-- %fail { !success } { ErrorString("PaintRgn") }

frameRgn :: HDC -> HRGN -> HBRUSH -> Int -> Int -> IO ()
frameRgn arg1 arg2 arg3 arg4 arg5 =
  prim_Win32Region_frameRgn arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Region_frameRgn :: Addr -> ForeignObj -> Addr -> Int -> Int -> IO (Int,Addr)

ptInRegion :: HRGN -> Int -> Int -> IO Bool
ptInRegion arg1 arg2 arg3 =
  prim_Win32Region_ptInRegion arg1 arg2 arg3 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Region_ptInRegion :: ForeignObj -> Int -> Int -> IO (Int)

rectInRegion :: HRGN -> RECT -> IO Bool
rectInRegion arg1 gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  prim_Win32Region_rectInRegion arg1 gc_arg3 gc_arg5 gc_arg7 gc_arg9 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))}}}}}
primitive prim_Win32Region_rectInRegion :: ForeignObj -> Int -> Int -> Int -> Int -> IO (Int)

deleteRegion :: HRGN -> IO ()
deleteRegion arg1 =
  prim_Win32Region_deleteRegion arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Region_deleteRegion :: ForeignObj -> IO (Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 3
