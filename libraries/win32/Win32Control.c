/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include <commctrl.h>
#include  "errors.h"
#include  "win32debug.h"
PROTO_PRIM(prim_Win32Control_cpp_bS_PUSHBUTTON);
primFun(prim_Win32Control_cpp_bS_PUSHBUTTON)
{ DWORD res1;;
  {res1=BS_PUSHBUTTON;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_DEFPUSHBUTTON);
primFun(prim_Win32Control_cpp_bS_DEFPUSHBUTTON)
{ DWORD res1;;
  {res1=BS_DEFPUSHBUTTON;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_CHECKBOX);
primFun(prim_Win32Control_cpp_bS_CHECKBOX)
{ DWORD res1;;
  {res1=BS_CHECKBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_AUTOCHECKBOX);
primFun(prim_Win32Control_cpp_bS_AUTOCHECKBOX)
{ DWORD res1;;
  {res1=BS_AUTOCHECKBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_RADIOBUTTON);
primFun(prim_Win32Control_cpp_bS_RADIOBUTTON)
{ DWORD res1;;
  {res1=BS_RADIOBUTTON;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_3STATE);
primFun(prim_Win32Control_cpp_bS_3STATE)
{ DWORD res1;;
  {res1=BS_3STATE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_AUTO3STATE);
primFun(prim_Win32Control_cpp_bS_AUTO3STATE)
{ DWORD res1;;
  {res1=BS_AUTO3STATE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_GROUPBOX);
primFun(prim_Win32Control_cpp_bS_GROUPBOX)
{ DWORD res1;;
  {res1=BS_GROUPBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_AUTORADIOBUTTON);
primFun(prim_Win32Control_cpp_bS_AUTORADIOBUTTON)
{ DWORD res1;;
  {res1=BS_AUTORADIOBUTTON;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_OWNERDRAW);
primFun(prim_Win32Control_cpp_bS_OWNERDRAW)
{ DWORD res1;;
  {res1=BS_OWNERDRAW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_LEFTTEXT);
primFun(prim_Win32Control_cpp_bS_LEFTTEXT)
{ DWORD res1;;
  {res1=BS_LEFTTEXT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bS_USERBUTTON);
primFun(prim_Win32Control_cpp_bS_USERBUTTON)
{ DWORD res1;;
  {res1=BS_USERBUTTON;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_createButton);
primFun(prim_Win32Control_cpp_createButton)
{ char * nm; DWORD wstyle; DWORD bstyle; int x; int y; int w; int h; HWND parent; HMENU hmenu; HANDLE handle;HWND hwnd;int gc_failed;
														       char* gc_failstring;;
  nm = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  bstyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  w = (int)(hugs->getInt());
  h = (int)(hugs->getInt());
  parent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  handle = (HANDLE)(hugs->getAddr());
  { hwnd = CreateWindow("BUTTON",nm,wstyle|bstyle,x,y,w,h,parent,hmenu,handle,NULL);
   if ((gc_failed = (  hwnd == NULL  ))) {gc_failstring =  ErrorWin("CreateButton")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(hwnd));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bST_CHECKED);
primFun(prim_Win32Control_cpp_bST_CHECKED)
{ UINT res1;;
  {res1=BST_CHECKED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bST_INDETERMINATE);
primFun(prim_Win32Control_cpp_bST_INDETERMINATE)
{ UINT res1;;
  {res1=BST_INDETERMINATE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_bST_UNCHECKED);
primFun(prim_Win32Control_cpp_bST_UNCHECKED)
{ UINT res1;;
  {res1=BST_UNCHECKED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_checkDlgButton);
primFun(prim_Win32Control_cpp_checkDlgButton)
{ HWND arg1; int arg2; UINT arg3;int gc_failed;
				 char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (UINT)(hugs->getWord());
  { BOOL res1=CheckDlgButton(arg1,arg2,arg3);
   if ((gc_failed = (  res1 == FALSE  ))) {gc_failstring = ErrorWithCode("CheckDlgButton", res1) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_checkRadioButton);
primFun(prim_Win32Control_cpp_checkRadioButton)
{ HWND arg1; int arg2; int arg3; int arg4;int gc_failed;
					  char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  { BOOL res1=CheckRadioButton(arg1,arg2,arg3,arg4);
   if ((gc_failed = (  res1 == FALSE  ))) {gc_failstring = ErrorWithCode("CheckRadioButton", res1) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_isDlgButtonChecked);
primFun(prim_Win32Control_cpp_isDlgButtonChecked)
{ HWND arg1; int arg2;UINT res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  { BOOL res1=IsDlgButtonChecked(arg1,arg2);
   if ((gc_failed = (  res1 == FALSE  ))) {gc_failstring = ErrorWithCode("IsDlgButtonChecked", res1) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_SIMPLE);
primFun(prim_Win32Control_cpp_cBS_SIMPLE)
{ DWORD res1;;
  {res1=CBS_SIMPLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_DROPDOWN);
primFun(prim_Win32Control_cpp_cBS_DROPDOWN)
{ DWORD res1;;
  {res1=CBS_DROPDOWN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_DROPDOWNLIST);
primFun(prim_Win32Control_cpp_cBS_DROPDOWNLIST)
{ DWORD res1;;
  {res1=CBS_DROPDOWNLIST;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_OWNERDRAWFIXED);
primFun(prim_Win32Control_cpp_cBS_OWNERDRAWFIXED)
{ DWORD res1;;
  {res1=CBS_OWNERDRAWFIXED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_OWNERDRAWVARIABLE);
primFun(prim_Win32Control_cpp_cBS_OWNERDRAWVARIABLE)
{ DWORD res1;;
  {res1=CBS_OWNERDRAWVARIABLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_AUTOHSCROLL);
primFun(prim_Win32Control_cpp_cBS_AUTOHSCROLL)
{ DWORD res1;;
  {res1=CBS_AUTOHSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_OEMCONVERT);
primFun(prim_Win32Control_cpp_cBS_OEMCONVERT)
{ DWORD res1;;
  {res1=CBS_OEMCONVERT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_SORT);
primFun(prim_Win32Control_cpp_cBS_SORT)
{ DWORD res1;;
  {res1=CBS_SORT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_HASSTRINGS);
primFun(prim_Win32Control_cpp_cBS_HASSTRINGS)
{ DWORD res1;;
  {res1=CBS_HASSTRINGS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_NOINTEGRALHEIGHT);
primFun(prim_Win32Control_cpp_cBS_NOINTEGRALHEIGHT)
{ DWORD res1;;
  {res1=CBS_NOINTEGRALHEIGHT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_cBS_DISABLENOSCROLL);
primFun(prim_Win32Control_cpp_cBS_DISABLENOSCROLL)
{ DWORD res1;;
  {res1=CBS_DISABLENOSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_createComboBox);
primFun(prim_Win32Control_cpp_createComboBox)
{ char * nm; DWORD wstyle; DWORD cstyle; int x; int y; int w; int h; HWND parent; HMENU hmenu; HANDLE handle;HWND hwnd;int gc_failed;
														       char* gc_failstring;;
  nm = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  cstyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  w = (int)(hugs->getInt());
  h = (int)(hugs->getInt());
  parent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  handle = (HANDLE)(hugs->getAddr());
  { hwnd = CreateWindow("COMBOBOX",nm,wstyle|cstyle, x,y,w,h,parent,hmenu,handle,NULL);
   if ((gc_failed = (  hwnd == NULL  ))) {gc_failstring =  ErrorWin("CreateComboBox")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(hwnd));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_LEFT);
primFun(prim_Win32Control_cpp_eS_LEFT)
{ DWORD res1;;
  {res1=ES_LEFT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_CENTER);
primFun(prim_Win32Control_cpp_eS_CENTER)
{ DWORD res1;;
  {res1=ES_CENTER;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_RIGHT);
primFun(prim_Win32Control_cpp_eS_RIGHT)
{ DWORD res1;;
  {res1=ES_RIGHT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_MULTILINE);
primFun(prim_Win32Control_cpp_eS_MULTILINE)
{ DWORD res1;;
  {res1=ES_MULTILINE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_UPPERCASE);
primFun(prim_Win32Control_cpp_eS_UPPERCASE)
{ DWORD res1;;
  {res1=ES_UPPERCASE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_LOWERCASE);
primFun(prim_Win32Control_cpp_eS_LOWERCASE)
{ DWORD res1;;
  {res1=ES_LOWERCASE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_PASSWORD);
primFun(prim_Win32Control_cpp_eS_PASSWORD)
{ DWORD res1;;
  {res1=ES_PASSWORD;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_AUTOVSCROLL);
primFun(prim_Win32Control_cpp_eS_AUTOVSCROLL)
{ DWORD res1;;
  {res1=ES_AUTOVSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_AUTOHSCROLL);
primFun(prim_Win32Control_cpp_eS_AUTOHSCROLL)
{ DWORD res1;;
  {res1=ES_AUTOHSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_NOHIDESEL);
primFun(prim_Win32Control_cpp_eS_NOHIDESEL)
{ DWORD res1;;
  {res1=ES_NOHIDESEL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_OEMCONVERT);
primFun(prim_Win32Control_cpp_eS_OEMCONVERT)
{ DWORD res1;;
  {res1=ES_OEMCONVERT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_READONLY);
primFun(prim_Win32Control_cpp_eS_READONLY)
{ DWORD res1;;
  {res1=ES_READONLY;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_eS_WANTRETURN);
primFun(prim_Win32Control_cpp_eS_WANTRETURN)
{ DWORD res1;;
  {res1=ES_WANTRETURN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_createEditWindow);
primFun(prim_Win32Control_cpp_createEditWindow)
{ char * nm; DWORD wstyle; DWORD estyle; int x; int y; int w; int h; HWND parent; HMENU hmenu; HANDLE handle;HWND hwnd;int gc_failed;
														       char* gc_failstring;;
  nm = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  estyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  w = (int)(hugs->getInt());
  h = (int)(hugs->getInt());
  parent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  handle = (HANDLE)(hugs->getAddr());
  { hwnd = CreateWindow("EDIT",nm,wstyle|estyle, x,y,w,h,parent,hmenu,handle,NULL);
   if ((gc_failed = (  hwnd == NULL  ))) {gc_failstring =  ErrorWin("CreateEditWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(hwnd));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_NOTIFY);
primFun(prim_Win32Control_cpp_lBS_NOTIFY)
{ DWORD res1;;
  {res1=LBS_NOTIFY;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_SORT);
primFun(prim_Win32Control_cpp_lBS_SORT)
{ DWORD res1;;
  {res1=LBS_SORT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_NOREDRAW);
primFun(prim_Win32Control_cpp_lBS_NOREDRAW)
{ DWORD res1;;
  {res1=LBS_NOREDRAW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_MULTIPLESEL);
primFun(prim_Win32Control_cpp_lBS_MULTIPLESEL)
{ DWORD res1;;
  {res1=LBS_MULTIPLESEL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_OWNERDRAWFIXED);
primFun(prim_Win32Control_cpp_lBS_OWNERDRAWFIXED)
{ DWORD res1;;
  {res1=LBS_OWNERDRAWFIXED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_OWNERDRAWVARIABLE);
primFun(prim_Win32Control_cpp_lBS_OWNERDRAWVARIABLE)
{ DWORD res1;;
  {res1=LBS_OWNERDRAWVARIABLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_HASSTRINGS);
primFun(prim_Win32Control_cpp_lBS_HASSTRINGS)
{ DWORD res1;;
  {res1=LBS_HASSTRINGS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_USETABSTOPS);
primFun(prim_Win32Control_cpp_lBS_USETABSTOPS)
{ DWORD res1;;
  {res1=LBS_USETABSTOPS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_NOINTEGRALHEIGHT);
primFun(prim_Win32Control_cpp_lBS_NOINTEGRALHEIGHT)
{ DWORD res1;;
  {res1=LBS_NOINTEGRALHEIGHT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_MULTICOLUMN);
primFun(prim_Win32Control_cpp_lBS_MULTICOLUMN)
{ DWORD res1;;
  {res1=LBS_MULTICOLUMN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_WANTKEYBOARDINPUT);
primFun(prim_Win32Control_cpp_lBS_WANTKEYBOARDINPUT)
{ DWORD res1;;
  {res1=LBS_WANTKEYBOARDINPUT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_DISABLENOSCROLL);
primFun(prim_Win32Control_cpp_lBS_DISABLENOSCROLL)
{ DWORD res1;;
  {res1=LBS_DISABLENOSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_lBS_STANDARD);
primFun(prim_Win32Control_cpp_lBS_STANDARD)
{ DWORD res1;;
  {res1=LBS_STANDARD;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_createListBox);
primFun(prim_Win32Control_cpp_createListBox)
{ char * nm; DWORD wstyle; DWORD lstyle; int x; int y; int w; int h; HWND parent; HMENU hmenu; HANDLE handle;HWND hwnd;int gc_failed;
														       char* gc_failstring;;
  nm = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  lstyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  w = (int)(hugs->getInt());
  h = (int)(hugs->getInt());
  parent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  handle = (HANDLE)(hugs->getAddr());
  { hwnd = CreateWindow("LISTBOX",nm,wstyle|lstyle,x,y,w,h,parent,hmenu,handle,NULL);
   if ((gc_failed = (  hwnd == NULL  ))) {gc_failstring =  ErrorWin("CreateListBox")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(hwnd));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_HORZ);
primFun(prim_Win32Control_cpp_sBS_HORZ)
{ DWORD res1;;
  {res1=SBS_HORZ;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_TOPALIGN);
primFun(prim_Win32Control_cpp_sBS_TOPALIGN)
{ DWORD res1;;
  {res1=SBS_TOPALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_BOTTOMALIGN);
primFun(prim_Win32Control_cpp_sBS_BOTTOMALIGN)
{ DWORD res1;;
  {res1=SBS_BOTTOMALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_VERT);
primFun(prim_Win32Control_cpp_sBS_VERT)
{ DWORD res1;;
  {res1=SBS_VERT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_LEFTALIGN);
primFun(prim_Win32Control_cpp_sBS_LEFTALIGN)
{ DWORD res1;;
  {res1=SBS_LEFTALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_RIGHTALIGN);
primFun(prim_Win32Control_cpp_sBS_RIGHTALIGN)
{ DWORD res1;;
  {res1=SBS_RIGHTALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_SIZEBOX);
primFun(prim_Win32Control_cpp_sBS_SIZEBOX)
{ DWORD res1;;
  {res1=SBS_SIZEBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_SIZEBOXTOPLEFTALIGN);
primFun(prim_Win32Control_cpp_sBS_SIZEBOXTOPLEFTALIGN)
{ DWORD res1;;
  {res1=SBS_SIZEBOXTOPLEFTALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sBS_SIZEBOXBOTTOMRIGHTALIGN);
primFun(prim_Win32Control_cpp_sBS_SIZEBOXBOTTOMRIGHTALIGN)
{ DWORD res1;;
  {res1=SBS_SIZEBOXBOTTOMRIGHTALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_createScrollbar);
primFun(prim_Win32Control_cpp_createScrollbar)
{ char * nm; DWORD wstyle; DWORD sstyle; int x; int y; int w; int h; HWND parent; HMENU hmenu; HANDLE handle;HWND hwnd;int gc_failed;
														       char* gc_failstring;;
  nm = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  sstyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  w = (int)(hugs->getInt());
  h = (int)(hugs->getInt());
  parent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  handle = (HANDLE)(hugs->getAddr());
  { hwnd = CreateWindow("SCROLLBAR",nm,wstyle|sstyle, x,y,w,h,parent,hmenu,handle,NULL);
   if ((gc_failed = (  hwnd == NULL  ))) {gc_failstring =  ErrorWin("CreateScrollbar")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(hwnd));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_LEFT);
primFun(prim_Win32Control_cpp_sS_LEFT)
{ DWORD res1;;
  {res1=SS_LEFT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_CENTER);
primFun(prim_Win32Control_cpp_sS_CENTER)
{ DWORD res1;;
  {res1=SS_CENTER;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_RIGHT);
primFun(prim_Win32Control_cpp_sS_RIGHT)
{ DWORD res1;;
  {res1=SS_RIGHT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_ICON);
primFun(prim_Win32Control_cpp_sS_ICON)
{ DWORD res1;;
  {res1=SS_ICON;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_BLACKRECT);
primFun(prim_Win32Control_cpp_sS_BLACKRECT)
{ DWORD res1;;
  {res1=SS_BLACKRECT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_GRAYRECT);
primFun(prim_Win32Control_cpp_sS_GRAYRECT)
{ DWORD res1;;
  {res1=SS_GRAYRECT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_WHITERECT);
primFun(prim_Win32Control_cpp_sS_WHITERECT)
{ DWORD res1;;
  {res1=SS_WHITERECT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_BLACKFRAME);
primFun(prim_Win32Control_cpp_sS_BLACKFRAME)
{ DWORD res1;;
  {res1=SS_BLACKFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_GRAYFRAME);
primFun(prim_Win32Control_cpp_sS_GRAYFRAME)
{ DWORD res1;;
  {res1=SS_GRAYFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_WHITEFRAME);
primFun(prim_Win32Control_cpp_sS_WHITEFRAME)
{ DWORD res1;;
  {res1=SS_WHITEFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_SIMPLE);
primFun(prim_Win32Control_cpp_sS_SIMPLE)
{ DWORD res1;;
  {res1=SS_SIMPLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_LEFTNOWORDWRAP);
primFun(prim_Win32Control_cpp_sS_LEFTNOWORDWRAP)
{ DWORD res1;;
  {res1=SS_LEFTNOWORDWRAP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_sS_NOPREFIX);
primFun(prim_Win32Control_cpp_sS_NOPREFIX)
{ DWORD res1;;
  {res1=SS_NOPREFIX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_createStaticWindow);
primFun(prim_Win32Control_cpp_createStaticWindow)
{ char * nm; DWORD wstyle; DWORD sstyle; int x; int y; int w; int h; HWND parent; HMENU hmenu; HANDLE handle;HWND hwnd;int gc_failed;
														       char* gc_failstring;;
  nm = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  sstyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  w = (int)(hugs->getInt());
  h = (int)(hugs->getInt());
  parent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  handle = (HANDLE)(hugs->getAddr());
  { hwnd = CreateWindow("STATIC",nm,wstyle|sstyle, x,y,w,h,parent,hmenu,handle,NULL);
   if ((gc_failed = (  hwnd == NULL  ))) {gc_failstring =  ErrorWin("CreateStaticWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(hwnd));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_pBM_DELTAPOS);
primFun(prim_Win32Control_cpp_pBM_DELTAPOS)
{ DWORD res1;;
  {res1=PBM_DELTAPOS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_pBM_SETPOS);
primFun(prim_Win32Control_cpp_pBM_SETPOS)
{ DWORD res1;;
  {res1=PBM_SETPOS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_pBM_SETRANGE);
primFun(prim_Win32Control_cpp_pBM_SETRANGE)
{ DWORD res1;;
  {res1=PBM_SETRANGE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_pBM_SETSTEP);
primFun(prim_Win32Control_cpp_pBM_SETSTEP)
{ DWORD res1;;
  {res1=PBM_SETSTEP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Control_cpp_pBM_STEPIT);
primFun(prim_Win32Control_cpp_pBM_STEPIT)
{ DWORD res1;;
  {res1=PBM_STEPIT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Control_cpp_bS_PUSHBUTTON",2,prim_Win32Control_cpp_bS_PUSHBUTTON},
  {"prim_Win32Control_cpp_bS_DEFPUSHBUTTON",2,prim_Win32Control_cpp_bS_DEFPUSHBUTTON},
  {"prim_Win32Control_cpp_bS_CHECKBOX",2,prim_Win32Control_cpp_bS_CHECKBOX},
  {"prim_Win32Control_cpp_bS_AUTOCHECKBOX",2,prim_Win32Control_cpp_bS_AUTOCHECKBOX},
  {"prim_Win32Control_cpp_bS_RADIOBUTTON",2,prim_Win32Control_cpp_bS_RADIOBUTTON},
  {"prim_Win32Control_cpp_bS_3STATE",2,prim_Win32Control_cpp_bS_3STATE},
  {"prim_Win32Control_cpp_bS_AUTO3STATE",2,prim_Win32Control_cpp_bS_AUTO3STATE},
  {"prim_Win32Control_cpp_bS_GROUPBOX",2,prim_Win32Control_cpp_bS_GROUPBOX},
  {"prim_Win32Control_cpp_bS_AUTORADIOBUTTON",2,prim_Win32Control_cpp_bS_AUTORADIOBUTTON},
  {"prim_Win32Control_cpp_bS_OWNERDRAW",2,prim_Win32Control_cpp_bS_OWNERDRAW},
  {"prim_Win32Control_cpp_bS_LEFTTEXT",2,prim_Win32Control_cpp_bS_LEFTTEXT},
  {"prim_Win32Control_cpp_bS_USERBUTTON",2,prim_Win32Control_cpp_bS_USERBUTTON},
  {"prim_Win32Control_cpp_createButton",12,prim_Win32Control_cpp_createButton},
  {"prim_Win32Control_cpp_bST_CHECKED",2,prim_Win32Control_cpp_bST_CHECKED},
  {"prim_Win32Control_cpp_bST_INDETERMINATE",2,prim_Win32Control_cpp_bST_INDETERMINATE},
  {"prim_Win32Control_cpp_bST_UNCHECKED",2,prim_Win32Control_cpp_bST_UNCHECKED},
  {"prim_Win32Control_cpp_checkDlgButton",5,prim_Win32Control_cpp_checkDlgButton},
  {"prim_Win32Control_cpp_checkRadioButton",6,prim_Win32Control_cpp_checkRadioButton},
  {"prim_Win32Control_cpp_isDlgButtonChecked",4,prim_Win32Control_cpp_isDlgButtonChecked},
  {"prim_Win32Control_cpp_cBS_SIMPLE",2,prim_Win32Control_cpp_cBS_SIMPLE},
  {"prim_Win32Control_cpp_cBS_DROPDOWN",2,prim_Win32Control_cpp_cBS_DROPDOWN},
  {"prim_Win32Control_cpp_cBS_DROPDOWNLIST",2,prim_Win32Control_cpp_cBS_DROPDOWNLIST},
  {"prim_Win32Control_cpp_cBS_OWNERDRAWFIXED",2,prim_Win32Control_cpp_cBS_OWNERDRAWFIXED},
  {"prim_Win32Control_cpp_cBS_OWNERDRAWVARIABLE",2,prim_Win32Control_cpp_cBS_OWNERDRAWVARIABLE},
  {"prim_Win32Control_cpp_cBS_AUTOHSCROLL",2,prim_Win32Control_cpp_cBS_AUTOHSCROLL},
  {"prim_Win32Control_cpp_cBS_OEMCONVERT",2,prim_Win32Control_cpp_cBS_OEMCONVERT},
  {"prim_Win32Control_cpp_cBS_SORT",2,prim_Win32Control_cpp_cBS_SORT},
  {"prim_Win32Control_cpp_cBS_HASSTRINGS",2,prim_Win32Control_cpp_cBS_HASSTRINGS},
  {"prim_Win32Control_cpp_cBS_NOINTEGRALHEIGHT",2,prim_Win32Control_cpp_cBS_NOINTEGRALHEIGHT},
  {"prim_Win32Control_cpp_cBS_DISABLENOSCROLL",2,prim_Win32Control_cpp_cBS_DISABLENOSCROLL},
  {"prim_Win32Control_cpp_createComboBox",12,prim_Win32Control_cpp_createComboBox},
  {"prim_Win32Control_cpp_eS_LEFT",2,prim_Win32Control_cpp_eS_LEFT},
  {"prim_Win32Control_cpp_eS_CENTER",2,prim_Win32Control_cpp_eS_CENTER},
  {"prim_Win32Control_cpp_eS_RIGHT",2,prim_Win32Control_cpp_eS_RIGHT},
  {"prim_Win32Control_cpp_eS_MULTILINE",2,prim_Win32Control_cpp_eS_MULTILINE},
  {"prim_Win32Control_cpp_eS_UPPERCASE",2,prim_Win32Control_cpp_eS_UPPERCASE},
  {"prim_Win32Control_cpp_eS_LOWERCASE",2,prim_Win32Control_cpp_eS_LOWERCASE},
  {"prim_Win32Control_cpp_eS_PASSWORD",2,prim_Win32Control_cpp_eS_PASSWORD},
  {"prim_Win32Control_cpp_eS_AUTOVSCROLL",2,prim_Win32Control_cpp_eS_AUTOVSCROLL},
  {"prim_Win32Control_cpp_eS_AUTOHSCROLL",2,prim_Win32Control_cpp_eS_AUTOHSCROLL},
  {"prim_Win32Control_cpp_eS_NOHIDESEL",2,prim_Win32Control_cpp_eS_NOHIDESEL},
  {"prim_Win32Control_cpp_eS_OEMCONVERT",2,prim_Win32Control_cpp_eS_OEMCONVERT},
  {"prim_Win32Control_cpp_eS_READONLY",2,prim_Win32Control_cpp_eS_READONLY},
  {"prim_Win32Control_cpp_eS_WANTRETURN",2,prim_Win32Control_cpp_eS_WANTRETURN},
  {"prim_Win32Control_cpp_createEditWindow",12,prim_Win32Control_cpp_createEditWindow},
  {"prim_Win32Control_cpp_lBS_NOTIFY",2,prim_Win32Control_cpp_lBS_NOTIFY},
  {"prim_Win32Control_cpp_lBS_SORT",2,prim_Win32Control_cpp_lBS_SORT},
  {"prim_Win32Control_cpp_lBS_NOREDRAW",2,prim_Win32Control_cpp_lBS_NOREDRAW},
  {"prim_Win32Control_cpp_lBS_MULTIPLESEL",2,prim_Win32Control_cpp_lBS_MULTIPLESEL},
  {"prim_Win32Control_cpp_lBS_OWNERDRAWFIXED",2,prim_Win32Control_cpp_lBS_OWNERDRAWFIXED},
  {"prim_Win32Control_cpp_lBS_OWNERDRAWVARIABLE",2,prim_Win32Control_cpp_lBS_OWNERDRAWVARIABLE},
  {"prim_Win32Control_cpp_lBS_HASSTRINGS",2,prim_Win32Control_cpp_lBS_HASSTRINGS},
  {"prim_Win32Control_cpp_lBS_USETABSTOPS",2,prim_Win32Control_cpp_lBS_USETABSTOPS},
  {"prim_Win32Control_cpp_lBS_NOINTEGRALHEIGHT",2,prim_Win32Control_cpp_lBS_NOINTEGRALHEIGHT},
  {"prim_Win32Control_cpp_lBS_MULTICOLUMN",2,prim_Win32Control_cpp_lBS_MULTICOLUMN},
  {"prim_Win32Control_cpp_lBS_WANTKEYBOARDINPUT",2,prim_Win32Control_cpp_lBS_WANTKEYBOARDINPUT},
  {"prim_Win32Control_cpp_lBS_DISABLENOSCROLL",2,prim_Win32Control_cpp_lBS_DISABLENOSCROLL},
  {"prim_Win32Control_cpp_lBS_STANDARD",2,prim_Win32Control_cpp_lBS_STANDARD},
  {"prim_Win32Control_cpp_createListBox",12,prim_Win32Control_cpp_createListBox},
  {"prim_Win32Control_cpp_sBS_HORZ",2,prim_Win32Control_cpp_sBS_HORZ},
  {"prim_Win32Control_cpp_sBS_TOPALIGN",2,prim_Win32Control_cpp_sBS_TOPALIGN},
  {"prim_Win32Control_cpp_sBS_BOTTOMALIGN",2,prim_Win32Control_cpp_sBS_BOTTOMALIGN},
  {"prim_Win32Control_cpp_sBS_VERT",2,prim_Win32Control_cpp_sBS_VERT},
  {"prim_Win32Control_cpp_sBS_LEFTALIGN",2,prim_Win32Control_cpp_sBS_LEFTALIGN},
  {"prim_Win32Control_cpp_sBS_RIGHTALIGN",2,prim_Win32Control_cpp_sBS_RIGHTALIGN},
  {"prim_Win32Control_cpp_sBS_SIZEBOX",2,prim_Win32Control_cpp_sBS_SIZEBOX},
  {"prim_Win32Control_cpp_sBS_SIZEBOXTOPLEFTALIGN",2,prim_Win32Control_cpp_sBS_SIZEBOXTOPLEFTALIGN},
  {"prim_Win32Control_cpp_sBS_SIZEBOXBOTTOMRIGHTALIGN",2,prim_Win32Control_cpp_sBS_SIZEBOXBOTTOMRIGHTALIGN},
  {"prim_Win32Control_cpp_createScrollbar",12,prim_Win32Control_cpp_createScrollbar},
  {"prim_Win32Control_cpp_sS_LEFT",2,prim_Win32Control_cpp_sS_LEFT},
  {"prim_Win32Control_cpp_sS_CENTER",2,prim_Win32Control_cpp_sS_CENTER},
  {"prim_Win32Control_cpp_sS_RIGHT",2,prim_Win32Control_cpp_sS_RIGHT},
  {"prim_Win32Control_cpp_sS_ICON",2,prim_Win32Control_cpp_sS_ICON},
  {"prim_Win32Control_cpp_sS_BLACKRECT",2,prim_Win32Control_cpp_sS_BLACKRECT},
  {"prim_Win32Control_cpp_sS_GRAYRECT",2,prim_Win32Control_cpp_sS_GRAYRECT},
  {"prim_Win32Control_cpp_sS_WHITERECT",2,prim_Win32Control_cpp_sS_WHITERECT},
  {"prim_Win32Control_cpp_sS_BLACKFRAME",2,prim_Win32Control_cpp_sS_BLACKFRAME},
  {"prim_Win32Control_cpp_sS_GRAYFRAME",2,prim_Win32Control_cpp_sS_GRAYFRAME},
  {"prim_Win32Control_cpp_sS_WHITEFRAME",2,prim_Win32Control_cpp_sS_WHITEFRAME},
  {"prim_Win32Control_cpp_sS_SIMPLE",2,prim_Win32Control_cpp_sS_SIMPLE},
  {"prim_Win32Control_cpp_sS_LEFTNOWORDWRAP",2,prim_Win32Control_cpp_sS_LEFTNOWORDWRAP},
  {"prim_Win32Control_cpp_sS_NOPREFIX",2,prim_Win32Control_cpp_sS_NOPREFIX},
  {"prim_Win32Control_cpp_createStaticWindow",12,prim_Win32Control_cpp_createStaticWindow},
  {"prim_Win32Control_cpp_pBM_DELTAPOS",2,prim_Win32Control_cpp_pBM_DELTAPOS},
  {"prim_Win32Control_cpp_pBM_SETPOS",2,prim_Win32Control_cpp_pBM_SETPOS},
  {"prim_Win32Control_cpp_pBM_SETRANGE",2,prim_Win32Control_cpp_pBM_SETRANGE},
  {"prim_Win32Control_cpp_pBM_SETSTEP",2,prim_Win32Control_cpp_pBM_SETSTEP},
  {"prim_Win32Control_cpp_pBM_STEPIT",2,prim_Win32Control_cpp_pBM_STEPIT},
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
