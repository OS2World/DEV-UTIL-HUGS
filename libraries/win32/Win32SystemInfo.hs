module Win32SystemInfo where

import StdDIS
import Win32Types
import GDITypes



----------------------------------------------------------------
-- Environment Strings
----------------------------------------------------------------

-- %fun ExpandEnvironmentStrings :: String -> IO String

----------------------------------------------------------------
-- Computer Name
----------------------------------------------------------------

-- %fun GetComputerName :: IO String
-- %fun SetComputerName :: String -> IO ()
-- %end free(arg1)

----------------------------------------------------------------
-- Hardware Profiles
----------------------------------------------------------------

-- %fun GetCurrentHwProfile :: IO HW_PROFILE_INFO

----------------------------------------------------------------
-- Keyboard Type
----------------------------------------------------------------

-- %fun GetKeyboardType :: KeyboardTypeKind -> IO KeyboardType

----------------------------------------------------------------
-- System Color
----------------------------------------------------------------

type SystemColor   = UINT

-- ToDo: This list is out of date.

cOLOR_SCROLLBAR :: SystemColor
cOLOR_SCROLLBAR =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_SCROLLBAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_SCROLLBAR :: IO (Word32)
cOLOR_BACKGROUND :: SystemColor
cOLOR_BACKGROUND =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_BACKGROUND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_BACKGROUND :: IO (Word32)
cOLOR_ACTIVECAPTION :: SystemColor
cOLOR_ACTIVECAPTION =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_ACTIVECAPTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_ACTIVECAPTION :: IO (Word32)
cOLOR_INACTIVECAPTION :: SystemColor
cOLOR_INACTIVECAPTION =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_INACTIVECAPTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_INACTIVECAPTION :: IO (Word32)
cOLOR_MENU :: SystemColor
cOLOR_MENU =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_MENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_MENU :: IO (Word32)
cOLOR_WINDOW :: SystemColor
cOLOR_WINDOW =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_WINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_WINDOW :: IO (Word32)
cOLOR_WINDOWFRAME :: SystemColor
cOLOR_WINDOWFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_WINDOWFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_WINDOWFRAME :: IO (Word32)
cOLOR_MENUTEXT :: SystemColor
cOLOR_MENUTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_MENUTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_MENUTEXT :: IO (Word32)
cOLOR_WINDOWTEXT :: SystemColor
cOLOR_WINDOWTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_WINDOWTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_WINDOWTEXT :: IO (Word32)
cOLOR_CAPTIONTEXT :: SystemColor
cOLOR_CAPTIONTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_CAPTIONTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_CAPTIONTEXT :: IO (Word32)
cOLOR_ACTIVEBORDER :: SystemColor
cOLOR_ACTIVEBORDER =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_ACTIVEBORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_ACTIVEBORDER :: IO (Word32)
cOLOR_INACTIVEBORDER :: SystemColor
cOLOR_INACTIVEBORDER =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_INACTIVEBORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_INACTIVEBORDER :: IO (Word32)
cOLOR_APPWORKSPACE :: SystemColor
cOLOR_APPWORKSPACE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_APPWORKSPACE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_APPWORKSPACE :: IO (Word32)
cOLOR_HIGHLIGHT :: SystemColor
cOLOR_HIGHLIGHT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_HIGHLIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_HIGHLIGHT :: IO (Word32)
cOLOR_HIGHLIGHTTEXT :: SystemColor
cOLOR_HIGHLIGHTTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_HIGHLIGHTTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_HIGHLIGHTTEXT :: IO (Word32)
cOLOR_BTNFACE :: SystemColor
cOLOR_BTNFACE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_BTNFACE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_BTNFACE :: IO (Word32)
cOLOR_BTNSHADOW :: SystemColor
cOLOR_BTNSHADOW =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_BTNSHADOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_BTNSHADOW :: IO (Word32)
cOLOR_GRAYTEXT :: SystemColor
cOLOR_GRAYTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_GRAYTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_GRAYTEXT :: IO (Word32)
cOLOR_BTNTEXT :: SystemColor
cOLOR_BTNTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_BTNTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_BTNTEXT :: IO (Word32)
cOLOR_INACTIVECAPTIONTEXT :: SystemColor
cOLOR_INACTIVECAPTIONTEXT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_INACTIVECAPTIONTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_INACTIVECAPTIONTEXT :: IO (Word32)
cOLOR_BTNHIGHLIGHT :: SystemColor
cOLOR_BTNHIGHLIGHT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_cOLOR_BTNHIGHLIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_cOLOR_BTNHIGHLIGHT :: IO (Word32)

-- %fun GetSysColor :: SystemColor -> IO COLORREF
-- %fun SetSysColors :: [(SystemColor,COLORREF)] -> IO ()

----------------------------------------------------------------
-- Standard Directories
----------------------------------------------------------------

-- %fun GetSystemDirectory  :: IO String
-- %fun GetWindowsDirectory :: IO String

----------------------------------------------------------------
-- System Info (Info about processor and memory subsystem)
----------------------------------------------------------------

-- %fun GetSystemInfo :: IO SystemInfo
-- 
-- typedef struct _SYSTEM_INFO { // sinf 
--     union { 
-- 	   DWORD  dwOemId; 
-- 	   struct { 
-- 	       WORD wProcessorArchitecture; 
-- 	       WORD wReserved; 
-- 	   }; 
--     }; 
--     DWORD  dwPageSize; 
--     LPVOID lpMinimumApplicationAddress; 
--     LPVOID lpMaximumApplicationAddress; 
--     DWORD  dwActiveProcessorMask; 
--     DWORD  dwNumberOfProcessors; 
--     DWORD  dwProcessorType; 
--     DWORD  dwAllocationGranularity; 
--     WORD  wProcessorLevel; 
--     WORD  wProcessorRevision; 
-- } SYSTEM_INFO; 
 

----------------------------------------------------------------
-- System metrics
----------------------------------------------------------------

type SMSetting = UINT

sM_ARRANGE :: SMSetting
sM_ARRANGE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_ARRANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_ARRANGE :: IO (Word32)
sM_CLEANBOOT :: SMSetting
sM_CLEANBOOT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CLEANBOOT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CLEANBOOT :: IO (Word32)
sM_CMETRICS :: SMSetting
sM_CMETRICS =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CMETRICS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CMETRICS :: IO (Word32)
sM_CMOUSEBUTTONS :: SMSetting
sM_CMOUSEBUTTONS =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CMOUSEBUTTONS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CMOUSEBUTTONS :: IO (Word32)
sM_CXBORDER :: SMSetting
sM_CXBORDER =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXBORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXBORDER :: IO (Word32)
sM_CYBORDER :: SMSetting
sM_CYBORDER =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYBORDER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYBORDER :: IO (Word32)
sM_CXCURSOR :: SMSetting
sM_CXCURSOR =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXCURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXCURSOR :: IO (Word32)
sM_CYCURSOR :: SMSetting
sM_CYCURSOR =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYCURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYCURSOR :: IO (Word32)
sM_CXDLGFRAME :: SMSetting
sM_CXDLGFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXDLGFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXDLGFRAME :: IO (Word32)
sM_CYDLGFRAME :: SMSetting
sM_CYDLGFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYDLGFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYDLGFRAME :: IO (Word32)
sM_CXDOUBLECLK :: SMSetting
sM_CXDOUBLECLK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXDOUBLECLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXDOUBLECLK :: IO (Word32)
sM_CYDOUBLECLK :: SMSetting
sM_CYDOUBLECLK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYDOUBLECLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYDOUBLECLK :: IO (Word32)
sM_CXDRAG :: SMSetting
sM_CXDRAG =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXDRAG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXDRAG :: IO (Word32)
sM_CYDRAG :: SMSetting
sM_CYDRAG =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYDRAG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYDRAG :: IO (Word32)
sM_CXEDGE :: SMSetting
sM_CXEDGE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXEDGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXEDGE :: IO (Word32)
sM_CYEDGE :: SMSetting
sM_CYEDGE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYEDGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYEDGE :: IO (Word32)
sM_CXFRAME :: SMSetting
sM_CXFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXFRAME :: IO (Word32)
sM_CYFRAME :: SMSetting
sM_CYFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYFRAME :: IO (Word32)
sM_CXFULLSCREEN :: SMSetting
sM_CXFULLSCREEN =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXFULLSCREEN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXFULLSCREEN :: IO (Word32)
sM_CYFULLSCREEN :: SMSetting
sM_CYFULLSCREEN =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYFULLSCREEN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYFULLSCREEN :: IO (Word32)
sM_CXHSCROLL :: SMSetting
sM_CXHSCROLL =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXHSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXHSCROLL :: IO (Word32)
sM_CYVSCROLL :: SMSetting
sM_CYVSCROLL =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYVSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYVSCROLL :: IO (Word32)
sM_CXICON :: SMSetting
sM_CXICON =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXICON :: IO (Word32)
sM_CYICON :: SMSetting
sM_CYICON =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYICON :: IO (Word32)
sM_CXICONSPACING :: SMSetting
sM_CXICONSPACING =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXICONSPACING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXICONSPACING :: IO (Word32)
sM_CYICONSPACING :: SMSetting
sM_CYICONSPACING =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYICONSPACING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYICONSPACING :: IO (Word32)
sM_CXMAXIMIZED :: SMSetting
sM_CXMAXIMIZED =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXMAXIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXMAXIMIZED :: IO (Word32)
sM_CYMAXIMIZED :: SMSetting
sM_CYMAXIMIZED =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMAXIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMAXIMIZED :: IO (Word32)
sM_CXMENUCHECK :: SMSetting
sM_CXMENUCHECK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXMENUCHECK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXMENUCHECK :: IO (Word32)
sM_CYMENUCHECK :: SMSetting
sM_CYMENUCHECK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMENUCHECK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMENUCHECK :: IO (Word32)
sM_CXMENUSIZE :: SMSetting
sM_CXMENUSIZE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXMENUSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXMENUSIZE :: IO (Word32)
sM_CYMENUSIZE :: SMSetting
sM_CYMENUSIZE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMENUSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMENUSIZE :: IO (Word32)
sM_CXMIN :: SMSetting
sM_CXMIN =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXMIN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXMIN :: IO (Word32)
sM_CYMIN :: SMSetting
sM_CYMIN =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMIN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMIN :: IO (Word32)
sM_CXMINIMIZED :: SMSetting
sM_CXMINIMIZED =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXMINIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXMINIMIZED :: IO (Word32)
sM_CYMINIMIZED :: SMSetting
sM_CYMINIMIZED =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMINIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMINIMIZED :: IO (Word32)
sM_CXMINTRACK :: SMSetting
sM_CXMINTRACK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXMINTRACK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXMINTRACK :: IO (Word32)
sM_CYMINTRACK :: SMSetting
sM_CYMINTRACK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMINTRACK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMINTRACK :: IO (Word32)
sM_CXSCREEN :: SMSetting
sM_CXSCREEN =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXSCREEN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXSCREEN :: IO (Word32)
sM_CYSCREEN :: SMSetting
sM_CYSCREEN =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYSCREEN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYSCREEN :: IO (Word32)
sM_CXSIZE :: SMSetting
sM_CXSIZE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXSIZE :: IO (Word32)
sM_CYSIZE :: SMSetting
sM_CYSIZE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYSIZE :: IO (Word32)
sM_CXSIZEFRAME :: SMSetting
sM_CXSIZEFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXSIZEFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXSIZEFRAME :: IO (Word32)
sM_CYSIZEFRAME :: SMSetting
sM_CYSIZEFRAME =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYSIZEFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYSIZEFRAME :: IO (Word32)
sM_CXSMICON :: SMSetting
sM_CXSMICON =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXSMICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXSMICON :: IO (Word32)
sM_CYSMICON :: SMSetting
sM_CYSMICON =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYSMICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYSMICON :: IO (Word32)
sM_CXSMSIZE :: SMSetting
sM_CXSMSIZE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXSMSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXSMSIZE :: IO (Word32)
sM_CYSMSIZE :: SMSetting
sM_CYSMSIZE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYSMSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYSMSIZE :: IO (Word32)
sM_CXVSCROLL :: SMSetting
sM_CXVSCROLL =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CXVSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CXVSCROLL :: IO (Word32)
sM_CYHSCROLL :: SMSetting
sM_CYHSCROLL =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYHSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYHSCROLL :: IO (Word32)
sM_CYVTHUMB :: SMSetting
sM_CYVTHUMB =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYVTHUMB >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYVTHUMB :: IO (Word32)
sM_CYCAPTION :: SMSetting
sM_CYCAPTION =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYCAPTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYCAPTION :: IO (Word32)
sM_CYKANJIWINDOW :: SMSetting
sM_CYKANJIWINDOW =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYKANJIWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYKANJIWINDOW :: IO (Word32)
sM_CYMENU :: SMSetting
sM_CYMENU =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYMENU :: IO (Word32)
sM_CYSMCAPTION :: SMSetting
sM_CYSMCAPTION =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_CYSMCAPTION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_CYSMCAPTION :: IO (Word32)
sM_DBCSENABLED :: SMSetting
sM_DBCSENABLED =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_DBCSENABLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_DBCSENABLED :: IO (Word32)
sM_DEBUG :: SMSetting
sM_DEBUG =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_DEBUG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_DEBUG :: IO (Word32)
sM_MENUDROPALIGNMENT :: SMSetting
sM_MENUDROPALIGNMENT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_MENUDROPALIGNMENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_MENUDROPALIGNMENT :: IO (Word32)
sM_MIDEASTENABLED :: SMSetting
sM_MIDEASTENABLED =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_MIDEASTENABLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_MIDEASTENABLED :: IO (Word32)
sM_MOUSEPRESENT :: SMSetting
sM_MOUSEPRESENT =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_MOUSEPRESENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_MOUSEPRESENT :: IO (Word32)
sM_NETWORK :: SMSetting
sM_NETWORK =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_NETWORK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_NETWORK :: IO (Word32)
sM_PENWINDOWS :: SMSetting
sM_PENWINDOWS =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_PENWINDOWS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_PENWINDOWS :: IO (Word32)
sM_SECURE :: SMSetting
sM_SECURE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_SECURE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_SECURE :: IO (Word32)
sM_SHOWSOUNDS :: SMSetting
sM_SHOWSOUNDS =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_SHOWSOUNDS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_SHOWSOUNDS :: IO (Word32)
sM_SLOWMACHINE :: SMSetting
sM_SLOWMACHINE =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_SLOWMACHINE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_SLOWMACHINE :: IO (Word32)
sM_SWAPBUTTON :: SMSetting
sM_SWAPBUTTON =
  unsafePerformIO(
    prim_Win32SystemInfo_cpp_sM_SWAPBUTTON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32SystemInfo_cpp_sM_SWAPBUTTON :: IO (Word32)

-- %fun GetSystemMetrics :: SMSetting -> IO Int

----------------------------------------------------------------
-- Thread Desktops
----------------------------------------------------------------

-- %fun GetThreadDesktop :: ThreadId -> IO HDESK
-- %fun SetThreadDesktop :: ThreadId -> HDESK -> IO ()

----------------------------------------------------------------
-- User name
----------------------------------------------------------------

-- %fun GetUserName :: IO String

----------------------------------------------------------------
-- Version Info
----------------------------------------------------------------

-- %fun GetVersionEx :: IO VersionInfo
-- 
-- typedef struct _OSVERSIONINFO{ 
--     DWORD dwOSVersionInfoSize; 
--     DWORD dwMajorVersion; 
--     DWORD dwMinorVersion; 
--     DWORD dwBuildNumber; 
--     DWORD dwPlatformId; 
--     TCHAR szCSDVersion[ 128 ]; 
-- } OSVERSIONINFO; 
 
----------------------------------------------------------------
-- Processor features
----------------------------------------------------------------

--
-- Including these lines causes problems on Win95
-- %fun IsProcessorFeaturePresent :: ProcessorFeature -> Bool
--
-- type ProcessorFeature   = DWORD
-- %dis processorFeature x = dWORD x
--
-- %const ProcessorFeature
-- % [ PF_FLOATING_POINT_PRECISION_ERRATA 
-- % , PF_FLOATING_POINT_EMULATED 
-- % , PF_COMPARE_EXCHANGE_DOUBLE 
-- % , PF_MMX_INSTRUCTIONS_AVAILABLE 
-- % ]

----------------------------------------------------------------
-- System Parameter Information
----------------------------------------------------------------

-- %fun SystemParametersInfo :: ?? -> Bool -> IO ??

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
