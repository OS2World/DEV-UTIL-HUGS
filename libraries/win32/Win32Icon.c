/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Icon_cpp_copyIcon);
primFun(prim_Win32Icon_cpp_copyIcon)
{ HICON arg1;HICON res1;int gc_failed;
			char* gc_failstring;;
  arg1 = (HICON)(hugs->getAddr());
  {res1 = CopyIcon(arg1);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("CopyIcon")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HICON)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Icon_cpp_drawIcon);
primFun(prim_Win32Icon_cpp_drawIcon)
{ HDC arg1; int arg2; int arg3; HICON arg4;int gc_failed;
					   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (HICON)(hugs->getAddr());
  { BOOL success = DrawIcon(arg1, arg2, arg3, arg4);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("DrawIcon")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Icon_cpp_destroyIcon);
primFun(prim_Win32Icon_cpp_destroyIcon)
{ HICON arg1;int gc_failed;
	     char* gc_failstring;;
  arg1 = (HICON)(hugs->getAddr());
  { BOOL success = DestroyIcon(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("DestroyIcon")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Icon_cpp_copyIcon",3,prim_Win32Icon_cpp_copyIcon},
  {"prim_Win32Icon_cpp_drawIcon",6,prim_Win32Icon_cpp_drawIcon},
  {"prim_Win32Icon_cpp_destroyIcon",3,prim_Win32Icon_cpp_destroyIcon},
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
