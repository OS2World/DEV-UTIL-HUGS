module Win32Control where

import StdDIS
import Win32Types
import GDITypes
import Win32Window
import Win32WinMessage


-- Bindings to the various standard Win32 controls


-- == Command buttons

type ButtonStyle   = WindowStyle

bS_PUSHBUTTON :: ButtonStyle
bS_PUSHBUTTON =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_PUSHBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_PUSHBUTTON :: IO (Word32)
bS_DEFPUSHBUTTON :: ButtonStyle
bS_DEFPUSHBUTTON =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_DEFPUSHBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_DEFPUSHBUTTON :: IO (Word32)
bS_CHECKBOX :: ButtonStyle
bS_CHECKBOX =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_CHECKBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_CHECKBOX :: IO (Word32)
bS_AUTOCHECKBOX :: ButtonStyle
bS_AUTOCHECKBOX =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_AUTOCHECKBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_AUTOCHECKBOX :: IO (Word32)
bS_RADIOBUTTON :: ButtonStyle
bS_RADIOBUTTON =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_RADIOBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_RADIOBUTTON :: IO (Word32)
bS_3STATE :: ButtonStyle
bS_3STATE =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_3STATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_3STATE :: IO (Word32)
bS_AUTO3STATE :: ButtonStyle
bS_AUTO3STATE =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_AUTO3STATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_AUTO3STATE :: IO (Word32)
bS_GROUPBOX :: ButtonStyle
bS_GROUPBOX =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_GROUPBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_GROUPBOX :: IO (Word32)
bS_AUTORADIOBUTTON :: ButtonStyle
bS_AUTORADIOBUTTON =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_AUTORADIOBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_AUTORADIOBUTTON :: IO (Word32)
bS_OWNERDRAW :: ButtonStyle
bS_OWNERDRAW =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_OWNERDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_OWNERDRAW :: IO (Word32)
bS_LEFTTEXT :: ButtonStyle
bS_LEFTTEXT =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_LEFTTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_LEFTTEXT :: IO (Word32)
bS_USERBUTTON :: ButtonStyle
bS_USERBUTTON =
  unsafePerformIO(
    prim_Win32Control_cpp_bS_USERBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bS_USERBUTTON :: IO (Word32)

createButton :: String -> WindowStyle -> ButtonStyle -> MbPos -> MbPos -> MbPos -> MbPos -> MbHWND -> MbHMENU -> HANDLE -> IO HWND
createButton gc_arg1 wstyle bstyle x y w h parent hmenu handle =
  (marshall_string_ gc_arg1) >>= \ (nm) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case w of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just w) -> (return ((w)))
   }) >>= \ (w) ->
  (case h of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just h) -> (return ((h)))
   }) >>= \ (h) ->
  (case parent of {
      Nothing -> (return (nullHANDLE));
      (Just parent) -> (return ((parent)))
   }) >>= \ (parent) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  prim_Win32Control_cpp_createButton nm wstyle bstyle x y w h parent hmenu handle >>= \ (hwnd,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (hwnd))
primitive prim_Win32Control_cpp_createButton :: Addr -> Word32 -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

type ButtonState = UINT

bST_CHECKED :: ButtonState
bST_CHECKED =
  unsafePerformIO(
    prim_Win32Control_cpp_bST_CHECKED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bST_CHECKED :: IO (Word32)
bST_INDETERMINATE :: ButtonState
bST_INDETERMINATE =
  unsafePerformIO(
    prim_Win32Control_cpp_bST_INDETERMINATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bST_INDETERMINATE :: IO (Word32)
bST_UNCHECKED :: ButtonState
bST_UNCHECKED =
  unsafePerformIO(
    prim_Win32Control_cpp_bST_UNCHECKED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_bST_UNCHECKED :: IO (Word32)

checkDlgButton :: HWND -> Int -> ButtonState -> IO ()
checkDlgButton arg1 arg2 arg3 =
  prim_Win32Control_cpp_checkDlgButton arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Control_cpp_checkDlgButton :: Addr -> Int -> Word32 -> IO (Int,Addr)

checkRadioButton :: HWND -> Int -> Int -> Int -> IO ()
checkRadioButton arg1 arg2 arg3 arg4 =
  prim_Win32Control_cpp_checkRadioButton arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Control_cpp_checkRadioButton :: Addr -> Int -> Int -> Int -> IO (Int,Addr)

isDlgButtonChecked :: HWND -> Int -> IO ButtonState
isDlgButtonChecked arg1 arg2 =
  prim_Win32Control_cpp_isDlgButtonChecked arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Control_cpp_isDlgButtonChecked :: Addr -> Int -> IO (Word32,Int,Addr)


-- == ComboBoxes aka. pop up list boxes/selectors.

type ComboBoxStyle = WindowStyle

cBS_SIMPLE :: ComboBoxStyle
cBS_SIMPLE =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_SIMPLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_SIMPLE :: IO (Word32)
cBS_DROPDOWN :: ComboBoxStyle
cBS_DROPDOWN =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_DROPDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_DROPDOWN :: IO (Word32)
cBS_DROPDOWNLIST :: ComboBoxStyle
cBS_DROPDOWNLIST =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_DROPDOWNLIST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_DROPDOWNLIST :: IO (Word32)
cBS_OWNERDRAWFIXED :: ComboBoxStyle
cBS_OWNERDRAWFIXED =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_OWNERDRAWFIXED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_OWNERDRAWFIXED :: IO (Word32)
cBS_OWNERDRAWVARIABLE :: ComboBoxStyle
cBS_OWNERDRAWVARIABLE =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_OWNERDRAWVARIABLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_OWNERDRAWVARIABLE :: IO (Word32)
cBS_AUTOHSCROLL :: ComboBoxStyle
cBS_AUTOHSCROLL =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_AUTOHSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_AUTOHSCROLL :: IO (Word32)
cBS_OEMCONVERT :: ComboBoxStyle
cBS_OEMCONVERT =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_OEMCONVERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_OEMCONVERT :: IO (Word32)
cBS_SORT :: ComboBoxStyle
cBS_SORT =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_SORT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_SORT :: IO (Word32)
cBS_HASSTRINGS :: ComboBoxStyle
cBS_HASSTRINGS =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_HASSTRINGS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_HASSTRINGS :: IO (Word32)
cBS_NOINTEGRALHEIGHT :: ComboBoxStyle
cBS_NOINTEGRALHEIGHT =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_NOINTEGRALHEIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_NOINTEGRALHEIGHT :: IO (Word32)
cBS_DISABLENOSCROLL :: ComboBoxStyle
cBS_DISABLENOSCROLL =
  unsafePerformIO(
    prim_Win32Control_cpp_cBS_DISABLENOSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_cBS_DISABLENOSCROLL :: IO (Word32)

createComboBox :: String -> WindowStyle -> ComboBoxStyle -> MbPos -> MbPos -> MbPos -> MbPos -> HWND -> MbHMENU -> HANDLE -> IO HWND
createComboBox gc_arg1 wstyle cstyle x y w h parent hmenu handle =
  (marshall_string_ gc_arg1) >>= \ (nm) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case w of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just w) -> (return ((w)))
   }) >>= \ (w) ->
  (case h of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just h) -> (return ((h)))
   }) >>= \ (h) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  prim_Win32Control_cpp_createComboBox nm wstyle cstyle x y w h parent hmenu handle >>= \ (hwnd,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (hwnd))
primitive prim_Win32Control_cpp_createComboBox :: Addr -> Word32 -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

-- see comment about freeing windowNames in Win32Window.createWindow
-- %end free(nm)


--- == Edit controls

----------------------------------------------------------------

type EditStyle = WindowStyle

eS_LEFT :: EditStyle
eS_LEFT =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_LEFT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_LEFT :: IO (Word32)
eS_CENTER :: EditStyle
eS_CENTER =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_CENTER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_CENTER :: IO (Word32)
eS_RIGHT :: EditStyle
eS_RIGHT =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_RIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_RIGHT :: IO (Word32)
eS_MULTILINE :: EditStyle
eS_MULTILINE =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_MULTILINE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_MULTILINE :: IO (Word32)
eS_UPPERCASE :: EditStyle
eS_UPPERCASE =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_UPPERCASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_UPPERCASE :: IO (Word32)
eS_LOWERCASE :: EditStyle
eS_LOWERCASE =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_LOWERCASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_LOWERCASE :: IO (Word32)
eS_PASSWORD :: EditStyle
eS_PASSWORD =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_PASSWORD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_PASSWORD :: IO (Word32)
eS_AUTOVSCROLL :: EditStyle
eS_AUTOVSCROLL =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_AUTOVSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_AUTOVSCROLL :: IO (Word32)
eS_AUTOHSCROLL :: EditStyle
eS_AUTOHSCROLL =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_AUTOHSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_AUTOHSCROLL :: IO (Word32)
eS_NOHIDESEL :: EditStyle
eS_NOHIDESEL =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_NOHIDESEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_NOHIDESEL :: IO (Word32)
eS_OEMCONVERT :: EditStyle
eS_OEMCONVERT =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_OEMCONVERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_OEMCONVERT :: IO (Word32)
eS_READONLY :: EditStyle
eS_READONLY =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_READONLY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_READONLY :: IO (Word32)
eS_WANTRETURN :: EditStyle
eS_WANTRETURN =
  unsafePerformIO(
    prim_Win32Control_cpp_eS_WANTRETURN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_eS_WANTRETURN :: IO (Word32)

createEditWindow :: String -> WindowStyle -> EditStyle -> MbPos -> MbPos -> MbPos -> MbPos -> HWND -> MbHMENU -> HANDLE -> IO HWND
createEditWindow gc_arg1 wstyle estyle x y w h parent hmenu handle =
  (marshall_string_ gc_arg1) >>= \ (nm) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case w of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just w) -> (return ((w)))
   }) >>= \ (w) ->
  (case h of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just h) -> (return ((h)))
   }) >>= \ (h) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  prim_Win32Control_cpp_createEditWindow nm wstyle estyle x y w h parent hmenu handle >>= \ (hwnd,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (hwnd))
primitive prim_Win32Control_cpp_createEditWindow :: Addr -> Word32 -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

-- see comment about freeing windowNames in Win32Window.createWindow
-- %end free(nm)

-- == List boxes


----------------------------------------------------------------

type ListBoxStyle   = WindowStyle

lBS_NOTIFY :: ListBoxStyle
lBS_NOTIFY =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_NOTIFY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_NOTIFY :: IO (Word32)
lBS_SORT :: ListBoxStyle
lBS_SORT =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_SORT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_SORT :: IO (Word32)
lBS_NOREDRAW :: ListBoxStyle
lBS_NOREDRAW =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_NOREDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_NOREDRAW :: IO (Word32)
lBS_MULTIPLESEL :: ListBoxStyle
lBS_MULTIPLESEL =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_MULTIPLESEL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_MULTIPLESEL :: IO (Word32)
lBS_OWNERDRAWFIXED :: ListBoxStyle
lBS_OWNERDRAWFIXED =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_OWNERDRAWFIXED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_OWNERDRAWFIXED :: IO (Word32)
lBS_OWNERDRAWVARIABLE :: ListBoxStyle
lBS_OWNERDRAWVARIABLE =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_OWNERDRAWVARIABLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_OWNERDRAWVARIABLE :: IO (Word32)
lBS_HASSTRINGS :: ListBoxStyle
lBS_HASSTRINGS =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_HASSTRINGS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_HASSTRINGS :: IO (Word32)
lBS_USETABSTOPS :: ListBoxStyle
lBS_USETABSTOPS =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_USETABSTOPS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_USETABSTOPS :: IO (Word32)
lBS_NOINTEGRALHEIGHT :: ListBoxStyle
lBS_NOINTEGRALHEIGHT =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_NOINTEGRALHEIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_NOINTEGRALHEIGHT :: IO (Word32)
lBS_MULTICOLUMN :: ListBoxStyle
lBS_MULTICOLUMN =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_MULTICOLUMN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_MULTICOLUMN :: IO (Word32)
lBS_WANTKEYBOARDINPUT :: ListBoxStyle
lBS_WANTKEYBOARDINPUT =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_WANTKEYBOARDINPUT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_WANTKEYBOARDINPUT :: IO (Word32)
lBS_DISABLENOSCROLL :: ListBoxStyle
lBS_DISABLENOSCROLL =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_DISABLENOSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_DISABLENOSCROLL :: IO (Word32)
lBS_STANDARD :: ListBoxStyle
lBS_STANDARD =
  unsafePerformIO(
    prim_Win32Control_cpp_lBS_STANDARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_lBS_STANDARD :: IO (Word32)

createListBox :: String -> WindowStyle -> ListBoxStyle -> MbPos -> MbPos -> MbPos -> MbPos -> HWND -> MbHMENU -> HANDLE -> IO HWND
createListBox gc_arg1 wstyle lstyle x y w h parent hmenu handle =
  (marshall_string_ gc_arg1) >>= \ (nm) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case w of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just w) -> (return ((w)))
   }) >>= \ (w) ->
  (case h of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just h) -> (return ((h)))
   }) >>= \ (h) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  prim_Win32Control_cpp_createListBox nm wstyle lstyle x y w h parent hmenu handle >>= \ (hwnd,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (hwnd))
primitive prim_Win32Control_cpp_createListBox :: Addr -> Word32 -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

-- see comment about freeing windowNames in Win32Window.createWindow
-- %end free(nm)

-- == Scrollbars


----------------------------------------------------------------

type ScrollbarStyle = WindowStyle

sBS_HORZ :: ScrollbarStyle
sBS_HORZ =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_HORZ >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_HORZ :: IO (Word32)
sBS_TOPALIGN :: ScrollbarStyle
sBS_TOPALIGN =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_TOPALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_TOPALIGN :: IO (Word32)
sBS_BOTTOMALIGN :: ScrollbarStyle
sBS_BOTTOMALIGN =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_BOTTOMALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_BOTTOMALIGN :: IO (Word32)
sBS_VERT :: ScrollbarStyle
sBS_VERT =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_VERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_VERT :: IO (Word32)
sBS_LEFTALIGN :: ScrollbarStyle
sBS_LEFTALIGN =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_LEFTALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_LEFTALIGN :: IO (Word32)
sBS_RIGHTALIGN :: ScrollbarStyle
sBS_RIGHTALIGN =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_RIGHTALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_RIGHTALIGN :: IO (Word32)
sBS_SIZEBOX :: ScrollbarStyle
sBS_SIZEBOX =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_SIZEBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_SIZEBOX :: IO (Word32)
sBS_SIZEBOXTOPLEFTALIGN :: ScrollbarStyle
sBS_SIZEBOXTOPLEFTALIGN =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_SIZEBOXTOPLEFTALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_SIZEBOXTOPLEFTALIGN :: IO (Word32)
sBS_SIZEBOXBOTTOMRIGHTALIGN :: ScrollbarStyle
sBS_SIZEBOXBOTTOMRIGHTALIGN =
  unsafePerformIO(
    prim_Win32Control_cpp_sBS_SIZEBOXBOTTOMRIGHTALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sBS_SIZEBOXBOTTOMRIGHTALIGN :: IO (Word32)

createScrollbar :: String -> WindowStyle -> ScrollbarStyle -> MbPos -> MbPos -> MbPos -> MbPos -> HWND -> MbHMENU -> HANDLE -> IO HWND
createScrollbar gc_arg1 wstyle sstyle x y w h parent hmenu handle =
  (marshall_string_ gc_arg1) >>= \ (nm) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case w of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just w) -> (return ((w)))
   }) >>= \ (w) ->
  (case h of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just h) -> (return ((h)))
   }) >>= \ (h) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  prim_Win32Control_cpp_createScrollbar nm wstyle sstyle x y w h parent hmenu handle >>= \ (hwnd,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (hwnd))
primitive prim_Win32Control_cpp_createScrollbar :: Addr -> Word32 -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

-- see comment about freeing windowNames in Win32Window.createWindow
-- %end free(nm)

-- == Static controls aka. labels


----------------------------------------------------------------

type StaticControlStyle = WindowStyle

sS_LEFT :: StaticControlStyle
sS_LEFT =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_LEFT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_LEFT :: IO (Word32)
sS_CENTER :: StaticControlStyle
sS_CENTER =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_CENTER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_CENTER :: IO (Word32)
sS_RIGHT :: StaticControlStyle
sS_RIGHT =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_RIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_RIGHT :: IO (Word32)
sS_ICON :: StaticControlStyle
sS_ICON =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_ICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_ICON :: IO (Word32)
sS_BLACKRECT :: StaticControlStyle
sS_BLACKRECT =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_BLACKRECT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_BLACKRECT :: IO (Word32)
sS_GRAYRECT :: StaticControlStyle
sS_GRAYRECT =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_GRAYRECT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_GRAYRECT :: IO (Word32)
sS_WHITERECT :: StaticControlStyle
sS_WHITERECT =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_WHITERECT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_WHITERECT :: IO (Word32)
sS_BLACKFRAME :: StaticControlStyle
sS_BLACKFRAME =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_BLACKFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_BLACKFRAME :: IO (Word32)
sS_GRAYFRAME :: StaticControlStyle
sS_GRAYFRAME =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_GRAYFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_GRAYFRAME :: IO (Word32)
sS_WHITEFRAME :: StaticControlStyle
sS_WHITEFRAME =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_WHITEFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_WHITEFRAME :: IO (Word32)
sS_SIMPLE :: StaticControlStyle
sS_SIMPLE =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_SIMPLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_SIMPLE :: IO (Word32)
sS_LEFTNOWORDWRAP :: StaticControlStyle
sS_LEFTNOWORDWRAP =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_LEFTNOWORDWRAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_LEFTNOWORDWRAP :: IO (Word32)
sS_NOPREFIX :: StaticControlStyle
sS_NOPREFIX =
  unsafePerformIO(
    prim_Win32Control_cpp_sS_NOPREFIX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_sS_NOPREFIX :: IO (Word32)

createStaticWindow :: String -> WindowStyle -> StaticControlStyle -> MbPos -> MbPos -> MbPos -> MbPos -> HWND -> MbHMENU -> HANDLE -> IO HWND
createStaticWindow gc_arg1 wstyle sstyle x y w h parent hmenu handle =
  (marshall_string_ gc_arg1) >>= \ (nm) ->
  (case x of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just x) -> (return ((x)))
   }) >>= \ (x) ->
  (case y of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just y) -> (return ((y)))
   }) >>= \ (y) ->
  (case w of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just w) -> (return ((w)))
   }) >>= \ (w) ->
  (case h of {
      Nothing -> (return (cW_USEDEFAULT));
      (Just h) -> (return ((h)))
   }) >>= \ (h) ->
  (case hmenu of {
      Nothing -> (return (nullHANDLE));
      (Just hmenu) -> (return ((hmenu)))
   }) >>= \ (hmenu) ->
  prim_Win32Control_cpp_createStaticWindow nm wstyle sstyle x y w h parent hmenu handle >>= \ (hwnd,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (hwnd))
primitive prim_Win32Control_cpp_createStaticWindow :: Addr -> Word32 -> Word32 -> Int -> Int -> Int -> Int -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

-- see comment about freeing windowNames in Win32Window.createWindow
-- %end free(nm)

{- UNTESTED - leave out

type CommonControl   = Addr
%dis commonControl x = addr ({LPCTSTR} x)

%const CommonControl
% [ ToolTipsControl = {TOOLTIPS_CLASS}
% , TrackBarControl = {TRACKBAR_CLASS}
% , UpDownControl  = {UPDOWN_CLASS}
% , ProgressBarControl = {PROGRESS_CLASS}
% , HotKeyControl  = {HOTKEY_CLASS}
% , AnimateControl     = {ANIMATE_CLASS}
% , StatusControl     =  {STATUSCLASSNAME}
% , HeaderControl     =  {WC_HEADER}
% , ListViewControl   =  {WC_LISTVIEW}
% , TabControl        =  {WC_TABCONTROL}
% , TreeViewControl   =  {WC_TREEVIEW}
% ]

-- not defined in the header files supplied with cygwin b20.1:
-- 
-- % , MonthCalControl    = {MONTHCAL_CLASS}
-- % , DateTimePickControl = {DATETIMEPICK_CLASS}
-- % , ReBarControl      =  {REBARCLASSNAME}
-- % , ComboBoxExControl =  {WC_COMBOBOXEX}
-- % , IPAddressControl  =  {WC_IPADDRESS}
-- % , PageScrollerControl = {WC_PAGESCROLLER}


%fun createCommonControl
%    :: CommonControl -> WindowStyle -> String -> WindowStyle
%    -> MbPos -> MbPos -> MbPos -> MbPos 
%    -> MbHWND -> MbHMENU -> HANDLE 
%    -> IO HWND
%call (commonControl c) (windowStyle estyle) (string nm) (windowStyle wstyle)
%     (mbPos x) (mbPos y) (mbPos w) (mbPos h) 
%     (mbHWND parent) (mbHMENU hmenu) (hANDLE handle)
%code hwnd = CreateWindowEx(estyle, c, nm,wstyle,x,y,w,h,parent,hmenu,handle,NULL);
%fail { hwnd == NULL } { ErrorWin("CreateCommonControl") }
%result (hWND hwnd)

%fun InitCommonControls :: IO ()

-}

pBM_DELTAPOS :: WindowMessage
pBM_DELTAPOS =
  unsafePerformIO(
    prim_Win32Control_cpp_pBM_DELTAPOS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_pBM_DELTAPOS :: IO (Word32)
pBM_SETPOS :: WindowMessage
pBM_SETPOS =
  unsafePerformIO(
    prim_Win32Control_cpp_pBM_SETPOS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_pBM_SETPOS :: IO (Word32)
pBM_SETRANGE :: WindowMessage
pBM_SETRANGE =
  unsafePerformIO(
    prim_Win32Control_cpp_pBM_SETRANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_pBM_SETRANGE :: IO (Word32)
pBM_SETSTEP :: WindowMessage
pBM_SETSTEP =
  unsafePerformIO(
    prim_Win32Control_cpp_pBM_SETSTEP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_pBM_SETSTEP :: IO (Word32)
pBM_STEPIT :: WindowMessage
pBM_STEPIT =
  unsafePerformIO(
    prim_Win32Control_cpp_pBM_STEPIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Control_cpp_pBM_STEPIT :: IO (Word32)

-- % , PBM_GETRANGE
-- % , PBM_GETPOS
-- % , PBM_SETBARCOLOR
-- % , PBM_SETBKCOLOR
-- % , PBM_SETRANGE32
needPrims_hugs 2
