module Win32Icon where

import StdDIS
import Win32Types
import GDITypes


----------------------------------------------------------------
-- Icons
----------------------------------------------------------------

copyIcon :: HICON -> IO HICON
copyIcon arg1 =
  prim_Win32Icon_cpp_copyIcon arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Icon_cpp_copyIcon :: Addr -> IO (Addr,Int,Addr)

drawIcon :: HDC -> Int -> Int -> HICON -> IO ()
drawIcon arg1 arg2 arg3 arg4 =
  prim_Win32Icon_cpp_drawIcon arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Icon_cpp_drawIcon :: Addr -> Int -> Int -> Addr -> IO (Int,Addr)

destroyIcon :: HICON -> IO ()
destroyIcon arg1 =
  prim_Win32Icon_cpp_destroyIcon arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Icon_cpp_destroyIcon :: Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------

needPrims_hugs 2
