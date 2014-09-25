{-# OPTIONS -#include "Win32Dialogue_stub.h" #-}
module Win32Dialogue where

import StdDIS
import Win32Types
import GDITypes
import Win32Window
import Win32WinMessage
import Win32Control


type DTemplate = LPCTSTR

type DTemplateMem = Addr

type DialogStyle = WindowStyle

mkDialogTemplate :: String -> IO DTemplate
mkDialogTemplate = marshall_string_

type ResourceID = Int

mkResource :: ResourceID -> IO Addr
mkResource arg1 =
  prim_Win32Dialogue_cpp_mkResource arg1 >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Dialogue_cpp_mkResource :: Int -> IO (Addr)

mkDialogTemplateFromResource :: Int -> IO DTemplate
mkDialogTemplateFromResource = mkResource

type DialogProc = HWND -> WindowMessage -> WPARAM -> LPARAM -> IO Int


--foreign export stdcall dynamic marshall_dialogProc_ :: DialogProc -> IO Addr
--marshall_dialogProc_ x = return nullAddr

dialogBox :: HINSTANCE -> DTemplate -> MbHWND -> DialogProc -> IO Int
dialogBox hInst lpTemp hWndParent gc_arg1 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  prim_Win32Dialogue_cpp_dialogBox hInst lpTemp hWndParent diaFun >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_dialogBox :: Addr -> Addr -> Addr -> Addr -> IO (Int,Int,Addr)

dialogBoxParam :: HINSTANCE -> DTemplate -> MbHWND -> DialogProc -> LPARAM -> IO Int
dialogBoxParam hInst lpTemp hWndParent gc_arg1 gc_arg2 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  case ( int32ToInt  gc_arg2) of { dwInit ->
  prim_Win32Dialogue_cpp_dialogBoxParam hInst lpTemp hWndParent diaFun dwInit >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Dialogue_cpp_dialogBoxParam :: Addr -> Addr -> Addr -> Addr -> Int -> IO (Int,Int,Addr)

dialogBoxIndirect :: HINSTANCE -> DTemplateMem -> MbHWND -> DialogProc -> IO Int
dialogBoxIndirect hInst lpTemp hWndParent gc_arg1 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  prim_Win32Dialogue_cpp_dialogBoxIndirect hInst lpTemp hWndParent diaFun >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_dialogBoxIndirect :: Addr -> Addr -> Addr -> Addr -> IO (Int,Int,Addr)

dialogBoxIndirectParam :: HINSTANCE -> DTemplateMem -> MbHWND -> DialogProc -> LPARAM -> IO Int
dialogBoxIndirectParam hInst lpTemp hWndParent gc_arg1 gc_arg2 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  case ( int32ToInt  gc_arg2) of { dwInit ->
  prim_Win32Dialogue_cpp_dialogBoxIndirectParam hInst lpTemp hWndParent diaFun dwInit >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Dialogue_cpp_dialogBoxIndirectParam :: Addr -> Addr -> Addr -> Addr -> Int -> IO (Int,Int,Addr)


data DialogTemplate
 = DialogTemplate 
      Int Int Int Int  -- x, y, cx, cy
      WindowStyle
      DWORD
      (Either ResourceID String)  -- menu
      (Either ResourceID String)  -- class
      (Either ResourceID String)  -- caption
      (Either ResourceID String)  -- fontname
      Int	 		  -- font height
      [DialogControl]

data DialogControl
 = DialogControl
      Int Int Int Int -- x,y, cx, cy
      (Either ResourceID String) -- text
      (Either ResourceID String) -- classname
      WindowStyle
      DWORD
      Int			 -- id

--mkDialogFromTemplate :: DialogTemplate -> IO DTemplateMem
--mkDialogFromTemplate (DialogTemplate x y cx cy
--				       wstyle extstyle
--				       mb_menu mb_class caption
--				       font font_height
--				       controls) = do
--  prim_hmenu    <- marshall_res mb_menu
--  prim_class    <- marshall_res mb_class
--  prim_caption  <- marshall_res caption
--  prim_font     <- marshall_res font
--  dtemp <- mkDiaTemplate 0 x y cx cy wstyle extstyle 
--			   prim_hmenu prim_class
--			   prim_caption prim_font
--			   font_height
--  mapM_ (addControl dtemp) controls
--  getFinalDialog dtemp

pushButtonControl :: Int -> Int -> Int -> Int
		  -> DWORD -> DWORD -> Int
		  -> String
		  -> DialogControl
pushButtonControl x y cx cy style estyle id lab =
  DialogControl x y cx cy (Left 0x0080) (Right lab)
  		(style + bS_DEFPUSHBUTTON) estyle id

labelControl :: Int -> Int -> Int -> Int
	     -> DWORD -> DWORD -> Int
	     -> String
             -> DialogControl
labelControl x y cx cy style estyle id lab =
  DialogControl x y cx cy (Left 0x0082) (Right lab)
  		(style + sS_LEFT) estyle id

listBoxControl :: Int -> Int -> Int -> Int
	       -> DWORD -> DWORD -> Int
	       -> String
               -> DialogControl
listBoxControl x y cx cy style estyle id lab =
  DialogControl x y cx cy (Left 0x0083) (Right lab)
  		(style) estyle id

comboBoxControl :: Int -> Int -> Int -> Int
	       -> DWORD -> DWORD -> Int
	       -> String
               -> DialogControl
comboBoxControl x y cx cy style estyle id lab =
  DialogControl x y cx cy (Left 0x0085) (Right lab)
  		(style) estyle id

editControl :: Int -> Int -> Int -> Int
	       -> DWORD -> DWORD -> Int
	       -> String
               -> DialogControl
editControl x y cx cy style estyle id lab =
  DialogControl x y cx cy (Left 0x0081) (Right lab)
  		(style + eS_LEFT) estyle id

scrollBarControl :: Int -> Int -> Int -> Int
	       -> DWORD -> DWORD -> Int
	       -> String
               -> DialogControl
scrollBarControl x y cx cy style estyle id lab =
  DialogControl x y cx cy (Left 0x0084) (Right lab)
  		(style) estyle id

--getFinalDialog :: Addr -> IO DTemplateMem
--getFinalDialog arg1 =
--  prim_Win32Dialogue_cpp_getFinalDialog arg1 >>= \ (res1) ->
--  (return (res1))
--primitive prim_Win32Dialogue_cpp_getFinalDialog :: Addr -> IO (Addr)
--
--mkDiaTemplate :: Int -> Int -> Int -> Int -> Int -> WindowStyle -> DWORD -> Addr -> Addr -> Addr -> Addr -> Int -> IO Addr
--mkDiaTemplate arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 arg11 arg12 =
--  prim_Win32Dialogue_cpp_mkDiaTemplate arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 arg11 arg12 >>= \ (res1) ->
--  (return (res1))
--primitive prim_Win32Dialogue_cpp_mkDiaTemplate :: Int -> Int -> Int -> Int -> Int -> Word32 -> Word32 -> Addr -> Addr -> Addr -> Addr -> Int -> IO (Addr)

--addControl :: Addr -> DialogControl -> IO ()
--addControl dtemp (DialogControl x y cx cy mb_text mb_class
--				  style exstyle
--				  id) = do
--   prim_text  <- marshall_res mb_text
--   prim_class <- marshall_res mb_class
--   addDiaControl dtemp prim_text id prim_class style 
--		   x y cx cy exstyle
--   return ()
--
--addDiaControl :: Addr -> Addr -> Int -> Addr -> DWORD -> Int -> Int -> Int -> Int -> DWORD -> IO Addr
--addDiaControl arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 =
--  prim_Win32Dialogue_cpp_addDiaControl arg1 arg2 arg3 arg4 arg5 arg6 arg7 arg8 arg9 arg10 >>= \ (res1) ->
--  (return (res1))
--primitive prim_Win32Dialogue_cpp_addDiaControl :: Addr -> Addr -> Int -> Addr -> Word32 -> Int -> Int -> Int -> Int -> Word32 -> IO (Addr)

marshall_res :: Either ResourceID String -> IO Addr
marshall_res (Left r)  = mkResource r
marshall_res (Right s) = toUnicodeStr s

toUnicodeStr :: String -> IO Addr
toUnicodeStr gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32Dialogue_cpp_toUnicodeStr arg1 >>= \ (gc_res1) ->
  (return (gc_res1))
primitive prim_Win32Dialogue_cpp_toUnicodeStr :: Addr -> IO (Addr)

-- modeless dialogs
createDialog :: HINSTANCE -> DTemplate -> MbHWND -> DialogProc -> IO HWND
createDialog hInst lpTemp hWndParent gc_arg1 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  prim_Win32Dialogue_cpp_createDialog hInst lpTemp hWndParent diaFun >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_createDialog :: Addr -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

createDialogParam :: HINSTANCE -> DTemplate -> MbHWND -> DialogProc -> LPARAM -> IO HWND
createDialogParam hInst lpTemp hWndParent gc_arg1 gc_arg2 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  case ( int32ToInt  gc_arg2) of { dwInit ->
  prim_Win32Dialogue_cpp_createDialogParam hInst lpTemp hWndParent diaFun dwInit >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Dialogue_cpp_createDialogParam :: Addr -> Addr -> Addr -> Addr -> Int -> IO (Addr,Int,Addr)

createDialogIndirect :: HINSTANCE -> DTemplateMem -> MbHWND -> DialogProc -> IO HWND
createDialogIndirect hInst lpTemp hWndParent gc_arg1 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  prim_Win32Dialogue_cpp_createDialogIndirect hInst lpTemp hWndParent diaFun >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_createDialogIndirect :: Addr -> Addr -> Addr -> Addr -> IO (Addr,Int,Addr)

createDialogIndirectParam :: HINSTANCE -> DTemplateMem -> MbHWND -> DialogProc -> LPARAM -> IO HWND
createDialogIndirectParam hInst lpTemp hWndParent gc_arg1 gc_arg2 =
  (case hWndParent of {
      Nothing -> (return (nullHANDLE));
      (Just hWndParent) -> (return ((hWndParent)))
   }) >>= \ (hWndParent) ->
  (marshall_dialogProc_ gc_arg1) >>= \ (diaFun) ->
  case ( int32ToInt  gc_arg2) of { dwInit ->
  prim_Win32Dialogue_cpp_createDialogIndirectParam hInst lpTemp hWndParent diaFun dwInit >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))}
primitive prim_Win32Dialogue_cpp_createDialogIndirectParam :: Addr -> Addr -> Addr -> Addr -> Int -> IO (Addr,Int,Addr)

defDlgProc :: MbHWND -> WindowMessage -> WPARAM -> LPARAM -> IO LRESULT
defDlgProc arg1 arg2 arg3 gc_arg1 =
  (case arg1 of {
      Nothing -> (return (nullHANDLE));
      (Just arg1) -> (return ((arg1)))
   }) >>= \ (arg1) ->
  case ( int32ToInt  gc_arg1) of { arg4 ->
  prim_Win32Dialogue_cpp_defDlgProc arg1 arg2 arg3 arg4 >>= \ (res1) ->
  let gc_res1 = ( intToInt32  (res1)) in
  (return (gc_res1))}
primitive prim_Win32Dialogue_cpp_defDlgProc :: Addr -> Word32 -> Word32 -> Int -> IO (Int)

endDialog :: HWND -> Int -> IO BOOL
endDialog arg1 arg2 =
  prim_Win32Dialogue_cpp_endDialog arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_bool_ res1) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Dialogue_cpp_endDialog :: Addr -> Int -> IO (Int,Int,Addr)

getDialogBaseUnits :: IO LONG
getDialogBaseUnits =
  prim_Win32Dialogue_cpp_getDialogBaseUnits >>= \ (res1) ->
  let gc_res1 = ( intToInt32  (res1)) in
  (return (gc_res1))
primitive prim_Win32Dialogue_cpp_getDialogBaseUnits :: IO (Int)

getDlgCtrlID :: HWND -> IO Int
getDlgCtrlID arg1 =
  prim_Win32Dialogue_cpp_getDlgCtrlID arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_getDlgCtrlID :: Addr -> IO (Int,Int,Addr)

getDlgItem :: HWND -> Int -> IO HWND
getDlgItem arg1 arg2 =
  prim_Win32Dialogue_cpp_getDlgItem arg1 arg2 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_getDlgItem :: Addr -> Int -> IO (Addr,Int,Addr)

getDlgItemInt :: HWND -> Int -> Bool -> IO Int
getDlgItemInt arg1 arg2 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Dialogue_cpp_getDlgItemInt arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_getDlgItemInt :: Addr -> Int -> Int -> IO (Int,Int,Addr)

getDlgItemText :: HWND -> Int -> Int -> IO String
getDlgItemText arg1 arg2 arg3 =
  prim_Win32Dialogue_cpp_getDlgItemText arg1 arg2 arg3 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Dialogue_cpp_getDlgItemText :: Addr -> Int -> Int -> IO (Addr,Int,Addr)

getNextDlgGroupItem :: HWND -> HWND -> BOOL -> IO HWND
getNextDlgGroupItem arg1 arg2 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Dialogue_cpp_getNextDlgGroupItem arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_getNextDlgGroupItem :: Addr -> Addr -> Int -> IO (Addr,Int,Addr)

getNextDlgTabItem :: HWND -> HWND -> BOOL -> IO HWND
getNextDlgTabItem arg1 arg2 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Dialogue_cpp_getNextDlgTabItem arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Dialogue_cpp_getNextDlgTabItem :: Addr -> Addr -> Int -> IO (Addr,Int,Addr)

isDialogMessage :: HWND -> LPMSG -> IO BOOL
isDialogMessage arg1 arg2 =
  prim_Win32Dialogue_cpp_isDialogMessage arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32Dialogue_cpp_isDialogMessage :: Addr -> Addr -> IO (Int)

mapDialogRect :: HWND -> LPRECT -> IO ()
mapDialogRect arg1 arg2 =
  prim_Win32Dialogue_cpp_mapDialogRect arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Dialogue_cpp_mapDialogRect :: Addr -> Addr -> IO (Int,Addr)

-- No MessageBox* funs in here just yet.

sendDlgItemMessage :: HWND -> Int -> WindowMessage -> WPARAM -> LPARAM -> IO LONG
sendDlgItemMessage arg1 arg2 arg3 arg4 gc_arg1 =
  case ( int32ToInt  gc_arg1) of { arg5 ->
  prim_Win32Dialogue_cpp_sendDlgItemMessage arg1 arg2 arg3 arg4 arg5 >>= \ (res1) ->
  let gc_res1 = ( intToInt32  (res1)) in
  (return (gc_res1))}
primitive prim_Win32Dialogue_cpp_sendDlgItemMessage :: Addr -> Int -> Word32 -> Word32 -> Int -> IO (Int)

setDlgItemInt :: HWND -> Int -> UINT -> BOOL -> IO ()
setDlgItemInt arg1 arg2 arg3 gc_arg1 =
  (marshall_bool_ gc_arg1) >>= \ (arg4) ->
  prim_Win32Dialogue_cpp_setDlgItemInt arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Dialogue_cpp_setDlgItemInt :: Addr -> Int -> Word32 -> Int -> IO (Int,Addr)

setDlgItemText :: HWND -> Int -> String -> IO ()
setDlgItemText arg1 arg2 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg3) ->
  prim_Win32Dialogue_cpp_setDlgItemText arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Dialogue_cpp_setDlgItemText :: Addr -> Int -> Addr -> IO (Int,Addr)

dS_3DLOOK :: WindowStyle
dS_3DLOOK =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_3DLOOK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_3DLOOK :: IO (Word32)
dS_ABSALIGN :: WindowStyle
dS_ABSALIGN =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_ABSALIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_ABSALIGN :: IO (Word32)
dS_CENTER :: WindowStyle
dS_CENTER =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_CENTER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_CENTER :: IO (Word32)
dS_CENTERMOUSE :: WindowStyle
dS_CENTERMOUSE =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_CENTERMOUSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_CENTERMOUSE :: IO (Word32)
dS_CONTEXTHELP :: WindowStyle
dS_CONTEXTHELP =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_CONTEXTHELP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_CONTEXTHELP :: IO (Word32)
dS_CONTROL :: WindowStyle
dS_CONTROL =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_CONTROL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_CONTROL :: IO (Word32)
dS_FIXEDSYS :: WindowStyle
dS_FIXEDSYS =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_FIXEDSYS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_FIXEDSYS :: IO (Word32)
dS_LOCALEDIT :: WindowStyle
dS_LOCALEDIT =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_LOCALEDIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_LOCALEDIT :: IO (Word32)
dS_MODALFRAME :: WindowStyle
dS_MODALFRAME =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_MODALFRAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_MODALFRAME :: IO (Word32)
dS_NOFAILCREATE :: WindowStyle
dS_NOFAILCREATE =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_NOFAILCREATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_NOFAILCREATE :: IO (Word32)
dS_NOIDLEMSG :: WindowStyle
dS_NOIDLEMSG =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_NOIDLEMSG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_NOIDLEMSG :: IO (Word32)
dS_SETFONT :: WindowStyle
dS_SETFONT =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_SETFONT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_SETFONT :: IO (Word32)
dS_SETFOREGROUND :: WindowStyle
dS_SETFOREGROUND =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_SETFOREGROUND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_SETFOREGROUND :: IO (Word32)
dS_SYSMODAL :: WindowStyle
dS_SYSMODAL =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dS_SYSMODAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dS_SYSMODAL :: IO (Word32)

dM_GETDEFID :: WindowMessage
dM_GETDEFID =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dM_GETDEFID >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dM_GETDEFID :: IO (Word32)
dM_REPOSITION :: WindowMessage
dM_REPOSITION =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dM_REPOSITION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dM_REPOSITION :: IO (Word32)
dM_SETDEFID :: WindowMessage
dM_SETDEFID =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_dM_SETDEFID >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_dM_SETDEFID :: IO (Word32)
wM_CTLCOLORDLG :: WindowMessage
wM_CTLCOLORDLG =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_wM_CTLCOLORDLG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_wM_CTLCOLORDLG :: IO (Word32)
wM_CTLCOLORMSGBOX :: WindowMessage
wM_CTLCOLORMSGBOX =
  unsafePerformIO(
    prim_Win32Dialogue_cpp_wM_CTLCOLORMSGBOX >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Dialogue_cpp_wM_CTLCOLORMSGBOX :: IO (Word32)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
