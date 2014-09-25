/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "win32debug.h"
PROTO_PRIM(prim_Win32Process_cpp_iNFINITE);
primFun(prim_Win32Process_cpp_iNFINITE)
{ DWORD res1;;
  {res1=INFINITE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Process_cpp_sleep);
primFun(prim_Win32Process_cpp_sleep)
{ DWORD arg1;;
  arg1 = (DWORD)(hugs->getWord());
  {Sleep(arg1);
   hugs_returnIO(0);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Process_cpp_iNFINITE",2,prim_Win32Process_cpp_iNFINITE},
  {"prim_Win32Process_cpp_sleep",3,prim_Win32Process_cpp_sleep},
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
