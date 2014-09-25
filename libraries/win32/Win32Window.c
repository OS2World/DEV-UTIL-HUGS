/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
#include  "WndProc.h"
PROTO_PRIM(prim_Win32Window_cpp_mkClassName);
primFun(prim_Win32Window_cpp_mkClassName)
{ char * arg1;;
  arg1 = (char *)(hugs->getAddr());
  {hugs->putAddr((LPCTSTR)(arg1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_VREDRAW);
primFun(prim_Win32Window_cpp_cS_VREDRAW)
{ UINT res1;;
  {res1=CS_VREDRAW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_HREDRAW);
primFun(prim_Win32Window_cpp_cS_HREDRAW)
{ UINT res1;;
  {res1=CS_HREDRAW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_OWNDC);
primFun(prim_Win32Window_cpp_cS_OWNDC)
{ UINT res1;;
  {res1=CS_OWNDC;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_CLASSDC);
primFun(prim_Win32Window_cpp_cS_CLASSDC)
{ UINT res1;;
  {res1=CS_CLASSDC;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_PARENTDC);
primFun(prim_Win32Window_cpp_cS_PARENTDC)
{ UINT res1;;
  {res1=CS_PARENTDC;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_SAVEBITS);
primFun(prim_Win32Window_cpp_cS_SAVEBITS)
{ UINT res1;;
  {res1=CS_SAVEBITS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_DBLCLKS);
primFun(prim_Win32Window_cpp_cS_DBLCLKS)
{ UINT res1;;
  {res1=CS_DBLCLKS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_BYTEALIGNCLIENT);
primFun(prim_Win32Window_cpp_cS_BYTEALIGNCLIENT)
{ UINT res1;;
  {res1=CS_BYTEALIGNCLIENT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_BYTEALIGNWINDOW);
primFun(prim_Win32Window_cpp_cS_BYTEALIGNWINDOW)
{ UINT res1;;
  {res1=CS_BYTEALIGNWINDOW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_NOCLOSE);
primFun(prim_Win32Window_cpp_cS_NOCLOSE)
{ UINT res1;;
  {res1=CS_NOCLOSE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cS_GLOBALCLASS);
primFun(prim_Win32Window_cpp_cS_GLOBALCLASS)
{ UINT res1;;
  {res1=CS_GLOBALCLASS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_marshall_wndClass_);
primFun(prim_Win32Window_cpp_marshall_wndClass_)
{ UINT style; HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor; HBRUSH hbrBackground; LPCTSTR lpszMenuName; LPCTSTR lpszClassName;WNDCLASS* c;int gc_failed;
																	       char* gc_failstring;;
  style = (UINT)(hugs->getWord());
  hInstance = (HINSTANCE)(hugs->getAddr());
  hIcon = (HICON)(hugs->getAddr());
  hCursor = (HCURSOR)(hugs->getAddr());
  hbrBackground = (HBRUSH)(hugs->getAddr());
  lpszMenuName = (LPCTSTR)(hugs->getAddr());
  lpszClassName = (LPCTSTR)(hugs->getAddr());
  { c = (WNDCLASS*) malloc(sizeof(WNDCLASS));
     if (c) { 
	  c->style 	   = style;
	  c->hInstance 	   = hInstance;
	  c->hIcon 	   = hIcon;
	  c->hCursor 	   = hCursor;
	  c->hbrBackground = hbrBackground;
	  c->lpszMenuName  = lpszMenuName;
	  c->lpszClassName = lpszClassName;
     };
   if ((gc_failed = ( c==0 ))) {gc_failstring =  MallocError("marshall_WNDCLASS")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((WNDCLASS*)(c));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_registerClass);
primFun(prim_Win32Window_cpp_registerClass)
{ WNDCLASS * arg1;ATOM res1;;
  arg1 = (WNDCLASS *)(hugs->getAddr());
  { arg1->lpfnWndProc = genericWndProc;
     arg1->cbClsExtra = 0;
     arg1->cbWndExtra =0;
     res1 = RegisterClass(arg1);
   hugs->putWord((ATOM)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_unregisterClass);
primFun(prim_Win32Window_cpp_unregisterClass)
{ LPCTSTR arg1; HINSTANCE arg2;;
  arg1 = (LPCTSTR)(hugs->getAddr());
  arg2 = (HINSTANCE)(hugs->getAddr());
  {UnregisterClass(arg1, arg2);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_OVERLAPPED);
primFun(prim_Win32Window_cpp_wS_OVERLAPPED)
{ DWORD res1;;
  {res1=WS_OVERLAPPED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_POPUP);
primFun(prim_Win32Window_cpp_wS_POPUP)
{ DWORD res1;;
  {res1=WS_POPUP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_CHILD);
primFun(prim_Win32Window_cpp_wS_CHILD)
{ DWORD res1;;
  {res1=WS_CHILD;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_CLIPSIBLINGS);
primFun(prim_Win32Window_cpp_wS_CLIPSIBLINGS)
{ DWORD res1;;
  {res1=WS_CLIPSIBLINGS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_CLIPCHILDREN);
primFun(prim_Win32Window_cpp_wS_CLIPCHILDREN)
{ DWORD res1;;
  {res1=WS_CLIPCHILDREN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_VISIBLE);
primFun(prim_Win32Window_cpp_wS_VISIBLE)
{ DWORD res1;;
  {res1=WS_VISIBLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_DISABLED);
primFun(prim_Win32Window_cpp_wS_DISABLED)
{ DWORD res1;;
  {res1=WS_DISABLED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_MINIMIZE);
primFun(prim_Win32Window_cpp_wS_MINIMIZE)
{ DWORD res1;;
  {res1=WS_MINIMIZE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_MAXIMIZE);
primFun(prim_Win32Window_cpp_wS_MAXIMIZE)
{ DWORD res1;;
  {res1=WS_MAXIMIZE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_CAPTION);
primFun(prim_Win32Window_cpp_wS_CAPTION)
{ DWORD res1;;
  {res1=WS_CAPTION;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_BORDER);
primFun(prim_Win32Window_cpp_wS_BORDER)
{ DWORD res1;;
  {res1=WS_BORDER;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_DLGFRAME);
primFun(prim_Win32Window_cpp_wS_DLGFRAME)
{ DWORD res1;;
  {res1=WS_DLGFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_VSCROLL);
primFun(prim_Win32Window_cpp_wS_VSCROLL)
{ DWORD res1;;
  {res1=WS_VSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_HSCROLL);
primFun(prim_Win32Window_cpp_wS_HSCROLL)
{ DWORD res1;;
  {res1=WS_HSCROLL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_SYSMENU);
primFun(prim_Win32Window_cpp_wS_SYSMENU)
{ DWORD res1;;
  {res1=WS_SYSMENU;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_THICKFRAME);
primFun(prim_Win32Window_cpp_wS_THICKFRAME)
{ DWORD res1;;
  {res1=WS_THICKFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_MINIMIZEBOX);
primFun(prim_Win32Window_cpp_wS_MINIMIZEBOX)
{ DWORD res1;;
  {res1=WS_MINIMIZEBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_MAXIMIZEBOX);
primFun(prim_Win32Window_cpp_wS_MAXIMIZEBOX)
{ DWORD res1;;
  {res1=WS_MAXIMIZEBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_GROUP);
primFun(prim_Win32Window_cpp_wS_GROUP)
{ DWORD res1;;
  {res1=WS_GROUP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_TABSTOP);
primFun(prim_Win32Window_cpp_wS_TABSTOP)
{ DWORD res1;;
  {res1=WS_TABSTOP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_OVERLAPPEDWINDOW);
primFun(prim_Win32Window_cpp_wS_OVERLAPPEDWINDOW)
{ DWORD res1;;
  {res1=WS_OVERLAPPEDWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_POPUPWINDOW);
primFun(prim_Win32Window_cpp_wS_POPUPWINDOW)
{ DWORD res1;;
  {res1=WS_POPUPWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_CHILDWINDOW);
primFun(prim_Win32Window_cpp_wS_CHILDWINDOW)
{ DWORD res1;;
  {res1=WS_CHILDWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_TILED);
primFun(prim_Win32Window_cpp_wS_TILED)
{ DWORD res1;;
  {res1=WS_TILED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_ICONIC);
primFun(prim_Win32Window_cpp_wS_ICONIC)
{ DWORD res1;;
  {res1=WS_ICONIC;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_SIZEBOX);
primFun(prim_Win32Window_cpp_wS_SIZEBOX)
{ DWORD res1;;
  {res1=WS_SIZEBOX;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_TILEDWINDOW);
primFun(prim_Win32Window_cpp_wS_TILEDWINDOW)
{ DWORD res1;;
  {res1=WS_TILEDWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_DLGMODALFRAME);
primFun(prim_Win32Window_cpp_wS_EX_DLGMODALFRAME)
{ DWORD res1;;
  {res1=WS_EX_DLGMODALFRAME;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_NOPARENTNOTIFY);
primFun(prim_Win32Window_cpp_wS_EX_NOPARENTNOTIFY)
{ DWORD res1;;
  {res1=WS_EX_NOPARENTNOTIFY;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_TOPMOST);
primFun(prim_Win32Window_cpp_wS_EX_TOPMOST)
{ DWORD res1;;
  {res1=WS_EX_TOPMOST;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_ACCEPTFILES);
primFun(prim_Win32Window_cpp_wS_EX_ACCEPTFILES)
{ DWORD res1;;
  {res1=WS_EX_ACCEPTFILES;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_TRANSPARENT);
primFun(prim_Win32Window_cpp_wS_EX_TRANSPARENT)
{ DWORD res1;;
  {res1=WS_EX_TRANSPARENT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_MDICHILD);
primFun(prim_Win32Window_cpp_wS_EX_MDICHILD)
{ DWORD res1;;
  {res1=WS_EX_MDICHILD;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_TOOLWINDOW);
primFun(prim_Win32Window_cpp_wS_EX_TOOLWINDOW)
{ DWORD res1;;
  {res1=WS_EX_TOOLWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_WINDOWEDGE);
primFun(prim_Win32Window_cpp_wS_EX_WINDOWEDGE)
{ DWORD res1;;
  {res1=WS_EX_WINDOWEDGE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_CLIENTEDGE);
primFun(prim_Win32Window_cpp_wS_EX_CLIENTEDGE)
{ DWORD res1;;
  {res1=WS_EX_CLIENTEDGE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_CONTEXTHELP);
primFun(prim_Win32Window_cpp_wS_EX_CONTEXTHELP)
{ DWORD res1;;
  {res1=WS_EX_CONTEXTHELP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_RIGHT);
primFun(prim_Win32Window_cpp_wS_EX_RIGHT)
{ DWORD res1;;
  {res1=WS_EX_RIGHT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_LEFT);
primFun(prim_Win32Window_cpp_wS_EX_LEFT)
{ DWORD res1;;
  {res1=WS_EX_LEFT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_RTLREADING);
primFun(prim_Win32Window_cpp_wS_EX_RTLREADING)
{ DWORD res1;;
  {res1=WS_EX_RTLREADING;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_LTRREADING);
primFun(prim_Win32Window_cpp_wS_EX_LTRREADING)
{ DWORD res1;;
  {res1=WS_EX_LTRREADING;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_LEFTSCROLLBAR);
primFun(prim_Win32Window_cpp_wS_EX_LEFTSCROLLBAR)
{ DWORD res1;;
  {res1=WS_EX_LEFTSCROLLBAR;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_RIGHTSCROLLBAR);
primFun(prim_Win32Window_cpp_wS_EX_RIGHTSCROLLBAR)
{ DWORD res1;;
  {res1=WS_EX_RIGHTSCROLLBAR;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_CONTROLPARENT);
primFun(prim_Win32Window_cpp_wS_EX_CONTROLPARENT)
{ DWORD res1;;
  {res1=WS_EX_CONTROLPARENT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_STATICEDGE);
primFun(prim_Win32Window_cpp_wS_EX_STATICEDGE)
{ DWORD res1;;
  {res1=WS_EX_STATICEDGE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_APPWINDOW);
primFun(prim_Win32Window_cpp_wS_EX_APPWINDOW)
{ DWORD res1;;
  {res1=WS_EX_APPWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_OVERLAPPEDWINDOW);
primFun(prim_Win32Window_cpp_wS_EX_OVERLAPPEDWINDOW)
{ DWORD res1;;
  {res1=WS_EX_OVERLAPPEDWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_wS_EX_PALETTEWINDOW);
primFun(prim_Win32Window_cpp_wS_EX_PALETTEWINDOW)
{ DWORD res1;;
  {res1=WS_EX_PALETTEWINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_cW_USEDEFAULT);
primFun(prim_Win32Window_cpp_cW_USEDEFAULT)
{ int res1;;
  {res1=CW_USEDEFAULT;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_setWindowClosure);
primFun(prim_Win32Window_cpp_setWindowClosure)
{ HWND hwnd; unsigned long closure;;
  hwnd = (HWND)(hugs->getAddr());
  closure = hugs->getInt();
  { SetWindowLong(hwnd, GWL_USERDATA, (LONG)closure);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_createWindow);
primFun(prim_Win32Window_cpp_createWindow)
{ LPCTSTR name; char * windowName; DWORD style; int x; int y; int width; int height; HWND hwndParent; HMENU hmenu; HINSTANCE hinst; unsigned long closure;HWND res1;int gc_failed;
																				    char* gc_failstring;;
  name = (LPCTSTR)(hugs->getAddr());
  windowName = (char *)(hugs->getAddr());
  style = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  width = (int)(hugs->getInt());
  height = (int)(hugs->getInt());
  hwndParent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  hinst = (HINSTANCE)(hugs->getAddr());
  closure = hugs->getInt();
  { res1 = CreateWindow(name, windowName,style,x,y,width,height,hwndParent,hmenu,hinst,NULL);
     if (res1 != NULL) { SetWindowLong(res1, GWL_USERDATA, (LONG)closure); };
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("CreateWindow") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_createWindowEx);
primFun(prim_Win32Window_cpp_createWindowEx)
{ DWORD estyle; LPCTSTR cls; char * wname; DWORD wstyle; int x; int y; int nWidth; int nHeight; HWND hwndParent; HMENU hmenu; HINSTANCE hinstance; unsigned long closure;HWND res1;int gc_failed;
																						   char* gc_failstring;;
  estyle = (DWORD)(hugs->getWord());
  cls = (LPCTSTR)(hugs->getAddr());
  wname = (char *)(hugs->getAddr());
  wstyle = (DWORD)(hugs->getWord());
  x = (int)(hugs->getInt());
  y = (int)(hugs->getInt());
  nWidth = (int)(hugs->getInt());
  nHeight = (int)(hugs->getInt());
  hwndParent = (HWND)(hugs->getAddr());
  hmenu = (HMENU)(hugs->getAddr());
  hinstance = (HINSTANCE)(hugs->getAddr());
  closure = hugs->getInt();
  { res1 = CreateWindowEx(estyle, cls, wname, wstyle,x,y,nWidth,nHeight,hwndParent,hmenu,hinstance,NULL);
     if (res1 != NULL) { SetWindowLong(res1, GWL_USERDATA, (LONG)closure); };
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("CreateWindowEx") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_defWindowProc);
primFun(prim_Win32Window_cpp_defWindowProc)
{ HWND arg1; DWORD arg2; WPARAM arg3; LPARAM arg4;LRESULT res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (WPARAM)(hugs->getWord());
  arg4 = (LPARAM)(hugs->getInt());
  { LRESULT res1 = DefWindowProc(arg1,arg2,arg3,arg4);
   hugs->putInt((LRESULT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getClientRect);
primFun(prim_Win32Window_cpp_getClientRect)
{ HWND arg1;RECT res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = GetClientRect(arg1,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("GetClientRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).bottom));
   hugs->putInt((LONG)((res1).right));
   hugs->putInt((LONG)((res1).top));
   hugs->putInt((LONG)((res1).left));
   hugs_returnIO(6);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getWindowRect);
primFun(prim_Win32Window_cpp_getWindowRect)
{ HWND arg1;RECT res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = GetWindowRect(arg1,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("GetWindowRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).bottom));
   hugs->putInt((LONG)((res1).right));
   hugs->putInt((LONG)((res1).top));
   hugs->putInt((LONG)((res1).left));
   hugs_returnIO(6);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_invalidateRect);
primFun(prim_Win32Window_cpp_invalidateRect)
{ HWND arg1; LPRECT arg2; int arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (LPRECT)(hugs->getAddr());
  arg3 = (int)(hugs->getInt());
  { BOOL success = InvalidateRect(arg1,arg2,arg3);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("InvalidateRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_screenToClient);
primFun(prim_Win32Window_cpp_screenToClient)
{ HWND arg1;POINT scr;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  (scr).x = (LONG)(hugs->getInt());
  (scr).y = (LONG)(hugs->getInt());
  { BOOL success = ScreenToClient(arg1, &scr);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("ScreenToClient")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((scr).y));
   hugs->putInt((LONG)((scr).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_clientToScreen);
primFun(prim_Win32Window_cpp_clientToScreen)
{ HWND hwnd;POINT cli;int gc_failed;
		      char* gc_failstring;;
  hwnd = (HWND)(hugs->getAddr());
  (cli).x = (LONG)(hugs->getInt());
  (cli).y = (LONG)(hugs->getInt());
  { BOOL success = ClientToScreen(hwnd,&cli);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("ClientToScreen")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((cli).y));
   hugs->putInt((LONG)((cli).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_setWindowText);
primFun(prim_Win32Window_cpp_setWindowText)
{ HWND arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (char *)(hugs->getAddr());
  { BOOL success = SetWindowText(arg1,arg2);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorString("SetWindowText") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
    free(arg2);}
}
PROTO_PRIM(prim_Win32Window_cpp_sizeofPAINTSTRUCT);
primFun(prim_Win32Window_cpp_sizeofPAINTSTRUCT)
{ ;
  {hugs->putWord((DWORD)( sizeof(PAINTSTRUCT) ));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_beginPaint);
primFun(prim_Win32Window_cpp_beginPaint)
{ HWND arg1; LPPAINTSTRUCT arg2;HDC res1;int gc_failed;
					 char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (LPPAINTSTRUCT)(hugs->getAddr());
  { HDC res1 = BeginPaint(arg1,arg2);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorString("BeginPaint") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_endPaint);
primFun(prim_Win32Window_cpp_endPaint)
{ HWND arg1; LPPAINTSTRUCT arg2;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (LPPAINTSTRUCT)(hugs->getAddr());
  { EndPaint((HWND)arg1,(LPPAINTSTRUCT)arg2);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_HIDE);
primFun(prim_Win32Window_cpp_sW_HIDE)
{ DWORD res1;;
  {res1=SW_HIDE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOWNORMAL);
primFun(prim_Win32Window_cpp_sW_SHOWNORMAL)
{ DWORD res1;;
  {res1=SW_SHOWNORMAL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOWMINIMIZED);
primFun(prim_Win32Window_cpp_sW_SHOWMINIMIZED)
{ DWORD res1;;
  {res1=SW_SHOWMINIMIZED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOWMAXIMIZED);
primFun(prim_Win32Window_cpp_sW_SHOWMAXIMIZED)
{ DWORD res1;;
  {res1=SW_SHOWMAXIMIZED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_MAXIMIZE);
primFun(prim_Win32Window_cpp_sW_MAXIMIZE)
{ DWORD res1;;
  {res1=SW_MAXIMIZE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOWNOACTIVATE);
primFun(prim_Win32Window_cpp_sW_SHOWNOACTIVATE)
{ DWORD res1;;
  {res1=SW_SHOWNOACTIVATE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOW);
primFun(prim_Win32Window_cpp_sW_SHOW)
{ DWORD res1;;
  {res1=SW_SHOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_MINIMIZE);
primFun(prim_Win32Window_cpp_sW_MINIMIZE)
{ DWORD res1;;
  {res1=SW_MINIMIZE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOWMINNOACTIVE);
primFun(prim_Win32Window_cpp_sW_SHOWMINNOACTIVE)
{ DWORD res1;;
  {res1=SW_SHOWMINNOACTIVE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_SHOWNA);
primFun(prim_Win32Window_cpp_sW_SHOWNA)
{ DWORD res1;;
  {res1=SW_SHOWNA;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sW_RESTORE);
primFun(prim_Win32Window_cpp_sW_RESTORE)
{ DWORD res1;;
  {res1=SW_RESTORE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_showWindow);
primFun(prim_Win32Window_cpp_showWindow)
{ HWND arg1; DWORD arg2;int res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  { BOOL res1 = ShowWindow(arg1,arg2);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_adjustWindowRect);
primFun(prim_Win32Window_cpp_adjustWindowRect)
{ DWORD arg2; int arg3;RECT arg1;int gc_failed;
				 char* gc_failstring;;
  (arg1).left = (LONG)(hugs->getInt());
  (arg1).top = (LONG)(hugs->getInt());
  (arg1).right = (LONG)(hugs->getInt());
  (arg1).bottom = (LONG)(hugs->getInt());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  { BOOL success = AdjustWindowRect(&arg1, arg2, arg3);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("AdjustWindowRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((arg1).bottom));
   hugs->putInt((LONG)((arg1).right));
   hugs->putInt((LONG)((arg1).top));
   hugs->putInt((LONG)((arg1).left));
   hugs_returnIO(6);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_adjustWindowRectEx);
primFun(prim_Win32Window_cpp_adjustWindowRectEx)
{ DWORD arg2; int arg3; DWORD arg4;RECT arg1;int gc_failed;
					     char* gc_failstring;;
  (arg1).left = (LONG)(hugs->getInt());
  (arg1).top = (LONG)(hugs->getInt());
  (arg1).right = (LONG)(hugs->getInt());
  (arg1).bottom = (LONG)(hugs->getInt());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (DWORD)(hugs->getWord());
  { BOOL success = AdjustWindowRectEx(&arg1, arg2, arg3, arg4);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("AdjustWindowRectEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((arg1).bottom));
   hugs->putInt((LONG)((arg1).right));
   hugs->putInt((LONG)((arg1).top));
   hugs->putInt((LONG)((arg1).left));
   hugs_returnIO(6);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_anyPopup);
primFun(prim_Win32Window_cpp_anyPopup)
{ int res1;;
  {res1 = AnyPopup();
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_arrangeIconicWindows);
primFun(prim_Win32Window_cpp_arrangeIconicWindows)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { UINT success = ArrangeIconicWindows(arg1);
   if ((gc_failed = ( success == 0 ))) {gc_failstring =  ErrorWin("ArrangeIconicWindows")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_beginDeferWindowPos);
primFun(prim_Win32Window_cpp_beginDeferWindowPos)
{ int arg1;HDWP res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (int)(hugs->getInt());
  {res1 = BeginDeferWindowPos(arg1);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring =  ErrorWin("BeginDeferWindowPos")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDWP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_bringWindowToTop);
primFun(prim_Win32Window_cpp_bringWindowToTop)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = BringWindowToTop(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("BringWindowToTop")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_childWindowFromPoint);
primFun(prim_Win32Window_cpp_childWindowFromPoint)
{ HWND hwnd;POINT p;HWND res1;int gc_failed;
			      char* gc_failstring;;
  hwnd = (HWND)(hugs->getAddr());
  (p).x = (LONG)(hugs->getInt());
  (p).y = (LONG)(hugs->getInt());
  { BOOL success = ChildWindowFromPoint(hwnd,p);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("ChildWindowFromPoint")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_childWindowFromPointEx);
primFun(prim_Win32Window_cpp_childWindowFromPointEx)
{ HWND hwnd; DWORD arg2;POINT p;HWND res1;int gc_failed;
					  char* gc_failstring;;
  hwnd = (HWND)(hugs->getAddr());
  (p).x = (LONG)(hugs->getInt());
  (p).y = (LONG)(hugs->getInt());
  arg2 = (DWORD)(hugs->getWord());
  { BOOL success = ChildWindowFromPointEx(hwnd,p,arg2);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("ChildWindowFromPointEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_closeWindow);
primFun(prim_Win32Window_cpp_closeWindow)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = DestroyWindow(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("CloseWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_deferWindowPos);
primFun(prim_Win32Window_cpp_deferWindowPos)
{ HDWP arg1; HWND arg2; HWND arg3; int arg4; int arg5; int arg6; int arg7; UINT arg8;HDWP res1;int gc_failed;
											       char* gc_failstring;;
  arg1 = (HDWP)(hugs->getAddr());
  arg2 = (HWND)(hugs->getAddr());
  arg3 = (HWND)(hugs->getAddr());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  arg7 = (int)(hugs->getInt());
  arg8 = (UINT)(hugs->getWord());
  {res1 = DeferWindowPos(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring =  ErrorWin("DeferWindowPos")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDWP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_destroyWindow);
primFun(prim_Win32Window_cpp_destroyWindow)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = DestroyWindow(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("DestroyWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_endDeferWindowPos);
primFun(prim_Win32Window_cpp_endDeferWindowPos)
{ HDWP arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HDWP)(hugs->getAddr());
  { BOOL success = EndDeferWindowPos(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("EndDeferWindowPos")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_findWindow);
primFun(prim_Win32Window_cpp_findWindow)
{ char * arg1; char * arg2;HWND res1;;
  arg1 = (char *)(hugs->getAddr());
  arg2 = (char *)(hugs->getAddr());
  {res1 = FindWindow(arg1, arg2);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_findWindowEx);
primFun(prim_Win32Window_cpp_findWindowEx)
{ HWND arg1; HWND arg2; char * arg3; char * arg4;HWND res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HWND)(hugs->getAddr());
  arg3 = (char *)(hugs->getAddr());
  arg4 = (char *)(hugs->getAddr());
  {res1 = FindWindowEx(arg1, arg2, arg3, arg4);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_flashWindow);
primFun(prim_Win32Window_cpp_flashWindow)
{ HWND arg1; int arg2;int res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  {res1 = FlashWindow(arg1, arg2);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_moveWindow);
primFun(prim_Win32Window_cpp_moveWindow)
{ HWND arg1; int arg2; int arg3; int arg4; int arg5; int arg6;int gc_failed;
							      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  { BOOL success = MoveWindow(arg1,arg2,arg3,arg4,arg5,arg6);
   if ((gc_failed = (  success==0  ))) {gc_failstring =  ErrorWin("MoveWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getDesktopWindow);
primFun(prim_Win32Window_cpp_getDesktopWindow)
{ HWND res1;;
  {res1 = GetDesktopWindow();
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getForegroundWindow);
primFun(prim_Win32Window_cpp_getForegroundWindow)
{ HWND res1;;
  {res1 = GetForegroundWindow();
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getParent);
primFun(prim_Win32Window_cpp_getParent)
{ HWND arg1;HWND res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { HWND res1 = GetParent(arg1);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("GetParent")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getTopWindow);
primFun(prim_Win32Window_cpp_getTopWindow)
{ HWND arg1;HWND res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { HWND res1 = GetTopWindow(arg1);
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring =  ErrorWin("GetTopWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOSIZE);
primFun(prim_Win32Window_cpp_sWP_NOSIZE)
{ UINT res1;;
  {res1=SWP_NOSIZE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOMOVE);
primFun(prim_Win32Window_cpp_sWP_NOMOVE)
{ UINT res1;;
  {res1=SWP_NOMOVE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOZORDER);
primFun(prim_Win32Window_cpp_sWP_NOZORDER)
{ UINT res1;;
  {res1=SWP_NOZORDER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOREDRAW);
primFun(prim_Win32Window_cpp_sWP_NOREDRAW)
{ UINT res1;;
  {res1=SWP_NOREDRAW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOACTIVATE);
primFun(prim_Win32Window_cpp_sWP_NOACTIVATE)
{ UINT res1;;
  {res1=SWP_NOACTIVATE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_FRAMECHANGED);
primFun(prim_Win32Window_cpp_sWP_FRAMECHANGED)
{ UINT res1;;
  {res1=SWP_FRAMECHANGED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_SHOWWINDOW);
primFun(prim_Win32Window_cpp_sWP_SHOWWINDOW)
{ UINT res1;;
  {res1=SWP_SHOWWINDOW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_HIDEWINDOW);
primFun(prim_Win32Window_cpp_sWP_HIDEWINDOW)
{ UINT res1;;
  {res1=SWP_HIDEWINDOW;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOCOPYBITS);
primFun(prim_Win32Window_cpp_sWP_NOCOPYBITS)
{ UINT res1;;
  {res1=SWP_NOCOPYBITS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOOWNERZORDER);
primFun(prim_Win32Window_cpp_sWP_NOOWNERZORDER)
{ UINT res1;;
  {res1=SWP_NOOWNERZORDER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOSENDCHANGING);
primFun(prim_Win32Window_cpp_sWP_NOSENDCHANGING)
{ UINT res1;;
  {res1=SWP_NOSENDCHANGING;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_DRAWFRAME);
primFun(prim_Win32Window_cpp_sWP_DRAWFRAME)
{ UINT res1;;
  {res1=SWP_DRAWFRAME;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sWP_NOREPOSITION);
primFun(prim_Win32Window_cpp_sWP_NOREPOSITION)
{ UINT res1;;
  {res1=SWP_NOREPOSITION;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_WINDOW);
primFun(prim_Win32Window_cpp_dCX_WINDOW)
{ DWORD res1;;
  {res1=DCX_WINDOW;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_CACHE);
primFun(prim_Win32Window_cpp_dCX_CACHE)
{ DWORD res1;;
  {res1=DCX_CACHE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_CLIPCHILDREN);
primFun(prim_Win32Window_cpp_dCX_CLIPCHILDREN)
{ DWORD res1;;
  {res1=DCX_CLIPCHILDREN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_CLIPSIBLINGS);
primFun(prim_Win32Window_cpp_dCX_CLIPSIBLINGS)
{ DWORD res1;;
  {res1=DCX_CLIPSIBLINGS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_PARENTCLIP);
primFun(prim_Win32Window_cpp_dCX_PARENTCLIP)
{ DWORD res1;;
  {res1=DCX_PARENTCLIP;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_EXCLUDERGN);
primFun(prim_Win32Window_cpp_dCX_EXCLUDERGN)
{ DWORD res1;;
  {res1=DCX_EXCLUDERGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_INTERSECTRGN);
primFun(prim_Win32Window_cpp_dCX_INTERSECTRGN)
{ DWORD res1;;
  {res1=DCX_INTERSECTRGN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dCX_LOCKWINDOWUPDATE);
primFun(prim_Win32Window_cpp_dCX_LOCKWINDOWUPDATE)
{ DWORD res1;;
  {res1=DCX_LOCKWINDOWUPDATE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getDCEx);
primFun(prim_Win32Window_cpp_getDCEx)
{ HWND arg1; HRGN arg2; DWORD arg3;HDC res1;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  arg3 = (DWORD)(hugs->getWord());
  {res1 = GetDCEx(arg1, arg2, arg3);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorString("GetDCEx") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getDC);
primFun(prim_Win32Window_cpp_getDC)
{ HWND arg1;HDC res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  {res1 = GetDC(arg1);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorString("GetDC") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getWindowDC);
primFun(prim_Win32Window_cpp_getWindowDC)
{ HWND arg1;HDC res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  {res1 = GetWindowDC(arg1);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorString("GetWindowDC") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_releaseDC);
primFun(prim_Win32Window_cpp_releaseDC)
{ HWND arg1; HDC arg2;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HDC)(hugs->getAddr());
  { BOOL success = ReleaseDC(arg1,arg2);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorString("ReleaseDC") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getDCOrgEx);
primFun(prim_Win32Window_cpp_getDCOrgEx)
{ HDC arg1;POINT res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = GetDCOrgEx(arg1,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorString("GetDCOrgEx") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).y));
   hugs->putInt((LONG)((res1).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_hideCaret);
primFun(prim_Win32Window_cpp_hideCaret)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = HideCaret(arg1);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorString("HideCaret") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_showCaret);
primFun(prim_Win32Window_cpp_showCaret)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = ShowCaret(arg1);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorString("ShowCaret") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_createCaret);
primFun(prim_Win32Window_cpp_createCaret)
{ HWND arg1; HBITMAP arg2; INT arg3; INT arg4;int gc_failed;
					      char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (HBITMAP)(hugs->getAddr());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  { BOOL success = CreateCaret(arg1,arg2,arg3,arg4);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorWin("CreateCaret") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_destroyCaret);
primFun(prim_Win32Window_cpp_destroyCaret)
{ int gc_failed;
  char* gc_failstring;;
  { BOOL success = DestroyCaret();
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorWin("DestroyCaret") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getCaretPos);
primFun(prim_Win32Window_cpp_getCaretPos)
{ POINT res1;int gc_failed;
	     char* gc_failstring;;
  {  BOOL success = GetCaretPos(&res1);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorWin("GetCaretPos") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).y));
   hugs->putInt((LONG)((res1).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_setCaretPos);
primFun(prim_Win32Window_cpp_setCaretPos)
{ POINT arg1;int gc_failed;
	     char* gc_failstring;;
  (arg1).x = (LONG)(hugs->getInt());
  (arg1).y = (LONG)(hugs->getInt());
  { BOOL success = SetCaretPos(arg1.x, arg1.y);
   if ((gc_failed = ( !success ))) {gc_failstring = ErrorWin("SetCaretPos") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getMessage);
primFun(prim_Win32Window_cpp_getMessage)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { static MSG msg;
     BOOL success = GetMessage(&msg, arg1, 0, 0);
   if ((gc_failed = (  success == -1  ))) {gc_failstring = ErrorString("GetMessage") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((MSG *)(&msg));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_getMessage2);
primFun(prim_Win32Window_cpp_getMessage2)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { static MSG msg;
     BOOL success = GetMessage(&msg, arg1, 0, 0);
   if ((gc_failed = (  success == -1  ))) {gc_failstring = ErrorString("GetMessage") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(success !=0));
   hugs->putAddr((MSG *)(&msg));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_peekMessage);
primFun(prim_Win32Window_cpp_peekMessage)
{ HWND arg1; UINT arg2; UINT arg3; UINT arg4;int gc_failed;
					     char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  { static MSG msg;
     BOOL success = PeekMessage(&msg, arg1, arg2, arg3,arg4);
   if ((gc_failed = (  success == -1  ))) {gc_failstring = ErrorString("PeekMessage") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((MSG *)(&msg));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_translateMessage);
primFun(prim_Win32Window_cpp_translateMessage)
{ MSG * arg1;BOOL res1;;
  arg1 = (MSG *)(hugs->getAddr());
  { BOOL res1 = TranslateMessage(arg1);
   hugs->putInt((BOOL)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_updateWindow);
primFun(prim_Win32Window_cpp_updateWindow)
{ HWND arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HWND)(hugs->getAddr());
  { BOOL success = UpdateWindow(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("UpdateWindow")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_dispatchMessage);
primFun(prim_Win32Window_cpp_dispatchMessage)
{ MSG * arg1;LONG res1;;
  arg1 = (MSG *)(hugs->getAddr());
  { LONG res1 = DispatchMessage(arg1);
   hugs->putInt((LONG)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Window_cpp_sendMessage);
primFun(prim_Win32Window_cpp_sendMessage)
{ HWND arg1; DWORD arg2; WPARAM arg3; LPARAM arg4;LRESULT res1;;
  arg1 = (HWND)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (WPARAM)(hugs->getWord());
  arg4 = (LPARAM)(hugs->getInt());
  { LRESULT res1 = SendMessage(arg1,arg2,arg3,arg4);
   hugs->putInt((LRESULT)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Window_cpp_mkClassName",3,prim_Win32Window_cpp_mkClassName},
  {"prim_Win32Window_cpp_cS_VREDRAW",2,prim_Win32Window_cpp_cS_VREDRAW},
  {"prim_Win32Window_cpp_cS_HREDRAW",2,prim_Win32Window_cpp_cS_HREDRAW},
  {"prim_Win32Window_cpp_cS_OWNDC",2,prim_Win32Window_cpp_cS_OWNDC},
  {"prim_Win32Window_cpp_cS_CLASSDC",2,prim_Win32Window_cpp_cS_CLASSDC},
  {"prim_Win32Window_cpp_cS_PARENTDC",2,prim_Win32Window_cpp_cS_PARENTDC},
  {"prim_Win32Window_cpp_cS_SAVEBITS",2,prim_Win32Window_cpp_cS_SAVEBITS},
  {"prim_Win32Window_cpp_cS_DBLCLKS",2,prim_Win32Window_cpp_cS_DBLCLKS},
  {"prim_Win32Window_cpp_cS_BYTEALIGNCLIENT",2,prim_Win32Window_cpp_cS_BYTEALIGNCLIENT},
  {"prim_Win32Window_cpp_cS_BYTEALIGNWINDOW",2,prim_Win32Window_cpp_cS_BYTEALIGNWINDOW},
  {"prim_Win32Window_cpp_cS_NOCLOSE",2,prim_Win32Window_cpp_cS_NOCLOSE},
  {"prim_Win32Window_cpp_cS_GLOBALCLASS",2,prim_Win32Window_cpp_cS_GLOBALCLASS},
  {"prim_Win32Window_cpp_marshall_wndClass_",9,prim_Win32Window_cpp_marshall_wndClass_},
  {"prim_Win32Window_cpp_registerClass",3,prim_Win32Window_cpp_registerClass},
  {"prim_Win32Window_cpp_unregisterClass",4,prim_Win32Window_cpp_unregisterClass},
  {"prim_Win32Window_cpp_wS_OVERLAPPED",2,prim_Win32Window_cpp_wS_OVERLAPPED},
  {"prim_Win32Window_cpp_wS_POPUP",2,prim_Win32Window_cpp_wS_POPUP},
  {"prim_Win32Window_cpp_wS_CHILD",2,prim_Win32Window_cpp_wS_CHILD},
  {"prim_Win32Window_cpp_wS_CLIPSIBLINGS",2,prim_Win32Window_cpp_wS_CLIPSIBLINGS},
  {"prim_Win32Window_cpp_wS_CLIPCHILDREN",2,prim_Win32Window_cpp_wS_CLIPCHILDREN},
  {"prim_Win32Window_cpp_wS_VISIBLE",2,prim_Win32Window_cpp_wS_VISIBLE},
  {"prim_Win32Window_cpp_wS_DISABLED",2,prim_Win32Window_cpp_wS_DISABLED},
  {"prim_Win32Window_cpp_wS_MINIMIZE",2,prim_Win32Window_cpp_wS_MINIMIZE},
  {"prim_Win32Window_cpp_wS_MAXIMIZE",2,prim_Win32Window_cpp_wS_MAXIMIZE},
  {"prim_Win32Window_cpp_wS_CAPTION",2,prim_Win32Window_cpp_wS_CAPTION},
  {"prim_Win32Window_cpp_wS_BORDER",2,prim_Win32Window_cpp_wS_BORDER},
  {"prim_Win32Window_cpp_wS_DLGFRAME",2,prim_Win32Window_cpp_wS_DLGFRAME},
  {"prim_Win32Window_cpp_wS_VSCROLL",2,prim_Win32Window_cpp_wS_VSCROLL},
  {"prim_Win32Window_cpp_wS_HSCROLL",2,prim_Win32Window_cpp_wS_HSCROLL},
  {"prim_Win32Window_cpp_wS_SYSMENU",2,prim_Win32Window_cpp_wS_SYSMENU},
  {"prim_Win32Window_cpp_wS_THICKFRAME",2,prim_Win32Window_cpp_wS_THICKFRAME},
  {"prim_Win32Window_cpp_wS_MINIMIZEBOX",2,prim_Win32Window_cpp_wS_MINIMIZEBOX},
  {"prim_Win32Window_cpp_wS_MAXIMIZEBOX",2,prim_Win32Window_cpp_wS_MAXIMIZEBOX},
  {"prim_Win32Window_cpp_wS_GROUP",2,prim_Win32Window_cpp_wS_GROUP},
  {"prim_Win32Window_cpp_wS_TABSTOP",2,prim_Win32Window_cpp_wS_TABSTOP},
  {"prim_Win32Window_cpp_wS_OVERLAPPEDWINDOW",2,prim_Win32Window_cpp_wS_OVERLAPPEDWINDOW},
  {"prim_Win32Window_cpp_wS_POPUPWINDOW",2,prim_Win32Window_cpp_wS_POPUPWINDOW},
  {"prim_Win32Window_cpp_wS_CHILDWINDOW",2,prim_Win32Window_cpp_wS_CHILDWINDOW},
  {"prim_Win32Window_cpp_wS_TILED",2,prim_Win32Window_cpp_wS_TILED},
  {"prim_Win32Window_cpp_wS_ICONIC",2,prim_Win32Window_cpp_wS_ICONIC},
  {"prim_Win32Window_cpp_wS_SIZEBOX",2,prim_Win32Window_cpp_wS_SIZEBOX},
  {"prim_Win32Window_cpp_wS_TILEDWINDOW",2,prim_Win32Window_cpp_wS_TILEDWINDOW},
  {"prim_Win32Window_cpp_wS_EX_DLGMODALFRAME",2,prim_Win32Window_cpp_wS_EX_DLGMODALFRAME},
  {"prim_Win32Window_cpp_wS_EX_NOPARENTNOTIFY",2,prim_Win32Window_cpp_wS_EX_NOPARENTNOTIFY},
  {"prim_Win32Window_cpp_wS_EX_TOPMOST",2,prim_Win32Window_cpp_wS_EX_TOPMOST},
  {"prim_Win32Window_cpp_wS_EX_ACCEPTFILES",2,prim_Win32Window_cpp_wS_EX_ACCEPTFILES},
  {"prim_Win32Window_cpp_wS_EX_TRANSPARENT",2,prim_Win32Window_cpp_wS_EX_TRANSPARENT},
  {"prim_Win32Window_cpp_wS_EX_MDICHILD",2,prim_Win32Window_cpp_wS_EX_MDICHILD},
  {"prim_Win32Window_cpp_wS_EX_TOOLWINDOW",2,prim_Win32Window_cpp_wS_EX_TOOLWINDOW},
  {"prim_Win32Window_cpp_wS_EX_WINDOWEDGE",2,prim_Win32Window_cpp_wS_EX_WINDOWEDGE},
  {"prim_Win32Window_cpp_wS_EX_CLIENTEDGE",2,prim_Win32Window_cpp_wS_EX_CLIENTEDGE},
  {"prim_Win32Window_cpp_wS_EX_CONTEXTHELP",2,prim_Win32Window_cpp_wS_EX_CONTEXTHELP},
  {"prim_Win32Window_cpp_wS_EX_RIGHT",2,prim_Win32Window_cpp_wS_EX_RIGHT},
  {"prim_Win32Window_cpp_wS_EX_LEFT",2,prim_Win32Window_cpp_wS_EX_LEFT},
  {"prim_Win32Window_cpp_wS_EX_RTLREADING",2,prim_Win32Window_cpp_wS_EX_RTLREADING},
  {"prim_Win32Window_cpp_wS_EX_LTRREADING",2,prim_Win32Window_cpp_wS_EX_LTRREADING},
  {"prim_Win32Window_cpp_wS_EX_LEFTSCROLLBAR",2,prim_Win32Window_cpp_wS_EX_LEFTSCROLLBAR},
  {"prim_Win32Window_cpp_wS_EX_RIGHTSCROLLBAR",2,prim_Win32Window_cpp_wS_EX_RIGHTSCROLLBAR},
  {"prim_Win32Window_cpp_wS_EX_CONTROLPARENT",2,prim_Win32Window_cpp_wS_EX_CONTROLPARENT},
  {"prim_Win32Window_cpp_wS_EX_STATICEDGE",2,prim_Win32Window_cpp_wS_EX_STATICEDGE},
  {"prim_Win32Window_cpp_wS_EX_APPWINDOW",2,prim_Win32Window_cpp_wS_EX_APPWINDOW},
  {"prim_Win32Window_cpp_wS_EX_OVERLAPPEDWINDOW",2,prim_Win32Window_cpp_wS_EX_OVERLAPPEDWINDOW},
  {"prim_Win32Window_cpp_wS_EX_PALETTEWINDOW",2,prim_Win32Window_cpp_wS_EX_PALETTEWINDOW},
  {"prim_Win32Window_cpp_cW_USEDEFAULT",2,prim_Win32Window_cpp_cW_USEDEFAULT},
  {"prim_Win32Window_cpp_setWindowClosure",4,prim_Win32Window_cpp_setWindowClosure},
  {"prim_Win32Window_cpp_createWindow",13,prim_Win32Window_cpp_createWindow},
  {"prim_Win32Window_cpp_createWindowEx",14,prim_Win32Window_cpp_createWindowEx},
  {"prim_Win32Window_cpp_defWindowProc",6,prim_Win32Window_cpp_defWindowProc},
  {"prim_Win32Window_cpp_getClientRect",3,prim_Win32Window_cpp_getClientRect},
  {"prim_Win32Window_cpp_getWindowRect",3,prim_Win32Window_cpp_getWindowRect},
  {"prim_Win32Window_cpp_invalidateRect",5,prim_Win32Window_cpp_invalidateRect},
  {"prim_Win32Window_cpp_screenToClient",5,prim_Win32Window_cpp_screenToClient},
  {"prim_Win32Window_cpp_clientToScreen",5,prim_Win32Window_cpp_clientToScreen},
  {"prim_Win32Window_cpp_setWindowText",4,prim_Win32Window_cpp_setWindowText},
  {"prim_Win32Window_cpp_sizeofPAINTSTRUCT",2,prim_Win32Window_cpp_sizeofPAINTSTRUCT},
  {"prim_Win32Window_cpp_beginPaint",4,prim_Win32Window_cpp_beginPaint},
  {"prim_Win32Window_cpp_endPaint",4,prim_Win32Window_cpp_endPaint},
  {"prim_Win32Window_cpp_sW_HIDE",2,prim_Win32Window_cpp_sW_HIDE},
  {"prim_Win32Window_cpp_sW_SHOWNORMAL",2,prim_Win32Window_cpp_sW_SHOWNORMAL},
  {"prim_Win32Window_cpp_sW_SHOWMINIMIZED",2,prim_Win32Window_cpp_sW_SHOWMINIMIZED},
  {"prim_Win32Window_cpp_sW_SHOWMAXIMIZED",2,prim_Win32Window_cpp_sW_SHOWMAXIMIZED},
  {"prim_Win32Window_cpp_sW_MAXIMIZE",2,prim_Win32Window_cpp_sW_MAXIMIZE},
  {"prim_Win32Window_cpp_sW_SHOWNOACTIVATE",2,prim_Win32Window_cpp_sW_SHOWNOACTIVATE},
  {"prim_Win32Window_cpp_sW_SHOW",2,prim_Win32Window_cpp_sW_SHOW},
  {"prim_Win32Window_cpp_sW_MINIMIZE",2,prim_Win32Window_cpp_sW_MINIMIZE},
  {"prim_Win32Window_cpp_sW_SHOWMINNOACTIVE",2,prim_Win32Window_cpp_sW_SHOWMINNOACTIVE},
  {"prim_Win32Window_cpp_sW_SHOWNA",2,prim_Win32Window_cpp_sW_SHOWNA},
  {"prim_Win32Window_cpp_sW_RESTORE",2,prim_Win32Window_cpp_sW_RESTORE},
  {"prim_Win32Window_cpp_showWindow",4,prim_Win32Window_cpp_showWindow},
  {"prim_Win32Window_cpp_adjustWindowRect",8,prim_Win32Window_cpp_adjustWindowRect},
  {"prim_Win32Window_cpp_adjustWindowRectEx",9,prim_Win32Window_cpp_adjustWindowRectEx},
  {"prim_Win32Window_cpp_anyPopup",2,prim_Win32Window_cpp_anyPopup},
  {"prim_Win32Window_cpp_arrangeIconicWindows",3,prim_Win32Window_cpp_arrangeIconicWindows},
  {"prim_Win32Window_cpp_beginDeferWindowPos",3,prim_Win32Window_cpp_beginDeferWindowPos},
  {"prim_Win32Window_cpp_bringWindowToTop",3,prim_Win32Window_cpp_bringWindowToTop},
  {"prim_Win32Window_cpp_childWindowFromPoint",5,prim_Win32Window_cpp_childWindowFromPoint},
  {"prim_Win32Window_cpp_childWindowFromPointEx",6,prim_Win32Window_cpp_childWindowFromPointEx},
  {"prim_Win32Window_cpp_closeWindow",3,prim_Win32Window_cpp_closeWindow},
  {"prim_Win32Window_cpp_deferWindowPos",10,prim_Win32Window_cpp_deferWindowPos},
  {"prim_Win32Window_cpp_destroyWindow",3,prim_Win32Window_cpp_destroyWindow},
  {"prim_Win32Window_cpp_endDeferWindowPos",3,prim_Win32Window_cpp_endDeferWindowPos},
  {"prim_Win32Window_cpp_findWindow",4,prim_Win32Window_cpp_findWindow},
  {"prim_Win32Window_cpp_findWindowEx",6,prim_Win32Window_cpp_findWindowEx},
  {"prim_Win32Window_cpp_flashWindow",4,prim_Win32Window_cpp_flashWindow},
  {"prim_Win32Window_cpp_moveWindow",8,prim_Win32Window_cpp_moveWindow},
  {"prim_Win32Window_cpp_getDesktopWindow",2,prim_Win32Window_cpp_getDesktopWindow},
  {"prim_Win32Window_cpp_getForegroundWindow",2,prim_Win32Window_cpp_getForegroundWindow},
  {"prim_Win32Window_cpp_getParent",3,prim_Win32Window_cpp_getParent},
  {"prim_Win32Window_cpp_getTopWindow",3,prim_Win32Window_cpp_getTopWindow},
  {"prim_Win32Window_cpp_sWP_NOSIZE",2,prim_Win32Window_cpp_sWP_NOSIZE},
  {"prim_Win32Window_cpp_sWP_NOMOVE",2,prim_Win32Window_cpp_sWP_NOMOVE},
  {"prim_Win32Window_cpp_sWP_NOZORDER",2,prim_Win32Window_cpp_sWP_NOZORDER},
  {"prim_Win32Window_cpp_sWP_NOREDRAW",2,prim_Win32Window_cpp_sWP_NOREDRAW},
  {"prim_Win32Window_cpp_sWP_NOACTIVATE",2,prim_Win32Window_cpp_sWP_NOACTIVATE},
  {"prim_Win32Window_cpp_sWP_FRAMECHANGED",2,prim_Win32Window_cpp_sWP_FRAMECHANGED},
  {"prim_Win32Window_cpp_sWP_SHOWWINDOW",2,prim_Win32Window_cpp_sWP_SHOWWINDOW},
  {"prim_Win32Window_cpp_sWP_HIDEWINDOW",2,prim_Win32Window_cpp_sWP_HIDEWINDOW},
  {"prim_Win32Window_cpp_sWP_NOCOPYBITS",2,prim_Win32Window_cpp_sWP_NOCOPYBITS},
  {"prim_Win32Window_cpp_sWP_NOOWNERZORDER",2,prim_Win32Window_cpp_sWP_NOOWNERZORDER},
  {"prim_Win32Window_cpp_sWP_NOSENDCHANGING",2,prim_Win32Window_cpp_sWP_NOSENDCHANGING},
  {"prim_Win32Window_cpp_sWP_DRAWFRAME",2,prim_Win32Window_cpp_sWP_DRAWFRAME},
  {"prim_Win32Window_cpp_sWP_NOREPOSITION",2,prim_Win32Window_cpp_sWP_NOREPOSITION},
  {"prim_Win32Window_cpp_dCX_WINDOW",2,prim_Win32Window_cpp_dCX_WINDOW},
  {"prim_Win32Window_cpp_dCX_CACHE",2,prim_Win32Window_cpp_dCX_CACHE},
  {"prim_Win32Window_cpp_dCX_CLIPCHILDREN",2,prim_Win32Window_cpp_dCX_CLIPCHILDREN},
  {"prim_Win32Window_cpp_dCX_CLIPSIBLINGS",2,prim_Win32Window_cpp_dCX_CLIPSIBLINGS},
  {"prim_Win32Window_cpp_dCX_PARENTCLIP",2,prim_Win32Window_cpp_dCX_PARENTCLIP},
  {"prim_Win32Window_cpp_dCX_EXCLUDERGN",2,prim_Win32Window_cpp_dCX_EXCLUDERGN},
  {"prim_Win32Window_cpp_dCX_INTERSECTRGN",2,prim_Win32Window_cpp_dCX_INTERSECTRGN},
  {"prim_Win32Window_cpp_dCX_LOCKWINDOWUPDATE",2,prim_Win32Window_cpp_dCX_LOCKWINDOWUPDATE},
  {"prim_Win32Window_cpp_getDCEx",5,prim_Win32Window_cpp_getDCEx},
  {"prim_Win32Window_cpp_getDC",3,prim_Win32Window_cpp_getDC},
  {"prim_Win32Window_cpp_getWindowDC",3,prim_Win32Window_cpp_getWindowDC},
  {"prim_Win32Window_cpp_releaseDC",4,prim_Win32Window_cpp_releaseDC},
  {"prim_Win32Window_cpp_getDCOrgEx",3,prim_Win32Window_cpp_getDCOrgEx},
  {"prim_Win32Window_cpp_hideCaret",3,prim_Win32Window_cpp_hideCaret},
  {"prim_Win32Window_cpp_showCaret",3,prim_Win32Window_cpp_showCaret},
  {"prim_Win32Window_cpp_createCaret",6,prim_Win32Window_cpp_createCaret},
  {"prim_Win32Window_cpp_destroyCaret",2,prim_Win32Window_cpp_destroyCaret},
  {"prim_Win32Window_cpp_getCaretPos",2,prim_Win32Window_cpp_getCaretPos},
  {"prim_Win32Window_cpp_setCaretPos",4,prim_Win32Window_cpp_setCaretPos},
  {"prim_Win32Window_cpp_getMessage",3,prim_Win32Window_cpp_getMessage},
  {"prim_Win32Window_cpp_getMessage2",3,prim_Win32Window_cpp_getMessage2},
  {"prim_Win32Window_cpp_peekMessage",6,prim_Win32Window_cpp_peekMessage},
  {"prim_Win32Window_cpp_translateMessage",3,prim_Win32Window_cpp_translateMessage},
  {"prim_Win32Window_cpp_updateWindow",3,prim_Win32Window_cpp_updateWindow},
  {"prim_Win32Window_cpp_dispatchMessage",3,prim_Win32Window_cpp_dispatchMessage},
  {"prim_Win32Window_cpp_sendMessage",6,prim_Win32Window_cpp_sendMessage},
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
