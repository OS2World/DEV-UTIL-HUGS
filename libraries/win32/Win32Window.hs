module Win32Window where

import StdDIS
import Win32Types
import GDITypes
import Win32WinMessage


----------------------------------------------------------------
-- Window Class
----------------------------------------------------------------

-- The classname must not be deallocated until the corresponding class
-- is deallocated.  For this reason, we represent classnames by pointers
-- and explicitly allocate the className.

type ClassName   = LPCTSTR

-- Note: this is one of those rare functions which doesnt free all 
-- its String arguments.
mkClassName :: String -> ClassName
mkClassName gc_arg1 =
  unsafePerformIO(
    (marshall_string_ gc_arg1) >>= \ (arg1) ->
    prim_Win32Window_cpp_mkClassName arg1 >>= \ (gc_res1) ->
    (return (gc_res1)))
primitive prim_Win32Window_cpp_mkClassName :: Addr -> IO (Addr)

type ClassStyle   = UINT

cS_VREDRAW :: ClassStyle
cS_VREDRAW =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_VREDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_VREDRAW :: IO (Word32)
cS_HREDRAW :: ClassStyle
cS_HREDRAW =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_HREDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_HREDRAW :: IO (Word32)
cS_OWNDC :: ClassStyle
cS_OWNDC =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_OWNDC >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_OWNDC :: IO (Word32)
cS_CLASSDC :: ClassStyle
cS_CLASSDC =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_CLASSDC >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_CLASSDC :: IO (Word32)
cS_PARENTDC :: ClassStyle
cS_PARENTDC =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_PARENTDC >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_PARENTDC :: IO (Word32)
cS_SAVEBITS :: ClassStyle
cS_SAVEBITS =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_SAVEBITS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_SAVEBITS :: IO (Word32)
cS_DBLCLKS :: ClassStyle
cS_DBLCLKS =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_DBLCLKS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_DBLCLKS :: IO (Word32)
cS_BYTEALIGNCLIENT :: ClassStyle
cS_BYTEALIGNCLIENT =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_BYTEALIGNCLIENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_BYTEALIGNCLIENT :: IO (Word32)
cS_BYTEALIGNWINDOW :: ClassStyle
cS_BYTEALIGNWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_BYTEALIGNWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_BYTEALIGNWINDOW :: IO (Word32)
cS_NOCLOSE :: ClassStyle
cS_NOCLOSE =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_NOCLOSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_NOCLOSE :: IO (Word32)
cS_GLOBALCLASS :: ClassStyle
cS_GLOBALCLASS =
  unsafePerformIO(
    prim_Win32Window_cpp_cS_GLOBALCLASS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cS_GLOBALCLASS :: IO (Word32)


type WNDCLASS =
 (ClassStyle,  -- style
  HINSTANCE,   -- hInstance
  MbHICON,     -- hIcon
  MbHCURSOR,   -- hCursor
  MbHBRUSH,    -- hbrBackground
  MbLPCSTR,    -- lpszMenuName
  ClassName)   -- lpszClassName

--ToDo!
--To avoid confusion with NULL, WNDCLASS requires you to add 1 to a SystemColor
--(which can be NULL)
-- %fun mkMbHBRUSH :: SystemColor -> MbHBRUSH
-- %code
-- %result ((HBRUSH)($0+1));

marshall_wndClass_ :: WNDCLASS -> IO Addr
marshall_wndClass_ gc_arg1 =
  case gc_arg1 of { (style,hInstance,hIcon,hCursor,hbrBackground,lpszMenuName,lpszClassName) ->
  (case hIcon of {
      Nothing -> (return (nullHANDLE));
      (Just hIcon) -> (return ((hIcon)))
   }) >>= \ (hIcon) ->
  (case hCursor of {
      Nothing -> (return (nullHANDLE));
      (Just hCursor) -> (return ((hCursor)))
   }) >>= \ (hCursor) ->
  (case hbrBackground of {
      Nothing -> (return (nullHANDLE));
      (Just hbrBackground) -> (return ((hbrBackground)))
   }) >>= \ (hbrBackground) ->
  (case lpszMenuName of {
      Nothing -> (return (nullAddr));
      (Just lpszMenuName) -> (return ((lpszMenuName)))
   }) >>= \ (lpszMenuName) ->
  prim_Win32Window_cpp_marshall_wndClass_ style hInstance hIcon hCursor hbrBackground lpszMenuName lpszClassName >>= \ (c,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (c))}
primitive prim_Win32Window_cpp_marshall_wndClass_ :: Word32 -> Addr -> Addr -> Addr -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)




registerClass :: WNDCLASS -> IO MbATOM
registerClass gc_arg1 =
  (marshall_wndClass_ gc_arg1) >>= \ (arg1) ->
  prim_Win32Window_cpp_registerClass arg1 >>= \ (res1) ->
  (if 0 == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_registerClass :: Addr -> IO (Word32)

unregisterClass :: ClassName -> HINSTANCE -> IO ()
unregisterClass arg1 arg2 =
  prim_Win32Window_cpp_unregisterClass arg1 arg2
primitive prim_Win32Window_cpp_unregisterClass :: Addr -> Addr -> IO ()

----------------------------------------------------------------
-- Window Style
----------------------------------------------------------------

type WindowStyle   = DWORD

wS_OVERLAPPED :: WindowStyle
wS_OVERLAPPED =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_OVERLAPPED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_OVERLAPPED :: IO (Word32)
wS_POPUP :: WindowStyle
wS_POPUP =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_POPUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_POPUP :: IO (Word32)
wS_CHILD :: WindowStyle
wS_CHILD =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_CHILD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_CHILD :: IO (Word32)
wS_CLIPSIBLINGS :: WindowStyle
wS_CLIPSIBLINGS =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_CLIPSIBLINGS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_CLIPSIBLINGS :: IO (Word32)
wS_CLIPCHILDREN :: WindowStyle
wS_CLIPCHILDREN =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_CLIPCHILDREN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_CLIPCHILDREN :: IO (Word32)
wS_VISIBLE :: WindowStyle
wS_VISIBLE =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_VISIBLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_VISIBLE :: IO (Word32)
wS_DISABLED :: WindowStyle
wS_DISABLED =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_DISABLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_DISABLED :: IO (Word32)
wS_MINIMIZE :: WindowStyle
wS_MINIMIZE =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_MINIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_MINIMIZE :: IO (Word32)
wS_MAXIMIZE :: WindowStyle
wS_MAXIMIZE =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_MAXIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_MAXIMIZE :: IO (Word32)
wS_CAPTION :: WindowStyle
wS_CAPTION =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_CAPTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_CAPTION :: IO (Word32)
wS_BORDER :: WindowStyle
wS_BORDER =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_BORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_BORDER :: IO (Word32)
wS_DLGFRAME :: WindowStyle
wS_DLGFRAME =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_DLGFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_DLGFRAME :: IO (Word32)
wS_VSCROLL :: WindowStyle
wS_VSCROLL =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_VSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_VSCROLL :: IO (Word32)
wS_HSCROLL :: WindowStyle
wS_HSCROLL =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_HSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_HSCROLL :: IO (Word32)
wS_SYSMENU :: WindowStyle
wS_SYSMENU =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_SYSMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_SYSMENU :: IO (Word32)
wS_THICKFRAME :: WindowStyle
wS_THICKFRAME =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_THICKFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_THICKFRAME :: IO (Word32)
wS_MINIMIZEBOX :: WindowStyle
wS_MINIMIZEBOX =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_MINIMIZEBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_MINIMIZEBOX :: IO (Word32)
wS_MAXIMIZEBOX :: WindowStyle
wS_MAXIMIZEBOX =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_MAXIMIZEBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_MAXIMIZEBOX :: IO (Word32)
wS_GROUP :: WindowStyle
wS_GROUP =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_GROUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_GROUP :: IO (Word32)
wS_TABSTOP :: WindowStyle
wS_TABSTOP =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_TABSTOP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_TABSTOP :: IO (Word32)
wS_OVERLAPPEDWINDOW :: WindowStyle
wS_OVERLAPPEDWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_OVERLAPPEDWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_OVERLAPPEDWINDOW :: IO (Word32)
wS_POPUPWINDOW :: WindowStyle
wS_POPUPWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_POPUPWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_POPUPWINDOW :: IO (Word32)
wS_CHILDWINDOW :: WindowStyle
wS_CHILDWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_CHILDWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_CHILDWINDOW :: IO (Word32)
wS_TILED :: WindowStyle
wS_TILED =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_TILED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_TILED :: IO (Word32)
wS_ICONIC :: WindowStyle
wS_ICONIC =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_ICONIC >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_ICONIC :: IO (Word32)
wS_SIZEBOX :: WindowStyle
wS_SIZEBOX =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_SIZEBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_SIZEBOX :: IO (Word32)
wS_TILEDWINDOW :: WindowStyle
wS_TILEDWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_TILEDWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_TILEDWINDOW :: IO (Word32)

type WindowStyleEx   = DWORD

wS_EX_DLGMODALFRAME :: WindowStyleEx
wS_EX_DLGMODALFRAME =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_DLGMODALFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_DLGMODALFRAME :: IO (Word32)
wS_EX_NOPARENTNOTIFY :: WindowStyleEx
wS_EX_NOPARENTNOTIFY =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_NOPARENTNOTIFY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_NOPARENTNOTIFY :: IO (Word32)
wS_EX_TOPMOST :: WindowStyleEx
wS_EX_TOPMOST =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_TOPMOST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_TOPMOST :: IO (Word32)
wS_EX_ACCEPTFILES :: WindowStyleEx
wS_EX_ACCEPTFILES =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_ACCEPTFILES >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_ACCEPTFILES :: IO (Word32)
wS_EX_TRANSPARENT :: WindowStyleEx
wS_EX_TRANSPARENT =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_TRANSPARENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_TRANSPARENT :: IO (Word32)
wS_EX_MDICHILD :: WindowStyleEx
wS_EX_MDICHILD =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_MDICHILD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_MDICHILD :: IO (Word32)
wS_EX_TOOLWINDOW :: WindowStyleEx
wS_EX_TOOLWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_TOOLWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_TOOLWINDOW :: IO (Word32)
wS_EX_WINDOWEDGE :: WindowStyleEx
wS_EX_WINDOWEDGE =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_WINDOWEDGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_WINDOWEDGE :: IO (Word32)
wS_EX_CLIENTEDGE :: WindowStyleEx
wS_EX_CLIENTEDGE =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_CLIENTEDGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_CLIENTEDGE :: IO (Word32)
wS_EX_CONTEXTHELP :: WindowStyleEx
wS_EX_CONTEXTHELP =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_CONTEXTHELP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_CONTEXTHELP :: IO (Word32)
wS_EX_RIGHT :: WindowStyleEx
wS_EX_RIGHT =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_RIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_RIGHT :: IO (Word32)
wS_EX_LEFT :: WindowStyleEx
wS_EX_LEFT =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_LEFT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_LEFT :: IO (Word32)
wS_EX_RTLREADING :: WindowStyleEx
wS_EX_RTLREADING =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_RTLREADING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_RTLREADING :: IO (Word32)
wS_EX_LTRREADING :: WindowStyleEx
wS_EX_LTRREADING =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_LTRREADING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_LTRREADING :: IO (Word32)
wS_EX_LEFTSCROLLBAR :: WindowStyleEx
wS_EX_LEFTSCROLLBAR =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_LEFTSCROLLBAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_LEFTSCROLLBAR :: IO (Word32)
wS_EX_RIGHTSCROLLBAR :: WindowStyleEx
wS_EX_RIGHTSCROLLBAR =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_RIGHTSCROLLBAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_RIGHTSCROLLBAR :: IO (Word32)
wS_EX_CONTROLPARENT :: WindowStyleEx
wS_EX_CONTROLPARENT =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_CONTROLPARENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_CONTROLPARENT :: IO (Word32)
wS_EX_STATICEDGE :: WindowStyleEx
wS_EX_STATICEDGE =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_STATICEDGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_STATICEDGE :: IO (Word32)
wS_EX_APPWINDOW :: WindowStyleEx
wS_EX_APPWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_APPWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_APPWINDOW :: IO (Word32)
wS_EX_OVERLAPPEDWINDOW :: WindowStyleEx
wS_EX_OVERLAPPEDWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_OVERLAPPEDWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_OVERLAPPEDWINDOW :: IO (Word32)
wS_EX_PALETTEWINDOW :: WindowStyleEx
wS_EX_PALETTEWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_wS_EX_PALETTEWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_wS_EX_PALETTEWINDOW :: IO (Word32)

cW_USEDEFAULT :: Pos
cW_USEDEFAULT =
  unsafePerformIO(
    prim_Win32Window_cpp_cW_USEDEFAULT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_cW_USEDEFAULT :: IO (Int)

type Pos = Int

type MbPos = Maybe Pos

type WindowClosure = HWND -> WindowMessage -> WPARAM -> LPARAM -> IO LRESULT


-- ??



setWindowClosure :: HWND -> WindowClosure -> IO ()
setWindowClosure hwnd gc_arg1 =
  (makeStablePtr gc_arg1) >>= \ closure ->
  prim_Win32Window_cpp_setWindowClosure hwnd closure
primitive prim_Win32Window_cpp_setWindowClosure :: Addr -> StablePtr a2 -> IO ()

createWindow :: ClassName -> String -> WindowStyle -> Maybe Pos -> Maybe Pos -> Maybe Pos -> Maybe Pos -> MbHWND -> MbHMENU -> HINSTANCE -> WindowClosure -> IO HWND
createWindow name gc_arg1 style x y width height hwndParent hmenu hinst gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (windowName) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case width of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just width) -> (return ((width)))
   }) >>= \ (width) ->
  (case height of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just height) -> (return ((height)))
   }) >>= \ (height) ->
  (case hwndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hwndParent) -> (return ((hwndParent)))
   }) >>= \ (hwndParent) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  (makeStablePtr gc_arg2) >>= \ closure ->
  prim_Win32Window_cpp_createWindow name windowName style x y width height hwndParent hmenu hinst closure >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_createWindow :: Addr -> Addr -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> StablePtr a11 -> IO (Addr,Int,Addr)

-- Freeing the title/window name has been reported
-- to cause a crash, so let's not do it.
-- %end free(windowName)  

createWindowEx :: WindowStyle -> ClassName -> String -> WindowStyle -> Maybe Pos -> Maybe Pos -> Maybe Pos -> Maybe Pos -> MbHWND -> MbHMENU -> HINSTANCE -> WindowClosure -> IO HWND
createWindowEx estyle cls gc_arg1 wstyle x y nWidth nHeight hwndParent hmenu hinstance gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (wname) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case nWidth of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just nWidth) -> (return ((nWidth)))
   }) >>= \ (nWidth) ->
  (case nHeight of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just nHeight) -> (return ((nHeight)))
   }) >>= \ (nHeight) ->
  (case hwndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hwndParent) -> (return ((hwndParent)))
   }) >>= \ (hwndParent) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  (makeStablePtr gc_arg2) >>= \ closure ->
  prim_Win32Window_cpp_createWindowEx estyle cls wname wstyle x y nWidth nHeight hwndParent hmenu hinstance closure >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_createWindowEx :: Word32 -> Addr -> Addr -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> StablePtr a12 -> IO (Addr,Int,Addr)

-- see CreateWindow comment.
-- %end free(wname)  

----------------------------------------------------------------

defWindowProc :: MbHWND -> WindowMessage -> WPARAM -> LPARAM -> IO LRESULT
defWindowProc arg1 arg2 arg3 gc_arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  case ( fromIntegral gc_arg1) of { arg4 ->
  prim_Win32Window_cpp_defWindowProc arg1 arg2 arg3 arg4 >>= \ (res1) ->
  let gc_res1 = ( fromIntegral  (res1)) in
  (return (gc_res1))}
primitive prim_Win32Window_cpp_defWindowProc :: Addr -> Word32 -> Word32 -> Int -> IO (Int)

----------------------------------------------------------------

getClientRect :: HWND -> IO RECT
getClientRect arg1 =
  prim_Win32Window_cpp_getClientRect arg1 >>= \ (gc_res2,gc_res4,gc_res6,gc_res8,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       let gc_res5 = ( fromIntegral  (gc_res6)) in
       let gc_res7 = ( fromIntegral  (gc_res8)) in
       (return ((gc_res1,gc_res3,gc_res5,gc_res7)))
primitive prim_Win32Window_cpp_getClientRect :: Addr -> IO (Int,Int,Int,Int,Int,Addr)

getWindowRect :: HWND -> IO RECT
getWindowRect arg1 =
  prim_Win32Window_cpp_getWindowRect arg1 >>= \ (gc_res2,gc_res4,gc_res6,gc_res8,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       let gc_res5 = ( fromIntegral  (gc_res6)) in
       let gc_res7 = ( fromIntegral  (gc_res8)) in
       (return ((gc_res1,gc_res3,gc_res5,gc_res7)))
primitive prim_Win32Window_cpp_getWindowRect :: Addr -> IO (Int,Int,Int,Int,Int,Addr)

-- Should it be MbRECT instead?
invalidateRect :: MbHWND -> MbLPRECT -> Bool -> IO ()
invalidateRect arg1 arg2 gc_arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  (case arg2 of {
      Nothing -> (return (nullAddr));
      (Just arg2) -> (return ((arg2)))
   }) >>= \ (arg2) ->
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Window_cpp_invalidateRect arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_invalidateRect :: Addr -> Addr -> Int -> IO (Int,Addr)

screenToClient :: HWND -> POINT -> IO POINT
screenToClient arg1 gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral gc_arg2) of { gc_arg3 ->
  case ( fromIntegral gc_arg4) of { gc_arg5 ->
  prim_Win32Window_cpp_screenToClient arg1 gc_arg3 gc_arg5 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))}}}
primitive prim_Win32Window_cpp_screenToClient :: Addr -> Int -> Int -> IO (Int,Int,Int,Addr)

clientToScreen :: HWND -> POINT -> IO POINT
clientToScreen hwnd gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral gc_arg2) of { gc_arg3 ->
  case ( fromIntegral gc_arg4) of { gc_arg5 ->
  prim_Win32Window_cpp_clientToScreen hwnd gc_arg3 gc_arg5 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))}}}
primitive prim_Win32Window_cpp_clientToScreen :: Addr -> Int -> Int -> IO (Int,Int,Int,Addr)

----------------------------------------------------------------
-- Setting window text/label
----------------------------------------------------------------
-- For setting the title bar text.  But inconvenient to make the LPCTSTR
setWindowText :: HWND -> String -> IO ()
setWindowText arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Window_cpp_setWindowText arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_setWindowText :: Addr -> Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- Paint struct
----------------------------------------------------------------

type PAINTSTRUCT =
 ( HDC   -- hdc
 , Bool  -- fErase
 , RECT  -- rcPaint
 )

type LPPAINTSTRUCT   = Addr

sizeofPAINTSTRUCT :: DWORD
sizeofPAINTSTRUCT =
  unsafePerformIO(
    prim_Win32Window_cpp_sizeofPAINTSTRUCT >>= \ (gc_res1) ->
    (return (gc_res1)))
primitive prim_Win32Window_cpp_sizeofPAINTSTRUCT :: IO (Word32)

beginPaint :: HWND -> LPPAINTSTRUCT -> IO HDC
beginPaint arg1 arg2 =
  prim_Win32Window_cpp_beginPaint arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_beginPaint :: Addr -> Addr -> IO (Addr,Int,Addr)

endPaint :: HWND -> LPPAINTSTRUCT -> IO ()
endPaint arg1 arg2 =
  prim_Win32Window_cpp_endPaint arg1 arg2
primitive prim_Win32Window_cpp_endPaint :: Addr -> Addr -> IO ()
-- Apparently always succeeds (return non-zero)

----------------------------------------------------------------
-- ShowWindow
----------------------------------------------------------------

type ShowWindowControl   = DWORD

sW_HIDE :: ShowWindowControl
sW_HIDE =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_HIDE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_HIDE :: IO (Word32)
sW_SHOWNORMAL :: ShowWindowControl
sW_SHOWNORMAL =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOWNORMAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOWNORMAL :: IO (Word32)
sW_SHOWMINIMIZED :: ShowWindowControl
sW_SHOWMINIMIZED =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOWMINIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOWMINIMIZED :: IO (Word32)
sW_SHOWMAXIMIZED :: ShowWindowControl
sW_SHOWMAXIMIZED =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOWMAXIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOWMAXIMIZED :: IO (Word32)
sW_MAXIMIZE :: ShowWindowControl
sW_MAXIMIZE =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_MAXIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_MAXIMIZE :: IO (Word32)
sW_SHOWNOACTIVATE :: ShowWindowControl
sW_SHOWNOACTIVATE =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOWNOACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOWNOACTIVATE :: IO (Word32)
sW_SHOW :: ShowWindowControl
sW_SHOW =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOW :: IO (Word32)
sW_MINIMIZE :: ShowWindowControl
sW_MINIMIZE =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_MINIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_MINIMIZE :: IO (Word32)
sW_SHOWMINNOACTIVE :: ShowWindowControl
sW_SHOWMINNOACTIVE =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOWMINNOACTIVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOWMINNOACTIVE :: IO (Word32)
sW_SHOWNA :: ShowWindowControl
sW_SHOWNA =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_SHOWNA >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_SHOWNA :: IO (Word32)
sW_RESTORE :: ShowWindowControl
sW_RESTORE =
  unsafePerformIO(
    prim_Win32Window_cpp_sW_RESTORE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sW_RESTORE :: IO (Word32)

showWindow :: HWND -> ShowWindowControl -> IO Bool
showWindow arg1 arg2 =
  prim_Win32Window_cpp_showWindow arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_showWindow :: Addr -> Word32 -> IO (Int)

----------------------------------------------------------------
-- Misc
----------------------------------------------------------------

adjustWindowRect :: RECT -> WindowStyle -> Bool -> IO RECT
adjustWindowRect gc_arg1 arg2 gc_arg11 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  (marshall_bool_ gc_arg11) >>= \ (arg3) ->
  prim_Win32Window_cpp_adjustWindowRect gc_arg3 gc_arg5 gc_arg7 gc_arg9 arg2 arg3 >>= \ (gc_res2,gc_res4,gc_res6,gc_res8,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       let gc_res5 = ( fromIntegral  (gc_res6)) in
       let gc_res7 = ( fromIntegral  (gc_res8)) in
       (return ((gc_res1,gc_res3,gc_res5,gc_res7)))}}}}}
primitive prim_Win32Window_cpp_adjustWindowRect :: Int -> Int -> Int -> Int -> Word32 -> Int -> IO (Int,Int,Int,Int,Int,Addr)

adjustWindowRectEx :: RECT -> WindowStyle -> Bool -> WindowStyleEx -> IO RECT
adjustWindowRectEx gc_arg1 arg2 gc_arg11 arg4 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  (marshall_bool_ gc_arg11) >>= \ (arg3) ->
  prim_Win32Window_cpp_adjustWindowRectEx gc_arg3 gc_arg5 gc_arg7 gc_arg9 arg2 arg3 arg4 >>= \ (gc_res2,gc_res4,gc_res6,gc_res8,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       let gc_res5 = ( fromIntegral  (gc_res6)) in
       let gc_res7 = ( fromIntegral  (gc_res8)) in
       (return ((gc_res1,gc_res3,gc_res5,gc_res7)))}}}}}
primitive prim_Win32Window_cpp_adjustWindowRectEx :: Int -> Int -> Int -> Int -> Word32 -> Int -> Word32 -> IO (Int,Int,Int,Int,Int,Addr)

-- Win2K and later:
-- %fun AllowSetForegroundWindow :: DWORD -> IO ()

-- %
-- %dis animateWindowType x = dWORD x
-- type AnimateWindowType   = DWORD

-- %const AnimateWindowType
--        [ AW_SLIDE
--        , AW_ACTIVATE
--        , AW_BLEND
--        , AW_HIDE
--        , AW_CENTER
--        , AW_HOR_POSITIVE
--        , AW_HOR_NEGATIVE
--        , AW_VER_POSITIVE
--        , AW_VER_NEGATIVE
--        ]

-- Win98 or Win2K:
-- %fun AnimateWindow :: HWND -> DWORD -> AnimateWindowType -> IO ()
-- %code BOOL success = AnimateWindow(arg1,arg2,arg3)
-- %fail { !success } { ErrorWin("AnimateWindow") }

anyPopup :: IO Bool
anyPopup =
  prim_Win32Window_cpp_anyPopup >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_anyPopup :: IO (Int)

arrangeIconicWindows :: HWND -> IO ()
arrangeIconicWindows arg1 =
  prim_Win32Window_cpp_arrangeIconicWindows arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_arrangeIconicWindows :: Addr -> IO (Int,Addr)

beginDeferWindowPos :: Int -> IO HDWP
beginDeferWindowPos arg1 =
  prim_Win32Window_cpp_beginDeferWindowPos arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_beginDeferWindowPos :: Int -> IO (Addr,Int,Addr)

bringWindowToTop :: HWND -> IO ()
bringWindowToTop arg1 =
  prim_Win32Window_cpp_bringWindowToTop arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_bringWindowToTop :: Addr -> IO (Int,Addr)

childWindowFromPoint :: HWND -> POINT -> IO MbHWND
childWindowFromPoint hwnd gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  prim_Win32Window_cpp_childWindowFromPoint hwnd gc_arg3 gc_arg5 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (if nullHANDLE == (res1)
	then return Nothing
	else (return ((Just res1)))) >>= \ gc_res1 ->
       (return (gc_res1))}}}
primitive prim_Win32Window_cpp_childWindowFromPoint :: Addr -> Int -> Int -> IO (Addr,Int,Addr)

childWindowFromPointEx :: HWND -> POINT -> DWORD -> IO MbHWND
childWindowFromPointEx hwnd gc_arg1 arg2 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  prim_Win32Window_cpp_childWindowFromPointEx hwnd gc_arg3 gc_arg5 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (if nullHANDLE == (res1)
	then return Nothing
	else (return ((Just res1)))) >>= \ gc_res1 ->
       (return (gc_res1))}}}
primitive prim_Win32Window_cpp_childWindowFromPointEx :: Addr -> Int -> Int -> Word32 -> IO (Addr,Int,Addr)

closeWindow :: HWND -> IO ()
closeWindow arg1 =
  prim_Win32Window_cpp_closeWindow arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_closeWindow :: Addr -> IO (Int,Addr)

deferWindowPos :: HDWP -> HWND -> HWND -> Int -> Int -> Int -> Int -> SetWindowPosFlags -> IO HDWP
deferWindowPos arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 =
  prim_Win32Window_cpp_deferWindowPos arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_deferWindowPos :: Addr -> Addr -> Addr -> Int -> Int -> Int -> Int -> Word32 -> IO (Addr,Int,Addr)

destroyWindow :: HWND -> IO ()
destroyWindow arg1 =
  prim_Win32Window_cpp_destroyWindow arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_destroyWindow :: Addr -> IO (Int,Addr)

endDeferWindowPos :: HDWP -> IO ()
endDeferWindowPos arg1 =
  prim_Win32Window_cpp_endDeferWindowPos arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_endDeferWindowPos :: Addr -> IO (Int,Addr)

findWindow :: String -> String -> IO MbHWND
findWindow gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_string_ gc_arg2) >>= \ (arg2) ->
  prim_Win32Window_cpp_findWindow arg1 arg2 >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_findWindow :: Addr -> Addr -> IO (Addr)

findWindowEx :: HWND -> HWND -> String -> String -> IO MbHWND
findWindowEx arg1 arg2 gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg3) ->
  (marshall_string_ gc_arg2) >>= \ (arg4) ->
  prim_Win32Window_cpp_findWindowEx arg1 arg2 arg3 arg4 >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_findWindowEx :: Addr -> Addr -> Addr -> Addr -> IO (Addr)

flashWindow :: HWND -> Bool -> IO Bool
flashWindow arg1 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Window_cpp_flashWindow arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_flashWindow :: Addr -> Int -> IO (Int)
-- No error code

moveWindow :: HWND -> Int -> Int -> Int -> Int -> Bool -> IO ()
moveWindow arg1 arg2 arg3 arg4 arg5 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg6) ->
  prim_Win32Window_cpp_moveWindow arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_moveWindow :: Addr -> Int -> Int -> Int -> Int -> Int -> IO (Int,Addr)

getDesktopWindow :: IO HWND
getDesktopWindow =
  prim_Win32Window_cpp_getDesktopWindow >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Window_cpp_getDesktopWindow :: IO (Addr)

getForegroundWindow :: IO HWND
getForegroundWindow =
  prim_Win32Window_cpp_getForegroundWindow >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Window_cpp_getForegroundWindow :: IO (Addr)

getParent :: HWND -> IO HWND
getParent arg1 =
  prim_Win32Window_cpp_getParent arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_getParent :: Addr -> IO (Addr,Int,Addr)

getTopWindow :: HWND -> IO HWND
getTopWindow arg1 =
  prim_Win32Window_cpp_getTopWindow arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_getTopWindow :: Addr -> IO (Addr,Int,Addr)


type SetWindowPosFlags = UINT

sWP_NOSIZE :: SetWindowPosFlags
sWP_NOSIZE =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOSIZE :: IO (Word32)
sWP_NOMOVE :: SetWindowPosFlags
sWP_NOMOVE =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOMOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOMOVE :: IO (Word32)
sWP_NOZORDER :: SetWindowPosFlags
sWP_NOZORDER =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOZORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOZORDER :: IO (Word32)
sWP_NOREDRAW :: SetWindowPosFlags
sWP_NOREDRAW =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOREDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOREDRAW :: IO (Word32)
sWP_NOACTIVATE :: SetWindowPosFlags
sWP_NOACTIVATE =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOACTIVATE :: IO (Word32)
sWP_FRAMECHANGED :: SetWindowPosFlags
sWP_FRAMECHANGED =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_FRAMECHANGED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_FRAMECHANGED :: IO (Word32)
sWP_SHOWWINDOW :: SetWindowPosFlags
sWP_SHOWWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_SHOWWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_SHOWWINDOW :: IO (Word32)
sWP_HIDEWINDOW :: SetWindowPosFlags
sWP_HIDEWINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_HIDEWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_HIDEWINDOW :: IO (Word32)
sWP_NOCOPYBITS :: SetWindowPosFlags
sWP_NOCOPYBITS =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOCOPYBITS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOCOPYBITS :: IO (Word32)
sWP_NOOWNERZORDER :: SetWindowPosFlags
sWP_NOOWNERZORDER =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOOWNERZORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOOWNERZORDER :: IO (Word32)
sWP_NOSENDCHANGING :: SetWindowPosFlags
sWP_NOSENDCHANGING =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOSENDCHANGING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOSENDCHANGING :: IO (Word32)
sWP_DRAWFRAME :: SetWindowPosFlags
sWP_DRAWFRAME =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_DRAWFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_DRAWFRAME :: IO (Word32)
sWP_NOREPOSITION :: SetWindowPosFlags
sWP_NOREPOSITION =
  unsafePerformIO(
    prim_Win32Window_cpp_sWP_NOREPOSITION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_sWP_NOREPOSITION :: IO (Word32)

----------------------------------------------------------------
-- HDCs
----------------------------------------------------------------

type GetDCExFlags   = DWORD

dCX_WINDOW :: GetDCExFlags
dCX_WINDOW =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_WINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_WINDOW :: IO (Word32)
dCX_CACHE :: GetDCExFlags
dCX_CACHE =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_CACHE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_CACHE :: IO (Word32)
dCX_CLIPCHILDREN :: GetDCExFlags
dCX_CLIPCHILDREN =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_CLIPCHILDREN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_CLIPCHILDREN :: IO (Word32)
dCX_CLIPSIBLINGS :: GetDCExFlags
dCX_CLIPSIBLINGS =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_CLIPSIBLINGS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_CLIPSIBLINGS :: IO (Word32)
dCX_PARENTCLIP :: GetDCExFlags
dCX_PARENTCLIP =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_PARENTCLIP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_PARENTCLIP :: IO (Word32)
dCX_EXCLUDERGN :: GetDCExFlags
dCX_EXCLUDERGN =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_EXCLUDERGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_EXCLUDERGN :: IO (Word32)
dCX_INTERSECTRGN :: GetDCExFlags
dCX_INTERSECTRGN =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_INTERSECTRGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_INTERSECTRGN :: IO (Word32)
dCX_LOCKWINDOWUPDATE :: GetDCExFlags
dCX_LOCKWINDOWUPDATE =
  unsafePerformIO(
    prim_Win32Window_cpp_dCX_LOCKWINDOWUPDATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Window_cpp_dCX_LOCKWINDOWUPDATE :: IO (Word32)

-- apparently mostly fails if you use invalid hwnds
getDCEx :: HWND -> HRGN -> GetDCExFlags -> IO HDC
getDCEx arg1 arg2 arg3 =
  prim_Win32Window_cpp_getDCEx arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_getDCEx :: Addr -> ForeignObj -> Word32 -> IO (Addr,Int,Addr)

getDC :: MbHWND -> IO HDC
getDC arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Window_cpp_getDC arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_getDC :: Addr -> IO (Addr,Int,Addr)

getWindowDC :: MbHWND -> IO HDC
getWindowDC arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Window_cpp_getWindowDC arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Window_cpp_getWindowDC :: Addr -> IO (Addr,Int,Addr)

releaseDC :: MbHWND -> HDC -> IO ()
releaseDC arg1 arg2 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Window_cpp_releaseDC arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_releaseDC :: Addr -> Addr -> IO (Int,Addr)

getDCOrgEx :: HDC -> IO POINT
getDCOrgEx arg1 =
  prim_Win32Window_cpp_getDCOrgEx arg1 >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))
primitive prim_Win32Window_cpp_getDCOrgEx :: Addr -> IO (Int,Int,Int,Addr)

----------------------------------------------------------------
-- Caret
----------------------------------------------------------------

hideCaret :: HWND -> IO ()
hideCaret arg1 =
  prim_Win32Window_cpp_hideCaret arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_hideCaret :: Addr -> IO (Int,Addr)

showCaret :: HWND -> IO ()
showCaret arg1 =
  prim_Win32Window_cpp_showCaret arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_showCaret :: Addr -> IO (Int,Addr)

-- ToDo: allow arg2 to be NULL or {(HBITMAP)1}
createCaret :: HWND -> HBITMAP -> MbINT -> MbINT -> IO ()
createCaret arg1 arg2 gc_arg1 gc_arg2 =
  (case gc_arg1 of {
      Nothing -> (return (0));
      (Just gc_arg1) -> case ( fromIntegral  gc_arg1) of { arg3 ->
			(return ((arg3)))}
   }) >>= \ (arg3) ->
  (case gc_arg2 of {
      Nothing -> (return (0));
      (Just gc_arg2) -> case ( fromIntegral  gc_arg2) of { arg4 ->
			(return ((arg4)))}
   }) >>= \ (arg4) ->
  prim_Win32Window_cpp_createCaret arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_createCaret :: Addr -> Addr -> Int -> Int -> IO (Int,Addr)

destroyCaret :: IO ()
destroyCaret =
  prim_Win32Window_cpp_destroyCaret >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_destroyCaret :: IO (Int,Addr)

getCaretPos :: IO POINT
getCaretPos =
  prim_Win32Window_cpp_getCaretPos >>= \ (gc_res2,gc_res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       (return ((gc_res1,gc_res3)))
primitive prim_Win32Window_cpp_getCaretPos :: IO (Int,Int,Int,Addr)

setCaretPos :: POINT -> IO ()
setCaretPos gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  prim_Win32Window_cpp_setCaretPos gc_arg3 gc_arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}
primitive prim_Win32Window_cpp_setCaretPos :: Int -> Int -> IO (Int,Addr)

-- The remarks on SetCaretBlinkTime are either highly risible or very sad -
-- depending on whether you plan to use this function.

----------------------------------------------------------------
-- MSGs and event loops
--
-- Note that the following functions have to be reentrant:
--
--   DispatchMessage
--   SendMessage
--   UpdateWindow   (I think)
--   RedrawWindow   (I think)
--
-- The following dont have to be reentrant (according to documentation)
--
--   GetMessage
--   PeekMessage
--   TranslateMessage
--
-- For Hugs (and possibly NHC too?) this is no big deal.
-- For GHC, you have to use casm_GC instead of casm.
-- (It might be simpler to just put all this code in another
-- file and build it with the appropriate command line option...)
----------------------------------------------------------------

-- type MSG = 
--   ( HWND   -- hwnd;	
--   , UINT   -- message;
--   , WPARAM -- wParam;
--   , LPARAM -- lParam;
--   , DWORD  -- time;
--   , POINT  -- pt;
--   )

type LPMSG   = Addr

-- A NULL window requests messages for any window belonging to this thread.
-- a "success" value of 0 indicates that WM_QUIT was received
getMessage :: MbHWND -> IO LPMSG
getMessage arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Window_cpp_getMessage arg1 >>= \ (gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (gc_res1))
primitive prim_Win32Window_cpp_getMessage :: Addr -> IO (Addr,Int,Addr)

getMessage2 :: MbHWND -> IO (LPMSG,Bool)
getMessage2 arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Window_cpp_getMessage2 arg1 >>= \ (gc_res1,gc_res3,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_bool_ gc_res3) >>= \ gc_res2 ->
       (return ((gc_res1,gc_res2)))
primitive prim_Win32Window_cpp_getMessage2 :: Addr -> IO (Addr,Int,Int,Addr)

-- A NULL window requests messages for any window belonging to this thread.
-- Arguably the code block shouldn't be a 'safe' one, but it shouldn't really
-- hurt.
peekMessage :: MbHWND -> UINT -> UINT -> UINT -> IO LPMSG
peekMessage arg1 arg2 arg3 arg4 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Window_cpp_peekMessage arg1 arg2 arg3 arg4 >>= \ (gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (gc_res1))
primitive prim_Win32Window_cpp_peekMessage :: Addr -> Word32 -> Word32 -> Word32 -> IO (Addr,Int,Addr)

-- Note: youre not supposed to call this if youre using accelerators
translateMessage :: LPMSG -> IO BOOL
translateMessage arg1 =
  prim_Win32Window_cpp_translateMessage arg1 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Window_cpp_translateMessage :: Addr -> IO (Int)

updateWindow :: HWND -> IO ()
updateWindow arg1 =
  prim_Win32Window_cpp_updateWindow arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Window_cpp_updateWindow :: Addr -> IO (Int,Addr)

-- Return value of DispatchMessage is usually ignored
dispatchMessage :: LPMSG -> IO LONG
dispatchMessage arg1 =
  prim_Win32Window_cpp_dispatchMessage arg1 >>= \ (res1) ->
  let gc_res1 = ( fromIntegral  (res1)) in
  (return (gc_res1))
primitive prim_Win32Window_cpp_dispatchMessage :: Addr -> IO (Int)

sendMessage :: HWND -> WindowMessage -> WPARAM -> LPARAM -> IO LRESULT
sendMessage arg1 arg2 arg3 gc_arg1 =
  case ( fromIntegral  gc_arg1) of { arg4 ->
  prim_Win32Window_cpp_sendMessage arg1 arg2 arg3 arg4 >>= \ (res1) ->
  let gc_res1 = ( fromIntegral  (res1)) in
  (return (gc_res1))}
primitive prim_Win32Window_cpp_sendMessage :: Addr -> Word32 -> Word32 -> Int -> IO (Int)

----------------------------------------------------------------

-- ToDo: figure out reentrancy stuff
-- ToDo: catch error codes
--
-- ToDo: how to send HWND_BROADCAST to PostMessage
-- %fun PostMessage       :: MbHWND -> WindowMessage -> WPARAM -> LPARAM -> IO ()
-- %fun PostQuitMessage   :: Int -> IO ()
-- %fun PostThreadMessage :: DWORD -> WindowMessage -> WPARAM -> LPARAM -> IO ()
-- %fun InSendMessage     :: IO Bool

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
