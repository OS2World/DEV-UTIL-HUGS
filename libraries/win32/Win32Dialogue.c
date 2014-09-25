/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "diatemp.h"
PROTO_PRIM(prim_Win32Dialogue_cpp_mkResource);
primFun(prim_Win32Dialogue_cpp_mkResource)
{ int arg1;void * res1;;
  arg1 = (int)(hugs->getInt());
  { res1=MAKEINTRESOURCE(arg1);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dialogBox);
primFun(prim_Win32Dialogue_cpp_dialogBox)
{ HINSTANCE hInst; LPCTSTR lpTemp; HWND hWndParent; void * diaFun;int res1;int gc_failed;
									   char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (LPCTSTR)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  { res1 = DialogBox(hInst,lpTemp,hWndParent,diaFun);
   if ((gc_failed = (  res1 == (-1)  ))) {gc_failstring =  ErrorWin("DialogBox")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dialogBoxParam);
primFun(prim_Win32Dialogue_cpp_dialogBoxParam)
{ HINSTANCE hInst; LPCTSTR lpTemp; HWND hWndParent; void * diaFun; LPARAM dwInit;int res1;int gc_failed;
											  char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (LPCTSTR)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  dwInit = (LPARAM)(hugs->getInt());
  { res1 = DialogBoxParam(hInst,lpTemp,hWndParent,diaFun,dwInit);
   if ((gc_failed = (  res1 == (-1)  ))) {gc_failstring =  ErrorWin("DialogBoxParam")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dialogBoxIndirect);
primFun(prim_Win32Dialogue_cpp_dialogBoxIndirect)
{ HINSTANCE hInst; void * lpTemp; HWND hWndParent; void * diaFun;int res1;int gc_failed;
									  char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (void *)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  { res1 = DialogBoxIndirect(hInst,lpTemp,hWndParent,diaFun);
   if ((gc_failed = (  res1 == (-1)  ))) {gc_failstring =  ErrorWin("DialogBoxIndirect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dialogBoxIndirectParam);
primFun(prim_Win32Dialogue_cpp_dialogBoxIndirectParam)
{ HINSTANCE hInst; void * lpTemp; HWND hWndParent; void * diaFun; LPARAM dwInit;int res1;int gc_failed;
											 char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (void *)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  dwInit = (LPARAM)(hugs->getInt());
  { res1 = DialogBoxIndirectParam(hInst,lpTemp,hWndParent,diaFun,dwInit);
   if ((gc_failed = (  res1 == (-1)  ))) {gc_failstring =  ErrorWin("DialogBoxIndirectParam")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
//PROTO_PRIM(prim_Win32Dialogue_cpp_getFinalDialog);
//primFun(prim_Win32Dialogue_cpp_getFinalDialog)
//{ void * arg1;void * res1;;
//  arg1 = (void *)(hugs->getAddr());
//  {res1 = getFinalDialog(arg1);
//   hugs->putAddr((void *)(res1));
//   hugs_returnIO(1);
//   }
//}
//PROTO_PRIM(prim_Win32Dialogue_cpp_mkDiaTemplate);
//primFun(prim_Win32Dialogue_cpp_mkDiaTemplate)
//{ int arg1; int arg2; int arg3; int arg4; int arg5; DWORD arg6; DWORD arg7; void * arg8; void * arg9; void * arg10; void * arg11; int arg12;void * res1;;
//  arg1 = (int)(hugs->getInt());
//  arg2 = (int)(hugs->getInt());
//  arg3 = (int)(hugs->getInt());
//  arg4 = (int)(hugs->getInt());
//  arg5 = (int)(hugs->getInt());
//  arg6 = (DWORD)(hugs->getWord());
//  arg7 = (DWORD)(hugs->getWord());
//  arg8 = (void *)(hugs->getAddr());
//  arg9 = (void *)(hugs->getAddr());
//  arg10 = (void *)(hugs->getAddr());
//  arg11 = (void *)(hugs->getAddr());
//  arg12 = (int)(hugs->getInt());
//  {res1 = mkDiaTemplate(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
//   hugs->putAddr((void *)(res1));
//   hugs_returnIO(1);
//   }
//}
//PROTO_PRIM(prim_Win32Dialogue_cpp_addDiaControl);
//primFun(prim_Win32Dialogue_cpp_addDiaControl)
//{ void * arg1; void * arg2; int arg3; void * arg4; DWORD arg5; int arg6; int arg7; int arg8; int arg9; DWORD arg10;void * res1;;
//  arg1 = (void *)(hugs->getAddr());
//  arg2 = (void *)(hugs->getAddr());
//  arg3 = (int)(hugs->getInt());
//  arg4 = (void *)(hugs->getAddr());
//  arg5 = (DWORD)(hugs->getWord());
//  arg6 = (int)(hugs->getInt());
//  arg7 = (int)(hugs->getInt());
//  arg8 = (int)(hugs->getInt());
//  arg9 = (int)(hugs->getInt());
//  arg10 = (DWORD)(hugs->getWord());
//  {res1 = addDiaControl(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
//   hugs->putAddr((void *)(res1));
//   hugs_returnIO(1);
//   }
//}
PROTO_PRIM(prim_Win32Dialogue_cpp_toUnicodeStr);
primFun(prim_Win32Dialogue_cpp_toUnicodeStr)
{ char * arg1;;
  arg1 = (char *)(hugs->getAddr());
  { int wlen;
     LPWSTR wstr;
     wlen = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED,arg1,-1,NULL,0);
     wstr = malloc(sizeof(wchar_t) * wlen);
     MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED,arg1,-1,wstr,wlen);
   hugs->putAddr((void *)(wstr));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_createDialog);
primFun(prim_Win32Dialogue_cpp_createDialog)
{ HINSTANCE hInst; LPCTSTR lpTemp; HWND hWndParent; void * diaFun;HWND res1;int gc_failed;
									    char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (LPCTSTR)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  { res1 = CreateDialog(hInst,lpTemp,hWndParent,diaFun);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("CreateDialog")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_createDialogParam);
primFun(prim_Win32Dialogue_cpp_createDialogParam)
{ HINSTANCE hInst; LPCTSTR lpTemp; HWND hWndParent; void * diaFun; LPARAM dwInit;HWND res1;int gc_failed;
											   char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (LPCTSTR)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  dwInit = (LPARAM)(hugs->getInt());
  { res1 = CreateDialogParam(hInst,lpTemp,hWndParent,diaFun,dwInit);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("CreateDialogParam")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_createDialogIndirect);
primFun(prim_Win32Dialogue_cpp_createDialogIndirect)
{ HINSTANCE hInst; void * lpTemp; HWND hWndParent; void * diaFun;HWND res1;int gc_failed;
									   char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (void *)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  { res1 = CreateDialogIndirect(hInst,lpTemp,hWndParent,diaFun);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("CreateDialogIndirect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_createDialogIndirectParam);
primFun(prim_Win32Dialogue_cpp_createDialogIndirectParam)
{ HINSTANCE hInst; void * lpTemp; HWND hWndParent; void * diaFun; LPARAM dwInit;HWND res1;int gc_failed;
											  char* gc_failstring;;
  hInst = (HINSTANCE)(hugs->getAddr());
  lpTemp = (void *)(hugs->getAddr());
  hWndParent = (HWND)(hugs->getAddr());
  diaFun = (void *)(hugs->getAddr());
  dwInit = (LPARAM)(hugs->getInt());
  { res1 = CreateDialogIndirectParam(hInst,lpTemp,hWndParent,diaFun,dwInit);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("CreateDialogIndirectParam")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_defDlgProc);
primFun(prim_Win32Dialogue_cpp_defDlgProc)
{ HWND arg1; DWORD arg2; WPARAM arg3; LPARAM arg4;LRESULT res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (WPARAM)(hugs->getWord());
  arg4 = (LPARAM)(hugs->getInt());
  { res1 = DefDlgProc(arg1,arg2,arg3,arg4);
   hugs->putInt((LRESULT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_endDialog);
primFun(prim_Win32Dialogue_cpp_endDialog)
{ HWND arg1; int arg2;BOOL res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  { res1 = EndDialog(arg1,arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("EndDialog")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((BOOL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getDialogBaseUnits);
primFun(prim_Win32Dialogue_cpp_getDialogBaseUnits)
{ LONG res1;;
  {res1 = GetDialogBaseUnits();
   hugs->putInt((LONG)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getDlgCtrlID);
primFun(prim_Win32Dialogue_cpp_getDlgCtrlID)
{ HWND arg1;int res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  {res1 = GetDlgCtrlID(arg1);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("GetDlgCtrlID")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getDlgItem);
primFun(prim_Win32Dialogue_cpp_getDlgItem)
{ HWND arg1; int arg2;HWND res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  {res1 = GetDlgItem(arg1, arg2);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("GetDlgItem")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getDlgItemInt);
primFun(prim_Win32Dialogue_cpp_getDlgItemInt)
{ HWND arg1; int arg2; int arg3;int res1;int gc_failed;
					 char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  { BOOL lpTranslated;
         res1 = GetDlgItemInt(arg1,arg2,&lpTranslated,arg3);
   if ((gc_failed = (  lpTranslated != TRUE  ))) {gc_failstring =  ErrorWin("GetDlgItemInt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getDlgItemText);
primFun(prim_Win32Dialogue_cpp_getDlgItemText)
{ HWND arg1; int arg2; int arg3;int gc_failed;
				char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  { LPTSTR buf=malloc(sizeof(TCHAR)*arg3); int res1;
         if (buf == NULL) { 
            res1 = 0;
         } else {
            res1 = GetDlgItemText(arg1,arg2,buf,arg3);
        };
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("GetDlgItemInt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(buf));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getNextDlgGroupItem);
primFun(prim_Win32Dialogue_cpp_getNextDlgGroupItem)
{ HWND arg1; HWND arg2; BOOL arg3;HWND res1;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HWND)(hugs->getAddr());
  arg3 = (BOOL)(hugs->getInt());
  {res1 = GetNextDlgGroupItem(arg1, arg2, arg3);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("GetNextDlgGroupItem")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_getNextDlgTabItem);
primFun(prim_Win32Dialogue_cpp_getNextDlgTabItem)
{ HWND arg1; HWND arg2; BOOL arg3;HWND res1;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HWND)(hugs->getAddr());
  arg3 = (BOOL)(hugs->getInt());
  {res1 = GetNextDlgTabItem(arg1, arg2, arg3);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("GetNextDlgTabItem")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_isDialogMessage);
primFun(prim_Win32Dialogue_cpp_isDialogMessage)
{ HWND arg1; MSG * arg2;BOOL res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (MSG *)(hugs->getAddr());
  { res1=IsDialogMessage(arg1,arg2);
   hugs->putInt((BOOL)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_mapDialogRect);
primFun(prim_Win32Dialogue_cpp_mapDialogRect)
{ HWND arg1; LPRECT arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (LPRECT)(hugs->getAddr());
  { BOOL res1; 
     res1 = MapDialogRect(arg1,arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("MapDialogRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_sendDlgItemMessage);
primFun(prim_Win32Dialogue_cpp_sendDlgItemMessage)
{ HWND arg1; int arg2; DWORD arg3; WPARAM arg4; LPARAM arg5;LONG res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (DWORD)(hugs->getWord());
  arg4 = (WPARAM)(hugs->getWord());
  arg5 = (LPARAM)(hugs->getInt());
  { res1 = SendDlgItemMessage(arg1,arg2,arg3,arg4,arg5);
   hugs->putInt((LONG)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_setDlgItemInt);
primFun(prim_Win32Dialogue_cpp_setDlgItemInt)
{ HWND arg1; int arg2; UINT arg3; BOOL arg4;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (BOOL)(hugs->getInt());
  { BOOL res1;
     res1=SetDlgItemInt(arg1,arg2,arg3,arg4);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("SetDlgItemInt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_setDlgItemText);
primFun(prim_Win32Dialogue_cpp_setDlgItemText)
{ HWND arg1; int arg2; char * arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (char *)(hugs->getAddr());
  { BOOL res1;
         res1 = SetDlgItemText(arg1,arg2,arg3);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("SetDlgItemText")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_3DLOOK);
primFun(prim_Win32Dialogue_cpp_dS_3DLOOK)
{ DWORD res1;;
  {res1=DS_3DLOOK;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_ABSALIGN);
primFun(prim_Win32Dialogue_cpp_dS_ABSALIGN)
{ DWORD res1;;
  {res1=DS_ABSALIGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_CENTER);
primFun(prim_Win32Dialogue_cpp_dS_CENTER)
{ DWORD res1;;
  {res1=DS_CENTER;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_CENTERMOUSE);
primFun(prim_Win32Dialogue_cpp_dS_CENTERMOUSE)
{ DWORD res1;;
  {res1=DS_CENTERMOUSE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_CONTEXTHELP);
primFun(prim_Win32Dialogue_cpp_dS_CONTEXTHELP)
{ DWORD res1;;
  {res1=DS_CONTEXTHELP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_CONTROL);
primFun(prim_Win32Dialogue_cpp_dS_CONTROL)
{ DWORD res1;;
  {res1=DS_CONTROL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_FIXEDSYS);
primFun(prim_Win32Dialogue_cpp_dS_FIXEDSYS)
{ DWORD res1;;
  {res1=DS_FIXEDSYS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_LOCALEDIT);
primFun(prim_Win32Dialogue_cpp_dS_LOCALEDIT)
{ DWORD res1;;
  {res1=DS_LOCALEDIT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_MODALFRAME);
primFun(prim_Win32Dialogue_cpp_dS_MODALFRAME)
{ DWORD res1;;
  {res1=DS_MODALFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_NOFAILCREATE);
primFun(prim_Win32Dialogue_cpp_dS_NOFAILCREATE)
{ DWORD res1;;
  {res1=DS_NOFAILCREATE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_NOIDLEMSG);
primFun(prim_Win32Dialogue_cpp_dS_NOIDLEMSG)
{ DWORD res1;;
  {res1=DS_NOIDLEMSG;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_SETFONT);
primFun(prim_Win32Dialogue_cpp_dS_SETFONT)
{ DWORD res1;;
  {res1=DS_SETFONT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_SETFOREGROUND);
primFun(prim_Win32Dialogue_cpp_dS_SETFOREGROUND)
{ DWORD res1;;
  {res1=DS_SETFOREGROUND;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dS_SYSMODAL);
primFun(prim_Win32Dialogue_cpp_dS_SYSMODAL)
{ DWORD res1;;
  {res1=DS_SYSMODAL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dM_GETDEFID);
primFun(prim_Win32Dialogue_cpp_dM_GETDEFID)
{ DWORD res1;;
  {res1=DM_GETDEFID;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dM_REPOSITION);
primFun(prim_Win32Dialogue_cpp_dM_REPOSITION)
{ DWORD res1;;
  {res1=DM_REPOSITION;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_dM_SETDEFID);
primFun(prim_Win32Dialogue_cpp_dM_SETDEFID)
{ DWORD res1;;
  {res1=DM_SETDEFID;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_wM_CTLCOLORDLG);
primFun(prim_Win32Dialogue_cpp_wM_CTLCOLORDLG)
{ DWORD res1;;
  {res1=WM_CTLCOLORDLG;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Dialogue_cpp_wM_CTLCOLORMSGBOX);
primFun(prim_Win32Dialogue_cpp_wM_CTLCOLORMSGBOX)
{ DWORD res1;;
  {res1=WM_CTLCOLORMSGBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Dialogue_cpp_mkResource",3,prim_Win32Dialogue_cpp_mkResource},
  {"prim_Win32Dialogue_cpp_dialogBox",6,prim_Win32Dialogue_cpp_dialogBox},
  {"prim_Win32Dialogue_cpp_dialogBoxParam",7,prim_Win32Dialogue_cpp_dialogBoxParam},
  {"prim_Win32Dialogue_cpp_dialogBoxIndirect",6,prim_Win32Dialogue_cpp_dialogBoxIndirect},
  {"prim_Win32Dialogue_cpp_dialogBoxIndirectParam",7,prim_Win32Dialogue_cpp_dialogBoxIndirectParam},
//  {"prim_Win32Dialogue_cpp_getFinalDialog",3,prim_Win32Dialogue_cpp_getFinalDialog},
//  {"prim_Win32Dialogue_cpp_mkDiaTemplate",14,prim_Win32Dialogue_cpp_mkDiaTemplate},
//  {"prim_Win32Dialogue_cpp_addDiaControl",12,prim_Win32Dialogue_cpp_addDiaControl},
  {"prim_Win32Dialogue_cpp_toUnicodeStr",3,prim_Win32Dialogue_cpp_toUnicodeStr},
  {"prim_Win32Dialogue_cpp_createDialog",6,prim_Win32Dialogue_cpp_createDialog},
  {"prim_Win32Dialogue_cpp_createDialogParam",7,prim_Win32Dialogue_cpp_createDialogParam},
  {"prim_Win32Dialogue_cpp_createDialogIndirect",6,prim_Win32Dialogue_cpp_createDialogIndirect},
  {"prim_Win32Dialogue_cpp_createDialogIndirectParam",7,prim_Win32Dialogue_cpp_createDialogIndirectParam},
  {"prim_Win32Dialogue_cpp_defDlgProc",6,prim_Win32Dialogue_cpp_defDlgProc},
  {"prim_Win32Dialogue_cpp_endDialog",4,prim_Win32Dialogue_cpp_endDialog},
  {"prim_Win32Dialogue_cpp_getDialogBaseUnits",2,prim_Win32Dialogue_cpp_getDialogBaseUnits},
  {"prim_Win32Dialogue_cpp_getDlgCtrlID",3,prim_Win32Dialogue_cpp_getDlgCtrlID},
  {"prim_Win32Dialogue_cpp_getDlgItem",4,prim_Win32Dialogue_cpp_getDlgItem},
  {"prim_Win32Dialogue_cpp_getDlgItemInt",5,prim_Win32Dialogue_cpp_getDlgItemInt},
  {"prim_Win32Dialogue_cpp_getDlgItemText",5,prim_Win32Dialogue_cpp_getDlgItemText},
  {"prim_Win32Dialogue_cpp_getNextDlgGroupItem",5,prim_Win32Dialogue_cpp_getNextDlgGroupItem},
  {"prim_Win32Dialogue_cpp_getNextDlgTabItem",5,prim_Win32Dialogue_cpp_getNextDlgTabItem},
  {"prim_Win32Dialogue_cpp_isDialogMessage",4,prim_Win32Dialogue_cpp_isDialogMessage},
  {"prim_Win32Dialogue_cpp_mapDialogRect",4,prim_Win32Dialogue_cpp_mapDialogRect},
  {"prim_Win32Dialogue_cpp_sendDlgItemMessage",7,prim_Win32Dialogue_cpp_sendDlgItemMessage},
  {"prim_Win32Dialogue_cpp_setDlgItemInt",6,prim_Win32Dialogue_cpp_setDlgItemInt},
  {"prim_Win32Dialogue_cpp_setDlgItemText",5,prim_Win32Dialogue_cpp_setDlgItemText},
  {"prim_Win32Dialogue_cpp_dS_3DLOOK",2,prim_Win32Dialogue_cpp_dS_3DLOOK},
  {"prim_Win32Dialogue_cpp_dS_ABSALIGN",2,prim_Win32Dialogue_cpp_dS_ABSALIGN},
  {"prim_Win32Dialogue_cpp_dS_CENTER",2,prim_Win32Dialogue_cpp_dS_CENTER},
  {"prim_Win32Dialogue_cpp_dS_CENTERMOUSE",2,prim_Win32Dialogue_cpp_dS_CENTERMOUSE},
  {"prim_Win32Dialogue_cpp_dS_CONTEXTHELP",2,prim_Win32Dialogue_cpp_dS_CONTEXTHELP},
  {"prim_Win32Dialogue_cpp_dS_CONTROL",2,prim_Win32Dialogue_cpp_dS_CONTROL},
  {"prim_Win32Dialogue_cpp_dS_FIXEDSYS",2,prim_Win32Dialogue_cpp_dS_FIXEDSYS},
  {"prim_Win32Dialogue_cpp_dS_LOCALEDIT",2,prim_Win32Dialogue_cpp_dS_LOCALEDIT},
  {"prim_Win32Dialogue_cpp_dS_MODALFRAME",2,prim_Win32Dialogue_cpp_dS_MODALFRAME},
  {"prim_Win32Dialogue_cpp_dS_NOFAILCREATE",2,prim_Win32Dialogue_cpp_dS_NOFAILCREATE},
  {"prim_Win32Dialogue_cpp_dS_NOIDLEMSG",2,prim_Win32Dialogue_cpp_dS_NOIDLEMSG},
  {"prim_Win32Dialogue_cpp_dS_SETFONT",2,prim_Win32Dialogue_cpp_dS_SETFONT},
  {"prim_Win32Dialogue_cpp_dS_SETFOREGROUND",2,prim_Win32Dialogue_cpp_dS_SETFOREGROUND},
  {"prim_Win32Dialogue_cpp_dS_SYSMODAL",2,prim_Win32Dialogue_cpp_dS_SYSMODAL},
  {"prim_Win32Dialogue_cpp_dM_GETDEFID",2,prim_Win32Dialogue_cpp_dM_GETDEFID},
  {"prim_Win32Dialogue_cpp_dM_REPOSITION",2,prim_Win32Dialogue_cpp_dM_REPOSITION},
  {"prim_Win32Dialogue_cpp_dM_SETDEFID",2,prim_Win32Dialogue_cpp_dM_SETDEFID},
  {"prim_Win32Dialogue_cpp_wM_CTLCOLORDLG",2,prim_Win32Dialogue_cpp_wM_CTLCOLORDLG},
  {"prim_Win32Dialogue_cpp_wM_CTLCOLORMSGBOX",2,prim_Win32Dialogue_cpp_wM_CTLCOLORMSGBOX},
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
