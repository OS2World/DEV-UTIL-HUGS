module Win32Misc where

import StdDIS
import GDITypes
import Win32Types


----------------------------------------------------------------
-- Resources 
-- (should probably be distributed between 
--  Win32{Icon,Cursor,Accelerator,Menu,...}.gc)
----------------------------------------------------------------

type Accelerator = LPCSTR
-- intToAccelerator :: Int -> Accelerator
-- intToAccelerator i = makeIntResource (toWord i)

-- cursor and icon should not be const pointer; GSL ???
type Cursor = LPSTR
-- intToCursor :: Int -> Cursor
-- intToCursor i = makeIntResource (toWord i)

type Icon = LPSTR
-- intToIcon :: Int -> Icon
-- intToIcon i = makeIntResource (toWord i)

loadAccelerators :: MbHINSTANCE -> Accelerator -> IO HACCEL
loadAccelerators arg1 arg2 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Misc_cpp_loadAccelerators arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Misc_cpp_loadAccelerators :: Addr -> Addr -> IO (Addr,Int,Addr)

loadCursor :: MbHINSTANCE -> Cursor -> IO HCURSOR
loadCursor arg1 arg2 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Misc_cpp_loadCursor arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Misc_cpp_loadCursor :: Addr -> Addr -> IO (Addr,Int,Addr)

loadIcon :: MbHINSTANCE -> Icon -> IO HICON
loadIcon arg1 arg2 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Misc_cpp_loadIcon arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Misc_cpp_loadIcon :: Addr -> Addr -> IO (Addr,Int,Addr)

iDC_ARROW :: Cursor
iDC_ARROW =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_ARROW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_ARROW :: IO (Addr)
iDC_IBEAM :: Cursor
iDC_IBEAM =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_IBEAM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_IBEAM :: IO (Addr)
iDC_WAIT :: Cursor
iDC_WAIT =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_WAIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_WAIT :: IO (Addr)
iDC_CROSS :: Cursor
iDC_CROSS =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_CROSS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_CROSS :: IO (Addr)
iDC_UPARROW :: Cursor
iDC_UPARROW =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_UPARROW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_UPARROW :: IO (Addr)
iDC_SIZENWSE :: Cursor
iDC_SIZENWSE =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_SIZENWSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_SIZENWSE :: IO (Addr)
iDC_SIZENESW :: Cursor
iDC_SIZENESW =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_SIZENESW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_SIZENESW :: IO (Addr)
iDC_SIZEWE :: Cursor
iDC_SIZEWE =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_SIZEWE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_SIZEWE :: IO (Addr)
iDC_SIZENS :: Cursor
iDC_SIZENS =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDC_SIZENS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDC_SIZENS :: IO (Addr)

iDI_APPLICATION :: Icon
iDI_APPLICATION =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDI_APPLICATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDI_APPLICATION :: IO (Addr)
iDI_HAND :: Icon
iDI_HAND =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDI_HAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDI_HAND :: IO (Addr)
iDI_QUESTION :: Icon
iDI_QUESTION =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDI_QUESTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDI_QUESTION :: IO (Addr)
iDI_EXCLAMATION :: Icon
iDI_EXCLAMATION =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDI_EXCLAMATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDI_EXCLAMATION :: IO (Addr)
iDI_ASTERISK :: Icon
iDI_ASTERISK =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDI_ASTERISK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDI_ASTERISK :: IO (Addr)

----------------------------------------------------------------
-- Message Boxes
----------------------------------------------------------------

type MBStyle = UINT

mB_OK :: MBStyle
mB_OK =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_OK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_OK :: IO (Word32)
mB_OKCANCEL :: MBStyle
mB_OKCANCEL =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_OKCANCEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_OKCANCEL :: IO (Word32)
mB_ABORTRETRYIGNORE :: MBStyle
mB_ABORTRETRYIGNORE =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ABORTRETRYIGNORE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ABORTRETRYIGNORE :: IO (Word32)
mB_YESNOCANCEL :: MBStyle
mB_YESNOCANCEL =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_YESNOCANCEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_YESNOCANCEL :: IO (Word32)
mB_YESNO :: MBStyle
mB_YESNO =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_YESNO >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_YESNO :: IO (Word32)
mB_RETRYCANCEL :: MBStyle
mB_RETRYCANCEL =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_RETRYCANCEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_RETRYCANCEL :: IO (Word32)
mB_ICONHAND :: MBStyle
mB_ICONHAND =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ICONHAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ICONHAND :: IO (Word32)
mB_ICONQUESTION :: MBStyle
mB_ICONQUESTION =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ICONQUESTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ICONQUESTION :: IO (Word32)
mB_ICONEXCLAMATION :: MBStyle
mB_ICONEXCLAMATION =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ICONEXCLAMATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ICONEXCLAMATION :: IO (Word32)
mB_ICONASTERISK :: MBStyle
mB_ICONASTERISK =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ICONASTERISK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ICONASTERISK :: IO (Word32)
mB_ICONINFORMATION :: MBStyle
mB_ICONINFORMATION =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ICONINFORMATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ICONINFORMATION :: IO (Word32)
mB_ICONSTOP :: MBStyle
mB_ICONSTOP =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_ICONSTOP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_ICONSTOP :: IO (Word32)
mB_DEFBUTTON1 :: MBStyle
mB_DEFBUTTON1 =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_DEFBUTTON1 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_DEFBUTTON1 :: IO (Word32)
mB_DEFBUTTON2 :: MBStyle
mB_DEFBUTTON2 =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_DEFBUTTON2 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_DEFBUTTON2 :: IO (Word32)
mB_DEFBUTTON3 :: MBStyle
mB_DEFBUTTON3 =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_DEFBUTTON3 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_DEFBUTTON3 :: IO (Word32)
mB_APPLMODAL :: MBStyle
mB_APPLMODAL =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_APPLMODAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_APPLMODAL :: IO (Word32)
mB_SYSTEMMODAL :: MBStyle
mB_SYSTEMMODAL =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_SYSTEMMODAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_SYSTEMMODAL :: IO (Word32)
mB_TASKMODAL :: MBStyle
mB_TASKMODAL =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_TASKMODAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_TASKMODAL :: IO (Word32)
mB_SETFOREGROUND :: MBStyle
mB_SETFOREGROUND =
  unsafePerformIO(
    prim_Win32Misc_cpp_mB_SETFOREGROUND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_mB_SETFOREGROUND :: IO (Word32)

type MBStatus = UINT

iDABORT :: MBStatus
iDABORT =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDABORT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDABORT :: IO (Word32)
iDCANCEL :: MBStatus
iDCANCEL =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDCANCEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDCANCEL :: IO (Word32)
iDIGNORE :: MBStatus
iDIGNORE =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDIGNORE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDIGNORE :: IO (Word32)
iDNO :: MBStatus
iDNO =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDNO >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDNO :: IO (Word32)
iDOK :: MBStatus
iDOK =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDOK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDOK :: IO (Word32)
iDRETRY :: MBStatus
iDRETRY =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDRETRY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDRETRY :: IO (Word32)
iDYES :: MBStatus
iDYES =
  unsafePerformIO(
    prim_Win32Misc_cpp_iDYES >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_iDYES :: IO (Word32)

-- Note: if the error is ever raised, we're in a very sad way!
messageBox :: HWND -> String -> String -> MBStyle -> IO MBStatus
messageBox arg1 gc_arg1 gc_arg2 arg4 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (marshall_string_ gc_arg2) >>= \ (arg3) ->
  prim_Win32Misc_cpp_messageBox arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Misc_cpp_messageBox :: Addr -> Addr -> Addr -> Word32 -> IO (Word32,Int,Addr)

----------------------------------------------------------------
--
----------------------------------------------------------------

-- %fun GetModuleHandle :: MbString -> IO HMODULE
-- %fail { res1 == 0 } { ErrorWin("GetModuleHandle") }

type StdHandleId   = DWORD

sTD_INPUT_HANDLE :: StdHandleId
sTD_INPUT_HANDLE =
  unsafePerformIO(
    prim_Win32Misc_cpp_sTD_INPUT_HANDLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_sTD_INPUT_HANDLE :: IO (Word32)
sTD_OUTPUT_HANDLE :: StdHandleId
sTD_OUTPUT_HANDLE =
  unsafePerformIO(
    prim_Win32Misc_cpp_sTD_OUTPUT_HANDLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_sTD_OUTPUT_HANDLE :: IO (Word32)
sTD_ERROR_HANDLE :: StdHandleId
sTD_ERROR_HANDLE =
  unsafePerformIO(
    prim_Win32Misc_cpp_sTD_ERROR_HANDLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_sTD_ERROR_HANDLE :: IO (Word32)

getStdHandle :: StdHandleId -> IO HANDLE
getStdHandle arg1 =
  prim_Win32Misc_cpp_getStdHandle arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Misc_cpp_getStdHandle :: Word32 -> IO (Addr,Int,Addr)

----------------------------------------------------------------
-- Rotatable Ellipse hack
--
-- Win95 (Win32?) doesn't support rotating ellipses - so we 
-- implement them with polygons.
--
-- We use a fixed number of edges rather than varying the number 
-- according to the radius of the ellipse.  
-- If anyone feels like improving the code (to vary the number),
-- they should place a fixed upper bound on the number of edges
-- since it takes a relatively long time to draw 1000 edges.
----------------------------------------------------------------


-- #define SIN_Cache_Size 20

transformedEllipse :: HDC -> POINT -> POINT -> POINT -> IO ()
transformedEllipse hdc gc_arg1 gc_arg7 gc_arg13 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case gc_arg7 of { (gc_arg8,gc_arg10) ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  case ( fromIntegral  gc_arg10) of { gc_arg11 ->
  case gc_arg13 of { (gc_arg14,gc_arg16) ->
  case ( fromIntegral  gc_arg14) of { gc_arg15 ->
  case ( fromIntegral  gc_arg16) of { gc_arg17 ->
  prim_Win32Misc_cpp_transformedEllipse hdc gc_arg3 gc_arg5 gc_arg9 gc_arg11 gc_arg15 gc_arg17 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}}}}}
primitive prim_Win32Misc_cpp_transformedEllipse :: Addr -> Int -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)


----------------------------------------------------------------
-- Cursor
----------------------------------------------------------------

-- %fun getCursorPos :: IO POINT
-- %code BOOL success = GetCursorPos(p);
-- %fail { !success } { ErrorString/Win("GetCursorPos") }
-- %result (point p)
-- 
-- %fun SetCursorPos :: POINT -> IO ()
-- %code BOOL success = SetCursorPos(arg1->x,arg1->y);
-- %fail { !success } { ErrorString/Win("SetCursorPos") }
--
-- %fun ClipCursor :: RECT -> IO ()
-- %call (declare {RECT} arg1 in (rect {arg1}))
-- %code BOOL success = ClipCursor(&arg1);
-- %fail { !success } { ErrorString/Win("ClipCursor") }
--
-- %fun getClipCursor :: IO RECT
-- %code BOOL success = GetClipCursor(&res1) } )
-- %fail { !success } { ErrorString/Win("GetClipCursor") }
-- %result (declare {RECT} res1 in (rect {res1}))

----------------------------------------------------------------
-- Exit/shutdown
----------------------------------------------------------------

type ExitOption = UINT

eWX_FORCE :: ExitOption
eWX_FORCE =
  unsafePerformIO(
    prim_Win32Misc_cpp_eWX_FORCE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_eWX_FORCE :: IO (Word32)
eWX_LOGOFF :: ExitOption
eWX_LOGOFF =
  unsafePerformIO(
    prim_Win32Misc_cpp_eWX_LOGOFF >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_eWX_LOGOFF :: IO (Word32)
eWX_POWEROFF :: ExitOption
eWX_POWEROFF =
  unsafePerformIO(
    prim_Win32Misc_cpp_eWX_POWEROFF >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_eWX_POWEROFF :: IO (Word32)
eWX_REBOOT :: ExitOption
eWX_REBOOT =
  unsafePerformIO(
    prim_Win32Misc_cpp_eWX_REBOOT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_eWX_REBOOT :: IO (Word32)
eWX_SHUTDOWN :: ExitOption
eWX_SHUTDOWN =
  unsafePerformIO(
    prim_Win32Misc_cpp_eWX_SHUTDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Misc_cpp_eWX_SHUTDOWN :: IO (Word32)

-- %fun exitWindowsEx :: ExitOption -> IO ()
-- %code ExitWindowEx(arg1,0);
-- %fail { !success } { ErrorWin("ExitWindowsEx") }
--
-- %fun exitWindows :: IO ()
-- %code ExitWindows(0,0)
-- %fail { !success } { ErrorWin("ExitWindows") }

----------------------------------------------------------------
-- Beeping
----------------------------------------------------------------

type MbBeep = Maybe UINT

type Duration   = Int

type MbDuration   = Maybe Duration

messageBeep :: MbBeep -> IO ()
messageBeep arg1 =
  (case arg1 of {
      Nothing -> (return (0xFFFFFFFF));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Misc_cpp_messageBeep arg1
primitive prim_Win32Misc_cpp_messageBeep :: Word32 -> IO ()

beep :: WORD -> MbDuration -> IO ()
beep gc_arg1 arg2 =
  case ( fromIntegral  gc_arg1) of { arg1 ->
  (case arg2 of {
      Nothing -> (return (-1));
      (Just arg2) -> (return ((arg2)))
   }) >>= \ (arg2) ->
  prim_Win32Misc_cpp_beep arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Misc_cpp_beep :: Word32 -> Int -> IO (Int,Addr)

----------------------------------------------------------------
-- Timers
----------------------------------------------------------------

type TimerId   = UINT

-- ToDo: support the other two forms of timer initialisation

-- Cause WM_TIMER events to be sent to window callback
setWinTimer :: HWND -> TimerId -> UINT -> IO TimerId
setWinTimer arg1 arg2 arg3 =
  prim_Win32Misc_cpp_setWinTimer arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Misc_cpp_setWinTimer :: Addr -> Word32 -> Word32 -> IO (Word32,Int,Addr)

killTimer :: MbHWND -> TimerId -> IO ()
killTimer arg1 arg2 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Misc_cpp_killTimer arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Misc_cpp_killTimer :: Addr -> Word32 -> IO (Int,Addr)

-- For documentation purposes:
type MilliSeconds = DWORD

timeGetTime :: IO MilliSeconds
timeGetTime =
  prim_Win32Misc_cpp_timeGetTime >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Misc_cpp_timeGetTime :: IO (Word32)

----------------------------------------------------------------

-- %fun ezCreateFont :: Unknown
-- %result BITMAP({ getBitmapInfo(x) })

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
