module Win32Clip where

import StdDIS
import Win32Types
import GDITypes
import Win32WinMessage


type ClipboardFormat = UINT

cF_BITMAP :: ClipboardFormat
cF_BITMAP =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_BITMAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_BITMAP :: IO (Word32)
cF_DIB :: ClipboardFormat
cF_DIB =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_DIB >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_DIB :: IO (Word32)
cF_DIF :: ClipboardFormat
cF_DIF =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_DIF >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_DIF :: IO (Word32)
cF_DSPBITMAP :: ClipboardFormat
cF_DSPBITMAP =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_DSPBITMAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_DSPBITMAP :: IO (Word32)
cF_DSPENHMETAFILE :: ClipboardFormat
cF_DSPENHMETAFILE =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_DSPENHMETAFILE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_DSPENHMETAFILE :: IO (Word32)
cF_DSPMETAFILEPICT :: ClipboardFormat
cF_DSPMETAFILEPICT =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_DSPMETAFILEPICT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_DSPMETAFILEPICT :: IO (Word32)
cF_DSPTEXT :: ClipboardFormat
cF_DSPTEXT =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_DSPTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_DSPTEXT :: IO (Word32)
cF_ENHMETAFILE :: ClipboardFormat
cF_ENHMETAFILE =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_ENHMETAFILE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_ENHMETAFILE :: IO (Word32)
cF_GDIOBJFIRST :: ClipboardFormat
cF_GDIOBJFIRST =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_GDIOBJFIRST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_GDIOBJFIRST :: IO (Word32)
cF_HDROP :: ClipboardFormat
cF_HDROP =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_HDROP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_HDROP :: IO (Word32)
cF_LOCALE :: ClipboardFormat
cF_LOCALE =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_LOCALE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_LOCALE :: IO (Word32)
cF_METAFILEPICT :: ClipboardFormat
cF_METAFILEPICT =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_METAFILEPICT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_METAFILEPICT :: IO (Word32)
cF_OEMTEXT :: ClipboardFormat
cF_OEMTEXT =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_OEMTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_OEMTEXT :: IO (Word32)
cF_OWNERDISPLAY :: ClipboardFormat
cF_OWNERDISPLAY =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_OWNERDISPLAY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_OWNERDISPLAY :: IO (Word32)
cF_PALETTE :: ClipboardFormat
cF_PALETTE =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_PALETTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_PALETTE :: IO (Word32)
cF_PENDATA :: ClipboardFormat
cF_PENDATA =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_PENDATA >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_PENDATA :: IO (Word32)
cF_PRIVATEFIRST :: ClipboardFormat
cF_PRIVATEFIRST =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_PRIVATEFIRST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_PRIVATEFIRST :: IO (Word32)
cF_PRIVATELAST :: ClipboardFormat
cF_PRIVATELAST =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_PRIVATELAST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_PRIVATELAST :: IO (Word32)
cF_RIFF :: ClipboardFormat
cF_RIFF =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_RIFF >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_RIFF :: IO (Word32)
cF_SYLK :: ClipboardFormat
cF_SYLK =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_SYLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_SYLK :: IO (Word32)
cF_TEXT :: ClipboardFormat
cF_TEXT =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_TEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_TEXT :: IO (Word32)
cF_WAVE :: ClipboardFormat
cF_WAVE =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_WAVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_WAVE :: IO (Word32)
cF_TIFF :: ClipboardFormat
cF_TIFF =
  unsafePerformIO(
    prim_Win32Clip_cpp_cF_TIFF >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Clip_cpp_cF_TIFF :: IO (Word32)

-- % , CF_UNICODETEXT  -- WinNT only

changeClipboardChain :: HWND -> HWND -> IO Bool
changeClipboardChain arg1 arg2 =
  prim_Win32Clip_cpp_changeClipboardChain arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Clip_cpp_changeClipboardChain :: Addr -> Addr -> IO (Int)

closeClipboard :: IO ()
closeClipboard =
  prim_Win32Clip_cpp_closeClipboard >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Clip_cpp_closeClipboard :: IO (Int,Addr)

countClipboardFormats :: IO Int
countClipboardFormats =
  prim_Win32Clip_cpp_countClipboardFormats >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Clip_cpp_countClipboardFormats :: IO (Int)

emptyClipboard :: IO ()
emptyClipboard =
  prim_Win32Clip_cpp_emptyClipboard >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Clip_cpp_emptyClipboard :: IO (Int,Addr)

enumClipboardFormats :: UINT -> IO UINT
enumClipboardFormats arg1 =
  prim_Win32Clip_cpp_enumClipboardFormats arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_enumClipboardFormats :: Word32 -> IO (Word32,Int,Addr)

getClipboardData :: ClipboardFormat -> IO HANDLE
getClipboardData arg1 =
  prim_Win32Clip_cpp_getClipboardData arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_getClipboardData :: Word32 -> IO (Addr,Int,Addr)

getClipboardFormatName :: ClipboardFormat -> Addr -> Int -> IO Int
getClipboardFormatName arg1 arg2 arg3 =
  prim_Win32Clip_cpp_getClipboardFormatName arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_getClipboardFormatName :: Word32 -> Addr -> Int -> IO (Int,Int,Addr)

getClipboardOwner :: IO HWND
getClipboardOwner =
  prim_Win32Clip_cpp_getClipboardOwner >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_getClipboardOwner :: IO (Addr,Int,Addr)

getClipboardViewer :: IO HWND
getClipboardViewer =
  prim_Win32Clip_cpp_getClipboardViewer >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_getClipboardViewer :: IO (Addr,Int,Addr)

getOpenClipboardWindow :: IO HWND
getOpenClipboardWindow =
  prim_Win32Clip_cpp_getOpenClipboardWindow >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_getOpenClipboardWindow :: IO (Addr,Int,Addr)

getPriorityClipboardFormat :: Addr -> Int -> IO Int
getPriorityClipboardFormat arg1 arg2 =
  prim_Win32Clip_cpp_getPriorityClipboardFormat arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_getPriorityClipboardFormat :: Addr -> Int -> IO (Int,Int,Addr)

isClipboardFormatAvailable :: ClipboardFormat -> IO BOOL
isClipboardFormatAvailable arg1 =
  prim_Win32Clip_cpp_isClipboardFormatAvailable arg1 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Clip_cpp_isClipboardFormatAvailable :: Word32 -> IO (Int)

openClipboard :: HWND -> IO ()
openClipboard arg1 =
  prim_Win32Clip_cpp_openClipboard arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Clip_cpp_openClipboard :: Addr -> IO (Int,Addr)

registerClipboardFormat :: String -> IO ClipboardFormat
registerClipboardFormat gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32Clip_cpp_registerClipboardFormat arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_registerClipboardFormat :: Addr -> IO (Word32,Int,Addr)

setClipboardData :: ClipboardFormat -> HANDLE -> IO HANDLE
setClipboardData arg1 arg2 =
  prim_Win32Clip_cpp_setClipboardData arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_setClipboardData :: Word32 -> Addr -> IO (Addr,Int,Addr)

setClipboardViewer :: HWND -> IO HWND
setClipboardViewer arg1 =
  prim_Win32Clip_cpp_setClipboardViewer arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Clip_cpp_setClipboardViewer :: Addr -> IO (Addr,Int,Addr)







needPrims_hugs 2
