/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Path_cpp_beginPath);
primFun(prim_Win32Path_cpp_beginPath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = BeginPath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("BeginPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_closeFigure);
primFun(prim_Win32Path_cpp_closeFigure)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = CloseFigure(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("CloseFigure")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_endPath);
primFun(prim_Win32Path_cpp_endPath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = EndPath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("EndPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_fillPath);
primFun(prim_Win32Path_cpp_fillPath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = FillPath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("FillPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_flattenPath);
primFun(prim_Win32Path_cpp_flattenPath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = FlattenPath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("FlattenPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_pathToRegion);
primFun(prim_Win32Path_cpp_pathToRegion)
{ HDC arg1;HRGN res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = PathToRegion(arg1);
   if ((gc_failed = (  res1 == (HRGN) 0  ))) {gc_failstring =  ErrorWin("PathToRegion")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_strokeAndFillPath);
primFun(prim_Win32Path_cpp_strokeAndFillPath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = StrokeAndFillPath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("StrokeAndFillPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_strokePath);
primFun(prim_Win32Path_cpp_strokePath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = StrokePath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("StrokePath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Path_cpp_widenPath);
primFun(prim_Win32Path_cpp_widenPath)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = WidenPath(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("WidenPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Path_cpp_beginPath",3,prim_Win32Path_cpp_beginPath},
  {"prim_Win32Path_cpp_closeFigure",3,prim_Win32Path_cpp_closeFigure},
  {"prim_Win32Path_cpp_endPath",3,prim_Win32Path_cpp_endPath},
  {"prim_Win32Path_cpp_fillPath",3,prim_Win32Path_cpp_fillPath},
  {"prim_Win32Path_cpp_flattenPath",3,prim_Win32Path_cpp_flattenPath},
  {"prim_Win32Path_cpp_pathToRegion",3,prim_Win32Path_cpp_pathToRegion},
  {"prim_Win32Path_cpp_strokeAndFillPath",3,prim_Win32Path_cpp_strokeAndFillPath},
  {"prim_Win32Path_cpp_strokePath",3,prim_Win32Path_cpp_strokePath},
  {"prim_Win32Path_cpp_widenPath",3,prim_Win32Path_cpp_widenPath},
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
