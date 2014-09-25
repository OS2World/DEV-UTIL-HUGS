/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <stdlib.h>
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Types_cpp_unmarshall_lpctstr_);
primFun(prim_Win32Types_cpp_unmarshall_lpctstr_)
{ void * arg1;int gc_failed;
	      char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  { char* res1;
     size_t l = wcstombs(NULL,arg1,-1);
     if ((res1=malloc(sizeof(char)*l)) == NULL ) {
        res1 = NULL;
     } else {
        wcstombs(res1,arg1,-1);
     };
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring = ErrorWithCode("unmarshall_lpctstr_",0) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(res1));
   hugs_returnIO(3);
    free(res1);}
}
PROTO_PRIM(prim_Win32Types_cpp_marshall_lpctstr_);
primFun(prim_Win32Types_cpp_marshall_lpctstr_)
{ char * arg1;void * res1;int gc_failed;
			  char* gc_failstring;;
  arg1 = (char *)(hugs->getAddr());
  { wchar_t* res1;
     
     size_t l = mbstowcs(NULL,arg1,-1);
     if ((res1=malloc(sizeof(wchar_t)*l)) == NULL ) {
        res1 = NULL;
     } else {
        mbstowcs(res1,arg1,-1);
     };
   if ((gc_failed = (  res1 == NULL  ))) {gc_failstring = ErrorWithCode("marshall_lpctstr_",0) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Types_cpp_handleToWord);
primFun(prim_Win32Types_cpp_handleToWord)
{ HANDLE arg1;UINT res1;;
  arg1 = (HANDLE)(hugs->getAddr());
  { res1=(UINT)arg1;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Types_cpp_nullHANDLE);
primFun(prim_Win32Types_cpp_nullHANDLE)
{ void * res1;;
  {res1=(HANDLE) NULL;
   hugs->putAddr((void *)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Types_cpp_unmarshall_lpctstr_",3,prim_Win32Types_cpp_unmarshall_lpctstr_},
  {"prim_Win32Types_cpp_marshall_lpctstr_",3,prim_Win32Types_cpp_marshall_lpctstr_},
  {"prim_Win32Types_cpp_handleToWord",3,prim_Win32Types_cpp_handleToWord},
  {"prim_Win32Types_cpp_nullHANDLE",2,prim_Win32Types_cpp_nullHANDLE},
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
