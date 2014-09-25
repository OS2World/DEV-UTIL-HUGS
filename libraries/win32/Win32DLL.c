/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32DLL_cpp_disableThreadLibraryCalls);
primFun(prim_Win32DLL_cpp_disableThreadLibraryCalls)
{ HMODULE arg1;int gc_failed;
	       char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  { BOOL res1 = DisableThreadLibraryCalls(arg1);
   if ((gc_failed = (  res1 == FALSE  ))) {gc_failstring =  ErrorWin("DisableThreadLibraryCalls") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_freeLibrary);
primFun(prim_Win32DLL_cpp_freeLibrary)
{ HMODULE arg1;int gc_failed;
	       char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  { BOOL res1 = FreeLibrary(arg1);
   if ((gc_failed = (  res1 == FALSE  ))) {gc_failstring =  ErrorWin("FreeLibrary") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_getModuleFileName);
primFun(prim_Win32DLL_cpp_getModuleFileName)
{ HMODULE arg1;char * res1;int gc_failed;
			   char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  { char* res1; DWORD dw = 1;
     if ((res1=malloc(sizeof(char)*512)) == NULL) {
        res1=NULL;
     } else {
        dw = GetModuleFileName(arg1,res1,512);
     };
   if ((gc_failed = ( res1 == NULL || dw == 0 ))) {gc_failstring = ErrorWin("GetModuleFileName") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_getModuleHandle);
primFun(prim_Win32DLL_cpp_getModuleHandle)
{ char * arg1;HMODULE res1;int gc_failed;
			   char* gc_failstring;;
  arg1 = (char *)(hugs->getAddr());
  {res1 = GetModuleHandle(arg1);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("GetModuleHandle") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HMODULE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_getProcAddress);
primFun(prim_Win32DLL_cpp_getProcAddress)
{ HMODULE arg1; char * arg2;void * res1;int gc_failed;
					char* gc_failstring;;
  arg1 = (HMODULE)(hugs->getAddr());
  arg2 = (char *)(hugs->getAddr());
  {res1 = GetProcAddress(arg1, arg2);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("GetProcAddress") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_loadLibrary);
primFun(prim_Win32DLL_cpp_loadLibrary)
{ char * arg1;HINSTANCE res1;int gc_failed;
			     char* gc_failstring;;
  arg1 = (char *)(hugs->getAddr());
  {res1 = LoadLibrary(arg1);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("LoadLibrary") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HINSTANCE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_lOAD_LIBRARY_AS_DATAFILE);
primFun(prim_Win32DLL_cpp_lOAD_LIBRARY_AS_DATAFILE)
{ DWORD res1;;
  {res1=LOAD_LIBRARY_AS_DATAFILE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_lOAD_WITH_ALTERED_SEARCH_PATH);
primFun(prim_Win32DLL_cpp_lOAD_WITH_ALTERED_SEARCH_PATH)
{ DWORD res1;;
  {res1=LOAD_WITH_ALTERED_SEARCH_PATH;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32DLL_cpp_loadLibraryEx);
primFun(prim_Win32DLL_cpp_loadLibraryEx)
{ char * arg1; HANDLE arg2; DWORD arg3;HINSTANCE res1;int gc_failed;
						      char* gc_failstring;;
  arg1 = (char *)(hugs->getAddr());
  arg2 = (HANDLE)(hugs->getAddr());
  arg3 = (DWORD)(hugs->getWord());
  {res1 = LoadLibraryEx(arg1, arg2, arg3);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("LoadLibraryEx") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HINSTANCE)(res1));
   hugs_returnIO(3);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32DLL_cpp_disableThreadLibraryCalls",3,prim_Win32DLL_cpp_disableThreadLibraryCalls},
  {"prim_Win32DLL_cpp_freeLibrary",3,prim_Win32DLL_cpp_freeLibrary},
  {"prim_Win32DLL_cpp_getModuleFileName",3,prim_Win32DLL_cpp_getModuleFileName},
  {"prim_Win32DLL_cpp_getModuleHandle",3,prim_Win32DLL_cpp_getModuleHandle},
  {"prim_Win32DLL_cpp_getProcAddress",4,prim_Win32DLL_cpp_getProcAddress},
  {"prim_Win32DLL_cpp_loadLibrary",3,prim_Win32DLL_cpp_loadLibrary},
  {"prim_Win32DLL_cpp_lOAD_LIBRARY_AS_DATAFILE",2,prim_Win32DLL_cpp_lOAD_LIBRARY_AS_DATAFILE},
  {"prim_Win32DLL_cpp_lOAD_WITH_ALTERED_SEARCH_PATH",2,prim_Win32DLL_cpp_lOAD_WITH_ALTERED_SEARCH_PATH},
  {"prim_Win32DLL_cpp_loadLibraryEx",5,prim_Win32DLL_cpp_loadLibraryEx},
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
