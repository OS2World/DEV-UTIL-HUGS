module Win32DLL where

import StdDIS
import Addr
import Word
import Win32Types


disableThreadLibraryCalls :: HMODULE -> IO ()
disableThreadLibraryCalls arg1 =
  prim_Win32DLL_cpp_disableThreadLibraryCalls arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32DLL_cpp_disableThreadLibraryCalls :: Addr -> IO (Int,Addr)

freeLibrary :: HMODULE -> IO ()
freeLibrary arg1 =
  prim_Win32DLL_cpp_freeLibrary arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32DLL_cpp_freeLibrary :: Addr -> IO (Int,Addr)

getModuleFileName :: HMODULE -> IO String
getModuleFileName arg1 =
  prim_Win32DLL_cpp_getModuleFileName arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ res1) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32DLL_cpp_getModuleFileName :: Addr -> IO (Addr,Int,Addr)

getModuleHandle :: MbString -> IO HMODULE
getModuleHandle gc_arg1 =
  (case gc_arg1 of {
      Nothing -> (return (nullAddr));
      (Just gc_arg1) -> (marshall_string_ gc_arg1) >>= \ (arg1) ->
			(return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32DLL_cpp_getModuleHandle arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32DLL_cpp_getModuleHandle :: Addr -> IO (Addr,Int,Addr)

getProcAddress :: HMODULE -> String -> IO Addr
getProcAddress arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32DLL_cpp_getProcAddress arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32DLL_cpp_getProcAddress :: Addr -> Addr -> IO (Addr,Int,Addr)

loadLibrary :: String -> IO HINSTANCE
loadLibrary gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32DLL_cpp_loadLibrary arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32DLL_cpp_loadLibrary :: Addr -> IO (Addr,Int,Addr)

type LoadLibraryFlags = DWORD

lOAD_LIBRARY_AS_DATAFILE :: LoadLibraryFlags
lOAD_LIBRARY_AS_DATAFILE =
  unsafePerformIO(
    prim_Win32DLL_cpp_lOAD_LIBRARY_AS_DATAFILE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32DLL_cpp_lOAD_LIBRARY_AS_DATAFILE :: IO (Word32)
lOAD_WITH_ALTERED_SEARCH_PATH :: LoadLibraryFlags
lOAD_WITH_ALTERED_SEARCH_PATH =
  unsafePerformIO(
    prim_Win32DLL_cpp_lOAD_WITH_ALTERED_SEARCH_PATH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32DLL_cpp_lOAD_WITH_ALTERED_SEARCH_PATH :: IO (Word32)

loadLibraryEx :: String -> HANDLE -> LoadLibraryFlags -> IO HINSTANCE
loadLibraryEx gc_arg1 arg2 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32DLL_cpp_loadLibraryEx arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32DLL_cpp_loadLibraryEx :: Addr -> Addr -> Word32 -> IO (Addr,Int,Addr)

needPrims_hugs 2
