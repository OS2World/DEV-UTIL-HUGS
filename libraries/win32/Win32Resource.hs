module Win32Resource where

import StdDIS
import Addr
import Word
import Win32Types


beginUpdateResource :: String -> Bool -> IO HANDLE
beginUpdateResource gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_bool_ gc_arg2) >>= \ (arg2) ->
  prim_Win32Resource_cpp_beginUpdateResource arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_beginUpdateResource :: Addr -> Int -> IO (Addr,Int,Addr)

type ResourceImageType = UINT

type   HRSRC      = Addr

type   HGLOBAL    = Addr

iMAGE_BITMAP :: ResourceImageType
iMAGE_BITMAP =
  unsafePerformIO(
    prim_Win32Resource_cpp_iMAGE_BITMAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_iMAGE_BITMAP :: IO (Word32)
iMAGE_ICON :: ResourceImageType
iMAGE_ICON =
  unsafePerformIO(
    prim_Win32Resource_cpp_iMAGE_ICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_iMAGE_ICON :: IO (Word32)
iMAGE_CURSOR :: ResourceImageType
iMAGE_CURSOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_iMAGE_CURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_iMAGE_CURSOR :: IO (Word32)

copyImage :: HANDLE -> ResourceImageType -> Int -> Int -> UINT -> IO HANDLE
copyImage arg1 arg2 arg3 arg4 arg5 =
  prim_Win32Resource_cpp_copyImage arg1 arg2 arg3 arg4 arg5 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_copyImage :: Addr -> Word32 -> Int -> Int -> Word32 -> IO (Addr,Int,Addr)

endUpdateResource :: HANDLE -> BOOL -> IO ()
endUpdateResource arg1 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Resource_cpp_endUpdateResource arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Resource_cpp_endUpdateResource :: Addr -> Int -> IO (Int,Addr)

type ResourceType = Addr

--lPCTSTR_ x

rT_ACCELERATOR :: ResourceType
rT_ACCELERATOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_ACCELERATOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_ACCELERATOR :: IO (Addr)
rT_ANICURSOR :: ResourceType
rT_ANICURSOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_ANICURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_ANICURSOR :: IO (Addr)
rT_ANIICON :: ResourceType
rT_ANIICON =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_ANIICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_ANIICON :: IO (Addr)
rT_BITMAP :: ResourceType
rT_BITMAP =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_BITMAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_BITMAP :: IO (Addr)
rT_CURSOR :: ResourceType
rT_CURSOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_CURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_CURSOR :: IO (Addr)
rT_DIALOG :: ResourceType
rT_DIALOG =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_DIALOG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_DIALOG :: IO (Addr)
rT_FONT :: ResourceType
rT_FONT =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_FONT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_FONT :: IO (Addr)
rT_FONTDIR :: ResourceType
rT_FONTDIR =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_FONTDIR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_FONTDIR :: IO (Addr)
rT_GROUP_CURSOR :: ResourceType
rT_GROUP_CURSOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_GROUP_CURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_GROUP_CURSOR :: IO (Addr)
rT_GROUP_ICON :: ResourceType
rT_GROUP_ICON =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_GROUP_ICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_GROUP_ICON :: IO (Addr)
rT_HTML :: ResourceType
rT_HTML =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_HTML >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_HTML :: IO (Addr)
rT_ICON :: ResourceType
rT_ICON =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_ICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_ICON :: IO (Addr)
rT_MENU :: ResourceType
rT_MENU =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_MENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_MENU :: IO (Addr)
rT_MESSAGETABLE :: ResourceType
rT_MESSAGETABLE =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_MESSAGETABLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_MESSAGETABLE :: IO (Addr)
rT_RCDATA :: ResourceType
rT_RCDATA =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_RCDATA >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_RCDATA :: IO (Addr)
rT_STRING :: ResourceType
rT_STRING =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_STRING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_STRING :: IO (Addr)
rT_VERSION :: ResourceType
rT_VERSION =
  unsafePerformIO(
    prim_Win32Resource_cpp_rT_VERSION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_rT_VERSION :: IO (Addr)

findResource :: HMODULE -> String -> ResourceType -> IO HRSRC
findResource arg1 gc_arg1 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Resource_cpp_findResource arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_findResource :: Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

findResourceEx :: HMODULE -> LPCTSTR_ -> ResourceType -> WORD -> IO HRSRC
findResourceEx arg1 gc_arg1 arg3 gc_arg2 =
  (marshall_lpctstr_ gc_arg1) >>= \ (arg2) ->
  case ( word16ToWord32  gc_arg2) of { arg4 ->
  prim_Win32Resource_cpp_findResourceEx arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Resource_cpp_findResourceEx :: Addr -> Addr -> Addr -> Word32 -> IO (Addr,Int,Addr)

type ResourceSize = Int

lR_DEFAULTSIZE :: ResourceSize
lR_DEFAULTSIZE =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_DEFAULTSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_DEFAULTSIZE :: IO (Int)

type LoadImageFlags = UINT

lR_DEFAULTCOLOR :: LoadImageFlags
lR_DEFAULTCOLOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_DEFAULTCOLOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_DEFAULTCOLOR :: IO (Word32)
lR_CREATEDIBSECTION :: LoadImageFlags
lR_CREATEDIBSECTION =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_CREATEDIBSECTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_CREATEDIBSECTION :: IO (Word32)
lR_LOADFROMFILE :: LoadImageFlags
lR_LOADFROMFILE =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_LOADFROMFILE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_LOADFROMFILE :: IO (Word32)
lR_LOADMAP3DCOLORS :: LoadImageFlags
lR_LOADMAP3DCOLORS =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_LOADMAP3DCOLORS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_LOADMAP3DCOLORS :: IO (Word32)
lR_LOADTRANSPARENT :: LoadImageFlags
lR_LOADTRANSPARENT =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_LOADTRANSPARENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_LOADTRANSPARENT :: IO (Word32)
lR_MONOCHROME :: LoadImageFlags
lR_MONOCHROME =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_MONOCHROME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_MONOCHROME :: IO (Word32)
lR_SHARED :: LoadImageFlags
lR_SHARED =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_SHARED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_SHARED :: IO (Word32)
lR_VGACOLOR :: LoadImageFlags
lR_VGACOLOR =
  unsafePerformIO(
    prim_Win32Resource_cpp_lR_VGACOLOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Resource_cpp_lR_VGACOLOR :: IO (Word32)

loadImage :: HINSTANCE -> LPCTSTR_ -> ResourceImageType -> ResourceSize -> ResourceSize -> LoadImageFlags -> IO HANDLE
loadImage arg1 gc_arg1 arg3 arg4 arg5 arg6 =
  (marshall_lpctstr_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Resource_cpp_loadImage arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_loadImage :: Addr -> Addr -> Word32 -> Int -> Int -> Word32 -> IO (Addr,Int,Addr)

loadResource :: HMODULE -> HRSRC -> IO HGLOBAL
loadResource arg1 arg2 =
  prim_Win32Resource_cpp_loadResource arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_loadResource :: Addr -> Addr -> IO (Addr,Int,Addr)

lockResource :: HGLOBAL -> IO Addr
lockResource arg1 =
  prim_Win32Resource_cpp_lockResource arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_lockResource :: Addr -> IO (Addr,Int,Addr)

sizeofResource :: HMODULE -> HRSRC -> IO DWORD
sizeofResource arg1 arg2 =
  prim_Win32Resource_cpp_sizeofResource arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Resource_cpp_sizeofResource :: Addr -> Addr -> IO (Word32,Int,Addr)

updateResource :: HANDLE -> LPCTSTR_ -> ResourceType -> WORD -> Addr -> DWORD -> IO ()
updateResource arg1 gc_arg1 arg3 gc_arg2 arg5 arg6 =
  (marshall_lpctstr_ gc_arg1) >>= \ (arg2) ->
  case ( word16ToWord32  gc_arg2) of { arg4 ->
  prim_Win32Resource_cpp_updateResource arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Resource_cpp_updateResource :: Addr -> Addr -> Addr -> Word32 -> Addr -> Word32 -> IO (Int,Addr)


needPrims_hugs 2
