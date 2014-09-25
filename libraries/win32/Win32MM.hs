module Win32MM where

import StdDIS
import Win32Types
import GDITypes


copyMemory :: Addr -> Addr -> DWORD -> IO ()
copyMemory arg1 arg2 arg3 =
  prim_Win32MM_cpp_copyMemory arg1 arg2 arg3
primitive prim_Win32MM_cpp_copyMemory :: Addr -> Addr -> Word32 -> IO ()

fillMemory :: Addr -> DWORD -> BYTE -> IO ()
fillMemory arg1 arg2 gc_arg1 =
  case ( fromIntegral   gc_arg1) of { arg3 ->
  prim_Win32MM_cpp_fillMemory arg1 arg2 arg3}
primitive prim_Win32MM_cpp_fillMemory :: Addr -> Word32 -> Word32 -> IO ()

getProcessHeap :: IO HANDLE
getProcessHeap =
  prim_Win32MM_cpp_getProcessHeap >>= \ (res1) ->
  (return (res1))
primitive prim_Win32MM_cpp_getProcessHeap :: IO (Addr)

getProcessHeaps :: DWORD -> Addr -> IO DWORD
getProcessHeaps arg1 arg2 =
  prim_Win32MM_cpp_getProcessHeaps arg1 arg2 >>= \ (res1) ->
  (return (res1))
primitive prim_Win32MM_cpp_getProcessHeaps :: Word32 -> Addr -> IO (Word32)

type   HGLOBAL   = Addr

type GlobalAllocFlags = UINT


gMEM_FIXED :: GlobalAllocFlags
gMEM_FIXED =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_FIXED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_FIXED :: IO (Word32)
gMEM_MOVEABLE :: GlobalAllocFlags
gMEM_MOVEABLE =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_MOVEABLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_MOVEABLE :: IO (Word32)
gPTR :: GlobalAllocFlags
gPTR =
  unsafePerformIO(
    prim_Win32MM_cpp_gPTR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gPTR :: IO (Word32)
gHND :: GlobalAllocFlags
gHND =
  unsafePerformIO(
    prim_Win32MM_cpp_gHND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gHND :: IO (Word32)
gMEM_DDESHARE :: GlobalAllocFlags
gMEM_DDESHARE =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_DDESHARE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_DDESHARE :: IO (Word32)
gMEM_SHARE :: GlobalAllocFlags
gMEM_SHARE =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_SHARE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_SHARE :: IO (Word32)
gMEM_LOWER :: GlobalAllocFlags
gMEM_LOWER =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_LOWER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_LOWER :: IO (Word32)
gMEM_NOCOMPACT :: GlobalAllocFlags
gMEM_NOCOMPACT =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_NOCOMPACT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_NOCOMPACT :: IO (Word32)
gMEM_NODISCARD :: GlobalAllocFlags
gMEM_NODISCARD =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_NODISCARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_NODISCARD :: IO (Word32)
gMEM_NOT_BANKED :: GlobalAllocFlags
gMEM_NOT_BANKED =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_NOT_BANKED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_NOT_BANKED :: IO (Word32)
gMEM_NOTIFY :: GlobalAllocFlags
gMEM_NOTIFY =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_NOTIFY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_NOTIFY :: IO (Word32)
gMEM_ZEROINIT :: GlobalAllocFlags
gMEM_ZEROINIT =
  unsafePerformIO(
    prim_Win32MM_cpp_gMEM_ZEROINIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_gMEM_ZEROINIT :: IO (Word32)


globalAlloc :: GlobalAllocFlags -> DWORD -> IO HGLOBAL
globalAlloc arg1 arg2 =
  prim_Win32MM_cpp_globalAlloc arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalAlloc :: Word32 -> Word32 -> IO (Addr,Int,Addr)

-- %fun GlobalDiscard :: HGLOBAL -> IO HGLOBAL
-- %fail {res1==NULL}{ErrorWin("GlobalDiscard")}

globalFlags :: HGLOBAL -> IO GlobalAllocFlags
globalFlags arg1 =
  prim_Win32MM_cpp_globalFlags arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalFlags :: Addr -> IO (Word32,Int,Addr)

globalFree :: HGLOBAL -> IO HGLOBAL
globalFree arg1 =
  prim_Win32MM_cpp_globalFree arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalFree :: Addr -> IO (Addr,Int,Addr)

globalHandle :: Addr -> IO HGLOBAL
globalHandle arg1 =
  prim_Win32MM_cpp_globalHandle arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalHandle :: Addr -> IO (Addr,Int,Addr)

globalLock :: HGLOBAL -> IO Addr
globalLock arg1 =
  prim_Win32MM_cpp_globalLock arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalLock :: Addr -> IO (Addr,Int,Addr)

-- %fun GlobalMemoryStatus :: IO MEMORYSTATUS

globalReAlloc :: HGLOBAL -> DWORD -> GlobalAllocFlags -> IO HGLOBAL
globalReAlloc arg1 arg2 arg3 =
  prim_Win32MM_cpp_globalReAlloc arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalReAlloc :: Addr -> Word32 -> Word32 -> IO (Addr,Int,Addr)

globalSize :: HGLOBAL -> IO DWORD
globalSize arg1 =
  prim_Win32MM_cpp_globalSize arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_globalSize :: Addr -> IO (Word32,Int,Addr)

globalUnlock :: HGLOBAL -> IO ()
globalUnlock arg1 =
  prim_Win32MM_cpp_globalUnlock arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_globalUnlock :: Addr -> IO (Int,Addr)

type HeapAllocFlags = DWORD

hEAP_GENERATE_EXCEPTIONS :: HeapAllocFlags
hEAP_GENERATE_EXCEPTIONS =
  unsafePerformIO(
    prim_Win32MM_cpp_hEAP_GENERATE_EXCEPTIONS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_hEAP_GENERATE_EXCEPTIONS :: IO (Word32)
hEAP_NO_SERIALIZE :: HeapAllocFlags
hEAP_NO_SERIALIZE =
  unsafePerformIO(
    prim_Win32MM_cpp_hEAP_NO_SERIALIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_hEAP_NO_SERIALIZE :: IO (Word32)
hEAP_ZERO_MEMORY :: HeapAllocFlags
hEAP_ZERO_MEMORY =
  unsafePerformIO(
    prim_Win32MM_cpp_hEAP_ZERO_MEMORY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_hEAP_ZERO_MEMORY :: IO (Word32)

heapAlloc :: HANDLE -> HeapAllocFlags -> DWORD -> IO Addr
heapAlloc arg1 arg2 arg3 =
  prim_Win32MM_cpp_heapAlloc arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_heapAlloc :: Addr -> Word32 -> Word32 -> IO (Addr,Int,Addr)

heapCompact :: HANDLE -> HeapAllocFlags -> IO UINT
heapCompact arg1 arg2 =
  prim_Win32MM_cpp_heapCompact arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_heapCompact :: Addr -> Word32 -> IO (Word32,Int,Addr)

heapCreate :: HeapAllocFlags -> DWORD -> DWORD -> IO HANDLE
heapCreate arg1 arg2 arg3 =
  prim_Win32MM_cpp_heapCreate arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_heapCreate :: Word32 -> Word32 -> Word32 -> IO (Addr,Int,Addr)

heapDestroy :: HANDLE -> IO ()
heapDestroy arg1 =
  prim_Win32MM_cpp_heapDestroy arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_heapDestroy :: Addr -> IO (Int,Addr)

heapFree :: HANDLE -> HeapAllocFlags -> Addr -> IO ()
heapFree arg1 arg2 arg3 =
  prim_Win32MM_cpp_heapFree arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_heapFree :: Addr -> Word32 -> Addr -> IO (Int,Addr)

heapLock :: HANDLE -> IO ()
heapLock arg1 =
  prim_Win32MM_cpp_heapLock arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_heapLock :: Addr -> IO (Int,Addr)

heapReAlloc :: HANDLE -> HeapAllocFlags -> Addr -> DWORD -> IO Addr
heapReAlloc arg1 arg2 arg3 arg4 =
  prim_Win32MM_cpp_heapReAlloc arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_heapReAlloc :: Addr -> Word32 -> Addr -> Word32 -> IO (Addr,Int,Addr)

heapSize :: HANDLE -> HeapAllocFlags -> Addr -> IO DWORD
heapSize arg1 arg2 arg3 =
  prim_Win32MM_cpp_heapSize arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_heapSize :: Addr -> Word32 -> Addr -> IO (Word32,Int,Addr)

heapUnlock :: HANDLE -> IO ()
heapUnlock arg1 =
  prim_Win32MM_cpp_heapUnlock arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_heapUnlock :: Addr -> IO (Int,Addr)

heapValidate :: HANDLE -> HeapAllocFlags -> Addr -> IO Bool
heapValidate arg1 arg2 arg3 =
  prim_Win32MM_cpp_heapValidate arg1 arg2 arg3 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32MM_cpp_heapValidate :: Addr -> Word32 -> Addr -> IO (Int)

moveMemory :: Addr -> Addr -> DWORD -> IO ()
moveMemory arg1 arg2 arg3 =
  prim_Win32MM_cpp_moveMemory arg1 arg2 arg3
primitive prim_Win32MM_cpp_moveMemory :: Addr -> Addr -> Word32 -> IO ()

type VirtualAllocFlags = DWORD

mEM_COMMIT :: VirtualAllocFlags
mEM_COMMIT =
  unsafePerformIO(
    prim_Win32MM_cpp_mEM_COMMIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_mEM_COMMIT :: IO (Word32)
mEM_RESERVE :: VirtualAllocFlags
mEM_RESERVE =
  unsafePerformIO(
    prim_Win32MM_cpp_mEM_RESERVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_mEM_RESERVE :: IO (Word32)
mEM_TOP_DOWN :: VirtualAllocFlags
mEM_TOP_DOWN =
  unsafePerformIO(
    prim_Win32MM_cpp_mEM_TOP_DOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_mEM_TOP_DOWN :: IO (Word32)

type ProtectFlags = DWORD

pAGE_READONLY :: ProtectFlags
pAGE_READONLY =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_READONLY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_READONLY :: IO (Word32)
pAGE_READWRITE :: ProtectFlags
pAGE_READWRITE =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_READWRITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_READWRITE :: IO (Word32)
pAGE_EXECUTE :: ProtectFlags
pAGE_EXECUTE =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_EXECUTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_EXECUTE :: IO (Word32)
pAGE_EXECUTE_READ :: ProtectFlags
pAGE_EXECUTE_READ =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_EXECUTE_READ >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_EXECUTE_READ :: IO (Word32)
pAGE_EXECUTE_READWRITE :: ProtectFlags
pAGE_EXECUTE_READWRITE =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_EXECUTE_READWRITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_EXECUTE_READWRITE :: IO (Word32)
pAGE_GUARD :: ProtectFlags
pAGE_GUARD =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_GUARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_GUARD :: IO (Word32)
pAGE_NOACCESS :: ProtectFlags
pAGE_NOACCESS =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_NOACCESS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_NOACCESS :: IO (Word32)
pAGE_NOCACHE :: ProtectFlags
pAGE_NOCACHE =
  unsafePerformIO(
    prim_Win32MM_cpp_pAGE_NOCACHE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_pAGE_NOCACHE :: IO (Word32)

type FreeFlags = DWORD

mEM_DECOMMIT :: FreeFlags
mEM_DECOMMIT =
  unsafePerformIO(
    prim_Win32MM_cpp_mEM_DECOMMIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_mEM_DECOMMIT :: IO (Word32)
mEM_RELEASE :: FreeFlags
mEM_RELEASE =
  unsafePerformIO(
    prim_Win32MM_cpp_mEM_RELEASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32MM_cpp_mEM_RELEASE :: IO (Word32)

virtualAlloc :: Addr -> DWORD -> VirtualAllocFlags -> ProtectFlags -> IO Addr
virtualAlloc arg1 arg2 arg3 arg4 =
  prim_Win32MM_cpp_virtualAlloc arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32MM_cpp_virtualAlloc :: Addr -> Word32 -> Word32 -> Word32 -> IO (Addr,Int,Addr)


-- %fun VirtualAllocEx :: HANDLE -> Addr -> DWORD -> VirtualAllocFlags -> ProtectFlags ->IO Addr
-- %code extern LPVOID WINAPI VirtualAllocEx(HANDLE,LPVOID,DWORD,DWORD,DWORD);
-- %     LPVOID res1=VirtualAllocEx(arg1,arg2,arg3,arg4,arg5);
-- %fail {res1==NULL}{ErrorWin("VirtualAllocEx")}

virtualFree :: Addr -> DWORD -> FreeFlags -> IO ()
virtualFree arg1 arg2 arg3 =
  prim_Win32MM_cpp_virtualFree arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_virtualFree :: Addr -> Word32 -> Word32 -> IO (Int,Addr)

-- %fun VirtualFreeEx :: HANDLE -> Addr -> DWORD -> FreeFlags -> IO ()
-- %code extern BOOL WINAPI VirtualFreeEx(HANDLE,LPVOID,DWORD,DWORD);
-- %     BOOL res1=VirtualFreeEx(arg1,arg2,arg3,arg4);
-- %fail {res1=0}{ErrorWin("VirtualFreeEx")}

virtualLock :: Addr -> DWORD -> IO ()
virtualLock arg1 arg2 =
  prim_Win32MM_cpp_virtualLock arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_virtualLock :: Addr -> Word32 -> IO (Int,Addr)

virtualProtect :: Addr -> DWORD -> ProtectFlags -> IO ()
virtualProtect arg1 arg2 arg3 =
  prim_Win32MM_cpp_virtualProtect arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_virtualProtect :: Addr -> Word32 -> Word32 -> IO (Int,Addr)

virtualProtectEx :: HANDLE -> Addr -> DWORD -> ProtectFlags -> Addr -> IO ()
virtualProtectEx arg1 arg2 arg3 arg4 arg5 =
  prim_Win32MM_cpp_virtualProtectEx arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_virtualProtectEx :: Addr -> Addr -> Word32 -> Word32 -> Addr -> IO (Int,Addr)

-- No VirtualQuery..()

virtualUnlock :: Addr -> DWORD -> IO ()
virtualUnlock arg1 arg2 =
  prim_Win32MM_cpp_virtualUnlock arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32MM_cpp_virtualUnlock :: Addr -> Word32 -> IO (Int,Addr)

zeroMemory :: Addr -> DWORD -> IO ()
zeroMemory arg1 arg2 =
  prim_Win32MM_cpp_zeroMemory arg1 arg2
primitive prim_Win32MM_cpp_zeroMemory :: Addr -> Word32 -> IO ()

needPrims_hugs 2
