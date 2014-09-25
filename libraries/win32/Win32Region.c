/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include <windows.h>
#include "errors.h"
#include "win32debug.h"
#include "finalizers.h"
PROTO_PRIM(prim_Win32Region_combineRgn);
primFun(prim_Win32Region_combineRgn)
{ HRGN arg1; HRGN arg2; HRGN arg3; UINT arg4;WORD res1;int gc_failed;
						       char* gc_failstring;;
  arg1 = ((HRGN) hugs->getForeign());
  arg2 = ((HRGN) hugs->getForeign());
  arg3 = ((HRGN) hugs->getForeign());
  arg4 = (UINT)(hugs->getWord());
  {res1 = CombineRgn(arg1, arg2, arg3, arg4);
   if ((gc_failed = (  BadRgnTest(res1)  ))) {gc_failstring =  ErrorString("CombineRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Region_offsetRgn);
primFun(prim_Win32Region_offsetRgn)
{ HRGN arg1; INT arg2; INT arg3;WORD res1;int gc_failed;
					  char* gc_failstring;;
  arg1 = ((HRGN) hugs->getForeign());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  {res1 = OffsetRgn(arg1, arg2, arg3);
   if ((gc_failed = (  BadRgnTest(res1)  ))) {gc_failstring =  ErrorString("OffsetRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Region_getRgnBox);
primFun(prim_Win32Region_getRgnBox)
{ HRGN arg1; LPRECT arg2;WORD res1;int gc_failed;
				   char* gc_failstring;;
  arg1 = ((HRGN) hugs->getForeign());
  arg2 = (LPRECT)(hugs->getAddr());
  {res1 = GetRgnBox(arg1, arg2);
   if ((gc_failed = (  BadRgnTest(res1)  ))) {gc_failstring =  ErrorString("GetRgnBox")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Region_createEllipticRgn);
primFun(prim_Win32Region_createEllipticRgn)
{ INT arg1; INT arg2; INT arg3; INT arg4;HRGN res1;int gc_failed;
						   char* gc_failstring;;
  arg1 = (INT)(hugs->getInt());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  {res1 = CreateEllipticRgn(arg1, arg2, arg3, arg4);
   if ((gc_failed = (  res1 == (HRGN) 0  ))) {gc_failstring =  ErrorString("CreateEllipticRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Region_createEllipticRgnIndirect);
primFun(prim_Win32Region_createEllipticRgnIndirect)
{ LPRECT arg1;HRGN res1;int gc_failed;
			char* gc_failstring;;
  arg1 = (LPRECT)(hugs->getAddr());
  {res1 = CreateEllipticRgnIndirect(arg1);
   if ((gc_failed = (  res1 == (HRGN) 0  ))) {gc_failstring =  ErrorString("CreateEllipticRgnIndirect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Region_createRectRgn);
primFun(prim_Win32Region_createRectRgn)
{ INT arg1; INT arg2; INT arg3; INT arg4;HRGN res1;int gc_failed;
						   char* gc_failstring;;
  arg1 = (INT)(hugs->getInt());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  {res1 = CreateRectRgn(arg1, arg2, arg3, arg4);
   if ((gc_failed = (  res1 == (HRGN) 0  ))) {gc_failstring =  ErrorString("CreateRectRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Region_createRectRgnIndirect);
primFun(prim_Win32Region_createRectRgnIndirect)
{ LPRECT arg1;HRGN res1;int gc_failed;
			char* gc_failstring;;
  arg1 = (LPRECT)(hugs->getAddr());
  {res1 = CreateRectRgnIndirect(arg1);
   if ((gc_failed = (  res1 == (HRGN) 0  ))) {gc_failstring =  ErrorString("CreateRectRgnIndirect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Region_createRoundRectRgn);
primFun(prim_Win32Region_createRoundRectRgn)
{ INT arg1; INT arg2; INT arg3; INT arg4; INT arg5; INT arg6;HRGN res1;int gc_failed;
								       char* gc_failstring;;
  arg1 = (INT)(hugs->getInt());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  arg5 = (INT)(hugs->getInt());
  arg6 = (INT)(hugs->getInt());
  {res1 = CreateRoundRectRgn(arg1, arg2, arg3, arg4, arg5, arg6);
   if ((gc_failed = (  res1 == (HRGN) 0  ))) {gc_failstring =  ErrorString("CreateRoundRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Region_createPolygonRgn);
primFun(prim_Win32Region_createPolygonRgn)
{ POINT * ps; int num_ps; WORD mode;HRGN h;int gc_failed;
					   char* gc_failstring;;
  ps = (POINT *)(hugs->getAddr());
  num_ps = (int)(hugs->getInt());
  mode = (WORD)(hugs->getWord());
  { h = CreatePolygonRgn(ps,num_ps,mode);
   if ((gc_failed = (  h == (HRGN) 0  ))) {gc_failstring =  ErrorString("CreatePolygonRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HRGN)(h));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
    free(ps);}
}
PROTO_PRIM(prim_Win32Region_equalRgn);
primFun(prim_Win32Region_equalRgn)
{ HRGN arg1; HRGN arg2;int res1;;
  arg1 = ((HRGN) hugs->getForeign());
  arg2 = ((HRGN) hugs->getForeign());
  {res1 = EqualRgn(arg1, arg2);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Region_fillRgn);
primFun(prim_Win32Region_fillRgn)
{ HDC arg1; HRGN arg2; HBRUSH arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  arg3 = (HBRUSH)(hugs->getAddr());
  { BOOL success = FillRgn(arg1, arg2, arg3);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("FillRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Region_invertRgn);
primFun(prim_Win32Region_invertRgn)
{ HDC arg1; HRGN arg2;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  { BOOL success = InvertRgn(arg1, arg2);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("InvertRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Region_paintRgn);
primFun(prim_Win32Region_paintRgn)
{ HDC arg1; HRGN arg2;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  { BOOL success = PaintRgn(arg1, arg2);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Region_frameRgn);
primFun(prim_Win32Region_frameRgn)
{ HDC arg1; HRGN arg2; HBRUSH arg3; int arg4; int arg5;int gc_failed;
						       char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  arg3 = (HBRUSH)(hugs->getAddr());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  { BOOL success = FrameRgn(arg1, arg2, arg3, arg4, arg5);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("FrameRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Region_ptInRegion);
primFun(prim_Win32Region_ptInRegion)
{ HRGN arg1; int arg2; int arg3;int res1;;
  arg1 = ((HRGN) hugs->getForeign());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  {res1 = PtInRegion(arg1, arg2, arg3);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Region_rectInRegion);
primFun(prim_Win32Region_rectInRegion)
{ HRGN arg1;RECT arg2;int res1;;
  arg1 = ((HRGN) hugs->getForeign());
  (arg2).left = (LONG)(hugs->getInt());
  (arg2).top = (LONG)(hugs->getInt());
  (arg2).right = (LONG)(hugs->getInt());
  (arg2).bottom = (LONG)(hugs->getInt());
  { res1 = RectInRegion(arg1,&arg2);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Region_deleteRegion);
primFun(prim_Win32Region_deleteRegion)
{ HRGN arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = ((HRGN) hugs->getForeign());
  { BOOL success = DeleteObject(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("DeleteRegion")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Region_combineRgn",6,prim_Win32Region_combineRgn},
  {"prim_Win32Region_offsetRgn",5,prim_Win32Region_offsetRgn},
  {"prim_Win32Region_getRgnBox",4,prim_Win32Region_getRgnBox},
  {"prim_Win32Region_createEllipticRgn",6,prim_Win32Region_createEllipticRgn},
  {"prim_Win32Region_createEllipticRgnIndirect",3,prim_Win32Region_createEllipticRgnIndirect},
  {"prim_Win32Region_createRectRgn",6,prim_Win32Region_createRectRgn},
  {"prim_Win32Region_createRectRgnIndirect",3,prim_Win32Region_createRectRgnIndirect},
  {"prim_Win32Region_createRoundRectRgn",8,prim_Win32Region_createRoundRectRgn},
  {"prim_Win32Region_createPolygonRgn",5,prim_Win32Region_createPolygonRgn},
  {"prim_Win32Region_equalRgn",4,prim_Win32Region_equalRgn},
  {"prim_Win32Region_fillRgn",5,prim_Win32Region_fillRgn},
  {"prim_Win32Region_invertRgn",4,prim_Win32Region_invertRgn},
  {"prim_Win32Region_paintRgn",4,prim_Win32Region_paintRgn},
  {"prim_Win32Region_frameRgn",7,prim_Win32Region_frameRgn},
  {"prim_Win32Region_ptInRegion",5,prim_Win32Region_ptInRegion},
  {"prim_Win32Region_rectInRegion",7,prim_Win32Region_rectInRegion},
  {"prim_Win32Region_deleteRegion",3,prim_Win32Region_deleteRegion},
  {0,0,0}
};
static struct primInfo prims = { 0, primTable, 0 };

#ifdef __cplusplus
extern "C" {
#endif
DLLEXPORT(void) initModule(HugsAPI3 *);
DLLEXPORT(void) initModule(HugsAPI3 *hugsAPI) {
    hugs = hugsAPI;
    hugs->registerPrims(&prims);
}
#ifdef __cplusplus
}
#endif

