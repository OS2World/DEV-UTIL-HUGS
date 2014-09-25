/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32MM_cpp_copyMemory);
primFun(prim_Win32MM_cpp_copyMemory)
{ void * arg1; void * arg2; DWORD arg3;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (void *)(hugs->getAddr());
  arg3 = (DWORD)(hugs->getWord());
  {CopyMemory(arg1, arg2, arg3);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_fillMemory);
primFun(prim_Win32MM_cpp_fillMemory)
{ void * arg1; DWORD arg2; BYTE arg3;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (BYTE)(hugs->getWord());
  {FillMemory(arg1, arg2, arg3);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_getProcessHeap);
primFun(prim_Win32MM_cpp_getProcessHeap)
{ HANDLE res1;;
  {res1 = GetProcessHeap();
   hugs->putAddr((HANDLE)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_getProcessHeaps);
primFun(prim_Win32MM_cpp_getProcessHeaps)
{ DWORD arg1; void * arg2;DWORD res1;;
  arg1 = (DWORD)(hugs->getWord());
  arg2 = (void *)(hugs->getAddr());
  {res1 = GetProcessHeaps(arg1, arg2);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_FIXED);
primFun(prim_Win32MM_cpp_gMEM_FIXED)
{ UINT res1;;
  {res1=GMEM_FIXED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_MOVEABLE);
primFun(prim_Win32MM_cpp_gMEM_MOVEABLE)
{ UINT res1;;
  {res1=GMEM_MOVEABLE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gPTR);
primFun(prim_Win32MM_cpp_gPTR)
{ UINT res1;;
  {res1=GPTR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gHND);
primFun(prim_Win32MM_cpp_gHND)
{ UINT res1;;
  {res1=GHND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_DDESHARE);
primFun(prim_Win32MM_cpp_gMEM_DDESHARE)
{ UINT res1;;
  {res1=GMEM_DDESHARE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_SHARE);
primFun(prim_Win32MM_cpp_gMEM_SHARE)
{ UINT res1;;
  {res1=GMEM_SHARE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_LOWER);
primFun(prim_Win32MM_cpp_gMEM_LOWER)
{ UINT res1;;
  {res1=GMEM_LOWER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_NOCOMPACT);
primFun(prim_Win32MM_cpp_gMEM_NOCOMPACT)
{ UINT res1;;
  {res1=GMEM_NOCOMPACT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_NODISCARD);
primFun(prim_Win32MM_cpp_gMEM_NODISCARD)
{ UINT res1;;
  {res1=GMEM_NODISCARD;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_NOT_BANKED);
primFun(prim_Win32MM_cpp_gMEM_NOT_BANKED)
{ UINT res1;;
  {res1=GMEM_NOT_BANKED;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_NOTIFY);
primFun(prim_Win32MM_cpp_gMEM_NOTIFY)
{ UINT res1;;
  {res1=GMEM_NOTIFY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_gMEM_ZEROINIT);
primFun(prim_Win32MM_cpp_gMEM_ZEROINIT)
{ UINT res1;;
  {res1=GMEM_ZEROINIT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalAlloc);
primFun(prim_Win32MM_cpp_globalAlloc)
{ UINT arg1; DWORD arg2;HGLOBAL res1;int gc_failed;
				     char* gc_failstring;;
  arg1 = (UINT)(hugs->getWord());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = GlobalAlloc(arg1, arg2);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("GlobalAlloc") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HGLOBAL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalFlags);
primFun(prim_Win32MM_cpp_globalFlags)
{ HGLOBAL arg1;UINT res1;int gc_failed;
			 char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  {res1 = GlobalFlags(arg1);
   if ((gc_failed = ( res1==GMEM_INVALID_HANDLE ))) {gc_failstring = ErrorWin("GlobalFlags") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalFree);
primFun(prim_Win32MM_cpp_globalFree)
{ HGLOBAL arg1;HGLOBAL res1;int gc_failed;
			    char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  {res1 = GlobalFree(arg1);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("GlobalFree") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HGLOBAL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalHandle);
primFun(prim_Win32MM_cpp_globalHandle)
{ void * arg1;HGLOBAL res1;int gc_failed;
			   char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  {res1 = GlobalHandle(arg1);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("GlobalHandle") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HGLOBAL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalLock);
primFun(prim_Win32MM_cpp_globalLock)
{ HGLOBAL arg1;void * res1;int gc_failed;
			   char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  {res1 = GlobalLock(arg1);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("GlobalLock") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalReAlloc);
primFun(prim_Win32MM_cpp_globalReAlloc)
{ HGLOBAL arg1; DWORD arg2; UINT arg3;HGLOBAL res1;int gc_failed;
						   char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (UINT)(hugs->getWord());
  {res1 = GlobalReAlloc(arg1, arg2, arg3);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("GlobalReAlloc") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HGLOBAL)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalSize);
primFun(prim_Win32MM_cpp_globalSize)
{ HGLOBAL arg1;DWORD res1;int gc_failed;
			  char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  {res1 = GlobalSize(arg1);
   if ((gc_failed = ( res1==0 ))) {gc_failstring = ErrorWin("GlobalSize") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_globalUnlock);
primFun(prim_Win32MM_cpp_globalUnlock)
{ HGLOBAL arg1;int gc_failed;
	       char* gc_failstring;;
  arg1 = (HGLOBAL)(hugs->getAddr());
  { BOOL res=GlobalSize(arg1);
   if ((gc_failed = ( res==0 ))) {gc_failstring = ErrorWin("GlobalUnlock") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_hEAP_GENERATE_EXCEPTIONS);
primFun(prim_Win32MM_cpp_hEAP_GENERATE_EXCEPTIONS)
{ DWORD res1;;
  {res1=HEAP_GENERATE_EXCEPTIONS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_hEAP_NO_SERIALIZE);
primFun(prim_Win32MM_cpp_hEAP_NO_SERIALIZE)
{ DWORD res1;;
  {res1=HEAP_NO_SERIALIZE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_hEAP_ZERO_MEMORY);
primFun(prim_Win32MM_cpp_hEAP_ZERO_MEMORY)
{ DWORD res1;;
  {res1=HEAP_ZERO_MEMORY;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapAlloc);
primFun(prim_Win32MM_cpp_heapAlloc)
{ HANDLE arg1; DWORD arg2; DWORD arg3;void * res1;int gc_failed;
						  char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (DWORD)(hugs->getWord());
  {res1 = HeapAlloc(arg1, arg2, arg3);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("HeapAlloc") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapCompact);
primFun(prim_Win32MM_cpp_heapCompact)
{ HANDLE arg1; DWORD arg2;UINT res1;int gc_failed;
				    char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = HeapCompact(arg1, arg2);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("HeapCompact") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapCreate);
primFun(prim_Win32MM_cpp_heapCreate)
{ DWORD arg1; DWORD arg2; DWORD arg3;HANDLE res1;int gc_failed;
						 char* gc_failstring;;
  arg1 = (DWORD)(hugs->getWord());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (DWORD)(hugs->getWord());
  {res1 = HeapCreate(arg1, arg2, arg3);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("HeapCreate") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HANDLE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapDestroy);
primFun(prim_Win32MM_cpp_heapDestroy)
{ HANDLE arg1;int gc_failed;
	      char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  { BOOL res1=HeapDestroy(arg1);
   if ((gc_failed = ( res1==0 ))) {gc_failstring = ErrorWin("HeapDestroy") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapFree);
primFun(prim_Win32MM_cpp_heapFree)
{ HANDLE arg1; DWORD arg2; void * arg3;int gc_failed;
				       char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (void *)(hugs->getAddr());
  { BOOL res1=HeapFree(arg1,arg2,arg3);
   if ((gc_failed = ( res1==0 ))) {gc_failstring = ErrorWin("HeapFree") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapLock);
primFun(prim_Win32MM_cpp_heapLock)
{ HANDLE arg1;int gc_failed;
	      char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  { BOOL res1=HeapLock(arg1);
   if ((gc_failed = ( res1==0 ))) {gc_failstring = ErrorWin("HeapLock") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapReAlloc);
primFun(prim_Win32MM_cpp_heapReAlloc)
{ HANDLE arg1; DWORD arg2; void * arg3; DWORD arg4;void * res1;int gc_failed;
							       char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (void *)(hugs->getAddr());
  arg4 = (DWORD)(hugs->getWord());
  {res1 = HeapReAlloc(arg1, arg2, arg3, arg4);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("HeapReAlloc") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapSize);
primFun(prim_Win32MM_cpp_heapSize)
{ HANDLE arg1; DWORD arg2; void * arg3;DWORD res1;int gc_failed;
						  char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (void *)(hugs->getAddr());
  {res1 = HeapSize(arg1, arg2, arg3);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("HeapSize") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapUnlock);
primFun(prim_Win32MM_cpp_heapUnlock)
{ HANDLE arg1;int gc_failed;
	      char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  { BOOL res1=HeapUnlock(arg1);
   if ((gc_failed = ( res1==0 ))) {gc_failstring = ErrorWin("HeapUnlock") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_heapValidate);
primFun(prim_Win32MM_cpp_heapValidate)
{ HANDLE arg1; DWORD arg2; void * arg3;int res1;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (void *)(hugs->getAddr());
  {res1 = HeapValidate(arg1, arg2, arg3);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_moveMemory);
primFun(prim_Win32MM_cpp_moveMemory)
{ void * arg1; void * arg2; DWORD arg3;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (void *)(hugs->getAddr());
  arg3 = (DWORD)(hugs->getWord());
  {MoveMemory(arg1, arg2, arg3);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_mEM_COMMIT);
primFun(prim_Win32MM_cpp_mEM_COMMIT)
{ DWORD res1;;
  {res1=MEM_COMMIT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_mEM_RESERVE);
primFun(prim_Win32MM_cpp_mEM_RESERVE)
{ DWORD res1;;
  {res1=MEM_RESERVE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_mEM_TOP_DOWN);
primFun(prim_Win32MM_cpp_mEM_TOP_DOWN)
{ DWORD res1;;
  {res1=MEM_TOP_DOWN;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_READONLY);
primFun(prim_Win32MM_cpp_pAGE_READONLY)
{ DWORD res1;;
  {res1=PAGE_READONLY;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_READWRITE);
primFun(prim_Win32MM_cpp_pAGE_READWRITE)
{ DWORD res1;;
  {res1=PAGE_READWRITE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_EXECUTE);
primFun(prim_Win32MM_cpp_pAGE_EXECUTE)
{ DWORD res1;;
  {res1=PAGE_EXECUTE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_EXECUTE_READ);
primFun(prim_Win32MM_cpp_pAGE_EXECUTE_READ)
{ DWORD res1;;
  {res1=PAGE_EXECUTE_READ;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_EXECUTE_READWRITE);
primFun(prim_Win32MM_cpp_pAGE_EXECUTE_READWRITE)
{ DWORD res1;;
  {res1=PAGE_EXECUTE_READWRITE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_GUARD);
primFun(prim_Win32MM_cpp_pAGE_GUARD)
{ DWORD res1;;
  {res1=PAGE_GUARD;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_NOACCESS);
primFun(prim_Win32MM_cpp_pAGE_NOACCESS)
{ DWORD res1;;
  {res1=PAGE_NOACCESS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_pAGE_NOCACHE);
primFun(prim_Win32MM_cpp_pAGE_NOCACHE)
{ DWORD res1;;
  {res1=PAGE_NOCACHE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_mEM_DECOMMIT);
primFun(prim_Win32MM_cpp_mEM_DECOMMIT)
{ DWORD res1;;
  {res1=MEM_DECOMMIT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_mEM_RELEASE);
primFun(prim_Win32MM_cpp_mEM_RELEASE)
{ DWORD res1;;
  {res1=MEM_RELEASE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_virtualAlloc);
primFun(prim_Win32MM_cpp_virtualAlloc)
{ void * arg1; DWORD arg2; DWORD arg3; DWORD arg4;void * res1;int gc_failed;
							      char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (DWORD)(hugs->getWord());
  arg4 = (DWORD)(hugs->getWord());
  {res1 = VirtualAlloc(arg1, arg2, arg3, arg4);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = ErrorWin("VirtualAlloc") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_virtualFree);
primFun(prim_Win32MM_cpp_virtualFree)
{ void * arg1; DWORD arg2; DWORD arg3;int gc_failed;
				      char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (DWORD)(hugs->getWord());
  { BOOL res1=VirtualFree(arg1,arg2,arg3);
   if ((gc_failed = ( res1=0 ))) {gc_failstring = ErrorWin("VirtualFree") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_virtualLock);
primFun(prim_Win32MM_cpp_virtualLock)
{ void * arg1; DWORD arg2;int gc_failed;
			  char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  { BOOL res1=VirtualLock(arg1,arg2);
   if ((gc_failed = ( res1=0 ))) {gc_failstring = ErrorWin("VirtualLock") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_virtualProtect);
primFun(prim_Win32MM_cpp_virtualProtect)
{ void * arg1; DWORD arg2; DWORD arg3;int gc_failed;
				      char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (DWORD)(hugs->getWord());
  { BOOL res1=VirtualLock(arg1,arg2);
   if ((gc_failed = ( res1=0 ))) {gc_failstring = ErrorWin("VirtualProtect") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_virtualProtectEx);
primFun(prim_Win32MM_cpp_virtualProtectEx)
{ HANDLE arg1; void * arg2; DWORD arg3; DWORD arg4; void * arg5;int gc_failed;
								char* gc_failstring;;
  arg1 = (HANDLE)(hugs->getAddr());
  arg2 = (void *)(hugs->getAddr());
  arg3 = (DWORD)(hugs->getWord());
  arg4 = (DWORD)(hugs->getWord());
  arg5 = (void *)(hugs->getAddr());
  { BOOL res1=VirtualProtectEx(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = ( res1=0 ))) {gc_failstring = ErrorWin("VirtualProtectEx") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_virtualUnlock);
primFun(prim_Win32MM_cpp_virtualUnlock)
{ void * arg1; DWORD arg2;int gc_failed;
			  char* gc_failstring;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  { BOOL res1=VirtualUnlock(arg1,arg2);
   if ((gc_failed = ( res1=0 ))) {gc_failstring = ErrorWin("VirtualUnlock") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32MM_cpp_zeroMemory);
primFun(prim_Win32MM_cpp_zeroMemory)
{ void * arg1; DWORD arg2;;
  arg1 = (void *)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  {ZeroMemory(arg1, arg2);
   hugs_returnIO(0);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32MM_cpp_copyMemory",5,prim_Win32MM_cpp_copyMemory},
  {"prim_Win32MM_cpp_fillMemory",5,prim_Win32MM_cpp_fillMemory},
  {"prim_Win32MM_cpp_getProcessHeap",2,prim_Win32MM_cpp_getProcessHeap},
  {"prim_Win32MM_cpp_getProcessHeaps",4,prim_Win32MM_cpp_getProcessHeaps},
  {"prim_Win32MM_cpp_gMEM_FIXED",2,prim_Win32MM_cpp_gMEM_FIXED},
  {"prim_Win32MM_cpp_gMEM_MOVEABLE",2,prim_Win32MM_cpp_gMEM_MOVEABLE},
  {"prim_Win32MM_cpp_gPTR",2,prim_Win32MM_cpp_gPTR},
  {"prim_Win32MM_cpp_gHND",2,prim_Win32MM_cpp_gHND},
  {"prim_Win32MM_cpp_gMEM_DDESHARE",2,prim_Win32MM_cpp_gMEM_DDESHARE},
  {"prim_Win32MM_cpp_gMEM_SHARE",2,prim_Win32MM_cpp_gMEM_SHARE},
  {"prim_Win32MM_cpp_gMEM_LOWER",2,prim_Win32MM_cpp_gMEM_LOWER},
  {"prim_Win32MM_cpp_gMEM_NOCOMPACT",2,prim_Win32MM_cpp_gMEM_NOCOMPACT},
  {"prim_Win32MM_cpp_gMEM_NODISCARD",2,prim_Win32MM_cpp_gMEM_NODISCARD},
  {"prim_Win32MM_cpp_gMEM_NOT_BANKED",2,prim_Win32MM_cpp_gMEM_NOT_BANKED},
  {"prim_Win32MM_cpp_gMEM_NOTIFY",2,prim_Win32MM_cpp_gMEM_NOTIFY},
  {"prim_Win32MM_cpp_gMEM_ZEROINIT",2,prim_Win32MM_cpp_gMEM_ZEROINIT},
  {"prim_Win32MM_cpp_globalAlloc",4,prim_Win32MM_cpp_globalAlloc},
  {"prim_Win32MM_cpp_globalFlags",3,prim_Win32MM_cpp_globalFlags},
  {"prim_Win32MM_cpp_globalFree",3,prim_Win32MM_cpp_globalFree},
  {"prim_Win32MM_cpp_globalHandle",3,prim_Win32MM_cpp_globalHandle},
  {"prim_Win32MM_cpp_globalLock",3,prim_Win32MM_cpp_globalLock},
  {"prim_Win32MM_cpp_globalReAlloc",5,prim_Win32MM_cpp_globalReAlloc},
  {"prim_Win32MM_cpp_globalSize",3,prim_Win32MM_cpp_globalSize},
  {"prim_Win32MM_cpp_globalUnlock",3,prim_Win32MM_cpp_globalUnlock},
  {"prim_Win32MM_cpp_hEAP_GENERATE_EXCEPTIONS",2,prim_Win32MM_cpp_hEAP_GENERATE_EXCEPTIONS},
  {"prim_Win32MM_cpp_hEAP_NO_SERIALIZE",2,prim_Win32MM_cpp_hEAP_NO_SERIALIZE},
  {"prim_Win32MM_cpp_hEAP_ZERO_MEMORY",2,prim_Win32MM_cpp_hEAP_ZERO_MEMORY},
  {"prim_Win32MM_cpp_heapAlloc",5,prim_Win32MM_cpp_heapAlloc},
  {"prim_Win32MM_cpp_heapCompact",4,prim_Win32MM_cpp_heapCompact},
  {"prim_Win32MM_cpp_heapCreate",5,prim_Win32MM_cpp_heapCreate},
  {"prim_Win32MM_cpp_heapDestroy",3,prim_Win32MM_cpp_heapDestroy},
  {"prim_Win32MM_cpp_heapFree",5,prim_Win32MM_cpp_heapFree},
  {"prim_Win32MM_cpp_heapLock",3,prim_Win32MM_cpp_heapLock},
  {"prim_Win32MM_cpp_heapReAlloc",6,prim_Win32MM_cpp_heapReAlloc},
  {"prim_Win32MM_cpp_heapSize",5,prim_Win32MM_cpp_heapSize},
  {"prim_Win32MM_cpp_heapUnlock",3,prim_Win32MM_cpp_heapUnlock},
  {"prim_Win32MM_cpp_heapValidate",5,prim_Win32MM_cpp_heapValidate},
  {"prim_Win32MM_cpp_moveMemory",5,prim_Win32MM_cpp_moveMemory},
  {"prim_Win32MM_cpp_mEM_COMMIT",2,prim_Win32MM_cpp_mEM_COMMIT},
  {"prim_Win32MM_cpp_mEM_RESERVE",2,prim_Win32MM_cpp_mEM_RESERVE},
  {"prim_Win32MM_cpp_mEM_TOP_DOWN",2,prim_Win32MM_cpp_mEM_TOP_DOWN},
  {"prim_Win32MM_cpp_pAGE_READONLY",2,prim_Win32MM_cpp_pAGE_READONLY},
  {"prim_Win32MM_cpp_pAGE_READWRITE",2,prim_Win32MM_cpp_pAGE_READWRITE},
  {"prim_Win32MM_cpp_pAGE_EXECUTE",2,prim_Win32MM_cpp_pAGE_EXECUTE},
  {"prim_Win32MM_cpp_pAGE_EXECUTE_READ",2,prim_Win32MM_cpp_pAGE_EXECUTE_READ},
  {"prim_Win32MM_cpp_pAGE_EXECUTE_READWRITE",2,prim_Win32MM_cpp_pAGE_EXECUTE_READWRITE},
  {"prim_Win32MM_cpp_pAGE_GUARD",2,prim_Win32MM_cpp_pAGE_GUARD},
  {"prim_Win32MM_cpp_pAGE_NOACCESS",2,prim_Win32MM_cpp_pAGE_NOACCESS},
  {"prim_Win32MM_cpp_pAGE_NOCACHE",2,prim_Win32MM_cpp_pAGE_NOCACHE},
  {"prim_Win32MM_cpp_mEM_DECOMMIT",2,prim_Win32MM_cpp_mEM_DECOMMIT},
  {"prim_Win32MM_cpp_mEM_RELEASE",2,prim_Win32MM_cpp_mEM_RELEASE},
  {"prim_Win32MM_cpp_virtualAlloc",6,prim_Win32MM_cpp_virtualAlloc},
  {"prim_Win32MM_cpp_virtualFree",5,prim_Win32MM_cpp_virtualFree},
  {"prim_Win32MM_cpp_virtualLock",4,prim_Win32MM_cpp_virtualLock},
  {"prim_Win32MM_cpp_virtualProtect",5,prim_Win32MM_cpp_virtualProtect},
  {"prim_Win32MM_cpp_virtualProtectEx",7,prim_Win32MM_cpp_virtualProtectEx},
  {"prim_Win32MM_cpp_virtualUnlock",4,prim_Win32MM_cpp_virtualUnlock},
  {"prim_Win32MM_cpp_zeroMemory",4,prim_Win32MM_cpp_zeroMemory},
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
