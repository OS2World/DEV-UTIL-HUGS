module Win32Path
	( beginPath, closeFigure, endPath, fillPath, flattenPath
	, pathToRegion, strokeAndFillPath, strokePath, widenPath
	) where

import StdDIS
import GDITypes
import Win32Types


----------------------------------------------------------------
-- Paths
----------------------------------------------------------------

-- %fun AbortPath       :: HDC -> IO ()

beginPath :: HDC -> IO ()
beginPath arg1 =
  prim_Win32Path_cpp_beginPath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_beginPath :: Addr -> IO (Int,Addr)

closeFigure :: HDC -> IO ()
closeFigure arg1 =
  prim_Win32Path_cpp_closeFigure arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_closeFigure :: Addr -> IO (Int,Addr)

endPath :: HDC -> IO ()
endPath arg1 =
  prim_Win32Path_cpp_endPath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_endPath :: Addr -> IO (Int,Addr)

fillPath :: HDC -> IO ()
fillPath arg1 =
  prim_Win32Path_cpp_fillPath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_fillPath :: Addr -> IO (Int,Addr)

flattenPath :: HDC -> IO ()
flattenPath arg1 =
  prim_Win32Path_cpp_flattenPath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_flattenPath :: Addr -> IO (Int,Addr)

pathToRegion :: HDC -> IO HRGN
pathToRegion arg1 =
  prim_Win32Path_cpp_pathToRegion arg1 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))
primitive prim_Win32Path_cpp_pathToRegion :: Addr -> IO (Addr,Addr,Int,Addr)

strokeAndFillPath :: HDC -> IO ()
strokeAndFillPath arg1 =
  prim_Win32Path_cpp_strokeAndFillPath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_strokeAndFillPath :: Addr -> IO (Int,Addr)

strokePath :: HDC -> IO ()
strokePath arg1 =
  prim_Win32Path_cpp_strokePath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_strokePath :: Addr -> IO (Int,Addr)

widenPath :: HDC -> IO ()
widenPath arg1 =
  prim_Win32Path_cpp_widenPath arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Path_cpp_widenPath :: Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
