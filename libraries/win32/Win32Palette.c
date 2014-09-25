/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Palette_cpp_dEFAULT_PALETTE);
primFun(prim_Win32Palette_cpp_dEFAULT_PALETTE)
{ WORD res1;;
  {res1=DEFAULT_PALETTE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Palette_cpp_getStockPalette);
primFun(prim_Win32Palette_cpp_getStockPalette)
{ WORD arg1;HPALETTE res1;int gc_failed;
			  char* gc_failstring;;
  arg1 = (WORD)(hugs->getWord());
  { res1 = GetStockObject(arg1);
   if ((gc_failed = (  res1 == (HPALETTE) NULL  ))) {gc_failstring =  ErrorString("GetStockPalette")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPALETTE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Palette_cpp_deletePalette);
primFun(prim_Win32Palette_cpp_deletePalette)
{ HPALETTE arg1;int gc_failed;
		char* gc_failstring;;
  arg1 = (HPALETTE)(hugs->getAddr());
  { BOOL success = DeleteObject(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("DeletePalette")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Palette_cpp_pALETTERGB);
primFun(prim_Win32Palette_cpp_pALETTERGB)
{ BYTE arg1; BYTE arg2; BYTE arg3;DWORD res1;;
  arg1 = (BYTE)(hugs->getWord());
  arg2 = (BYTE)(hugs->getWord());
  arg3 = (BYTE)(hugs->getWord());
  {res1 = PALETTERGB(arg1, arg2, arg3);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Palette_cpp_pALETTEINDEX);
primFun(prim_Win32Palette_cpp_pALETTEINDEX)
{ WORD arg1;DWORD res1;;
  arg1 = (WORD)(hugs->getWord());
  {res1 = PALETTEINDEX(arg1);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Palette_cpp_dEFAULT_PALETTE",2,prim_Win32Palette_cpp_dEFAULT_PALETTE},
  {"prim_Win32Palette_cpp_getStockPalette",3,prim_Win32Palette_cpp_getStockPalette},
  {"prim_Win32Palette_cpp_deletePalette",3,prim_Win32Palette_cpp_deletePalette},
  {"prim_Win32Palette_cpp_pALETTERGB",5,prim_Win32Palette_cpp_pALETTERGB},
  {"prim_Win32Palette_cpp_pALETTEINDEX",3,prim_Win32Palette_cpp_pALETTEINDEX},
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
