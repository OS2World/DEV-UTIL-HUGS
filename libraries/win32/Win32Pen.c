/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32Pen_cpp_wHITE_PEN);
primFun(prim_Win32Pen_cpp_wHITE_PEN)
{ WORD res1;;
  {res1=WHITE_PEN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_bLACK_PEN);
primFun(prim_Win32Pen_cpp_bLACK_PEN)
{ WORD res1;;
  {res1=BLACK_PEN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_nULL_PEN);
primFun(prim_Win32Pen_cpp_nULL_PEN)
{ WORD res1;;
  {res1=NULL_PEN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_getStockPen);
primFun(prim_Win32Pen_cpp_getStockPen)
{ WORD arg1;HPEN res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (WORD)(hugs->getWord());
  { res1 = GetStockObject(arg1);
   if ((gc_failed = (  res1 == (HPEN) NULL  ))) {gc_failstring =  ErrorString("GetStockPen")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPEN)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_deletePen);
primFun(prim_Win32Pen_cpp_deletePen)
{ HPEN arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = (HPEN)(hugs->getAddr());
  { BOOL success = DeleteObject(arg1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("DeletePen")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_SOLID);
primFun(prim_Win32Pen_cpp_pS_SOLID)
{ int res1;;
  {res1=PS_SOLID;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_DASH);
primFun(prim_Win32Pen_cpp_pS_DASH)
{ int res1;;
  {res1=PS_DASH;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_DOT);
primFun(prim_Win32Pen_cpp_pS_DOT)
{ int res1;;
  {res1=PS_DOT;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_DASHDOT);
primFun(prim_Win32Pen_cpp_pS_DASHDOT)
{ int res1;;
  {res1=PS_DASHDOT;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_DASHDOTDOT);
primFun(prim_Win32Pen_cpp_pS_DASHDOTDOT)
{ int res1;;
  {res1=PS_DASHDOTDOT;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_NULL);
primFun(prim_Win32Pen_cpp_pS_NULL)
{ int res1;;
  {res1=PS_NULL;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_INSIDEFRAME);
primFun(prim_Win32Pen_cpp_pS_INSIDEFRAME)
{ int res1;;
  {res1=PS_INSIDEFRAME;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_USERSTYLE);
primFun(prim_Win32Pen_cpp_pS_USERSTYLE)
{ int res1;;
  {res1=PS_USERSTYLE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_ALTERNATE);
primFun(prim_Win32Pen_cpp_pS_ALTERNATE)
{ int res1;;
  {res1=PS_ALTERNATE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_STYLE_MASK);
primFun(prim_Win32Pen_cpp_pS_STYLE_MASK)
{ int res1;;
  {res1=PS_STYLE_MASK;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_ENDCAP_ROUND);
primFun(prim_Win32Pen_cpp_pS_ENDCAP_ROUND)
{ int res1;;
  {res1=PS_ENDCAP_ROUND;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_ENDCAP_SQUARE);
primFun(prim_Win32Pen_cpp_pS_ENDCAP_SQUARE)
{ int res1;;
  {res1=PS_ENDCAP_SQUARE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_ENDCAP_FLAT);
primFun(prim_Win32Pen_cpp_pS_ENDCAP_FLAT)
{ int res1;;
  {res1=PS_ENDCAP_FLAT;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_ENDCAP_MASK);
primFun(prim_Win32Pen_cpp_pS_ENDCAP_MASK)
{ int res1;;
  {res1=PS_ENDCAP_MASK;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_JOIN_ROUND);
primFun(prim_Win32Pen_cpp_pS_JOIN_ROUND)
{ int res1;;
  {res1=PS_JOIN_ROUND;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_JOIN_BEVEL);
primFun(prim_Win32Pen_cpp_pS_JOIN_BEVEL)
{ int res1;;
  {res1=PS_JOIN_BEVEL;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_JOIN_MITER);
primFun(prim_Win32Pen_cpp_pS_JOIN_MITER)
{ int res1;;
  {res1=PS_JOIN_MITER;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_COSMETIC);
primFun(prim_Win32Pen_cpp_pS_COSMETIC)
{ int res1;;
  {res1=PS_COSMETIC;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_GEOMETRIC);
primFun(prim_Win32Pen_cpp_pS_GEOMETRIC)
{ int res1;;
  {res1=PS_GEOMETRIC;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_pS_TYPE_MASK);
primFun(prim_Win32Pen_cpp_pS_TYPE_MASK)
{ int res1;;
  {res1=PS_TYPE_MASK;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Pen_cpp_createPen);
primFun(prim_Win32Pen_cpp_createPen)
{ int arg1; INT arg2; DWORD arg3;HPEN res1;int gc_failed;
					   char* gc_failstring;;
  arg1 = (int)(hugs->getInt());
  arg2 = (INT)(hugs->getInt());
  arg3 = (DWORD)(hugs->getWord());
  {res1 = CreatePen(arg1, arg2, arg3);
   if ((gc_failed = ( res1 == (HPEN) NULL ))) {gc_failstring =  ErrorString("CreatePen")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPEN)(res1));
   hugs_returnIO(3);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Pen_cpp_wHITE_PEN",2,prim_Win32Pen_cpp_wHITE_PEN},
  {"prim_Win32Pen_cpp_bLACK_PEN",2,prim_Win32Pen_cpp_bLACK_PEN},
  {"prim_Win32Pen_cpp_nULL_PEN",2,prim_Win32Pen_cpp_nULL_PEN},
  {"prim_Win32Pen_cpp_getStockPen",3,prim_Win32Pen_cpp_getStockPen},
  {"prim_Win32Pen_cpp_deletePen",3,prim_Win32Pen_cpp_deletePen},
  {"prim_Win32Pen_cpp_pS_SOLID",2,prim_Win32Pen_cpp_pS_SOLID},
  {"prim_Win32Pen_cpp_pS_DASH",2,prim_Win32Pen_cpp_pS_DASH},
  {"prim_Win32Pen_cpp_pS_DOT",2,prim_Win32Pen_cpp_pS_DOT},
  {"prim_Win32Pen_cpp_pS_DASHDOT",2,prim_Win32Pen_cpp_pS_DASHDOT},
  {"prim_Win32Pen_cpp_pS_DASHDOTDOT",2,prim_Win32Pen_cpp_pS_DASHDOTDOT},
  {"prim_Win32Pen_cpp_pS_NULL",2,prim_Win32Pen_cpp_pS_NULL},
  {"prim_Win32Pen_cpp_pS_INSIDEFRAME",2,prim_Win32Pen_cpp_pS_INSIDEFRAME},
  {"prim_Win32Pen_cpp_pS_USERSTYLE",2,prim_Win32Pen_cpp_pS_USERSTYLE},
  {"prim_Win32Pen_cpp_pS_ALTERNATE",2,prim_Win32Pen_cpp_pS_ALTERNATE},
  {"prim_Win32Pen_cpp_pS_STYLE_MASK",2,prim_Win32Pen_cpp_pS_STYLE_MASK},
  {"prim_Win32Pen_cpp_pS_ENDCAP_ROUND",2,prim_Win32Pen_cpp_pS_ENDCAP_ROUND},
  {"prim_Win32Pen_cpp_pS_ENDCAP_SQUARE",2,prim_Win32Pen_cpp_pS_ENDCAP_SQUARE},
  {"prim_Win32Pen_cpp_pS_ENDCAP_FLAT",2,prim_Win32Pen_cpp_pS_ENDCAP_FLAT},
  {"prim_Win32Pen_cpp_pS_ENDCAP_MASK",2,prim_Win32Pen_cpp_pS_ENDCAP_MASK},
  {"prim_Win32Pen_cpp_pS_JOIN_ROUND",2,prim_Win32Pen_cpp_pS_JOIN_ROUND},
  {"prim_Win32Pen_cpp_pS_JOIN_BEVEL",2,prim_Win32Pen_cpp_pS_JOIN_BEVEL},
  {"prim_Win32Pen_cpp_pS_JOIN_MITER",2,prim_Win32Pen_cpp_pS_JOIN_MITER},
  {"prim_Win32Pen_cpp_pS_COSMETIC",2,prim_Win32Pen_cpp_pS_COSMETIC},
  {"prim_Win32Pen_cpp_pS_GEOMETRIC",2,prim_Win32Pen_cpp_pS_GEOMETRIC},
  {"prim_Win32Pen_cpp_pS_TYPE_MASK",2,prim_Win32Pen_cpp_pS_TYPE_MASK},
  {"prim_Win32Pen_cpp_createPen",5,prim_Win32Pen_cpp_createPen},
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
