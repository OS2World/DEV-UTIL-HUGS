/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
#include  <math.h>
PROTO_PRIM(prim_Win32Misc_cpp_loadAccelerators);
primFun(prim_Win32Misc_cpp_loadAccelerators)
{ HINSTANCE arg1; LPCSTR arg2;HACCEL res1;int gc_failed;
					  char* gc_failstring;;
  arg1 = (HINSTANCE)(hugs->getAddr());
  arg2 = (LPCSTR)(hugs->getAddr());
  {res1 = LoadAccelerators(arg1, arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("LoadAccelerators")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HACCEL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_loadCursor);
primFun(prim_Win32Misc_cpp_loadCursor)
{ HINSTANCE arg1; LPSTR arg2;HCURSOR res1;int gc_failed;
					  char* gc_failstring;;
  arg1 = (HINSTANCE)(hugs->getAddr());
  arg2 = (LPSTR)(hugs->getAddr());
  {res1 = LoadCursor(arg1, arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("LoadCursor")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HCURSOR)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_loadIcon);
primFun(prim_Win32Misc_cpp_loadIcon)
{ HINSTANCE arg1; LPSTR arg2;HICON res1;int gc_failed;
					char* gc_failstring;;
  arg1 = (HINSTANCE)(hugs->getAddr());
  arg2 = (LPSTR)(hugs->getAddr());
  {res1 = LoadIcon(arg1, arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("LoadIcon")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HICON)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_ARROW);
primFun(prim_Win32Misc_cpp_iDC_ARROW)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_ARROW) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_IBEAM);
primFun(prim_Win32Misc_cpp_iDC_IBEAM)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_IBEAM) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_WAIT);
primFun(prim_Win32Misc_cpp_iDC_WAIT)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_WAIT) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_CROSS);
primFun(prim_Win32Misc_cpp_iDC_CROSS)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_CROSS) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_UPARROW);
primFun(prim_Win32Misc_cpp_iDC_UPARROW)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_UPARROW) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_SIZENWSE);
primFun(prim_Win32Misc_cpp_iDC_SIZENWSE)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_SIZENWSE) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_SIZENESW);
primFun(prim_Win32Misc_cpp_iDC_SIZENESW)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_SIZENESW) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_SIZEWE);
primFun(prim_Win32Misc_cpp_iDC_SIZEWE)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_SIZEWE) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDC_SIZENS);
primFun(prim_Win32Misc_cpp_iDC_SIZENS)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDC_SIZENS) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDI_APPLICATION);
primFun(prim_Win32Misc_cpp_iDI_APPLICATION)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDI_APPLICATION) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDI_HAND);
primFun(prim_Win32Misc_cpp_iDI_HAND)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDI_HAND) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDI_QUESTION);
primFun(prim_Win32Misc_cpp_iDI_QUESTION)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDI_QUESTION) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDI_EXCLAMATION);
primFun(prim_Win32Misc_cpp_iDI_EXCLAMATION)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDI_EXCLAMATION) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDI_ASTERISK);
primFun(prim_Win32Misc_cpp_iDI_ASTERISK)
{ LPSTR res1;;
  {res1= MAKEINTRESOURCE(IDI_ASTERISK) ;
   hugs->putAddr((LPSTR)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_OK);
primFun(prim_Win32Misc_cpp_mB_OK)
{ UINT res1;;
  {res1=MB_OK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_OKCANCEL);
primFun(prim_Win32Misc_cpp_mB_OKCANCEL)
{ UINT res1;;
  {res1=MB_OKCANCEL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ABORTRETRYIGNORE);
primFun(prim_Win32Misc_cpp_mB_ABORTRETRYIGNORE)
{ UINT res1;;
  {res1=MB_ABORTRETRYIGNORE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_YESNOCANCEL);
primFun(prim_Win32Misc_cpp_mB_YESNOCANCEL)
{ UINT res1;;
  {res1=MB_YESNOCANCEL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_YESNO);
primFun(prim_Win32Misc_cpp_mB_YESNO)
{ UINT res1;;
  {res1=MB_YESNO;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_RETRYCANCEL);
primFun(prim_Win32Misc_cpp_mB_RETRYCANCEL)
{ UINT res1;;
  {res1=MB_RETRYCANCEL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ICONHAND);
primFun(prim_Win32Misc_cpp_mB_ICONHAND)
{ UINT res1;;
  {res1=MB_ICONHAND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ICONQUESTION);
primFun(prim_Win32Misc_cpp_mB_ICONQUESTION)
{ UINT res1;;
  {res1=MB_ICONQUESTION;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ICONEXCLAMATION);
primFun(prim_Win32Misc_cpp_mB_ICONEXCLAMATION)
{ UINT res1;;
  {res1=MB_ICONEXCLAMATION;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ICONASTERISK);
primFun(prim_Win32Misc_cpp_mB_ICONASTERISK)
{ UINT res1;;
  {res1=MB_ICONASTERISK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ICONINFORMATION);
primFun(prim_Win32Misc_cpp_mB_ICONINFORMATION)
{ UINT res1;;
  {res1=MB_ICONINFORMATION;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_ICONSTOP);
primFun(prim_Win32Misc_cpp_mB_ICONSTOP)
{ UINT res1;;
  {res1=MB_ICONSTOP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_DEFBUTTON1);
primFun(prim_Win32Misc_cpp_mB_DEFBUTTON1)
{ UINT res1;;
  {res1=MB_DEFBUTTON1;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_DEFBUTTON2);
primFun(prim_Win32Misc_cpp_mB_DEFBUTTON2)
{ UINT res1;;
  {res1=MB_DEFBUTTON2;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_DEFBUTTON3);
primFun(prim_Win32Misc_cpp_mB_DEFBUTTON3)
{ UINT res1;;
  {res1=MB_DEFBUTTON3;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_APPLMODAL);
primFun(prim_Win32Misc_cpp_mB_APPLMODAL)
{ UINT res1;;
  {res1=MB_APPLMODAL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_SYSTEMMODAL);
primFun(prim_Win32Misc_cpp_mB_SYSTEMMODAL)
{ UINT res1;;
  {res1=MB_SYSTEMMODAL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_TASKMODAL);
primFun(prim_Win32Misc_cpp_mB_TASKMODAL)
{ UINT res1;;
  {res1=MB_TASKMODAL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_mB_SETFOREGROUND);
primFun(prim_Win32Misc_cpp_mB_SETFOREGROUND)
{ UINT res1;;
  {res1=MB_SETFOREGROUND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDABORT);
primFun(prim_Win32Misc_cpp_iDABORT)
{ UINT res1;;
  {res1=IDABORT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDCANCEL);
primFun(prim_Win32Misc_cpp_iDCANCEL)
{ UINT res1;;
  {res1=IDCANCEL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDIGNORE);
primFun(prim_Win32Misc_cpp_iDIGNORE)
{ UINT res1;;
  {res1=IDIGNORE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDNO);
primFun(prim_Win32Misc_cpp_iDNO)
{ UINT res1;;
  {res1=IDNO;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDOK);
primFun(prim_Win32Misc_cpp_iDOK)
{ UINT res1;;
  {res1=IDOK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDRETRY);
primFun(prim_Win32Misc_cpp_iDRETRY)
{ UINT res1;;
  {res1=IDRETRY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_iDYES);
primFun(prim_Win32Misc_cpp_iDYES)
{ UINT res1;;
  {res1=IDYES;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_messageBox);
primFun(prim_Win32Misc_cpp_messageBox)
{ HWND arg1; char * arg2; char * arg3; UINT arg4;UINT res1;int gc_failed;
							   char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (char *)(hugs->getAddr());
  arg4 = (UINT)(hugs->getWord());
  {res1 = MessageBox(arg1, arg2, arg3, arg4);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("MessageBox")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_sTD_INPUT_HANDLE);
primFun(prim_Win32Misc_cpp_sTD_INPUT_HANDLE)
{ DWORD res1;;
  {res1=STD_INPUT_HANDLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_sTD_OUTPUT_HANDLE);
primFun(prim_Win32Misc_cpp_sTD_OUTPUT_HANDLE)
{ DWORD res1;;
  {res1=STD_OUTPUT_HANDLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_sTD_ERROR_HANDLE);
primFun(prim_Win32Misc_cpp_sTD_ERROR_HANDLE)
{ DWORD res1;;
  {res1=STD_ERROR_HANDLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_getStdHandle);
primFun(prim_Win32Misc_cpp_getStdHandle)
{ DWORD arg1;HANDLE res1;int gc_failed;
			 char* gc_failstring;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = GetStdHandle(arg1);
   if ((gc_failed = (  res1 == INVALID_HANDLE_VALUE  ))) {gc_failstring =  ErrorWin("GetStdHandle")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HANDLE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_transformedEllipse);
primFun(prim_Win32Misc_cpp_transformedEllipse)
{ HDC hdc;POINT p0; POINT p1; POINT p2;int gc_failed;
				       char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  p0.x = (LONG)(hugs->getInt());
  p0.y = (LONG)(hugs->getInt());
  p1.x = (LONG)(hugs->getInt());
  p1.y = (LONG)(hugs->getInt());
  p2.x = (LONG)(hugs->getInt());
  p2.y = (LONG)(hugs->getInt());
  {
  static BOOL firstTime = 1;
  static double sins[20]; 
  static double coss[20];

  int   i;
  POINT pts[20];

  double x = (p1.x + p2.x) / 2;  
  double y = (p1.y + p2.y) / 2;

  double dx1 = (p1.x - p0.x) / 2; 
  double dy1 = (p1.y - p0.y) / 2;
  double dx2 = (p2.x - p0.x) / 2;
  double dy2 = (p2.y - p0.y) / 2;

  BOOL  errcode;

  if (firstTime) {
    double a  = 0.0;
    double da = 2.0*3.14159 / 20;
    for (i=0; i < 20; ++i, a+=da) {
	sins[i] = sin(a);
	coss[i] = cos(a);
    }
    firstTime = 0;
  }
  for(i=0; i < 20; ++i) {
    double c = coss[i];
    double s = sins[i];
    pts[i].x = x + c*dx1 + s*dx2;
    pts[i].y = y + c*dy1 + s*dy2;
  }
  errcode = Polygon(hdc,pts,20);
   if ((gc_failed = ( !errcode ))) {gc_failstring =  ErrorString("TransformedEllipse")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_eWX_FORCE);
primFun(prim_Win32Misc_cpp_eWX_FORCE)
{ UINT res1;;
  {res1=EWX_FORCE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_eWX_LOGOFF);
primFun(prim_Win32Misc_cpp_eWX_LOGOFF)
{ UINT res1;;
  {res1=EWX_LOGOFF;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_eWX_POWEROFF);
primFun(prim_Win32Misc_cpp_eWX_POWEROFF)
{ UINT res1;;
  {res1=EWX_POWEROFF;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_eWX_REBOOT);
primFun(prim_Win32Misc_cpp_eWX_REBOOT)
{ UINT res1;;
  {res1=EWX_REBOOT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_eWX_SHUTDOWN);
primFun(prim_Win32Misc_cpp_eWX_SHUTDOWN)
{ UINT res1;;
  {res1=EWX_SHUTDOWN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_messageBeep);
primFun(prim_Win32Misc_cpp_messageBeep)
{ UINT arg1;;
  arg1 = (UINT)(hugs->getWord());
  {MessageBeep(arg1);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_beep);
primFun(prim_Win32Misc_cpp_beep)
{ WORD arg1; int arg2;int gc_failed;
		      char* gc_failstring;;
  arg1 = (WORD)(hugs->getWord());
  arg2 = (int)(hugs->getInt());
  { BOOL success = Beep(arg1, arg2);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("Beep")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_setWinTimer);
primFun(prim_Win32Misc_cpp_setWinTimer)
{ HWND arg1; UINT arg2; UINT arg3;UINT res1;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  { res1 = SetTimer(arg1, arg2, arg3, NULL);
   if ((gc_failed = ( res1 == 0 ))) {gc_failstring =  ErrorString("setWinTimer")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_killTimer);
primFun(prim_Win32Misc_cpp_killTimer)
{ HWND arg1; UINT arg2;int gc_failed;
		       char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  { BOOL success = KillTimer(arg1,arg2);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorWin("KillTimer")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Misc_cpp_timeGetTime);
primFun(prim_Win32Misc_cpp_timeGetTime)
{ DWORD res1;;
  {res1 = timeGetTime();
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Misc_cpp_loadAccelerators",4,prim_Win32Misc_cpp_loadAccelerators},
  {"prim_Win32Misc_cpp_loadCursor",4,prim_Win32Misc_cpp_loadCursor},
  {"prim_Win32Misc_cpp_loadIcon",4,prim_Win32Misc_cpp_loadIcon},
  {"prim_Win32Misc_cpp_iDC_ARROW",2,prim_Win32Misc_cpp_iDC_ARROW},
  {"prim_Win32Misc_cpp_iDC_IBEAM",2,prim_Win32Misc_cpp_iDC_IBEAM},
  {"prim_Win32Misc_cpp_iDC_WAIT",2,prim_Win32Misc_cpp_iDC_WAIT},
  {"prim_Win32Misc_cpp_iDC_CROSS",2,prim_Win32Misc_cpp_iDC_CROSS},
  {"prim_Win32Misc_cpp_iDC_UPARROW",2,prim_Win32Misc_cpp_iDC_UPARROW},
  {"prim_Win32Misc_cpp_iDC_SIZENWSE",2,prim_Win32Misc_cpp_iDC_SIZENWSE},
  {"prim_Win32Misc_cpp_iDC_SIZENESW",2,prim_Win32Misc_cpp_iDC_SIZENESW},
  {"prim_Win32Misc_cpp_iDC_SIZEWE",2,prim_Win32Misc_cpp_iDC_SIZEWE},
  {"prim_Win32Misc_cpp_iDC_SIZENS",2,prim_Win32Misc_cpp_iDC_SIZENS},
  {"prim_Win32Misc_cpp_iDI_APPLICATION",2,prim_Win32Misc_cpp_iDI_APPLICATION},
  {"prim_Win32Misc_cpp_iDI_HAND",2,prim_Win32Misc_cpp_iDI_HAND},
  {"prim_Win32Misc_cpp_iDI_QUESTION",2,prim_Win32Misc_cpp_iDI_QUESTION},
  {"prim_Win32Misc_cpp_iDI_EXCLAMATION",2,prim_Win32Misc_cpp_iDI_EXCLAMATION},
  {"prim_Win32Misc_cpp_iDI_ASTERISK",2,prim_Win32Misc_cpp_iDI_ASTERISK},
  {"prim_Win32Misc_cpp_mB_OK",2,prim_Win32Misc_cpp_mB_OK},
  {"prim_Win32Misc_cpp_mB_OKCANCEL",2,prim_Win32Misc_cpp_mB_OKCANCEL},
  {"prim_Win32Misc_cpp_mB_ABORTRETRYIGNORE",2,prim_Win32Misc_cpp_mB_ABORTRETRYIGNORE},
  {"prim_Win32Misc_cpp_mB_YESNOCANCEL",2,prim_Win32Misc_cpp_mB_YESNOCANCEL},
  {"prim_Win32Misc_cpp_mB_YESNO",2,prim_Win32Misc_cpp_mB_YESNO},
  {"prim_Win32Misc_cpp_mB_RETRYCANCEL",2,prim_Win32Misc_cpp_mB_RETRYCANCEL},
  {"prim_Win32Misc_cpp_mB_ICONHAND",2,prim_Win32Misc_cpp_mB_ICONHAND},
  {"prim_Win32Misc_cpp_mB_ICONQUESTION",2,prim_Win32Misc_cpp_mB_ICONQUESTION},
  {"prim_Win32Misc_cpp_mB_ICONEXCLAMATION",2,prim_Win32Misc_cpp_mB_ICONEXCLAMATION},
  {"prim_Win32Misc_cpp_mB_ICONASTERISK",2,prim_Win32Misc_cpp_mB_ICONASTERISK},
  {"prim_Win32Misc_cpp_mB_ICONINFORMATION",2,prim_Win32Misc_cpp_mB_ICONINFORMATION},
  {"prim_Win32Misc_cpp_mB_ICONSTOP",2,prim_Win32Misc_cpp_mB_ICONSTOP},
  {"prim_Win32Misc_cpp_mB_DEFBUTTON1",2,prim_Win32Misc_cpp_mB_DEFBUTTON1},
  {"prim_Win32Misc_cpp_mB_DEFBUTTON2",2,prim_Win32Misc_cpp_mB_DEFBUTTON2},
  {"prim_Win32Misc_cpp_mB_DEFBUTTON3",2,prim_Win32Misc_cpp_mB_DEFBUTTON3},
  {"prim_Win32Misc_cpp_mB_APPLMODAL",2,prim_Win32Misc_cpp_mB_APPLMODAL},
  {"prim_Win32Misc_cpp_mB_SYSTEMMODAL",2,prim_Win32Misc_cpp_mB_SYSTEMMODAL},
  {"prim_Win32Misc_cpp_mB_TASKMODAL",2,prim_Win32Misc_cpp_mB_TASKMODAL},
  {"prim_Win32Misc_cpp_mB_SETFOREGROUND",2,prim_Win32Misc_cpp_mB_SETFOREGROUND},
  {"prim_Win32Misc_cpp_iDABORT",2,prim_Win32Misc_cpp_iDABORT},
  {"prim_Win32Misc_cpp_iDCANCEL",2,prim_Win32Misc_cpp_iDCANCEL},
  {"prim_Win32Misc_cpp_iDIGNORE",2,prim_Win32Misc_cpp_iDIGNORE},
  {"prim_Win32Misc_cpp_iDNO",2,prim_Win32Misc_cpp_iDNO},
  {"prim_Win32Misc_cpp_iDOK",2,prim_Win32Misc_cpp_iDOK},
  {"prim_Win32Misc_cpp_iDRETRY",2,prim_Win32Misc_cpp_iDRETRY},
  {"prim_Win32Misc_cpp_iDYES",2,prim_Win32Misc_cpp_iDYES},
  {"prim_Win32Misc_cpp_messageBox",6,prim_Win32Misc_cpp_messageBox},
  {"prim_Win32Misc_cpp_sTD_INPUT_HANDLE",2,prim_Win32Misc_cpp_sTD_INPUT_HANDLE},
  {"prim_Win32Misc_cpp_sTD_OUTPUT_HANDLE",2,prim_Win32Misc_cpp_sTD_OUTPUT_HANDLE},
  {"prim_Win32Misc_cpp_sTD_ERROR_HANDLE",2,prim_Win32Misc_cpp_sTD_ERROR_HANDLE},
  {"prim_Win32Misc_cpp_getStdHandle",3,prim_Win32Misc_cpp_getStdHandle},
  {"prim_Win32Misc_cpp_transformedEllipse",9,prim_Win32Misc_cpp_transformedEllipse},
  {"prim_Win32Misc_cpp_eWX_FORCE",2,prim_Win32Misc_cpp_eWX_FORCE},
  {"prim_Win32Misc_cpp_eWX_LOGOFF",2,prim_Win32Misc_cpp_eWX_LOGOFF},
  {"prim_Win32Misc_cpp_eWX_POWEROFF",2,prim_Win32Misc_cpp_eWX_POWEROFF},
  {"prim_Win32Misc_cpp_eWX_REBOOT",2,prim_Win32Misc_cpp_eWX_REBOOT},
  {"prim_Win32Misc_cpp_eWX_SHUTDOWN",2,prim_Win32Misc_cpp_eWX_SHUTDOWN},
  {"prim_Win32Misc_cpp_messageBeep",3,prim_Win32Misc_cpp_messageBeep},
  {"prim_Win32Misc_cpp_beep",4,prim_Win32Misc_cpp_beep},
  {"prim_Win32Misc_cpp_setWinTimer",5,prim_Win32Misc_cpp_setWinTimer},
  {"prim_Win32Misc_cpp_killTimer",4,prim_Win32Misc_cpp_killTimer},
  {"prim_Win32Misc_cpp_timeGetTime",2,prim_Win32Misc_cpp_timeGetTime},
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
