module Win32Key where

import Win32Types
import GDITypes
import StdDIS


type VKey   = DWORD

vK_LBUTTON :: VKey
vK_LBUTTON =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_LBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_LBUTTON :: IO (Word32)
vK_RBUTTON :: VKey
vK_RBUTTON =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_RBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_RBUTTON :: IO (Word32)
vK_CANCEL :: VKey
vK_CANCEL =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_CANCEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_CANCEL :: IO (Word32)
vK_MBUTTON :: VKey
vK_MBUTTON =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_MBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_MBUTTON :: IO (Word32)
vK_BACK :: VKey
vK_BACK =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_BACK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_BACK :: IO (Word32)
vK_TAB :: VKey
vK_TAB =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_TAB >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_TAB :: IO (Word32)
vK_CLEAR :: VKey
vK_CLEAR =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_CLEAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_CLEAR :: IO (Word32)
vK_RETURN :: VKey
vK_RETURN =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_RETURN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_RETURN :: IO (Word32)
vK_SHIFT :: VKey
vK_SHIFT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SHIFT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SHIFT :: IO (Word32)
vK_CONTROL :: VKey
vK_CONTROL =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_CONTROL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_CONTROL :: IO (Word32)
vK_MENU :: VKey
vK_MENU =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_MENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_MENU :: IO (Word32)
vK_PAUSE :: VKey
vK_PAUSE =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_PAUSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_PAUSE :: IO (Word32)
vK_CAPITAL :: VKey
vK_CAPITAL =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_CAPITAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_CAPITAL :: IO (Word32)
vK_ESCAPE :: VKey
vK_ESCAPE =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_ESCAPE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_ESCAPE :: IO (Word32)
vK_SPACE :: VKey
vK_SPACE =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SPACE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SPACE :: IO (Word32)
vK_PRIOR :: VKey
vK_PRIOR =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_PRIOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_PRIOR :: IO (Word32)
vK_NEXT :: VKey
vK_NEXT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NEXT :: IO (Word32)
vK_END :: VKey
vK_END =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_END >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_END :: IO (Word32)
vK_HOME :: VKey
vK_HOME =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_HOME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_HOME :: IO (Word32)
vK_LEFT :: VKey
vK_LEFT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_LEFT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_LEFT :: IO (Word32)
vK_UP :: VKey
vK_UP =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_UP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_UP :: IO (Word32)
vK_RIGHT :: VKey
vK_RIGHT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_RIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_RIGHT :: IO (Word32)
vK_DOWN :: VKey
vK_DOWN =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_DOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_DOWN :: IO (Word32)
vK_SELECT :: VKey
vK_SELECT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SELECT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SELECT :: IO (Word32)
vK_EXECUTE :: VKey
vK_EXECUTE =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_EXECUTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_EXECUTE :: IO (Word32)
vK_SNAPSHOT :: VKey
vK_SNAPSHOT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SNAPSHOT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SNAPSHOT :: IO (Word32)
vK_INSERT :: VKey
vK_INSERT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_INSERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_INSERT :: IO (Word32)
vK_DELETE :: VKey
vK_DELETE =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_DELETE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_DELETE :: IO (Word32)
vK_HELP :: VKey
vK_HELP =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_HELP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_HELP :: IO (Word32)
vK_NUMPAD0 :: VKey
vK_NUMPAD0 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD0 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD0 :: IO (Word32)
vK_NUMPAD1 :: VKey
vK_NUMPAD1 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD1 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD1 :: IO (Word32)
vK_NUMPAD2 :: VKey
vK_NUMPAD2 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD2 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD2 :: IO (Word32)
vK_NUMPAD3 :: VKey
vK_NUMPAD3 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD3 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD3 :: IO (Word32)
vK_NUMPAD4 :: VKey
vK_NUMPAD4 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD4 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD4 :: IO (Word32)
vK_NUMPAD5 :: VKey
vK_NUMPAD5 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD5 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD5 :: IO (Word32)
vK_NUMPAD6 :: VKey
vK_NUMPAD6 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD6 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD6 :: IO (Word32)
vK_NUMPAD7 :: VKey
vK_NUMPAD7 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD7 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD7 :: IO (Word32)
vK_NUMPAD8 :: VKey
vK_NUMPAD8 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD8 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD8 :: IO (Word32)
vK_NUMPAD9 :: VKey
vK_NUMPAD9 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMPAD9 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMPAD9 :: IO (Word32)
vK_MULTIPLY :: VKey
vK_MULTIPLY =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_MULTIPLY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_MULTIPLY :: IO (Word32)
vK_ADD :: VKey
vK_ADD =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_ADD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_ADD :: IO (Word32)
vK_SEPARATOR :: VKey
vK_SEPARATOR =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SEPARATOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SEPARATOR :: IO (Word32)
vK_SUBTRACT :: VKey
vK_SUBTRACT =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SUBTRACT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SUBTRACT :: IO (Word32)
vK_DECIMAL :: VKey
vK_DECIMAL =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_DECIMAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_DECIMAL :: IO (Word32)
vK_DIVIDE :: VKey
vK_DIVIDE =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_DIVIDE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_DIVIDE :: IO (Word32)
vK_F1 :: VKey
vK_F1 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F1 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F1 :: IO (Word32)
vK_F2 :: VKey
vK_F2 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F2 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F2 :: IO (Word32)
vK_F3 :: VKey
vK_F3 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F3 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F3 :: IO (Word32)
vK_F4 :: VKey
vK_F4 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F4 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F4 :: IO (Word32)
vK_F5 :: VKey
vK_F5 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F5 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F5 :: IO (Word32)
vK_F6 :: VKey
vK_F6 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F6 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F6 :: IO (Word32)
vK_F7 :: VKey
vK_F7 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F7 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F7 :: IO (Word32)
vK_F8 :: VKey
vK_F8 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F8 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F8 :: IO (Word32)
vK_F9 :: VKey
vK_F9 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F9 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F9 :: IO (Word32)
vK_F10 :: VKey
vK_F10 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F10 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F10 :: IO (Word32)
vK_F11 :: VKey
vK_F11 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F11 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F11 :: IO (Word32)
vK_F12 :: VKey
vK_F12 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F12 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F12 :: IO (Word32)
vK_F13 :: VKey
vK_F13 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F13 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F13 :: IO (Word32)
vK_F14 :: VKey
vK_F14 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F14 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F14 :: IO (Word32)
vK_F15 :: VKey
vK_F15 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F15 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F15 :: IO (Word32)
vK_F16 :: VKey
vK_F16 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F16 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F16 :: IO (Word32)
vK_F17 :: VKey
vK_F17 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F17 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F17 :: IO (Word32)
vK_F18 :: VKey
vK_F18 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F18 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F18 :: IO (Word32)
vK_F19 :: VKey
vK_F19 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F19 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F19 :: IO (Word32)
vK_F20 :: VKey
vK_F20 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F20 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F20 :: IO (Word32)
vK_F21 :: VKey
vK_F21 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F21 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F21 :: IO (Word32)
vK_F22 :: VKey
vK_F22 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F22 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F22 :: IO (Word32)
vK_F23 :: VKey
vK_F23 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F23 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F23 :: IO (Word32)
vK_F24 :: VKey
vK_F24 =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_F24 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_F24 :: IO (Word32)
vK_NUMLOCK :: VKey
vK_NUMLOCK =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_NUMLOCK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_NUMLOCK :: IO (Word32)
vK_SCROLL :: VKey
vK_SCROLL =
  unsafePerformIO(
    prim_Win32Key_cpp_vK_SCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Key_cpp_vK_SCROLL :: IO (Word32)

enableWindow :: HWND -> Bool -> IO Bool
enableWindow arg1 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Key_cpp_enableWindow arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Key_cpp_enableWindow :: Addr -> Int -> IO (Int)

getActiveWindow :: IO MbHWND
getActiveWindow =
  prim_Win32Key_cpp_getActiveWindow >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Key_cpp_getActiveWindow :: IO (Addr)

getAsyncKeyState :: Int -> IO WORD
getAsyncKeyState arg1 =
  prim_Win32Key_cpp_getAsyncKeyState arg1 >>= \ (res1) ->
  let gc_res1 = ( fromIntegral  (res1)) in
  (return (gc_res1))
primitive prim_Win32Key_cpp_getAsyncKeyState :: Int -> IO (Word32)

getFocus :: IO MbHWND
getFocus =
  prim_Win32Key_cpp_getFocus >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Key_cpp_getFocus :: IO (Addr)

getKBCodePage :: IO UINT
getKBCodePage =
  prim_Win32Key_cpp_getKBCodePage >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Key_cpp_getKBCodePage :: IO (Word32)

isWindowEnabled :: HWND -> IO Bool
isWindowEnabled arg1 =
  prim_Win32Key_cpp_isWindowEnabled arg1 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Key_cpp_isWindowEnabled :: Addr -> IO (Int)

lOWORD :: DWORD -> WORD
lOWORD arg1 =
  unsafePerformIO(
    prim_Win32Key_cpp_lOWORD arg1 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Key_cpp_lOWORD :: Word32 -> IO (Word32)

hIWORD :: DWORD -> WORD
hIWORD arg1 =
  unsafePerformIO(
    prim_Win32Key_cpp_hIWORD arg1 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Key_cpp_hIWORD :: Word32 -> IO (Word32)

needPrims_hugs 2
