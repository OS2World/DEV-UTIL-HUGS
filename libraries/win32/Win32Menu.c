/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Menu_cpp_checkMenuItem);
primFun(prim_Win32Menu_cpp_checkMenuItem)
{ HMENU arg1; UINT arg2; UINT arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  { DWORD rv = CheckMenuItem(arg1,arg2,arg3);
   if ((gc_failed = ( rv == (DWORD)-1 ))) {gc_failstring =  ErrorString("CheckMenuItem");  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(rv == MF_CHECKED));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_checkMenuRadioItem);
primFun(prim_Win32Menu_cpp_checkMenuRadioItem)
{ HMENU arg1; UINT arg2; UINT arg3; UINT arg4; UINT arg5;int gc_failed;
							 char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  arg5 = (UINT)(hugs->getWord());
  { BOOL success = CheckMenuRadioItem(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("CheckMenuRadioItem");  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_createMenu);
primFun(prim_Win32Menu_cpp_createMenu)
{ HMENU res1;int gc_failed;
	     char* gc_failstring;;
  {res1 = CreateMenu();
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("CreateMenu");  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HMENU)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_createPopupMenu);
primFun(prim_Win32Menu_cpp_createPopupMenu)
{ HMENU res1;int gc_failed;
	     char* gc_failstring;;
  {res1 = CreatePopupMenu();
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("CreatePopupMenu");  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HMENU)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_drawMenuBar);
primFun(prim_Win32Menu_cpp_drawMenuBar)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = DrawMenuBar(arg1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("DrawMenuBar")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_enableMenuItem);
primFun(prim_Win32Menu_cpp_enableMenuItem)
{ HMENU arg1; UINT arg2; UINT arg3;UINT res1;int gc_failed;
					     char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  { DWORD res1 = EnableMenuItem(arg1,arg2,arg3);
   if ((gc_failed = ( res1 == (DWORD)-1 ))) {gc_failstring =  ErrorString("EnableMenuItem");  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_gMDI_USEDISABLED);
primFun(prim_Win32Menu_cpp_gMDI_USEDISABLED)
{ UINT res1;;
  {res1=GMDI_USEDISABLED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_gMDI_GOINTOPOPUPS);
primFun(prim_Win32Menu_cpp_gMDI_GOINTOPOPUPS)
{ UINT res1;;
  {res1=GMDI_GOINTOPOPUPS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_BYCOMMAND);
primFun(prim_Win32Menu_cpp_mF_BYCOMMAND)
{ UINT res1;;
  {res1=MF_BYCOMMAND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_BYPOSITION);
primFun(prim_Win32Menu_cpp_mF_BYPOSITION)
{ UINT res1;;
  {res1=MF_BYPOSITION;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_INSERT);
primFun(prim_Win32Menu_cpp_mF_INSERT)
{ UINT res1;;
  {res1=MF_INSERT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_CHANGE);
primFun(prim_Win32Menu_cpp_mF_CHANGE)
{ UINT res1;;
  {res1=MF_CHANGE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_APPEND);
primFun(prim_Win32Menu_cpp_mF_APPEND)
{ UINT res1;;
  {res1=MF_APPEND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_DELETE);
primFun(prim_Win32Menu_cpp_mF_DELETE)
{ UINT res1;;
  {res1=MF_DELETE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_REMOVE);
primFun(prim_Win32Menu_cpp_mF_REMOVE)
{ UINT res1;;
  {res1=MF_REMOVE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_USECHECKBITMAPS);
primFun(prim_Win32Menu_cpp_mF_USECHECKBITMAPS)
{ UINT res1;;
  {res1=MF_USECHECKBITMAPS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_POPUP);
primFun(prim_Win32Menu_cpp_mF_POPUP)
{ UINT res1;;
  {res1=MF_POPUP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_SYSMENU);
primFun(prim_Win32Menu_cpp_mF_SYSMENU)
{ UINT res1;;
  {res1=MF_SYSMENU;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_HELP);
primFun(prim_Win32Menu_cpp_mF_HELP)
{ UINT res1;;
  {res1=MF_HELP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_MOUSESELECT);
primFun(prim_Win32Menu_cpp_mF_MOUSESELECT)
{ UINT res1;;
  {res1=MF_MOUSESELECT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mF_END);
primFun(prim_Win32Menu_cpp_mF_END)
{ UINT res1;;
  {res1=MF_END;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_STRING);
primFun(prim_Win32Menu_cpp_mFT_STRING)
{ UINT res1;;
  {res1=MFT_STRING;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_BITMAP);
primFun(prim_Win32Menu_cpp_mFT_BITMAP)
{ UINT res1;;
  {res1=MFT_BITMAP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_MENUBARBREAK);
primFun(prim_Win32Menu_cpp_mFT_MENUBARBREAK)
{ UINT res1;;
  {res1=MFT_MENUBARBREAK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_MENUBREAK);
primFun(prim_Win32Menu_cpp_mFT_MENUBREAK)
{ UINT res1;;
  {res1=MFT_MENUBREAK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_OWNERDRAW);
primFun(prim_Win32Menu_cpp_mFT_OWNERDRAW)
{ UINT res1;;
  {res1=MFT_OWNERDRAW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_RADIOCHECK);
primFun(prim_Win32Menu_cpp_mFT_RADIOCHECK)
{ UINT res1;;
  {res1=MFT_RADIOCHECK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_SEPARATOR);
primFun(prim_Win32Menu_cpp_mFT_SEPARATOR)
{ UINT res1;;
  {res1=MFT_SEPARATOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_RIGHTORDER);
primFun(prim_Win32Menu_cpp_mFT_RIGHTORDER)
{ UINT res1;;
  {res1=MFT_RIGHTORDER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFT_RIGHTJUSTIFY);
primFun(prim_Win32Menu_cpp_mFT_RIGHTJUSTIFY)
{ UINT res1;;
  {res1=MFT_RIGHTJUSTIFY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_GRAYED);
primFun(prim_Win32Menu_cpp_mFS_GRAYED)
{ UINT res1;;
  {res1=MFS_GRAYED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_DISABLED);
primFun(prim_Win32Menu_cpp_mFS_DISABLED)
{ UINT res1;;
  {res1=MFS_DISABLED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_CHECKED);
primFun(prim_Win32Menu_cpp_mFS_CHECKED)
{ UINT res1;;
  {res1=MFS_CHECKED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_HILITE);
primFun(prim_Win32Menu_cpp_mFS_HILITE)
{ UINT res1;;
  {res1=MFS_HILITE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_ENABLED);
primFun(prim_Win32Menu_cpp_mFS_ENABLED)
{ UINT res1;;
  {res1=MFS_ENABLED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_UNCHECKED);
primFun(prim_Win32Menu_cpp_mFS_UNCHECKED)
{ UINT res1;;
  {res1=MFS_UNCHECKED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_UNHILITE);
primFun(prim_Win32Menu_cpp_mFS_UNHILITE)
{ UINT res1;;
  {res1=MFS_UNHILITE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mFS_DEFAULT);
primFun(prim_Win32Menu_cpp_mFS_DEFAULT)
{ UINT res1;;
  {res1=MFS_DEFAULT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_LEFTBUTTON);
primFun(prim_Win32Menu_cpp_tPM_LEFTBUTTON)
{ UINT res1;;
  {res1=TPM_LEFTBUTTON;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_RIGHTBUTTON);
primFun(prim_Win32Menu_cpp_tPM_RIGHTBUTTON)
{ UINT res1;;
  {res1=TPM_RIGHTBUTTON;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_LEFTALIGN);
primFun(prim_Win32Menu_cpp_tPM_LEFTALIGN)
{ UINT res1;;
  {res1=TPM_LEFTALIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_CENTERALIGN);
primFun(prim_Win32Menu_cpp_tPM_CENTERALIGN)
{ UINT res1;;
  {res1=TPM_CENTERALIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_RIGHTALIGN);
primFun(prim_Win32Menu_cpp_tPM_RIGHTALIGN)
{ UINT res1;;
  {res1=TPM_RIGHTALIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_TOPALIGN);
primFun(prim_Win32Menu_cpp_tPM_TOPALIGN)
{ UINT res1;;
  {res1=TPM_TOPALIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_VCENTERALIGN);
primFun(prim_Win32Menu_cpp_tPM_VCENTERALIGN)
{ UINT res1;;
  {res1=TPM_VCENTERALIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_BOTTOMALIGN);
primFun(prim_Win32Menu_cpp_tPM_BOTTOMALIGN)
{ UINT res1;;
  {res1=TPM_BOTTOMALIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_HORIZONTAL);
primFun(prim_Win32Menu_cpp_tPM_HORIZONTAL)
{ UINT res1;;
  {res1=TPM_HORIZONTAL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_VERTICAL);
primFun(prim_Win32Menu_cpp_tPM_VERTICAL)
{ UINT res1;;
  {res1=TPM_VERTICAL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_NONOTIFY);
primFun(prim_Win32Menu_cpp_tPM_NONOTIFY)
{ UINT res1;;
  {res1=TPM_NONOTIFY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_tPM_RETURNCMD);
primFun(prim_Win32Menu_cpp_tPM_RETURNCMD)
{ UINT res1;;
  {res1=TPM_RETURNCMD;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_SIZE);
primFun(prim_Win32Menu_cpp_sC_SIZE)
{ UINT res1;;
  {res1=SC_SIZE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_MOVE);
primFun(prim_Win32Menu_cpp_sC_MOVE)
{ UINT res1;;
  {res1=SC_MOVE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_MINIMIZE);
primFun(prim_Win32Menu_cpp_sC_MINIMIZE)
{ UINT res1;;
  {res1=SC_MINIMIZE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_MAXIMIZE);
primFun(prim_Win32Menu_cpp_sC_MAXIMIZE)
{ UINT res1;;
  {res1=SC_MAXIMIZE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_NEXTWINDOW);
primFun(prim_Win32Menu_cpp_sC_NEXTWINDOW)
{ UINT res1;;
  {res1=SC_NEXTWINDOW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_PREVWINDOW);
primFun(prim_Win32Menu_cpp_sC_PREVWINDOW)
{ UINT res1;;
  {res1=SC_PREVWINDOW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_CLOSE);
primFun(prim_Win32Menu_cpp_sC_CLOSE)
{ UINT res1;;
  {res1=SC_CLOSE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_VSCROLL);
primFun(prim_Win32Menu_cpp_sC_VSCROLL)
{ UINT res1;;
  {res1=SC_VSCROLL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_HSCROLL);
primFun(prim_Win32Menu_cpp_sC_HSCROLL)
{ UINT res1;;
  {res1=SC_HSCROLL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_MOUSEMENU);
primFun(prim_Win32Menu_cpp_sC_MOUSEMENU)
{ UINT res1;;
  {res1=SC_MOUSEMENU;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_KEYMENU);
primFun(prim_Win32Menu_cpp_sC_KEYMENU)
{ UINT res1;;
  {res1=SC_KEYMENU;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_ARRANGE);
primFun(prim_Win32Menu_cpp_sC_ARRANGE)
{ UINT res1;;
  {res1=SC_ARRANGE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_RESTORE);
primFun(prim_Win32Menu_cpp_sC_RESTORE)
{ UINT res1;;
  {res1=SC_RESTORE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_TASKLIST);
primFun(prim_Win32Menu_cpp_sC_TASKLIST)
{ UINT res1;;
  {res1=SC_TASKLIST;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_SCREENSAVE);
primFun(prim_Win32Menu_cpp_sC_SCREENSAVE)
{ UINT res1;;
  {res1=SC_SCREENSAVE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_HOTKEY);
primFun(prim_Win32Menu_cpp_sC_HOTKEY)
{ UINT res1;;
  {res1=SC_HOTKEY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_DEFAULT);
primFun(prim_Win32Menu_cpp_sC_DEFAULT)
{ UINT res1;;
  {res1=SC_DEFAULT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_MONITORPOWER);
primFun(prim_Win32Menu_cpp_sC_MONITORPOWER)
{ UINT res1;;
  {res1=SC_MONITORPOWER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_CONTEXTHELP);
primFun(prim_Win32Menu_cpp_sC_CONTEXTHELP)
{ UINT res1;;
  {res1=SC_CONTEXTHELP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_sC_SEPARATOR);
primFun(prim_Win32Menu_cpp_sC_SEPARATOR)
{ UINT res1;;
  {res1=SC_SEPARATOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_isMenu);
primFun(prim_Win32Menu_cpp_isMenu)
{ HMENU arg1;;
  arg1 = (HMENU)(hugs->getAddr());
  { BOOL success = IsMenu(arg1);
   hugs->putInt((int)(success));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getSystemMenu);
primFun(prim_Win32Menu_cpp_getSystemMenu)
{ HWND arg1; int arg2;HMENU res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  {res1 = GetSystemMenu(arg1, arg2);
   hugs->putAddr((HMENU)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenu);
primFun(prim_Win32Menu_cpp_getMenu)
{ HWND arg1;HMENU res1;;
  arg1 = (HWND)(hugs->getAddr());
  {res1 = GetMenu(arg1);
   hugs->putAddr((HMENU)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenuDefaultItem);
primFun(prim_Win32Menu_cpp_getMenuDefaultItem)
{ HMENU arg1; int arg2; UINT arg3;UINT res1;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (UINT)(hugs->getWord());
  { int res1 = GetMenuDefaultItem(arg1,arg2,arg3);
   if ((gc_failed = ( res1==-1 ))) {gc_failstring =  ErrorString("GetMenuDefaultItem")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenuState);
primFun(prim_Win32Menu_cpp_getMenuState)
{ HMENU arg1; UINT arg2; UINT arg3;UINT res;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  { UINT res = GetMenuState(arg1,arg2,arg3);
   if ((gc_failed = ( (int)res=-1 ))) {gc_failstring =  ErrorString("GetMenuState")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getSubMenu);
primFun(prim_Win32Menu_cpp_getSubMenu)
{ HMENU arg1; UINT arg2;HMENU res1;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  {res1 = GetSubMenu(arg1, arg2);
   hugs->putAddr((HMENU)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_setMenu);
primFun(prim_Win32Menu_cpp_setMenu)
{ HWND arg1; HMENU arg2;int gc_failed;
			char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HMENU)(hugs->getAddr());
  { BOOL success = SetMenu(arg1,arg2);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("SetMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenuItemCount);
primFun(prim_Win32Menu_cpp_getMenuItemCount)
{ HMENU arg1;int res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  { int res1 = GetMenuItemCount(arg1);
   if ((gc_failed = ( res1==-1 ))) {gc_failstring =  ErrorString("GetMenuItemCount")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenuItemID);
primFun(prim_Win32Menu_cpp_getMenuItemID)
{ HMENU arg1; UINT arg2;UINT res1;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  { UINT res1 = GetMenuItemCount(arg1);
   if ((gc_failed = ( res1==(UINT)-1 ))) {gc_failstring =  ErrorString("GetMenuItemID")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_unravelItemInfo);
primFun(prim_Win32Menu_cpp_unravelItemInfo)
{ void * arg1;;
  arg1 = (void *)(hugs->getAddr());
  { MENUITEMINFO* res1=arg1;
   hugs->putInt((int)(res1->cch));
   hugs->putAddr((char *)(res1->dwTypeData));
   hugs->putWord((DWORD)(res1->dwItemData));
   hugs->putAddr((HBITMAP)(res1->hbmpUnchecked));
   hugs->putAddr((HBITMAP)(res1->hbmpChecked));
   hugs->putAddr((HMENU)(res1->hSubMenu));
   hugs->putWord((UINT)(res1->wID));
   hugs->putWord((UINT)(res1->fState));
   hugs->putWord((UINT)(res1->fType));
   hugs_returnIO(9);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mallocMenuItemInfo);
primFun(prim_Win32Menu_cpp_mallocMenuItemInfo)
{ MENUITEMINFO* mp;int gc_failed;
		   char* gc_failstring;;
  { mp = (MENUITEMINFO*) malloc(sizeof(MENUITEMINFO));
     if (mp!=NULL) mp->cbSize = sizeof(MENUITEMINFO);
   if ((gc_failed = ( mp==NULL ))) {gc_failstring =  MallocError("mallocMenuItemInfo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((MENUITEMINFO*)(mp));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_assignMenuItemInfo);
primFun(prim_Win32Menu_cpp_assignMenuItemInfo)
{ void * arg1; UINT arg2; UINT arg3; UINT arg4; HMENU arg5; HBITMAP arg6; HBITMAP arg7; DWORD arg8; void * arg9; int arg10;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  arg5 = (HMENU)(hugs->getAddr());
  arg6 = (HBITMAP)(hugs->getAddr());
  arg7 = (HBITMAP)(hugs->getAddr());
  arg8 = (DWORD)(hugs->getWord());
  arg9 = (void *)(hugs->getAddr());
  arg10 = (int)(hugs->getInt());
  { MENUITEMINFO* ptr;
     ptr=(MENUITEMINFO*)arg1;
     ptr->fType         = arg2;
     ptr->fState        = arg3;
     ptr->wID           = arg4;
     ptr->hSubMenu      = arg5;
     ptr->hbmpChecked   = arg6;
     ptr->hbmpUnchecked = arg7;
     ptr->dwItemData    = arg8;
     ptr->dwTypeData    = arg9;
     ptr->cch           = arg10;
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mIIM_CHECKMARKS);
primFun(prim_Win32Menu_cpp_mIIM_CHECKMARKS)
{ UINT res1;;
  {res1=MIIM_CHECKMARKS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mIIM_DATA);
primFun(prim_Win32Menu_cpp_mIIM_DATA)
{ UINT res1;;
  {res1=MIIM_DATA;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mIIM_ID);
primFun(prim_Win32Menu_cpp_mIIM_ID)
{ UINT res1;;
  {res1=MIIM_ID;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mIIM_STATE);
primFun(prim_Win32Menu_cpp_mIIM_STATE)
{ UINT res1;;
  {res1=MIIM_STATE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mIIM_SUBMENU);
primFun(prim_Win32Menu_cpp_mIIM_SUBMENU)
{ UINT res1;;
  {res1=MIIM_SUBMENU;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_mIIM_TYPE);
primFun(prim_Win32Menu_cpp_mIIM_TYPE)
{ UINT res1;;
  {res1=MIIM_TYPE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenuItemInfo);
primFun(prim_Win32Menu_cpp_getMenuItemInfo)
{ HMENU arg1; UINT arg2; int arg3; UINT arg4;int gc_failed;
					     char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (UINT)(hugs->getWord());
  { MENUITEMINFO* mi_info;
     BOOL success;
     mi_info = malloc(sizeof(MENUITEMINFO));
     if (mi_info == NULL) {
        success = FALSE;
     } else {
        mi_info->cbSize = sizeof(MENUITEMINFO);
        mi_info->fMask  = arg4;
        success = GetMenuItemInfo(arg1,arg2,arg3,mi_info);
     };
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("GetMenuItemInfo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(mi_info));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_getMenuItemRect);
primFun(prim_Win32Menu_cpp_getMenuItemRect)
{ HWND arg1; HMENU arg2; UINT arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HMENU)(hugs->getAddr());
  arg3 = (UINT)(hugs->getWord());
  { RECT r; BOOL success = GetMenuItemRect(arg1,arg2,arg3,&r);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("GetMenuItemRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((r).bottom));
   hugs->putInt((LONG)((r).right));
   hugs->putInt((LONG)((r).top));
   hugs->putInt((LONG)((r).left));
   hugs_returnIO(6);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_hiliteMenuItem);
primFun(prim_Win32Menu_cpp_hiliteMenuItem)
{ HWND arg1; HMENU arg2; UINT arg3; UINT arg4;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HMENU)(hugs->getAddr());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  { BOOL success = HiliteMenuItem(arg1,arg2,arg3,arg4);
   hugs->putInt((int)(success));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_insertMenuItem);
primFun(prim_Win32Menu_cpp_insertMenuItem)
{ HMENU arg1; UINT arg2; int arg3; void * arg4;int gc_failed;
					       char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (void *)(hugs->getAddr());
  { BOOL success = InsertMenuItem(arg1,arg2,arg3,arg4);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("InsertMenuItem")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_loadMenu);
primFun(prim_Win32Menu_cpp_loadMenu)
{ HINSTANCE arg1; LPCSTR arg2;HMENU res1;int gc_failed;
					 char* gc_failstring;;
  arg1 = (HINSTANCE)(hugs->getAddr());
  arg2 = (LPCSTR)(hugs->getAddr());
  {res1 = LoadMenu(arg1, arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("LoadMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HMENU)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_menuItemFromPoint);
primFun(prim_Win32Menu_cpp_menuItemFromPoint)
{ HWND arg1; HMENU arg2;POINT arg3;UINT res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HMENU)(hugs->getAddr());
  (arg3).x = (LONG)(hugs->getInt());
  (arg3).y = (LONG)(hugs->getInt());
  { UINT res1=MenuItemFromPoint(arg1,arg2,arg3);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_setMenuDefaultItem);
primFun(prim_Win32Menu_cpp_setMenuDefaultItem)
{ HMENU arg1; UINT arg2; int arg3;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  { BOOL success = SetMenuDefaultItem(arg1,arg2,arg3);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("SetMenuDefaultItem")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_setMenuItemBitmaps);
primFun(prim_Win32Menu_cpp_setMenuItemBitmaps)
{ HMENU arg1; UINT arg2; UINT arg3; HBITMAP arg4; HBITMAP arg5;int gc_failed;
							       char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (HBITMAP)(hugs->getAddr());
  arg5 = (HBITMAP)(hugs->getAddr());
  { BOOL success = SetMenuItemBitmaps(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("SetMenuItemBitmaps")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_destroyMenu);
primFun(prim_Win32Menu_cpp_destroyMenu)
{ HMENU arg1;int gc_failed;
	     char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  { BOOL success = DestroyMenu(arg1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("DestroyMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_deleteMenu);
primFun(prim_Win32Menu_cpp_deleteMenu)
{ HMENU arg1; UINT arg2; UINT arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  { BOOL success = DeleteMenu(arg1,arg2,arg3);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("DeleteMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_setMenuItemInfo);
primFun(prim_Win32Menu_cpp_setMenuItemInfo)
{ HMENU arg1; UINT arg2; int arg3; UINT arg4; void * arg5;int gc_failed;
							  char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (UINT)(hugs->getWord());
  arg5 = (void *)(hugs->getAddr());
  { BOOL success;
     ((MENUITEMINFO*)arg5)->fMask = arg4;
     success = SetMenuItemInfo(arg1,arg2,arg3,arg5);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("SetMenuItemInfo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_trackPopupMenu);
primFun(prim_Win32Menu_cpp_trackPopupMenu)
{ HMENU arg1; UINT arg2; int arg3; int arg4; HWND arg5;RECT arg6;int gc_failed;
								 char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (HWND)(hugs->getAddr());
  (arg6).left = (LONG)(hugs->getInt());
  (arg6).top = (LONG)(hugs->getInt());
  (arg6).right = (LONG)(hugs->getInt());
  (arg6).bottom = (LONG)(hugs->getInt());
  { BOOL success = TrackPopupMenu(arg1,arg2,arg3,arg4,0,arg5,&arg6);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("TrackPopupMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_trackPopupMenuEx);
primFun(prim_Win32Menu_cpp_trackPopupMenuEx)
{ HMENU arg1; UINT arg2; int arg3; int arg4; HWND arg5; LPRECT arg6;int gc_failed;
								    char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (HWND)(hugs->getAddr());
  arg6 = (LPRECT)(hugs->getAddr());
  { TPMPARAMS* ptpmp;
     BOOL success;
     if (arg6 == NULL) 
        ptpmp = NULL;
     else {
        ptpmp = malloc(sizeof(TPMPARAMS));
        if (ptpmp != NULL) {
           ptpmp->cbSize=sizeof(TPMPARAMS);
           ptpmp->rcExclude.left  = arg6->left;
           ptpmp->rcExclude.top   = arg6->top;
           ptpmp->rcExclude.right = arg6->right;
           ptpmp->rcExclude.bottom = arg6->bottom;
       }
     }
     success = TrackPopupMenuEx(arg1,arg2,arg3,arg4,arg5,ptpmp);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("TrackPopupMenuEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_appendMenu);
primFun(prim_Win32Menu_cpp_appendMenu)
{ HMENU arg1; UINT arg2; UINT arg3; char * arg4;int gc_failed;
						char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (char *)(hugs->getAddr());
  { BOOL success = AppendMenu(arg1,arg2,arg3,arg4);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("AppendMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_insertMenu);
primFun(prim_Win32Menu_cpp_insertMenu)
{ HMENU arg1; UINT arg2; UINT arg3; UINT arg4; char * arg5;int gc_failed;
							   char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  arg5 = (char *)(hugs->getAddr());
  { BOOL success = InsertMenu(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("InsertMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_modifyMenu);
primFun(prim_Win32Menu_cpp_modifyMenu)
{ HMENU arg1; UINT arg2; UINT arg3; UINT arg4; char * arg5;int gc_failed;
							   char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  arg5 = (char *)(hugs->getAddr());
  { BOOL success = ModifyMenu(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("ModifyMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Menu_cpp_removeMenu);
primFun(prim_Win32Menu_cpp_removeMenu)
{ HMENU arg1; UINT arg2; UINT arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HMENU)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  { BOOL success = RemoveMenu(arg1,arg2,arg3);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("RemoveMenu")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Menu_cpp_checkMenuItem",5,prim_Win32Menu_cpp_checkMenuItem},
  {"prim_Win32Menu_cpp_checkMenuRadioItem",7,prim_Win32Menu_cpp_checkMenuRadioItem},
  {"prim_Win32Menu_cpp_createMenu",2,prim_Win32Menu_cpp_createMenu},
  {"prim_Win32Menu_cpp_createPopupMenu",2,prim_Win32Menu_cpp_createPopupMenu},
  {"prim_Win32Menu_cpp_drawMenuBar",3,prim_Win32Menu_cpp_drawMenuBar},
  {"prim_Win32Menu_cpp_enableMenuItem",5,prim_Win32Menu_cpp_enableMenuItem},
  {"prim_Win32Menu_cpp_gMDI_USEDISABLED",2,prim_Win32Menu_cpp_gMDI_USEDISABLED},
  {"prim_Win32Menu_cpp_gMDI_GOINTOPOPUPS",2,prim_Win32Menu_cpp_gMDI_GOINTOPOPUPS},
  {"prim_Win32Menu_cpp_mF_BYCOMMAND",2,prim_Win32Menu_cpp_mF_BYCOMMAND},
  {"prim_Win32Menu_cpp_mF_BYPOSITION",2,prim_Win32Menu_cpp_mF_BYPOSITION},
  {"prim_Win32Menu_cpp_mF_INSERT",2,prim_Win32Menu_cpp_mF_INSERT},
  {"prim_Win32Menu_cpp_mF_CHANGE",2,prim_Win32Menu_cpp_mF_CHANGE},
  {"prim_Win32Menu_cpp_mF_APPEND",2,prim_Win32Menu_cpp_mF_APPEND},
  {"prim_Win32Menu_cpp_mF_DELETE",2,prim_Win32Menu_cpp_mF_DELETE},
  {"prim_Win32Menu_cpp_mF_REMOVE",2,prim_Win32Menu_cpp_mF_REMOVE},
  {"prim_Win32Menu_cpp_mF_USECHECKBITMAPS",2,prim_Win32Menu_cpp_mF_USECHECKBITMAPS},
  {"prim_Win32Menu_cpp_mF_POPUP",2,prim_Win32Menu_cpp_mF_POPUP},
  {"prim_Win32Menu_cpp_mF_SYSMENU",2,prim_Win32Menu_cpp_mF_SYSMENU},
  {"prim_Win32Menu_cpp_mF_HELP",2,prim_Win32Menu_cpp_mF_HELP},
  {"prim_Win32Menu_cpp_mF_MOUSESELECT",2,prim_Win32Menu_cpp_mF_MOUSESELECT},
  {"prim_Win32Menu_cpp_mF_END",2,prim_Win32Menu_cpp_mF_END},
  {"prim_Win32Menu_cpp_mFT_STRING",2,prim_Win32Menu_cpp_mFT_STRING},
  {"prim_Win32Menu_cpp_mFT_BITMAP",2,prim_Win32Menu_cpp_mFT_BITMAP},
  {"prim_Win32Menu_cpp_mFT_MENUBARBREAK",2,prim_Win32Menu_cpp_mFT_MENUBARBREAK},
  {"prim_Win32Menu_cpp_mFT_MENUBREAK",2,prim_Win32Menu_cpp_mFT_MENUBREAK},
  {"prim_Win32Menu_cpp_mFT_OWNERDRAW",2,prim_Win32Menu_cpp_mFT_OWNERDRAW},
  {"prim_Win32Menu_cpp_mFT_RADIOCHECK",2,prim_Win32Menu_cpp_mFT_RADIOCHECK},
  {"prim_Win32Menu_cpp_mFT_SEPARATOR",2,prim_Win32Menu_cpp_mFT_SEPARATOR},
  {"prim_Win32Menu_cpp_mFT_RIGHTORDER",2,prim_Win32Menu_cpp_mFT_RIGHTORDER},
  {"prim_Win32Menu_cpp_mFT_RIGHTJUSTIFY",2,prim_Win32Menu_cpp_mFT_RIGHTJUSTIFY},
  {"prim_Win32Menu_cpp_mFS_GRAYED",2,prim_Win32Menu_cpp_mFS_GRAYED},
  {"prim_Win32Menu_cpp_mFS_DISABLED",2,prim_Win32Menu_cpp_mFS_DISABLED},
  {"prim_Win32Menu_cpp_mFS_CHECKED",2,prim_Win32Menu_cpp_mFS_CHECKED},
  {"prim_Win32Menu_cpp_mFS_HILITE",2,prim_Win32Menu_cpp_mFS_HILITE},
  {"prim_Win32Menu_cpp_mFS_ENABLED",2,prim_Win32Menu_cpp_mFS_ENABLED},
  {"prim_Win32Menu_cpp_mFS_UNCHECKED",2,prim_Win32Menu_cpp_mFS_UNCHECKED},
  {"prim_Win32Menu_cpp_mFS_UNHILITE",2,prim_Win32Menu_cpp_mFS_UNHILITE},
  {"prim_Win32Menu_cpp_mFS_DEFAULT",2,prim_Win32Menu_cpp_mFS_DEFAULT},
  {"prim_Win32Menu_cpp_tPM_LEFTBUTTON",2,prim_Win32Menu_cpp_tPM_LEFTBUTTON},
  {"prim_Win32Menu_cpp_tPM_RIGHTBUTTON",2,prim_Win32Menu_cpp_tPM_RIGHTBUTTON},
  {"prim_Win32Menu_cpp_tPM_LEFTALIGN",2,prim_Win32Menu_cpp_tPM_LEFTALIGN},
  {"prim_Win32Menu_cpp_tPM_CENTERALIGN",2,prim_Win32Menu_cpp_tPM_CENTERALIGN},
  {"prim_Win32Menu_cpp_tPM_RIGHTALIGN",2,prim_Win32Menu_cpp_tPM_RIGHTALIGN},
  {"prim_Win32Menu_cpp_tPM_TOPALIGN",2,prim_Win32Menu_cpp_tPM_TOPALIGN},
  {"prim_Win32Menu_cpp_tPM_VCENTERALIGN",2,prim_Win32Menu_cpp_tPM_VCENTERALIGN},
  {"prim_Win32Menu_cpp_tPM_BOTTOMALIGN",2,prim_Win32Menu_cpp_tPM_BOTTOMALIGN},
  {"prim_Win32Menu_cpp_tPM_HORIZONTAL",2,prim_Win32Menu_cpp_tPM_HORIZONTAL},
  {"prim_Win32Menu_cpp_tPM_VERTICAL",2,prim_Win32Menu_cpp_tPM_VERTICAL},
  {"prim_Win32Menu_cpp_tPM_NONOTIFY",2,prim_Win32Menu_cpp_tPM_NONOTIFY},
  {"prim_Win32Menu_cpp_tPM_RETURNCMD",2,prim_Win32Menu_cpp_tPM_RETURNCMD},
  {"prim_Win32Menu_cpp_sC_SIZE",2,prim_Win32Menu_cpp_sC_SIZE},
  {"prim_Win32Menu_cpp_sC_MOVE",2,prim_Win32Menu_cpp_sC_MOVE},
  {"prim_Win32Menu_cpp_sC_MINIMIZE",2,prim_Win32Menu_cpp_sC_MINIMIZE},
  {"prim_Win32Menu_cpp_sC_MAXIMIZE",2,prim_Win32Menu_cpp_sC_MAXIMIZE},
  {"prim_Win32Menu_cpp_sC_NEXTWINDOW",2,prim_Win32Menu_cpp_sC_NEXTWINDOW},
  {"prim_Win32Menu_cpp_sC_PREVWINDOW",2,prim_Win32Menu_cpp_sC_PREVWINDOW},
  {"prim_Win32Menu_cpp_sC_CLOSE",2,prim_Win32Menu_cpp_sC_CLOSE},
  {"prim_Win32Menu_cpp_sC_VSCROLL",2,prim_Win32Menu_cpp_sC_VSCROLL},
  {"prim_Win32Menu_cpp_sC_HSCROLL",2,prim_Win32Menu_cpp_sC_HSCROLL},
  {"prim_Win32Menu_cpp_sC_MOUSEMENU",2,prim_Win32Menu_cpp_sC_MOUSEMENU},
  {"prim_Win32Menu_cpp_sC_KEYMENU",2,prim_Win32Menu_cpp_sC_KEYMENU},
  {"prim_Win32Menu_cpp_sC_ARRANGE",2,prim_Win32Menu_cpp_sC_ARRANGE},
  {"prim_Win32Menu_cpp_sC_RESTORE",2,prim_Win32Menu_cpp_sC_RESTORE},
  {"prim_Win32Menu_cpp_sC_TASKLIST",2,prim_Win32Menu_cpp_sC_TASKLIST},
  {"prim_Win32Menu_cpp_sC_SCREENSAVE",2,prim_Win32Menu_cpp_sC_SCREENSAVE},
  {"prim_Win32Menu_cpp_sC_HOTKEY",2,prim_Win32Menu_cpp_sC_HOTKEY},
  {"prim_Win32Menu_cpp_sC_DEFAULT",2,prim_Win32Menu_cpp_sC_DEFAULT},
  {"prim_Win32Menu_cpp_sC_MONITORPOWER",2,prim_Win32Menu_cpp_sC_MONITORPOWER},
  {"prim_Win32Menu_cpp_sC_CONTEXTHELP",2,prim_Win32Menu_cpp_sC_CONTEXTHELP},
  {"prim_Win32Menu_cpp_sC_SEPARATOR",2,prim_Win32Menu_cpp_sC_SEPARATOR},
  {"prim_Win32Menu_cpp_isMenu",3,prim_Win32Menu_cpp_isMenu},
  {"prim_Win32Menu_cpp_getSystemMenu",4,prim_Win32Menu_cpp_getSystemMenu},
  {"prim_Win32Menu_cpp_getMenu",3,prim_Win32Menu_cpp_getMenu},
  {"prim_Win32Menu_cpp_getMenuDefaultItem",5,prim_Win32Menu_cpp_getMenuDefaultItem},
  {"prim_Win32Menu_cpp_getMenuState",5,prim_Win32Menu_cpp_getMenuState},
  {"prim_Win32Menu_cpp_getSubMenu",4,prim_Win32Menu_cpp_getSubMenu},
  {"prim_Win32Menu_cpp_setMenu",4,prim_Win32Menu_cpp_setMenu},
  {"prim_Win32Menu_cpp_getMenuItemCount",3,prim_Win32Menu_cpp_getMenuItemCount},
  {"prim_Win32Menu_cpp_getMenuItemID",4,prim_Win32Menu_cpp_getMenuItemID},
  {"prim_Win32Menu_cpp_unravelItemInfo",3,prim_Win32Menu_cpp_unravelItemInfo},
  {"prim_Win32Menu_cpp_mallocMenuItemInfo",2,prim_Win32Menu_cpp_mallocMenuItemInfo},
  {"prim_Win32Menu_cpp_assignMenuItemInfo",12,prim_Win32Menu_cpp_assignMenuItemInfo},
  {"prim_Win32Menu_cpp_mIIM_CHECKMARKS",2,prim_Win32Menu_cpp_mIIM_CHECKMARKS},
  {"prim_Win32Menu_cpp_mIIM_DATA",2,prim_Win32Menu_cpp_mIIM_DATA},
  {"prim_Win32Menu_cpp_mIIM_ID",2,prim_Win32Menu_cpp_mIIM_ID},
  {"prim_Win32Menu_cpp_mIIM_STATE",2,prim_Win32Menu_cpp_mIIM_STATE},
  {"prim_Win32Menu_cpp_mIIM_SUBMENU",2,prim_Win32Menu_cpp_mIIM_SUBMENU},
  {"prim_Win32Menu_cpp_mIIM_TYPE",2,prim_Win32Menu_cpp_mIIM_TYPE},
  {"prim_Win32Menu_cpp_getMenuItemInfo",6,prim_Win32Menu_cpp_getMenuItemInfo},
  {"prim_Win32Menu_cpp_getMenuItemRect",5,prim_Win32Menu_cpp_getMenuItemRect},
  {"prim_Win32Menu_cpp_hiliteMenuItem",6,prim_Win32Menu_cpp_hiliteMenuItem},
  {"prim_Win32Menu_cpp_insertMenuItem",6,prim_Win32Menu_cpp_insertMenuItem},
  {"prim_Win32Menu_cpp_loadMenu",4,prim_Win32Menu_cpp_loadMenu},
  {"prim_Win32Menu_cpp_menuItemFromPoint",6,prim_Win32Menu_cpp_menuItemFromPoint},
  {"prim_Win32Menu_cpp_setMenuDefaultItem",5,prim_Win32Menu_cpp_setMenuDefaultItem},
  {"prim_Win32Menu_cpp_setMenuItemBitmaps",7,prim_Win32Menu_cpp_setMenuItemBitmaps},
  {"prim_Win32Menu_cpp_destroyMenu",3,prim_Win32Menu_cpp_destroyMenu},
  {"prim_Win32Menu_cpp_deleteMenu",5,prim_Win32Menu_cpp_deleteMenu},
  {"prim_Win32Menu_cpp_setMenuItemInfo",7,prim_Win32Menu_cpp_setMenuItemInfo},
  {"prim_Win32Menu_cpp_trackPopupMenu",11,prim_Win32Menu_cpp_trackPopupMenu},
  {"prim_Win32Menu_cpp_trackPopupMenuEx",8,prim_Win32Menu_cpp_trackPopupMenuEx},
  {"prim_Win32Menu_cpp_appendMenu",6,prim_Win32Menu_cpp_appendMenu},
  {"prim_Win32Menu_cpp_insertMenu",7,prim_Win32Menu_cpp_insertMenu},
  {"prim_Win32Menu_cpp_modifyMenu",7,prim_Win32Menu_cpp_modifyMenu},
  {"prim_Win32Menu_cpp_removeMenu",5,prim_Win32Menu_cpp_removeMenu},
  {0,0,0}
};
static struct primInfo prims = { 0, primTable, 0 };

#ifdef __cplusplus
extern "C" {
#endif
DLLEXPORT(void) initModule(HugsAPI2 *);
DLLEXPORT(void) initModule(HugsAPI2 *hugsAPI) {
    hugs = hugsAPI;
    hugs->registerPrims(&prims);
}
#ifdef __cplusplus
}
#endif
