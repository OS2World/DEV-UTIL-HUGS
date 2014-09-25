/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Brush_cpp_createSolidBrush);
primFun(prim_Win32Brush_cpp_createSolidBrush)
{ DWORD arg1;HBRUSH res1;int gc_failed;
			 char* gc_failstring;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = CreateSolidBrush(arg1);
   if ((gc_failed = (  res1 == (HBRUSH) NULL  ))) {gc_failstring =  ErrorString("CreateSolidBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_createHatchBrush);
primFun(prim_Win32Brush_cpp_createHatchBrush)
{ WORD arg1; DWORD arg2;HBRUSH res1;int gc_failed;
				    char* gc_failstring;;
  arg1 = (WORD)(hugs->getWord());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = CreateHatchBrush(arg1, arg2);
   if ((gc_failed = (  res1 == (HBRUSH) NULL  ))) {gc_failstring =  ErrorString("CreateHatchBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_createPatternBrush);
primFun(prim_Win32Brush_cpp_createPatternBrush)
{ HBITMAP arg1;HBRUSH res1;int gc_failed;
			   char* gc_failstring;;
  arg1 = (HBITMAP)(hugs->getAddr());
  {res1 = CreatePatternBrush(arg1);
   if ((gc_failed = (  res1 == (HBRUSH) NULL  ))) {gc_failstring =  ErrorString("CreatePatternBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_deleteBrush);
primFun(prim_Win32Brush_cpp_deleteBrush)
{ HBRUSH arg1;int gc_failed;
	      char* gc_failstring;;
  arg1 = (HBRUSH)(hugs->getAddr());
  { BOOL success = DeleteObject(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("DeleteBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_wHITE_BRUSH);
primFun(prim_Win32Brush_cpp_wHITE_BRUSH)
{ WORD res1;;
  {res1=WHITE_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_lTGRAY_BRUSH);
primFun(prim_Win32Brush_cpp_lTGRAY_BRUSH)
{ WORD res1;;
  {res1=LTGRAY_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_gRAY_BRUSH);
primFun(prim_Win32Brush_cpp_gRAY_BRUSH)
{ WORD res1;;
  {res1=GRAY_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_dKGRAY_BRUSH);
primFun(prim_Win32Brush_cpp_dKGRAY_BRUSH)
{ WORD res1;;
  {res1=DKGRAY_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_bLACK_BRUSH);
primFun(prim_Win32Brush_cpp_bLACK_BRUSH)
{ WORD res1;;
  {res1=BLACK_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_nULL_BRUSH);
primFun(prim_Win32Brush_cpp_nULL_BRUSH)
{ WORD res1;;
  {res1=NULL_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_hOLLOW_BRUSH);
primFun(prim_Win32Brush_cpp_hOLLOW_BRUSH)
{ WORD res1;;
  {res1=HOLLOW_BRUSH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Brush_cpp_getStockBrush);
primFun(prim_Win32Brush_cpp_getStockBrush)
{ WORD arg1;HBRUSH res1;int gc_failed;
			char* gc_failstring;;
  arg1 = (WORD)(hugs->getWord());
  { res1 = GetStockObject(arg1);
   if ((gc_failed = (  res1 == (HBRUSH) NULL  ))) {gc_failstring =  ErrorString("GetStockBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Brush_cpp_createSolidBrush",3,prim_Win32Brush_cpp_createSolidBrush},
  {"prim_Win32Brush_cpp_createHatchBrush",4,prim_Win32Brush_cpp_createHatchBrush},
  {"prim_Win32Brush_cpp_createPatternBrush",3,prim_Win32Brush_cpp_createPatternBrush},
  {"prim_Win32Brush_cpp_deleteBrush",3,prim_Win32Brush_cpp_deleteBrush},
  {"prim_Win32Brush_cpp_wHITE_BRUSH",2,prim_Win32Brush_cpp_wHITE_BRUSH},
  {"prim_Win32Brush_cpp_lTGRAY_BRUSH",2,prim_Win32Brush_cpp_lTGRAY_BRUSH},
  {"prim_Win32Brush_cpp_gRAY_BRUSH",2,prim_Win32Brush_cpp_gRAY_BRUSH},
  {"prim_Win32Brush_cpp_dKGRAY_BRUSH",2,prim_Win32Brush_cpp_dKGRAY_BRUSH},
  {"prim_Win32Brush_cpp_bLACK_BRUSH",2,prim_Win32Brush_cpp_bLACK_BRUSH},
  {"prim_Win32Brush_cpp_nULL_BRUSH",2,prim_Win32Brush_cpp_nULL_BRUSH},
  {"prim_Win32Brush_cpp_hOLLOW_BRUSH",2,prim_Win32Brush_cpp_hOLLOW_BRUSH},
  {"prim_Win32Brush_cpp_getStockBrush",3,prim_Win32Brush_cpp_getStockBrush},
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
