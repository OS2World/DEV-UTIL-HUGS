/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Resource_cpp_beginUpdateResource);
primFun(prim_Win32Resource_cpp_beginUpdateResource)
{ char * arg1; int arg2;HANDLE res1;int gc_failed;
				    char* gc_failstring;;
  arg1 = (char *)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  {res1 = BeginUpdateResource(arg1, arg2);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("BeginUpdateResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HANDLE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_iMAGE_BITMAP);
primFun(prim_Win32Resource_cpp_iMAGE_BITMAP)
{ UINT res1;;
  {res1=IMAGE_BITMAP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_iMAGE_ICON);
primFun(prim_Win32Resource_cpp_iMAGE_ICON)
{ UINT res1;;
  {res1=IMAGE_ICON;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_iMAGE_CURSOR);
primFun(prim_Win32Resource_cpp_iMAGE_CURSOR)
{ UINT res1;;
  {res1=IMAGE_CURSOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_copyImage);
primFun(prim_Win32Resource_cpp_copyImage)
{ HANDLE arg1; UINT arg2; int arg3; int arg4; UINT arg5;HANDLE res1;int gc_failed;
								    char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (UINT)(hugs->getWord());
  {res1 = CopyImage(arg1, arg2, arg3, arg4, arg5);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("CopyImage") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HANDLE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_endUpdateResource);
primFun(prim_Win32Resource_cpp_endUpdateResource)
{ HANDLE arg1; BOOL arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (BOOL)(hugs->getInt());
  { BOOL res1 = EndUpdateResource(arg1,arg2);
   if ((gc_failed = ( res1 == FALSE ))) {gc_failstring = ErrorWin("EndUpdateResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_ACCELERATOR);
primFun(prim_Win32Resource_cpp_rT_ACCELERATOR)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_ACCELERATOR) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_ANICURSOR);
primFun(prim_Win32Resource_cpp_rT_ANICURSOR)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_ANICURSOR) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_ANIICON);
primFun(prim_Win32Resource_cpp_rT_ANIICON)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_ANIICON) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_BITMAP);
primFun(prim_Win32Resource_cpp_rT_BITMAP)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_BITMAP) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_CURSOR);
primFun(prim_Win32Resource_cpp_rT_CURSOR)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_CURSOR) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_DIALOG);
primFun(prim_Win32Resource_cpp_rT_DIALOG)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_DIALOG) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_FONT);
primFun(prim_Win32Resource_cpp_rT_FONT)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_FONT) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_FONTDIR);
primFun(prim_Win32Resource_cpp_rT_FONTDIR)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_FONTDIR) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_GROUP_CURSOR);
primFun(prim_Win32Resource_cpp_rT_GROUP_CURSOR)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_GROUP_CURSOR) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_GROUP_ICON);
primFun(prim_Win32Resource_cpp_rT_GROUP_ICON)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_GROUP_ICON) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_HTML);
primFun(prim_Win32Resource_cpp_rT_HTML)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_HTML) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_ICON);
primFun(prim_Win32Resource_cpp_rT_ICON)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_ICON) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_MENU);
primFun(prim_Win32Resource_cpp_rT_MENU)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_MENU) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_MESSAGETABLE);
primFun(prim_Win32Resource_cpp_rT_MESSAGETABLE)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_MESSAGETABLE) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_RCDATA);
primFun(prim_Win32Resource_cpp_rT_RCDATA)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_RCDATA)  ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_STRING);
primFun(prim_Win32Resource_cpp_rT_STRING)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_STRING)  ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_rT_VERSION);
primFun(prim_Win32Resource_cpp_rT_VERSION)
{ void * res1;;
  {res1= MAKEINTRESOURCE(RT_VERSION) ;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_findResource);
primFun(prim_Win32Resource_cpp_findResource)
{ HMODULE arg1; char * arg2; void * arg3;HRSRC res1;int gc_failed;
						    char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (void *)(hugs->getAddr());
  {res1 = FindResource(arg1, arg2, arg3);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("FindResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRSRC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_findResourceEx);
primFun(prim_Win32Resource_cpp_findResourceEx)
{ HMODULE arg1; LPCTSTR arg2; void * arg3; WORD arg4;HRSRC res1;int gc_failed;
								char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  arg2 = (LPCTSTR)(hugs->getAddr());
  arg3 = (void *)(hugs->getAddr());
  arg4 = (WORD)(hugs->getWord());
  {res1 = FindResourceEx(arg1, arg2, arg3, arg4);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("FindResourceEx") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRSRC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_DEFAULTSIZE);
primFun(prim_Win32Resource_cpp_lR_DEFAULTSIZE)
{ int res1;;
  {res1=LR_DEFAULTSIZE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_DEFAULTCOLOR);
primFun(prim_Win32Resource_cpp_lR_DEFAULTCOLOR)
{ UINT res1;;
  {res1=LR_DEFAULTCOLOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_CREATEDIBSECTION);
primFun(prim_Win32Resource_cpp_lR_CREATEDIBSECTION)
{ UINT res1;;
  {res1=LR_CREATEDIBSECTION;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_LOADFROMFILE);
primFun(prim_Win32Resource_cpp_lR_LOADFROMFILE)
{ UINT res1;;
  {res1=LR_LOADFROMFILE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_LOADMAP3DCOLORS);
primFun(prim_Win32Resource_cpp_lR_LOADMAP3DCOLORS)
{ UINT res1;;
  {res1=LR_LOADMAP3DCOLORS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_LOADTRANSPARENT);
primFun(prim_Win32Resource_cpp_lR_LOADTRANSPARENT)
{ UINT res1;;
  {res1=LR_LOADTRANSPARENT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_MONOCHROME);
primFun(prim_Win32Resource_cpp_lR_MONOCHROME)
{ UINT res1;;
  {res1=LR_MONOCHROME;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_SHARED);
primFun(prim_Win32Resource_cpp_lR_SHARED)
{ UINT res1;;
  {res1=LR_SHARED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lR_VGACOLOR);
primFun(prim_Win32Resource_cpp_lR_VGACOLOR)
{ UINT res1;;
  {res1=LR_VGACOLOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_loadImage);
primFun(prim_Win32Resource_cpp_loadImage)
{ HINSTANCE arg1; LPCTSTR arg2; UINT arg3; int arg4; int arg5; UINT arg6;HANDLE res1;int gc_failed;
										     char* gc_failstring;;
  arg1 = (HINSTANCE)(hugs->getAddr());
  arg2 = (LPCTSTR)(hugs->getAddr());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (UINT)(hugs->getWord());
  {res1 = LoadImage(arg1, arg2, arg3, arg4, arg5, arg6);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("LoadImage") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HANDLE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_loadResource);
primFun(prim_Win32Resource_cpp_loadResource)
{ HMODULE arg1; HRSRC arg2;HGLOBAL res1;int gc_failed;
					char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  arg2 = (HRSRC)(hugs->getAddr());
  {res1 = LoadResource(arg1, arg2);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("LoadResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HGLOBAL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_lockResource);
primFun(prim_Win32Resource_cpp_lockResource)
{ HGLOBAL arg1;void * res1;int gc_failed;
			   char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  {res1 = LockResource(arg1);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("LockResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_sizeofResource);
primFun(prim_Win32Resource_cpp_sizeofResource)
{ HMODULE arg1; HRSRC arg2;DWORD res1;int gc_failed;
				      char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  arg2 = (HRSRC)(hugs->getAddr());
  {res1 = SizeofResource(arg1, arg2);
   if ((gc_failed = ( res1 == 0 ))) {gc_failstring = ErrorWin("SizeofResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Resource_cpp_updateResource);
primFun(prim_Win32Resource_cpp_updateResource)
{ HANDLE arg1; LPCTSTR arg2; void * arg3; WORD arg4; void * arg5; DWORD arg6;int gc_failed;
									     char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (LPCTSTR)(hugs->getAddr());
  arg3 = (void *)(hugs->getAddr());
  arg4 = (WORD)(hugs->getWord());
  arg5 = (void *)(hugs->getAddr());
  arg6 = (DWORD)(hugs->getWord());
  { BOOL res1 = UpdateResource(arg1,arg2,arg3,arg4,arg5,arg6);
   if ((gc_failed = (  res1 == FALSE  ))) {gc_failstring = ErrorWin("UpdateResource") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Resource_cpp_beginUpdateResource",4,prim_Win32Resource_cpp_beginUpdateResource},
  {"prim_Win32Resource_cpp_iMAGE_BITMAP",2,prim_Win32Resource_cpp_iMAGE_BITMAP},
  {"prim_Win32Resource_cpp_iMAGE_ICON",2,prim_Win32Resource_cpp_iMAGE_ICON},
  {"prim_Win32Resource_cpp_iMAGE_CURSOR",2,prim_Win32Resource_cpp_iMAGE_CURSOR},
  {"prim_Win32Resource_cpp_copyImage",7,prim_Win32Resource_cpp_copyImage},
  {"prim_Win32Resource_cpp_endUpdateResource",4,prim_Win32Resource_cpp_endUpdateResource},
  {"prim_Win32Resource_cpp_rT_ACCELERATOR",2,prim_Win32Resource_cpp_rT_ACCELERATOR},
  {"prim_Win32Resource_cpp_rT_ANICURSOR",2,prim_Win32Resource_cpp_rT_ANICURSOR},
  {"prim_Win32Resource_cpp_rT_ANIICON",2,prim_Win32Resource_cpp_rT_ANIICON},
  {"prim_Win32Resource_cpp_rT_BITMAP",2,prim_Win32Resource_cpp_rT_BITMAP},
  {"prim_Win32Resource_cpp_rT_CURSOR",2,prim_Win32Resource_cpp_rT_CURSOR},
  {"prim_Win32Resource_cpp_rT_DIALOG",2,prim_Win32Resource_cpp_rT_DIALOG},
  {"prim_Win32Resource_cpp_rT_FONT",2,prim_Win32Resource_cpp_rT_FONT},
  {"prim_Win32Resource_cpp_rT_FONTDIR",2,prim_Win32Resource_cpp_rT_FONTDIR},
  {"prim_Win32Resource_cpp_rT_GROUP_CURSOR",2,prim_Win32Resource_cpp_rT_GROUP_CURSOR},
  {"prim_Win32Resource_cpp_rT_GROUP_ICON",2,prim_Win32Resource_cpp_rT_GROUP_ICON},
  {"prim_Win32Resource_cpp_rT_HTML",2,prim_Win32Resource_cpp_rT_HTML},
  {"prim_Win32Resource_cpp_rT_ICON",2,prim_Win32Resource_cpp_rT_ICON},
  {"prim_Win32Resource_cpp_rT_MENU",2,prim_Win32Resource_cpp_rT_MENU},
  {"prim_Win32Resource_cpp_rT_MESSAGETABLE",2,prim_Win32Resource_cpp_rT_MESSAGETABLE},
  {"prim_Win32Resource_cpp_rT_RCDATA",2,prim_Win32Resource_cpp_rT_RCDATA},
  {"prim_Win32Resource_cpp_rT_STRING",2,prim_Win32Resource_cpp_rT_STRING},
  {"prim_Win32Resource_cpp_rT_VERSION",2,prim_Win32Resource_cpp_rT_VERSION},
  {"prim_Win32Resource_cpp_findResource",5,prim_Win32Resource_cpp_findResource},
  {"prim_Win32Resource_cpp_findResourceEx",6,prim_Win32Resource_cpp_findResourceEx},
  {"prim_Win32Resource_cpp_lR_DEFAULTSIZE",2,prim_Win32Resource_cpp_lR_DEFAULTSIZE},
  {"prim_Win32Resource_cpp_lR_DEFAULTCOLOR",2,prim_Win32Resource_cpp_lR_DEFAULTCOLOR},
  {"prim_Win32Resource_cpp_lR_CREATEDIBSECTION",2,prim_Win32Resource_cpp_lR_CREATEDIBSECTION},
  {"prim_Win32Resource_cpp_lR_LOADFROMFILE",2,prim_Win32Resource_cpp_lR_LOADFROMFILE},
  {"prim_Win32Resource_cpp_lR_LOADMAP3DCOLORS",2,prim_Win32Resource_cpp_lR_LOADMAP3DCOLORS},
  {"prim_Win32Resource_cpp_lR_LOADTRANSPARENT",2,prim_Win32Resource_cpp_lR_LOADTRANSPARENT},
  {"prim_Win32Resource_cpp_lR_MONOCHROME",2,prim_Win32Resource_cpp_lR_MONOCHROME},
  {"prim_Win32Resource_cpp_lR_SHARED",2,prim_Win32Resource_cpp_lR_SHARED},
  {"prim_Win32Resource_cpp_lR_VGACOLOR",2,prim_Win32Resource_cpp_lR_VGACOLOR},
  {"prim_Win32Resource_cpp_loadImage",8,prim_Win32Resource_cpp_loadImage},
  {"prim_Win32Resource_cpp_loadResource",4,prim_Win32Resource_cpp_loadResource},
  {"prim_Win32Resource_cpp_lockResource",3,prim_Win32Resource_cpp_lockResource},
  {"prim_Win32Resource_cpp_sizeofResource",4,prim_Win32Resource_cpp_sizeofResource},
  {"prim_Win32Resource_cpp_updateResource",8,prim_Win32Resource_cpp_updateResource},
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
