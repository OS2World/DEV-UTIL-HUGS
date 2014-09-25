module Win32Graphics2D
	where

import StdDIS
import Win32Types
import GDITypes
import Win32Bitmap


----------------------------------------------------------------
-- 2D graphics operations
----------------------------------------------------------------

moveToEx :: HDC -> Int32 -> Int32 -> IO POINT
moveToEx arg1 gc_arg1 gc_arg2 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Graphics2D_cpp_moveToEx arg1 arg2 arg3 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))}}
primitive prim_Win32Graphics2D_cpp_moveToEx :: Addr -> Int -> Int -> IO (Int,Int,Int,Addr)

lineTo :: HDC -> Int32 -> Int32 -> IO ()
lineTo arg1 gc_arg1 gc_arg2 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Graphics2D_cpp_lineTo arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}
primitive prim_Win32Graphics2D_cpp_lineTo :: Addr -> Int -> Int -> IO (Int,Addr)

polyline :: HDC -> [POINT] -> IO ()
polyline hdc gc_arg1 =
  (marshall_listLenPOINT_ gc_arg1) >>= \ (gc_arg2) ->
  case gc_arg2 of { (ps,num_ps) ->
  prim_Win32Graphics2D_cpp_polyline hdc ps num_ps >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Graphics2D_cpp_polyline :: Addr -> Addr -> Int -> IO (Int,Addr)

polylineTo :: HDC -> [POINT] -> IO ()
polylineTo hdc gc_arg1 =
  (marshall_listLenPOINT_ gc_arg1) >>= \ (gc_arg2) ->
  case gc_arg2 of { (ps,num_ps) ->
  prim_Win32Graphics2D_cpp_polylineTo hdc ps num_ps >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Graphics2D_cpp_polylineTo :: Addr -> Addr -> Int -> IO (Int,Addr)

polygon :: HDC -> [POINT] -> IO ()
polygon hdc gc_arg1 =
  (marshall_listLenPOINT_ gc_arg1) >>= \ (gc_arg2) ->
  case gc_arg2 of { (ps,num_ps) ->
  prim_Win32Graphics2D_cpp_polygon hdc ps num_ps >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Graphics2D_cpp_polygon :: Addr -> Addr -> Int -> IO (Int,Addr)

polyBezier :: HDC -> [POINT] -> IO ()
polyBezier hdc gc_arg1 =
  (marshall_listLenPOINT_ gc_arg1) >>= \ (gc_arg2) ->
  case gc_arg2 of { (ps,num_ps) ->
  prim_Win32Graphics2D_cpp_polyBezier hdc ps num_ps >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Graphics2D_cpp_polyBezier :: Addr -> Addr -> Int -> IO (Int,Addr)

polyBezierTo :: HDC -> [POINT] -> IO ()
polyBezierTo hdc gc_arg1 =
  (marshall_listLenPOINT_ gc_arg1) >>= \ (gc_arg2) ->
  case gc_arg2 of { (ps,num_ps) ->
  prim_Win32Graphics2D_cpp_polyBezierTo hdc ps num_ps >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Graphics2D_cpp_polyBezierTo :: Addr -> Addr -> Int -> IO (Int,Addr)

-- ToDo: We ought to be able to specify a colour instead of the
-- Brush by adding 1 to colour number.

fillRect :: HDC -> RECT -> HBRUSH -> IO ()
fillRect arg1 gc_arg1 arg3 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  prim_Win32Graphics2D_cpp_fillRect arg1 gc_arg3 gc_arg5 gc_arg7 gc_arg9 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}
primitive prim_Win32Graphics2D_cpp_fillRect :: Addr -> Int -> Int -> Int -> Int -> Addr -> IO (Int,Addr)

frameRect :: HDC -> RECT -> HBRUSH -> IO ()
frameRect arg1 gc_arg1 arg3 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  prim_Win32Graphics2D_cpp_frameRect arg1 gc_arg3 gc_arg5 gc_arg7 gc_arg9 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}
primitive prim_Win32Graphics2D_cpp_frameRect :: Addr -> Int -> Int -> Int -> Int -> Addr -> IO (Int,Addr)

invertRect :: HDC -> RECT -> IO ()
invertRect arg1 gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  prim_Win32Graphics2D_cpp_invertRect arg1 gc_arg3 gc_arg5 gc_arg7 gc_arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}
primitive prim_Win32Graphics2D_cpp_invertRect :: Addr -> Int -> Int -> Int -> Int -> IO (Int,Addr)

rectangle :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
rectangle arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  prim_Win32Graphics2D_cpp_rectangle arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}
primitive prim_Win32Graphics2D_cpp_rectangle :: Addr -> Int -> Int -> Int -> Int -> IO (Int,Addr)

roundRect :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
roundRect arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 gc_arg5 gc_arg6 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg6 ->
  case ( fromIntegral  gc_arg6) of { arg7 ->
  prim_Win32Graphics2D_cpp_roundRect arg1 arg2 arg3 arg4 arg5 arg6 arg7 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}
primitive prim_Win32Graphics2D_cpp_roundRect :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)

ellipse :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
ellipse arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  prim_Win32Graphics2D_cpp_ellipse arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}
primitive prim_Win32Graphics2D_cpp_ellipse :: Addr -> Int -> Int -> Int -> Int -> IO (Int,Addr)

arc :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
arc arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 gc_arg5 gc_arg6 gc_arg7 gc_arg8 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg6 ->
  case ( fromIntegral  gc_arg6) of { arg7 ->
  case ( fromIntegral  gc_arg7) of { arg8 ->
  case ( fromIntegral  gc_arg8) of { arg9 ->
  prim_Win32Graphics2D_cpp_arc arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}
primitive prim_Win32Graphics2D_cpp_arc :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)

arcTo :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
arcTo arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 gc_arg5 gc_arg6 gc_arg7 gc_arg8 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg6 ->
  case ( fromIntegral  gc_arg6) of { arg7 ->
  case ( fromIntegral  gc_arg7) of { arg8 ->
  case ( fromIntegral  gc_arg8) of { arg9 ->
  prim_Win32Graphics2D_cpp_arcTo arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}
primitive prim_Win32Graphics2D_cpp_arcTo :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)

angleArc :: HDC -> Int32 -> Int32 -> WORD -> Double -> Double -> IO ()
angleArc arg1 gc_arg1 gc_arg2 gc_arg3 arg5 arg6 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  prim_Win32Graphics2D_cpp_angleArc arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}
primitive prim_Win32Graphics2D_cpp_angleArc :: Addr -> Int -> Int -> Word32 -> Double -> Double -> IO (Int,Addr)

chord :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
chord arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 gc_arg5 gc_arg6 gc_arg7 gc_arg8 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg6 ->
  case ( fromIntegral  gc_arg6) of { arg7 ->
  case ( fromIntegral  gc_arg7) of { arg8 ->
  case ( fromIntegral  gc_arg8) of { arg9 ->
  prim_Win32Graphics2D_cpp_chord arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}
primitive prim_Win32Graphics2D_cpp_chord :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)

pie :: HDC -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> Int32 -> IO ()
pie arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 gc_arg5 gc_arg6 gc_arg7 gc_arg8 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg6 ->
  case ( fromIntegral  gc_arg6) of { arg7 ->
  case ( fromIntegral  gc_arg7) of { arg8 ->
  case ( fromIntegral  gc_arg8) of { arg9 ->
  prim_Win32Graphics2D_cpp_pie arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}
primitive prim_Win32Graphics2D_cpp_pie :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)

bitBlt :: HDC -> INT -> INT -> INT -> INT -> HDC -> INT -> INT -> RasterOp3 -> IO ()
bitBlt arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 arg6 gc_arg5 gc_arg6 arg9 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg7 ->
  case ( fromIntegral  gc_arg6) of { arg8 ->
  prim_Win32Graphics2D_cpp_bitBlt arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}
primitive prim_Win32Graphics2D_cpp_bitBlt :: Addr -> Int -> Int -> Int -> Int -> Addr -> Int -> Int -> Word32 -> IO (Int,Addr)

maskBlt :: HDC -> INT -> INT -> INT -> INT -> HDC -> INT -> INT -> HBITMAP -> INT -> INT -> RasterOp4 -> IO ()
maskBlt arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 arg6 gc_arg5 gc_arg6 arg9 gc_arg7 gc_arg8 arg12 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg7 ->
  case ( fromIntegral  gc_arg6) of { arg8 ->
  case ( fromIntegral  gc_arg7) of { arg10 ->
  case ( fromIntegral  gc_arg8) of { arg11 ->
  prim_Win32Graphics2D_cpp_maskBlt arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 arg11 arg12 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}
primitive prim_Win32Graphics2D_cpp_maskBlt :: Addr -> Int -> Int -> Int -> Int -> Addr -> Int -> Int -> Addr -> Int -> Int -> Word32 -> IO (Int,Addr)

stretchBlt :: HDC -> INT -> INT -> INT -> INT -> HDC -> INT -> INT -> INT -> INT -> RasterOp3 -> IO ()
stretchBlt arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 arg6 gc_arg5 gc_arg6 gc_arg7 gc_arg8 arg11 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  case ( fromIntegral  gc_arg5) of { arg7 ->
  case ( fromIntegral  gc_arg6) of { arg8 ->
  case ( fromIntegral  gc_arg7) of { arg9 ->
  case ( fromIntegral  gc_arg8) of { arg10 ->
  prim_Win32Graphics2D_cpp_stretchBlt arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 arg11 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}
primitive prim_Win32Graphics2D_cpp_stretchBlt :: Addr -> Int -> Int -> Int -> Int -> Addr -> Int -> Int -> Int -> Int -> Word32 -> IO (Int,Addr)

-- We deviate slightly from the Win32 interface

-- %C typedef POINT ThreePts[3];

-- Old 2nd line: 
-- %start POINT vertices[3];

plgBlt :: HDC -> POINT -> POINT -> POINT -> HDC -> INT -> INT -> INT -> INT -> MbHBITMAP -> INT -> INT -> IO ()
plgBlt arg1 gc_arg1 gc_arg7 gc_arg12 arg2 gc_arg17 gc_arg18 gc_arg19 gc_arg20 bm gc_arg21 gc_arg22 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case gc_arg7 of { (gc_arg8,gc_arg10) ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  case ( fromIntegral  gc_arg10) of { gc_arg11 ->
  case gc_arg12 of { (gc_arg13,gc_arg15) ->
  case ( fromIntegral  gc_arg13) of { gc_arg14 ->
  case ( fromIntegral  gc_arg15) of { gc_arg16 ->
  case ( fromIntegral  gc_arg17) of { x ->
  case ( fromIntegral  gc_arg18) of { y ->
  case ( fromIntegral  gc_arg19) of { w ->
  case ( fromIntegral  gc_arg20) of { h ->
  (case bm of {
      Nothing -> (return (nullHANDLE));
      (Just bm) -> (return ((bm)))
   }) >>= \ (bm) ->
  case ( fromIntegral  gc_arg21) of { sx ->
  case ( fromIntegral  gc_arg22) of { sy ->
  prim_Win32Graphics2D_cpp_plgBlt arg1 gc_arg3 gc_arg5 gc_arg9 gc_arg11 gc_arg14 gc_arg16 arg2 x y w h bm sx sy >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}}}}}}}}
primitive prim_Win32Graphics2D_cpp_plgBlt :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> Addr -> Int -> Int -> Int -> Int -> Addr -> Int -> Int -> IO (Int,Addr)

textOut :: HDC -> INT -> INT -> String -> IO ()
textOut arg1 gc_arg1 gc_arg2 gc_arg3 =
  case ( fromIntegral  gc_arg1) of { arg2 ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  (marshall_stringLen_ gc_arg3) >>= \ (arg4,arg5) ->
  prim_Win32Graphics2D_cpp_textOut arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}
primitive prim_Win32Graphics2D_cpp_textOut :: Addr -> Int -> Int -> Addr -> Int -> IO (Int,Addr)

-- missing TabbedTextOut from WinFonts.ss; GSL ???

getTextExtentPoint32 :: HDC -> String -> IO SIZE
getTextExtentPoint32 hdc gc_arg1 =
  (marshall_stringLen_ gc_arg1) >>= \ (str,l) ->
  prim_Win32Graphics2D_cpp_getTextExtentPoint32 hdc str l >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))
primitive prim_Win32Graphics2D_cpp_getTextExtentPoint32 :: Addr -> Addr -> Int -> IO (Int,Int,Int,Addr)

-- missing getTabbedTextExtent from WinFonts.ss; GSL ???
-- missing SetTextJustification from WinFonts.ss; GSL ???
-- missing a whole family of techandfamily functionality; GSL ???
-- missing DrawText and DrawTextFormat in WinFonts.ss; GSL ???

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
