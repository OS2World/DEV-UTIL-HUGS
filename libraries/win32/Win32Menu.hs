module Win32Menu 
{-
       (
         MenuName
       , checkMenuItem
       , checkMenuRadioItem
       , createMenu
       , createPopupMenu
       , deleteMenu
       , destroyMenu
       , drawMenuBar
       , enableMenuItem
       , getMenu
       , getMenuDefaultItem
       , getMenuItemCount
       , getMenuItemID
       , getMenuItemInfo
       , getMenuItemRect
       , getMenuState
       , getSubMenu
       , getSystemMenu
       , hiliteMenuItem
       , insertMenuItem
       , isMenu
       , loadMenu
       , menuItemFromPoint
       , setMenu
       , setMenuDefaultItem
       , setMenuItemBitmaps
       , setMenuItemInfo
       , trackPopupMenu
       , trackPopupMenuEx
       
       , GMDIFlag(..)
       , MenuItem(..)
       , MenuFlag(..)
       , MenuState(..)
       , TrackMenuFlag(..)
       , SystemMenuCommand(..)

         -- Obsolete:
       , appendMenu
       , insertMenu
       , modifyMenu
       , removeMenu
       
       ) -} where

import StdDIS
  
import Win32Types
import GDITypes


type MenuName = LPCSTR



checkMenuItem :: HMENU -> MenuItem -> MenuFlag -> IO Bool
checkMenuItem arg1 arg2 arg3 =
  prim_Win32Menu_cpp_checkMenuItem arg1 arg2 arg3 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_bool_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Menu_cpp_checkMenuItem :: Addr -> Word32 -> Word32 -> IO (Int,Int,Addr)

checkMenuRadioItem :: HMENU -> MenuItem -> MenuItem -> MenuItem -> MenuFlag -> IO ()
checkMenuRadioItem arg1 arg2 arg3 arg4 arg5 =
  prim_Win32Menu_cpp_checkMenuRadioItem arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_checkMenuRadioItem :: Addr -> Word32 -> Word32 -> Word32 -> Word32 -> IO (Int,Addr)

createMenu :: IO HMENU
createMenu =
  prim_Win32Menu_cpp_createMenu >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_createMenu :: IO (Addr,Int,Addr)

createPopupMenu :: IO HMENU
createPopupMenu =
  prim_Win32Menu_cpp_createPopupMenu >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_createPopupMenu :: IO (Addr,Int,Addr)

drawMenuBar :: HWND -> IO ()
drawMenuBar arg1 =
  prim_Win32Menu_cpp_drawMenuBar arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_drawMenuBar :: Addr -> IO (Int,Addr)

type MenuState = MenuFlag

enableMenuItem :: HMENU -> MenuItem -> MenuFlag -> IO MenuState
enableMenuItem arg1 arg2 arg3 =
  prim_Win32Menu_cpp_enableMenuItem arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_enableMenuItem :: Addr -> Word32 -> Word32 -> IO (Word32,Int,Addr)

type GMDIFlag = UINT

type MenuFlag = UINT

gMDI_USEDISABLED :: GMDIFlag
gMDI_USEDISABLED =
  unsafePerformIO(
    prim_Win32Menu_cpp_gMDI_USEDISABLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_gMDI_USEDISABLED :: IO (Word32)
gMDI_GOINTOPOPUPS :: GMDIFlag
gMDI_GOINTOPOPUPS =
  unsafePerformIO(
    prim_Win32Menu_cpp_gMDI_GOINTOPOPUPS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_gMDI_GOINTOPOPUPS :: IO (Word32)
mF_BYCOMMAND :: MenuFlag
mF_BYCOMMAND =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_BYCOMMAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_BYCOMMAND :: IO (Word32)
mF_BYPOSITION :: MenuFlag
mF_BYPOSITION =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_BYPOSITION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_BYPOSITION :: IO (Word32)

type MenuItem = UINT

mF_INSERT :: MenuItem
mF_INSERT =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_INSERT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_INSERT :: IO (Word32)
mF_CHANGE :: MenuItem
mF_CHANGE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_CHANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_CHANGE :: IO (Word32)
mF_APPEND :: MenuItem
mF_APPEND =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_APPEND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_APPEND :: IO (Word32)
mF_DELETE :: MenuItem
mF_DELETE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_DELETE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_DELETE :: IO (Word32)
mF_REMOVE :: MenuItem
mF_REMOVE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_REMOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_REMOVE :: IO (Word32)
mF_USECHECKBITMAPS :: MenuItem
mF_USECHECKBITMAPS =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_USECHECKBITMAPS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_USECHECKBITMAPS :: IO (Word32)
mF_POPUP :: MenuItem
mF_POPUP =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_POPUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_POPUP :: IO (Word32)
mF_SYSMENU :: MenuItem
mF_SYSMENU =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_SYSMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_SYSMENU :: IO (Word32)
mF_HELP :: MenuItem
mF_HELP =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_HELP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_HELP :: IO (Word32)
mF_MOUSESELECT :: MenuItem
mF_MOUSESELECT =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_MOUSESELECT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_MOUSESELECT :: IO (Word32)
mF_END :: MenuItem
mF_END =
  unsafePerformIO(
    prim_Win32Menu_cpp_mF_END >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mF_END :: IO (Word32)

mFT_STRING :: MenuFlag
mFT_STRING =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_STRING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_STRING :: IO (Word32)
mFT_BITMAP :: MenuFlag
mFT_BITMAP =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_BITMAP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_BITMAP :: IO (Word32)
mFT_MENUBARBREAK :: MenuFlag
mFT_MENUBARBREAK =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_MENUBARBREAK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_MENUBARBREAK :: IO (Word32)
mFT_MENUBREAK :: MenuFlag
mFT_MENUBREAK =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_MENUBREAK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_MENUBREAK :: IO (Word32)
mFT_OWNERDRAW :: MenuFlag
mFT_OWNERDRAW =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_OWNERDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_OWNERDRAW :: IO (Word32)
mFT_RADIOCHECK :: MenuFlag
mFT_RADIOCHECK =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_RADIOCHECK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_RADIOCHECK :: IO (Word32)
mFT_SEPARATOR :: MenuFlag
mFT_SEPARATOR =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_SEPARATOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_SEPARATOR :: IO (Word32)
mFT_RIGHTORDER :: MenuFlag
mFT_RIGHTORDER =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_RIGHTORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_RIGHTORDER :: IO (Word32)
mFT_RIGHTJUSTIFY :: MenuFlag
mFT_RIGHTJUSTIFY =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFT_RIGHTJUSTIFY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFT_RIGHTJUSTIFY :: IO (Word32)


mFS_GRAYED :: MenuState
mFS_GRAYED =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_GRAYED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_GRAYED :: IO (Word32)
mFS_DISABLED :: MenuState
mFS_DISABLED =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_DISABLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_DISABLED :: IO (Word32)
mFS_CHECKED :: MenuState
mFS_CHECKED =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_CHECKED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_CHECKED :: IO (Word32)
mFS_HILITE :: MenuState
mFS_HILITE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_HILITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_HILITE :: IO (Word32)
mFS_ENABLED :: MenuState
mFS_ENABLED =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_ENABLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_ENABLED :: IO (Word32)
mFS_UNCHECKED :: MenuState
mFS_UNCHECKED =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_UNCHECKED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_UNCHECKED :: IO (Word32)
mFS_UNHILITE :: MenuState
mFS_UNHILITE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_UNHILITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_UNHILITE :: IO (Word32)
mFS_DEFAULT :: MenuState
mFS_DEFAULT =
  unsafePerformIO(
    prim_Win32Menu_cpp_mFS_DEFAULT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mFS_DEFAULT :: IO (Word32)

type TrackMenuFlag = UINT

tPM_LEFTBUTTON :: TrackMenuFlag
tPM_LEFTBUTTON =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_LEFTBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_LEFTBUTTON :: IO (Word32)
tPM_RIGHTBUTTON :: TrackMenuFlag
tPM_RIGHTBUTTON =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_RIGHTBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_RIGHTBUTTON :: IO (Word32)
tPM_LEFTALIGN :: TrackMenuFlag
tPM_LEFTALIGN =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_LEFTALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_LEFTALIGN :: IO (Word32)
tPM_CENTERALIGN :: TrackMenuFlag
tPM_CENTERALIGN =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_CENTERALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_CENTERALIGN :: IO (Word32)
tPM_RIGHTALIGN :: TrackMenuFlag
tPM_RIGHTALIGN =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_RIGHTALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_RIGHTALIGN :: IO (Word32)
tPM_TOPALIGN :: TrackMenuFlag
tPM_TOPALIGN =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_TOPALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_TOPALIGN :: IO (Word32)
tPM_VCENTERALIGN :: TrackMenuFlag
tPM_VCENTERALIGN =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_VCENTERALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_VCENTERALIGN :: IO (Word32)
tPM_BOTTOMALIGN :: TrackMenuFlag
tPM_BOTTOMALIGN =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_BOTTOMALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_BOTTOMALIGN :: IO (Word32)
tPM_HORIZONTAL :: TrackMenuFlag
tPM_HORIZONTAL =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_HORIZONTAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_HORIZONTAL :: IO (Word32)
tPM_VERTICAL :: TrackMenuFlag
tPM_VERTICAL =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_VERTICAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_VERTICAL :: IO (Word32)
tPM_NONOTIFY :: TrackMenuFlag
tPM_NONOTIFY =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_NONOTIFY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_NONOTIFY :: IO (Word32)
tPM_RETURNCMD :: TrackMenuFlag
tPM_RETURNCMD =
  unsafePerformIO(
    prim_Win32Menu_cpp_tPM_RETURNCMD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_tPM_RETURNCMD :: IO (Word32)

type SystemMenuCommand = UINT

sC_SIZE :: SystemMenuCommand
sC_SIZE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_SIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_SIZE :: IO (Word32)
sC_MOVE :: SystemMenuCommand
sC_MOVE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_MOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_MOVE :: IO (Word32)
sC_MINIMIZE :: SystemMenuCommand
sC_MINIMIZE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_MINIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_MINIMIZE :: IO (Word32)
sC_MAXIMIZE :: SystemMenuCommand
sC_MAXIMIZE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_MAXIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_MAXIMIZE :: IO (Word32)
sC_NEXTWINDOW :: SystemMenuCommand
sC_NEXTWINDOW =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_NEXTWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_NEXTWINDOW :: IO (Word32)
sC_PREVWINDOW :: SystemMenuCommand
sC_PREVWINDOW =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_PREVWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_PREVWINDOW :: IO (Word32)
sC_CLOSE :: SystemMenuCommand
sC_CLOSE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_CLOSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_CLOSE :: IO (Word32)
sC_VSCROLL :: SystemMenuCommand
sC_VSCROLL =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_VSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_VSCROLL :: IO (Word32)
sC_HSCROLL :: SystemMenuCommand
sC_HSCROLL =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_HSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_HSCROLL :: IO (Word32)
sC_MOUSEMENU :: SystemMenuCommand
sC_MOUSEMENU =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_MOUSEMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_MOUSEMENU :: IO (Word32)
sC_KEYMENU :: SystemMenuCommand
sC_KEYMENU =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_KEYMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_KEYMENU :: IO (Word32)
sC_ARRANGE :: SystemMenuCommand
sC_ARRANGE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_ARRANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_ARRANGE :: IO (Word32)
sC_RESTORE :: SystemMenuCommand
sC_RESTORE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_RESTORE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_RESTORE :: IO (Word32)
sC_TASKLIST :: SystemMenuCommand
sC_TASKLIST =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_TASKLIST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_TASKLIST :: IO (Word32)
sC_SCREENSAVE :: SystemMenuCommand
sC_SCREENSAVE =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_SCREENSAVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_SCREENSAVE :: IO (Word32)
sC_HOTKEY :: SystemMenuCommand
sC_HOTKEY =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_HOTKEY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_HOTKEY :: IO (Word32)
sC_DEFAULT :: SystemMenuCommand
sC_DEFAULT =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_DEFAULT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_DEFAULT :: IO (Word32)
sC_MONITORPOWER :: SystemMenuCommand
sC_MONITORPOWER =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_MONITORPOWER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_MONITORPOWER :: IO (Word32)
sC_CONTEXTHELP :: SystemMenuCommand
sC_CONTEXTHELP =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_CONTEXTHELP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_CONTEXTHELP :: IO (Word32)
sC_SEPARATOR :: SystemMenuCommand
sC_SEPARATOR =
  unsafePerformIO(
    prim_Win32Menu_cpp_sC_SEPARATOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_sC_SEPARATOR :: IO (Word32)

isMenu :: HMENU -> IO Bool
isMenu arg1 =
  prim_Win32Menu_cpp_isMenu arg1 >>= \ (gc_res2) ->
  (unmarshall_bool_ gc_res2) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Menu_cpp_isMenu :: Addr -> IO (Int)

getSystemMenu :: HWND -> Bool -> IO MbHMENU
getSystemMenu arg1 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Menu_cpp_getSystemMenu arg1 arg2 >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Menu_cpp_getSystemMenu :: Addr -> Int -> IO (Addr)

getMenu :: HWND -> IO MbHMENU
getMenu arg1 =
  prim_Win32Menu_cpp_getMenu arg1 >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Menu_cpp_getMenu :: Addr -> IO (Addr)

getMenuDefaultItem :: HMENU -> Bool -> GMDIFlag -> IO MenuItem
getMenuDefaultItem arg1 gc_arg1 arg3 =
  (marshall_bool_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Menu_cpp_getMenuDefaultItem arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_getMenuDefaultItem :: Addr -> Int -> Word32 -> IO (Word32,Int,Addr)

getMenuState :: HMENU -> MenuItem -> MenuFlag -> IO MenuState
getMenuState arg1 arg2 arg3 =
  prim_Win32Menu_cpp_getMenuState arg1 arg2 arg3 >>= \ (res,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res))
primitive prim_Win32Menu_cpp_getMenuState :: Addr -> Word32 -> Word32 -> IO (Word32,Int,Addr)


getSubMenu :: HMENU -> MenuItem -> IO MbHMENU
getSubMenu arg1 arg2 =
  prim_Win32Menu_cpp_getSubMenu arg1 arg2 >>= \ (res1) ->
  (if nullHANDLE == (res1)
   then return Nothing
   else (return ((Just res1)))) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Menu_cpp_getSubMenu :: Addr -> Word32 -> IO (Addr)

setMenu :: HWND -> HMENU -> IO ()
setMenu arg1 arg2 =
  prim_Win32Menu_cpp_setMenu arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_setMenu :: Addr -> Addr -> IO (Int,Addr)

getMenuItemCount :: HMENU -> IO Int
getMenuItemCount arg1 =
  prim_Win32Menu_cpp_getMenuItemCount arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_getMenuItemCount :: Addr -> IO (Int,Int,Addr)

type MenuID = UINT

getMenuItemID :: HMENU -> MenuItem -> IO MenuID
getMenuItemID arg1 arg2 =
  prim_Win32Menu_cpp_getMenuItemID arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_getMenuItemID :: Addr -> Word32 -> IO (Word32,Int,Addr)

data MenuItemInfo
 = MenuItemInfo  {
      menuItemType    :: MenuFlag,
      menuItemState   :: MenuState,
      menuItemID      :: UINT,
      menuItemSubMenu :: HMENU,
      menuItemBitmapChecked :: HBITMAP,
      menuItemBitmapUnchecked :: HBITMAP,
      menuItemData    :: DWORD,
      menuItemTypeData :: String
   }



marshall_menuItemInfo :: MenuItemInfo -> IO Addr
marshall_menuItemInfo (MenuItemInfo miType 
				    miState
				    miItemID
				    miSubMenu
				    miChecked
				    miUnchecked
				    miData
				    miTypeData) = do
  ptr <- mallocMenuItemInfo
  pstr <- marshall_string_ miTypeData
  assignMenuItemInfo ptr
                     miType miState miItemID miSubMenu 
                     miChecked miUnchecked miData pstr (length miTypeData)
  return ptr

unmarshall_menuItemInfo :: Addr -> IO MenuItemInfo
unmarshall_menuItemInfo ptr = do
   mi <- unravelItemInfo ptr
   free ptr
   return mi

unravelItemInfo :: Addr -> IO MenuItemInfo
unravelItemInfo arg1 =
  prim_Win32Menu_cpp_unravelItemInfo arg1 >>= \ (gc_res1,gc_res2,gc_res3,gc_res4,gc_res5,gc_res6,gc_res7,gc_res9,gc_res10) ->
  (unmarshall_stringLen_ gc_res9 gc_res10) >>= \ gc_res8 ->
  (return ((MenuItemInfo gc_res1 gc_res2 gc_res3 gc_res4 gc_res5 gc_res6 gc_res7 gc_res8)))
primitive prim_Win32Menu_cpp_unravelItemInfo :: Addr -> IO (Word32,Word32,Word32,Addr,Addr,Addr,Word32,Addr,Int)

mallocMenuItemInfo :: IO Addr
mallocMenuItemInfo =
  prim_Win32Menu_cpp_mallocMenuItemInfo >>= \ (mp,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (mp))
primitive prim_Win32Menu_cpp_mallocMenuItemInfo :: IO (Addr,Int,Addr)

assignMenuItemInfo :: Addr -> UINT -> UINT -> UINT -> HMENU -> HBITMAP -> HBITMAP -> DWORD -> Addr -> Int -> IO ()
assignMenuItemInfo arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 =
  prim_Win32Menu_cpp_assignMenuItemInfo arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10
primitive prim_Win32Menu_cpp_assignMenuItemInfo :: Addr -> Word32 -> Word32 -> Word32 -> Addr -> Addr -> Addr -> Word32 -> Addr -> Int -> IO ()

type MenuItemMask = UINT

mIIM_CHECKMARKS :: MenuItemMask
mIIM_CHECKMARKS =
  unsafePerformIO(
    prim_Win32Menu_cpp_mIIM_CHECKMARKS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mIIM_CHECKMARKS :: IO (Word32)
mIIM_DATA :: MenuItemMask
mIIM_DATA =
  unsafePerformIO(
    prim_Win32Menu_cpp_mIIM_DATA >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mIIM_DATA :: IO (Word32)
mIIM_ID :: MenuItemMask
mIIM_ID =
  unsafePerformIO(
    prim_Win32Menu_cpp_mIIM_ID >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mIIM_ID :: IO (Word32)
mIIM_STATE :: MenuItemMask
mIIM_STATE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mIIM_STATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mIIM_STATE :: IO (Word32)
mIIM_SUBMENU :: MenuItemMask
mIIM_SUBMENU =
  unsafePerformIO(
    prim_Win32Menu_cpp_mIIM_SUBMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mIIM_SUBMENU :: IO (Word32)
mIIM_TYPE :: MenuItemMask
mIIM_TYPE =
  unsafePerformIO(
    prim_Win32Menu_cpp_mIIM_TYPE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Menu_cpp_mIIM_TYPE :: IO (Word32)

getMenuItemInfo :: HMENU -> MenuItem -> Bool -> MenuItemMask -> IO MenuItemInfo
getMenuItemInfo arg1 arg2 gc_arg1 arg4 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Menu_cpp_getMenuItemInfo arg1 arg2 arg3 arg4 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else ( unmarshall_menuItemInfo  (gc_res2)) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Menu_cpp_getMenuItemInfo :: Addr -> Word32 -> Int -> Word32 -> IO (Addr,Int,Addr)

getMenuItemRect :: HWND -> HMENU -> UINT -> IO RECT
getMenuItemRect arg1 arg2 arg3 =
  prim_Win32Menu_cpp_getMenuItemRect arg1 arg2 arg3 >>= \ (gc_res2,gc_res4,gc_res6,gc_res8,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       let gc_res3 = ( fromIntegral  (gc_res4)) in
       let gc_res5 = ( fromIntegral  (gc_res6)) in
       let gc_res7 = ( fromIntegral  (gc_res8)) in
       (return ((gc_res1,gc_res3,gc_res5,gc_res7)))
primitive prim_Win32Menu_cpp_getMenuItemRect :: Addr -> Addr -> Word32 -> IO (Int,Int,Int,Int,Int,Addr)

hiliteMenuItem :: HWND -> HMENU -> MenuItem -> MenuFlag -> IO Bool
hiliteMenuItem arg1 arg2 arg3 arg4 =
  prim_Win32Menu_cpp_hiliteMenuItem arg1 arg2 arg3 arg4 >>= \ (gc_res2) ->
  (unmarshall_bool_ gc_res2) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Menu_cpp_hiliteMenuItem :: Addr -> Addr -> Word32 -> Word32 -> IO (Int)

insertMenuItem :: HMENU -> MenuItem -> Bool -> MenuItemInfo -> IO ()
insertMenuItem arg1 arg2 gc_arg1 gc_arg2 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  ( marshall_menuItemInfo  gc_arg2) >>= \ arg4 ->
  prim_Win32Menu_cpp_insertMenuItem arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_insertMenuItem :: Addr -> Word32 -> Int -> Addr -> IO (Int,Addr)

type Menu = LPCSTR
-- intToMenu :: Int -> Menu
-- intToMenu i = makeIntResource (toWord i)

loadMenu :: MbHINSTANCE -> Menu -> IO HMENU
loadMenu arg1 arg2 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Menu_cpp_loadMenu arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Menu_cpp_loadMenu :: Addr -> Addr -> IO (Addr,Int,Addr)

-- Dealing with mappings to/from structs is a pain in GC,
-- so we'll leave this one out for now.
-- %fun LoadMenuIndirect :: MenuTemplate -> IO HMENU

menuItemFromPoint :: HWND -> HMENU -> POINT -> IO UINT
menuItemFromPoint arg1 arg2 gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  prim_Win32Menu_cpp_menuItemFromPoint arg1 arg2 gc_arg3 gc_arg5 >>= \ (res1) ->
  (return (res1))}}}
primitive prim_Win32Menu_cpp_menuItemFromPoint :: Addr -> Addr -> Int -> Int -> IO (Word32)

setMenuDefaultItem :: HMENU -> MenuItem -> Bool -> IO ()
setMenuDefaultItem arg1 arg2 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Menu_cpp_setMenuDefaultItem arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_setMenuDefaultItem :: Addr -> Word32 -> Int -> IO (Int,Addr)

setMenuItemBitmaps :: HMENU -> MenuItem -> MenuFlag -> HBITMAP -> HBITMAP -> IO ()
setMenuItemBitmaps arg1 arg2 arg3 arg4 arg5 =
  prim_Win32Menu_cpp_setMenuItemBitmaps arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_setMenuItemBitmaps :: Addr -> Word32 -> Word32 -> Addr -> Addr -> IO (Int,Addr)

destroyMenu :: HMENU -> IO ()
destroyMenu arg1 =
  prim_Win32Menu_cpp_destroyMenu arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_destroyMenu :: Addr -> IO (Int,Addr)

deleteMenu :: HMENU -> MenuItem -> MenuFlag -> IO ()
deleteMenu arg1 arg2 arg3 =
  prim_Win32Menu_cpp_deleteMenu arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_deleteMenu :: Addr -> Word32 -> Word32 -> IO (Int,Addr)

setMenuItemInfo :: HMENU -> MenuItem -> Bool -> MenuItemMask -> MenuItemInfo -> IO ()
setMenuItemInfo arg1 arg2 gc_arg1 arg4 gc_arg2 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  ( marshall_menuItemInfo  gc_arg2) >>= \ arg5 ->
  prim_Win32Menu_cpp_setMenuItemInfo arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_setMenuItemInfo :: Addr -> Word32 -> Int -> Word32 -> Addr -> IO (Int,Addr)

trackPopupMenu :: HMENU -> TrackMenuFlag -> Int -> Int -> HWND -> RECT -> IO ()
trackPopupMenu arg1 arg2 arg3 arg4 arg5 gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4,gc_arg6,gc_arg8) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  case ( fromIntegral  gc_arg6) of { gc_arg7 ->
  case ( fromIntegral  gc_arg8) of { gc_arg9 ->
  prim_Win32Menu_cpp_trackPopupMenu arg1 arg2 arg3 arg4 arg5 gc_arg3 gc_arg5 gc_arg7 gc_arg9 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}}}}}
primitive prim_Win32Menu_cpp_trackPopupMenu :: Addr -> Word32 -> Int -> Int -> Addr -> Int -> Int -> Int -> Int -> IO (Int,Addr)

trackPopupMenuEx :: HMENU -> TrackMenuFlag -> Int -> Int -> HWND -> MbLPRECT -> IO ()
trackPopupMenuEx arg1 arg2 arg3 arg4 arg5 arg6 =
  (case arg6 of {
      Nothing -> (return (nullAddr));
      (Just arg6) -> (return ((arg6)))
   }) >>= \ (arg6) ->
  prim_Win32Menu_cpp_trackPopupMenuEx arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_trackPopupMenuEx :: Addr -> Word32 -> Int -> Int -> Addr -> Addr -> IO (Int,Addr)



appendMenu :: HMENU -> MenuFlag -> MenuID -> String -> IO ()
appendMenu arg1 arg2 arg3 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg4) ->
  prim_Win32Menu_cpp_appendMenu arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_appendMenu :: Addr -> Word32 -> Word32 -> Addr -> IO (Int,Addr)

insertMenu :: HMENU -> MenuItem -> MenuFlag -> MenuID -> String -> IO ()
insertMenu arg1 arg2 arg3 arg4 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg5) ->
  prim_Win32Menu_cpp_insertMenu arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_insertMenu :: Addr -> Word32 -> Word32 -> Word32 -> Addr -> IO (Int,Addr)

modifyMenu :: HMENU -> MenuItem -> MenuFlag -> MenuID -> String -> IO ()
modifyMenu arg1 arg2 arg3 arg4 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg5) ->
  prim_Win32Menu_cpp_modifyMenu arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_modifyMenu :: Addr -> Word32 -> Word32 -> Word32 -> Addr -> IO (Int,Addr)

removeMenu :: HMENU -> MenuItem -> MenuFlag -> IO ()
removeMenu arg1 arg2 arg3 =
  prim_Win32Menu_cpp_removeMenu arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Menu_cpp_removeMenu :: Addr -> Word32 -> Word32 -> IO (Int,Addr)


----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
