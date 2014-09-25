module Win32WinMessage where

import StdDIS
import Win32Types


type WindowMessage   = DWORD

wM_COMPACTING :: WindowMessage
wM_COMPACTING =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_COMPACTING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_COMPACTING :: IO (Word32)
wM_WININICHANGE :: WindowMessage
wM_WININICHANGE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_WININICHANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_WININICHANGE :: IO (Word32)
wM_SYSCOLORCHANGE :: WindowMessage
wM_SYSCOLORCHANGE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SYSCOLORCHANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SYSCOLORCHANGE :: IO (Word32)
wM_QUERYNEWPALETTE :: WindowMessage
wM_QUERYNEWPALETTE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_QUERYNEWPALETTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_QUERYNEWPALETTE :: IO (Word32)
wM_PALETTEISCHANGING :: WindowMessage
wM_PALETTEISCHANGING =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_PALETTEISCHANGING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_PALETTEISCHANGING :: IO (Word32)
wM_PALETTECHANGED :: WindowMessage
wM_PALETTECHANGED =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_PALETTECHANGED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_PALETTECHANGED :: IO (Word32)
wM_FONTCHANGE :: WindowMessage
wM_FONTCHANGE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_FONTCHANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_FONTCHANGE :: IO (Word32)
wM_SPOOLERSTATUS :: WindowMessage
wM_SPOOLERSTATUS =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SPOOLERSTATUS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SPOOLERSTATUS :: IO (Word32)
wM_DEVMODECHANGE :: WindowMessage
wM_DEVMODECHANGE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DEVMODECHANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DEVMODECHANGE :: IO (Word32)
wM_TIMECHANGE :: WindowMessage
wM_TIMECHANGE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_TIMECHANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_TIMECHANGE :: IO (Word32)
wM_POWER :: WindowMessage
wM_POWER =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_POWER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_POWER :: IO (Word32)
wM_QUERYENDSESSION :: WindowMessage
wM_QUERYENDSESSION =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_QUERYENDSESSION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_QUERYENDSESSION :: IO (Word32)
wM_ENDSESSION :: WindowMessage
wM_ENDSESSION =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ENDSESSION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ENDSESSION :: IO (Word32)
wM_QUIT :: WindowMessage
wM_QUIT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_QUIT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_QUIT :: IO (Word32)
wM_CREATE :: WindowMessage
wM_CREATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CREATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CREATE :: IO (Word32)
wM_NCCREATE :: WindowMessage
wM_NCCREATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCCREATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCCREATE :: IO (Word32)
wM_DESTROY :: WindowMessage
wM_DESTROY =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DESTROY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DESTROY :: IO (Word32)
wM_NCDESTROY :: WindowMessage
wM_NCDESTROY =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCDESTROY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCDESTROY :: IO (Word32)
wM_SHOWWINDOW :: WindowMessage
wM_SHOWWINDOW =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SHOWWINDOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SHOWWINDOW :: IO (Word32)
wM_SETREDRAW :: WindowMessage
wM_SETREDRAW =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SETREDRAW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SETREDRAW :: IO (Word32)
wM_ENABLE :: WindowMessage
wM_ENABLE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ENABLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ENABLE :: IO (Word32)
wM_SETTEXT :: WindowMessage
wM_SETTEXT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SETTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SETTEXT :: IO (Word32)
wM_GETTEXT :: WindowMessage
wM_GETTEXT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_GETTEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_GETTEXT :: IO (Word32)
wM_GETTEXTLENGTH :: WindowMessage
wM_GETTEXTLENGTH =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_GETTEXTLENGTH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_GETTEXTLENGTH :: IO (Word32)
wM_WINDOWPOSCHANGING :: WindowMessage
wM_WINDOWPOSCHANGING =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_WINDOWPOSCHANGING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_WINDOWPOSCHANGING :: IO (Word32)
wM_WINDOWPOSCHANGED :: WindowMessage
wM_WINDOWPOSCHANGED =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_WINDOWPOSCHANGED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_WINDOWPOSCHANGED :: IO (Word32)
wM_MOVE :: WindowMessage
wM_MOVE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MOVE :: IO (Word32)
wM_SIZE :: WindowMessage
wM_SIZE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SIZE :: IO (Word32)
wM_QUERYOPEN :: WindowMessage
wM_QUERYOPEN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_QUERYOPEN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_QUERYOPEN :: IO (Word32)
wM_CLOSE :: WindowMessage
wM_CLOSE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CLOSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CLOSE :: IO (Word32)
wM_GETMINMAXINFO :: WindowMessage
wM_GETMINMAXINFO =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_GETMINMAXINFO >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_GETMINMAXINFO :: IO (Word32)
wM_PAINT :: WindowMessage
wM_PAINT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_PAINT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_PAINT :: IO (Word32)
wM_ERASEBKGND :: WindowMessage
wM_ERASEBKGND =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ERASEBKGND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ERASEBKGND :: IO (Word32)
wM_ICONERASEBKGND :: WindowMessage
wM_ICONERASEBKGND =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ICONERASEBKGND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ICONERASEBKGND :: IO (Word32)
wM_NCPAINT :: WindowMessage
wM_NCPAINT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCPAINT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCPAINT :: IO (Word32)
wM_NCCALCSIZE :: WindowMessage
wM_NCCALCSIZE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCCALCSIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCCALCSIZE :: IO (Word32)
wM_QUERYDRAGICON :: WindowMessage
wM_QUERYDRAGICON =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_QUERYDRAGICON >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_QUERYDRAGICON :: IO (Word32)
wM_DROPFILES :: WindowMessage
wM_DROPFILES =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DROPFILES >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DROPFILES :: IO (Word32)
wM_ACTIVATE :: WindowMessage
wM_ACTIVATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ACTIVATE :: IO (Word32)
wM_ACTIVATEAPP :: WindowMessage
wM_ACTIVATEAPP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ACTIVATEAPP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ACTIVATEAPP :: IO (Word32)
wM_NCACTIVATE :: WindowMessage
wM_NCACTIVATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCACTIVATE :: IO (Word32)
wM_SETFOCUS :: WindowMessage
wM_SETFOCUS =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SETFOCUS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SETFOCUS :: IO (Word32)
wM_KILLFOCUS :: WindowMessage
wM_KILLFOCUS =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_KILLFOCUS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_KILLFOCUS :: IO (Word32)
wM_KEYDOWN :: WindowMessage
wM_KEYDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_KEYDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_KEYDOWN :: IO (Word32)
wM_KEYUP :: WindowMessage
wM_KEYUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_KEYUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_KEYUP :: IO (Word32)
wM_CHAR :: WindowMessage
wM_CHAR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CHAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CHAR :: IO (Word32)
wM_DEADCHAR :: WindowMessage
wM_DEADCHAR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DEADCHAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DEADCHAR :: IO (Word32)
wM_SYSKEYDOWN :: WindowMessage
wM_SYSKEYDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SYSKEYDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SYSKEYDOWN :: IO (Word32)
wM_SYSKEYUP :: WindowMessage
wM_SYSKEYUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SYSKEYUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SYSKEYUP :: IO (Word32)
wM_SYSCHAR :: WindowMessage
wM_SYSCHAR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SYSCHAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SYSCHAR :: IO (Word32)
wM_SYSDEADCHAR :: WindowMessage
wM_SYSDEADCHAR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SYSDEADCHAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SYSDEADCHAR :: IO (Word32)
wM_KEYFIRST :: WindowMessage
wM_KEYFIRST =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_KEYFIRST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_KEYFIRST :: IO (Word32)
wM_KEYLAST :: WindowMessage
wM_KEYLAST =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_KEYLAST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_KEYLAST :: IO (Word32)
wM_MOUSEMOVE :: WindowMessage
wM_MOUSEMOVE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MOUSEMOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MOUSEMOVE :: IO (Word32)
wM_LBUTTONDOWN :: WindowMessage
wM_LBUTTONDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_LBUTTONDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_LBUTTONDOWN :: IO (Word32)
wM_LBUTTONUP :: WindowMessage
wM_LBUTTONUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_LBUTTONUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_LBUTTONUP :: IO (Word32)
wM_LBUTTONDBLCLK :: WindowMessage
wM_LBUTTONDBLCLK =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_LBUTTONDBLCLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_LBUTTONDBLCLK :: IO (Word32)
wM_RBUTTONDOWN :: WindowMessage
wM_RBUTTONDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_RBUTTONDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_RBUTTONDOWN :: IO (Word32)
wM_RBUTTONUP :: WindowMessage
wM_RBUTTONUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_RBUTTONUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_RBUTTONUP :: IO (Word32)
wM_RBUTTONDBLCLK :: WindowMessage
wM_RBUTTONDBLCLK =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_RBUTTONDBLCLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_RBUTTONDBLCLK :: IO (Word32)
wM_MBUTTONDOWN :: WindowMessage
wM_MBUTTONDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MBUTTONDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MBUTTONDOWN :: IO (Word32)
wM_MBUTTONUP :: WindowMessage
wM_MBUTTONUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MBUTTONUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MBUTTONUP :: IO (Word32)
wM_MBUTTONDBLCLK :: WindowMessage
wM_MBUTTONDBLCLK =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MBUTTONDBLCLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MBUTTONDBLCLK :: IO (Word32)
wM_MOUSEFIRST :: WindowMessage
wM_MOUSEFIRST =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MOUSEFIRST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MOUSEFIRST :: IO (Word32)
wM_MOUSELAST :: WindowMessage
wM_MOUSELAST =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MOUSELAST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MOUSELAST :: IO (Word32)
wM_NCMOUSEMOVE :: WindowMessage
wM_NCMOUSEMOVE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCMOUSEMOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCMOUSEMOVE :: IO (Word32)
wM_NCLBUTTONDOWN :: WindowMessage
wM_NCLBUTTONDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCLBUTTONDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCLBUTTONDOWN :: IO (Word32)
wM_NCLBUTTONUP :: WindowMessage
wM_NCLBUTTONUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCLBUTTONUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCLBUTTONUP :: IO (Word32)
wM_NCLBUTTONDBLCLK :: WindowMessage
wM_NCLBUTTONDBLCLK =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCLBUTTONDBLCLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCLBUTTONDBLCLK :: IO (Word32)
wM_NCRBUTTONDOWN :: WindowMessage
wM_NCRBUTTONDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCRBUTTONDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCRBUTTONDOWN :: IO (Word32)
wM_NCRBUTTONUP :: WindowMessage
wM_NCRBUTTONUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCRBUTTONUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCRBUTTONUP :: IO (Word32)
wM_NCRBUTTONDBLCLK :: WindowMessage
wM_NCRBUTTONDBLCLK =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCRBUTTONDBLCLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCRBUTTONDBLCLK :: IO (Word32)
wM_NCMBUTTONDOWN :: WindowMessage
wM_NCMBUTTONDOWN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCMBUTTONDOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCMBUTTONDOWN :: IO (Word32)
wM_NCMBUTTONUP :: WindowMessage
wM_NCMBUTTONUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCMBUTTONUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCMBUTTONUP :: IO (Word32)
wM_NCMBUTTONDBLCLK :: WindowMessage
wM_NCMBUTTONDBLCLK =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NCMBUTTONDBLCLK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NCMBUTTONDBLCLK :: IO (Word32)
wM_MOUSEACTIVATE :: WindowMessage
wM_MOUSEACTIVATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MOUSEACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MOUSEACTIVATE :: IO (Word32)
wM_CANCELMODE :: WindowMessage
wM_CANCELMODE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CANCELMODE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CANCELMODE :: IO (Word32)
wM_TIMER :: WindowMessage
wM_TIMER =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_TIMER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_TIMER :: IO (Word32)
wM_INITMENU :: WindowMessage
wM_INITMENU =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_INITMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_INITMENU :: IO (Word32)
wM_INITMENUPOPUP :: WindowMessage
wM_INITMENUPOPUP =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_INITMENUPOPUP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_INITMENUPOPUP :: IO (Word32)
wM_MENUSELECT :: WindowMessage
wM_MENUSELECT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MENUSELECT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MENUSELECT :: IO (Word32)
wM_MENUCHAR :: WindowMessage
wM_MENUCHAR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MENUCHAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MENUCHAR :: IO (Word32)
wM_COMMAND :: WindowMessage
wM_COMMAND =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_COMMAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_COMMAND :: IO (Word32)
wM_HSCROLL :: WindowMessage
wM_HSCROLL =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_HSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_HSCROLL :: IO (Word32)
wM_VSCROLL :: WindowMessage
wM_VSCROLL =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_VSCROLL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_VSCROLL :: IO (Word32)
wM_CUT :: WindowMessage
wM_CUT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CUT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CUT :: IO (Word32)
wM_COPY :: WindowMessage
wM_COPY =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_COPY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_COPY :: IO (Word32)
wM_PASTE :: WindowMessage
wM_PASTE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_PASTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_PASTE :: IO (Word32)
wM_CLEAR :: WindowMessage
wM_CLEAR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CLEAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CLEAR :: IO (Word32)
wM_UNDO :: WindowMessage
wM_UNDO =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_UNDO >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_UNDO :: IO (Word32)
wM_RENDERFORMAT :: WindowMessage
wM_RENDERFORMAT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_RENDERFORMAT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_RENDERFORMAT :: IO (Word32)
wM_RENDERALLFORMATS :: WindowMessage
wM_RENDERALLFORMATS =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_RENDERALLFORMATS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_RENDERALLFORMATS :: IO (Word32)
wM_DESTROYCLIPBOARD :: WindowMessage
wM_DESTROYCLIPBOARD =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DESTROYCLIPBOARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DESTROYCLIPBOARD :: IO (Word32)
wM_DRAWCLIPBOARD :: WindowMessage
wM_DRAWCLIPBOARD =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DRAWCLIPBOARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DRAWCLIPBOARD :: IO (Word32)
wM_PAINTCLIPBOARD :: WindowMessage
wM_PAINTCLIPBOARD =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_PAINTCLIPBOARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_PAINTCLIPBOARD :: IO (Word32)
wM_SIZECLIPBOARD :: WindowMessage
wM_SIZECLIPBOARD =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SIZECLIPBOARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SIZECLIPBOARD :: IO (Word32)
wM_VSCROLLCLIPBOARD :: WindowMessage
wM_VSCROLLCLIPBOARD =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_VSCROLLCLIPBOARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_VSCROLLCLIPBOARD :: IO (Word32)
wM_HSCROLLCLIPBOARD :: WindowMessage
wM_HSCROLLCLIPBOARD =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_HSCROLLCLIPBOARD >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_HSCROLLCLIPBOARD :: IO (Word32)
wM_ASKCBFORMATNAME :: WindowMessage
wM_ASKCBFORMATNAME =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ASKCBFORMATNAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ASKCBFORMATNAME :: IO (Word32)
wM_CHANGECBCHAIN :: WindowMessage
wM_CHANGECBCHAIN =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CHANGECBCHAIN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CHANGECBCHAIN :: IO (Word32)
wM_SETCURSOR :: WindowMessage
wM_SETCURSOR =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SETCURSOR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SETCURSOR :: IO (Word32)
wM_SYSCOMMAND :: WindowMessage
wM_SYSCOMMAND =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SYSCOMMAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SYSCOMMAND :: IO (Word32)
wM_MDICREATE :: WindowMessage
wM_MDICREATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDICREATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDICREATE :: IO (Word32)
wM_MDIDESTROY :: WindowMessage
wM_MDIDESTROY =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDIDESTROY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDIDESTROY :: IO (Word32)
wM_MDIACTIVATE :: WindowMessage
wM_MDIACTIVATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDIACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDIACTIVATE :: IO (Word32)
wM_MDIRESTORE :: WindowMessage
wM_MDIRESTORE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDIRESTORE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDIRESTORE :: IO (Word32)
wM_MDINEXT :: WindowMessage
wM_MDINEXT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDINEXT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDINEXT :: IO (Word32)
wM_MDIMAXIMIZE :: WindowMessage
wM_MDIMAXIMIZE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDIMAXIMIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDIMAXIMIZE :: IO (Word32)
wM_MDITILE :: WindowMessage
wM_MDITILE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDITILE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDITILE :: IO (Word32)
wM_MDICASCADE :: WindowMessage
wM_MDICASCADE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDICASCADE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDICASCADE :: IO (Word32)
wM_MDIICONARRANGE :: WindowMessage
wM_MDIICONARRANGE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDIICONARRANGE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDIICONARRANGE :: IO (Word32)
wM_MDIGETACTIVE :: WindowMessage
wM_MDIGETACTIVE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDIGETACTIVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDIGETACTIVE :: IO (Word32)
wM_MDISETMENU :: WindowMessage
wM_MDISETMENU =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MDISETMENU >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MDISETMENU :: IO (Word32)
wM_CHILDACTIVATE :: WindowMessage
wM_CHILDACTIVATE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CHILDACTIVATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CHILDACTIVATE :: IO (Word32)
wM_INITDIALOG :: WindowMessage
wM_INITDIALOG =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_INITDIALOG >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_INITDIALOG :: IO (Word32)
wM_NEXTDLGCTL :: WindowMessage
wM_NEXTDLGCTL =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_NEXTDLGCTL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_NEXTDLGCTL :: IO (Word32)
wM_PARENTNOTIFY :: WindowMessage
wM_PARENTNOTIFY =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_PARENTNOTIFY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_PARENTNOTIFY :: IO (Word32)
wM_ENTERIDLE :: WindowMessage
wM_ENTERIDLE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_ENTERIDLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_ENTERIDLE :: IO (Word32)
wM_GETDLGCODE :: WindowMessage
wM_GETDLGCODE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_GETDLGCODE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_GETDLGCODE :: IO (Word32)
wM_SETFONT :: WindowMessage
wM_SETFONT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_SETFONT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_SETFONT :: IO (Word32)
wM_GETFONT :: WindowMessage
wM_GETFONT =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_GETFONT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_GETFONT :: IO (Word32)
wM_DRAWITEM :: WindowMessage
wM_DRAWITEM =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DRAWITEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DRAWITEM :: IO (Word32)
wM_MEASUREITEM :: WindowMessage
wM_MEASUREITEM =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_MEASUREITEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_MEASUREITEM :: IO (Word32)
wM_DELETEITEM :: WindowMessage
wM_DELETEITEM =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_DELETEITEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_DELETEITEM :: IO (Word32)
wM_COMPAREITEM :: WindowMessage
wM_COMPAREITEM =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_COMPAREITEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_COMPAREITEM :: IO (Word32)
wM_VKEYTOITEM :: WindowMessage
wM_VKEYTOITEM =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_VKEYTOITEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_VKEYTOITEM :: IO (Word32)
wM_CHARTOITEM :: WindowMessage
wM_CHARTOITEM =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_CHARTOITEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_CHARTOITEM :: IO (Word32)
wM_QUEUESYNC :: WindowMessage
wM_QUEUESYNC =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_QUEUESYNC >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_QUEUESYNC :: IO (Word32)
wM_USER :: WindowMessage
wM_USER =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_wM_USER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_wM_USER :: IO (Word32)


registerWindowMessage :: String -> IO WindowMessage
registerWindowMessage gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32WinMessage_cpp_registerWindowMessage arg1 >>= \ (res1) ->
  (return (res1))
primitive prim_Win32WinMessage_cpp_registerWindowMessage :: Addr -> IO (Word32)

-- These are WM_SIZE specific
sIZE_RESTORED :: WPARAM
sIZE_RESTORED =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_sIZE_RESTORED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_sIZE_RESTORED :: IO (Word32)
sIZE_MINIMIZED :: WPARAM
sIZE_MINIMIZED =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_sIZE_MINIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_sIZE_MINIMIZED :: IO (Word32)
sIZE_MAXIMIZED :: WPARAM
sIZE_MAXIMIZED =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_sIZE_MAXIMIZED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_sIZE_MAXIMIZED :: IO (Word32)
sIZE_MAXSHOW :: WPARAM
sIZE_MAXSHOW =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_sIZE_MAXSHOW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_sIZE_MAXSHOW :: IO (Word32)
sIZE_MAXHIDE :: WPARAM
sIZE_MAXHIDE =
  unsafePerformIO(
    prim_Win32WinMessage_cpp_sIZE_MAXHIDE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32WinMessage_cpp_sIZE_MAXHIDE :: IO (Word32)


----------------------------------------------------------------
-- Phew!
----------------------------------------------------------------
needPrims_hugs 2
