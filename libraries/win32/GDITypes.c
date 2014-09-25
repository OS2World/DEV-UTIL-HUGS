/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_GDITypes_cpp_mallocPOINTs);
primFun(prim_GDITypes_cpp_mallocPOINTs)
{ int arg1;POINT* ps;int gc_failed;
		     char* gc_failstring;;
  arg1 = (int)(hugs->getInt());
  { ps = (POINT*) malloc(arg1 * sizeof(POINT));
   if ((gc_failed = ( ps==0 ))) {gc_failstring =  MallocError("mallocPOINTs")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((POINT*)(ps));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_setPOINT);
primFun(prim_GDITypes_cpp_setPOINT)
{ POINT* ps; int i;;
  ps = (POINT*)(hugs->getAddr());
  i = (int)(hugs->getInt());
  (ps[i]).x = (LONG)(hugs->getInt());
  (ps[i]).y = (LONG)(hugs->getInt());
  {hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_getRECT);
primFun(prim_GDITypes_cpp_getRECT)
{ RECT* r;;
  r = (RECT*)(hugs->getAddr());
  {hugs->putInt((LONG)((*r).bottom));
   hugs->putInt((LONG)((*r).right));
   hugs->putInt((LONG)((*r).top));
   hugs->putInt((LONG)((*r).left));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hWND_BOTTOM);
primFun(prim_GDITypes_cpp_hWND_BOTTOM)
{ HWND res1;;
  {res1=HWND_BOTTOM;
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hWND_NOTOPMOST);
primFun(prim_GDITypes_cpp_hWND_NOTOPMOST)
{ HWND res1;;
  {res1=HWND_NOTOPMOST;
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hWND_TOP);
primFun(prim_GDITypes_cpp_hWND_TOP)
{ HWND res1;;
  {res1=HWND_TOP;
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hWND_TOPMOST);
primFun(prim_GDITypes_cpp_hWND_TOPMOST)
{ HWND res1;;
  {res1=HWND_TOPMOST;
   hugs->putAddr((HWND)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_rgb);
primFun(prim_GDITypes_cpp_rgb)
{ BYTE arg1; BYTE arg2; BYTE arg3;DWORD res1;;
  arg1 = (BYTE)(hugs->getWord());
  arg2 = (BYTE)(hugs->getWord());
  arg3 = (BYTE)(hugs->getWord());
  { res1 = RGB(arg1,arg2,arg3);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_getRValue);
primFun(prim_GDITypes_cpp_getRValue)
{ DWORD arg1;BYTE res1;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = GetRValue(arg1);
   hugs->putWord((BYTE)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_getGValue);
primFun(prim_GDITypes_cpp_getGValue)
{ DWORD arg1;BYTE res1;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = GetGValue(arg1);
   hugs->putWord((BYTE)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_getBValue);
primFun(prim_GDITypes_cpp_getBValue)
{ DWORD arg1;BYTE res1;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = GetBValue(arg1);
   hugs->putWord((BYTE)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_aLTERNATE);
primFun(prim_GDITypes_cpp_aLTERNATE)
{ WORD res1;;
  {res1=ALTERNATE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_wINDING);
primFun(prim_GDITypes_cpp_wINDING)
{ WORD res1;;
  {res1=WINDING;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_aD_COUNTERCLOCKWISE);
primFun(prim_GDITypes_cpp_aD_COUNTERCLOCKWISE)
{ WORD res1;;
  {res1=AD_COUNTERCLOCKWISE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_aD_CLOCKWISE);
primFun(prim_GDITypes_cpp_aD_CLOCKWISE)
{ WORD res1;;
  {res1=AD_CLOCKWISE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_gM_COMPATIBLE);
primFun(prim_GDITypes_cpp_gM_COMPATIBLE)
{ DWORD res1;;
  {res1=GM_COMPATIBLE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_gM_ADVANCED);
primFun(prim_GDITypes_cpp_gM_ADVANCED)
{ DWORD res1;;
  {res1=GM_ADVANCED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tRANSPARENT);
primFun(prim_GDITypes_cpp_tRANSPARENT)
{ UINT res1;;
  {res1=TRANSPARENT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_oPAQUE);
primFun(prim_GDITypes_cpp_oPAQUE)
{ UINT res1;;
  {res1=OPAQUE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hS_HORIZONTAL);
primFun(prim_GDITypes_cpp_hS_HORIZONTAL)
{ WORD res1;;
  {res1=HS_HORIZONTAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hS_VERTICAL);
primFun(prim_GDITypes_cpp_hS_VERTICAL)
{ WORD res1;;
  {res1=HS_VERTICAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hS_FDIAGONAL);
primFun(prim_GDITypes_cpp_hS_FDIAGONAL)
{ WORD res1;;
  {res1=HS_FDIAGONAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hS_BDIAGONAL);
primFun(prim_GDITypes_cpp_hS_BDIAGONAL)
{ WORD res1;;
  {res1=HS_BDIAGONAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hS_CROSS);
primFun(prim_GDITypes_cpp_hS_CROSS)
{ WORD res1;;
  {res1=HS_CROSS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hS_DIAGCROSS);
primFun(prim_GDITypes_cpp_hS_DIAGCROSS)
{ WORD res1;;
  {res1=HS_DIAGCROSS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_bLACKONWHITE);
primFun(prim_GDITypes_cpp_bLACKONWHITE)
{ UINT res1;;
  {res1=BLACKONWHITE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_wHITEONBLACK);
primFun(prim_GDITypes_cpp_wHITEONBLACK)
{ UINT res1;;
  {res1=WHITEONBLACK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_cOLORONCOLOR);
primFun(prim_GDITypes_cpp_cOLORONCOLOR)
{ UINT res1;;
  {res1=COLORONCOLOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_hALFTONE);
primFun(prim_GDITypes_cpp_hALFTONE)
{ UINT res1;;
  {res1=HALFTONE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_sTRETCH_ANDSCANS);
primFun(prim_GDITypes_cpp_sTRETCH_ANDSCANS)
{ UINT res1;;
  {res1=STRETCH_ANDSCANS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_sTRETCH_ORSCANS);
primFun(prim_GDITypes_cpp_sTRETCH_ORSCANS)
{ UINT res1;;
  {res1=STRETCH_ORSCANS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_sTRETCH_DELETESCANS);
primFun(prim_GDITypes_cpp_sTRETCH_DELETESCANS)
{ UINT res1;;
  {res1=STRETCH_DELETESCANS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_NOUPDATECP);
primFun(prim_GDITypes_cpp_tA_NOUPDATECP)
{ UINT res1;;
  {res1=TA_NOUPDATECP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_UPDATECP);
primFun(prim_GDITypes_cpp_tA_UPDATECP)
{ UINT res1;;
  {res1=TA_UPDATECP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_LEFT);
primFun(prim_GDITypes_cpp_tA_LEFT)
{ UINT res1;;
  {res1=TA_LEFT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_RIGHT);
primFun(prim_GDITypes_cpp_tA_RIGHT)
{ UINT res1;;
  {res1=TA_RIGHT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_CENTER);
primFun(prim_GDITypes_cpp_tA_CENTER)
{ UINT res1;;
  {res1=TA_CENTER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_TOP);
primFun(prim_GDITypes_cpp_tA_TOP)
{ UINT res1;;
  {res1=TA_TOP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_BOTTOM);
primFun(prim_GDITypes_cpp_tA_BOTTOM)
{ UINT res1;;
  {res1=TA_BOTTOM;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_tA_BASELINE);
primFun(prim_GDITypes_cpp_tA_BASELINE)
{ UINT res1;;
  {res1=TA_BASELINE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_rGN_AND);
primFun(prim_GDITypes_cpp_rGN_AND)
{ UINT res1;;
  {res1=RGN_AND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_rGN_OR);
primFun(prim_GDITypes_cpp_rGN_OR)
{ UINT res1;;
  {res1=RGN_OR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_rGN_XOR);
primFun(prim_GDITypes_cpp_rGN_XOR)
{ UINT res1;;
  {res1=RGN_XOR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_rGN_DIFF);
primFun(prim_GDITypes_cpp_rGN_DIFF)
{ UINT res1;;
  {res1=RGN_DIFF;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_rGN_COPY);
primFun(prim_GDITypes_cpp_rGN_COPY)
{ UINT res1;;
  {res1=RGN_COPY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_eRROR);
primFun(prim_GDITypes_cpp_eRROR)
{ WORD res1;;
  {res1=ERROR;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_nULLREGION);
primFun(prim_GDITypes_cpp_nULLREGION)
{ WORD res1;;
  {res1=NULLREGION;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_sIMPLEREGION);
primFun(prim_GDITypes_cpp_sIMPLEREGION)
{ WORD res1;;
  {res1=SIMPLEREGION;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_GDITypes_cpp_cOMPLEXREGION);
primFun(prim_GDITypes_cpp_cOMPLEXREGION)
{ WORD res1;;
  {res1=COMPLEXREGION;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_GDITypes_cpp_mallocPOINTs",3,prim_GDITypes_cpp_mallocPOINTs},
  {"prim_GDITypes_cpp_setPOINT",6,prim_GDITypes_cpp_setPOINT},
  {"prim_GDITypes_cpp_getRECT",3,prim_GDITypes_cpp_getRECT},
  {"prim_GDITypes_cpp_hWND_BOTTOM",2,prim_GDITypes_cpp_hWND_BOTTOM},
  {"prim_GDITypes_cpp_hWND_NOTOPMOST",2,prim_GDITypes_cpp_hWND_NOTOPMOST},
  {"prim_GDITypes_cpp_hWND_TOP",2,prim_GDITypes_cpp_hWND_TOP},
  {"prim_GDITypes_cpp_hWND_TOPMOST",2,prim_GDITypes_cpp_hWND_TOPMOST},
  {"prim_GDITypes_cpp_rgb",5,prim_GDITypes_cpp_rgb},
  {"prim_GDITypes_cpp_getRValue",3,prim_GDITypes_cpp_getRValue},
  {"prim_GDITypes_cpp_getGValue",3,prim_GDITypes_cpp_getGValue},
  {"prim_GDITypes_cpp_getBValue",3,prim_GDITypes_cpp_getBValue},
  {"prim_GDITypes_cpp_aLTERNATE",2,prim_GDITypes_cpp_aLTERNATE},
  {"prim_GDITypes_cpp_wINDING",2,prim_GDITypes_cpp_wINDING},
  {"prim_GDITypes_cpp_aD_COUNTERCLOCKWISE",2,prim_GDITypes_cpp_aD_COUNTERCLOCKWISE},
  {"prim_GDITypes_cpp_aD_CLOCKWISE",2,prim_GDITypes_cpp_aD_CLOCKWISE},
  {"prim_GDITypes_cpp_gM_COMPATIBLE",2,prim_GDITypes_cpp_gM_COMPATIBLE},
  {"prim_GDITypes_cpp_gM_ADVANCED",2,prim_GDITypes_cpp_gM_ADVANCED},
  {"prim_GDITypes_cpp_tRANSPARENT",2,prim_GDITypes_cpp_tRANSPARENT},
  {"prim_GDITypes_cpp_oPAQUE",2,prim_GDITypes_cpp_oPAQUE},
  {"prim_GDITypes_cpp_hS_HORIZONTAL",2,prim_GDITypes_cpp_hS_HORIZONTAL},
  {"prim_GDITypes_cpp_hS_VERTICAL",2,prim_GDITypes_cpp_hS_VERTICAL},
  {"prim_GDITypes_cpp_hS_FDIAGONAL",2,prim_GDITypes_cpp_hS_FDIAGONAL},
  {"prim_GDITypes_cpp_hS_BDIAGONAL",2,prim_GDITypes_cpp_hS_BDIAGONAL},
  {"prim_GDITypes_cpp_hS_CROSS",2,prim_GDITypes_cpp_hS_CROSS},
  {"prim_GDITypes_cpp_hS_DIAGCROSS",2,prim_GDITypes_cpp_hS_DIAGCROSS},
  {"prim_GDITypes_cpp_bLACKONWHITE",2,prim_GDITypes_cpp_bLACKONWHITE},
  {"prim_GDITypes_cpp_wHITEONBLACK",2,prim_GDITypes_cpp_wHITEONBLACK},
  {"prim_GDITypes_cpp_cOLORONCOLOR",2,prim_GDITypes_cpp_cOLORONCOLOR},
  {"prim_GDITypes_cpp_hALFTONE",2,prim_GDITypes_cpp_hALFTONE},
  {"prim_GDITypes_cpp_sTRETCH_ANDSCANS",2,prim_GDITypes_cpp_sTRETCH_ANDSCANS},
  {"prim_GDITypes_cpp_sTRETCH_ORSCANS",2,prim_GDITypes_cpp_sTRETCH_ORSCANS},
  {"prim_GDITypes_cpp_sTRETCH_DELETESCANS",2,prim_GDITypes_cpp_sTRETCH_DELETESCANS},
  {"prim_GDITypes_cpp_tA_NOUPDATECP",2,prim_GDITypes_cpp_tA_NOUPDATECP},
  {"prim_GDITypes_cpp_tA_UPDATECP",2,prim_GDITypes_cpp_tA_UPDATECP},
  {"prim_GDITypes_cpp_tA_LEFT",2,prim_GDITypes_cpp_tA_LEFT},
  {"prim_GDITypes_cpp_tA_RIGHT",2,prim_GDITypes_cpp_tA_RIGHT},
  {"prim_GDITypes_cpp_tA_CENTER",2,prim_GDITypes_cpp_tA_CENTER},
  {"prim_GDITypes_cpp_tA_TOP",2,prim_GDITypes_cpp_tA_TOP},
  {"prim_GDITypes_cpp_tA_BOTTOM",2,prim_GDITypes_cpp_tA_BOTTOM},
  {"prim_GDITypes_cpp_tA_BASELINE",2,prim_GDITypes_cpp_tA_BASELINE},
  {"prim_GDITypes_cpp_rGN_AND",2,prim_GDITypes_cpp_rGN_AND},
  {"prim_GDITypes_cpp_rGN_OR",2,prim_GDITypes_cpp_rGN_OR},
  {"prim_GDITypes_cpp_rGN_XOR",2,prim_GDITypes_cpp_rGN_XOR},
  {"prim_GDITypes_cpp_rGN_DIFF",2,prim_GDITypes_cpp_rGN_DIFF},
  {"prim_GDITypes_cpp_rGN_COPY",2,prim_GDITypes_cpp_rGN_COPY},
  {"prim_GDITypes_cpp_eRROR",2,prim_GDITypes_cpp_eRROR},
  {"prim_GDITypes_cpp_nULLREGION",2,prim_GDITypes_cpp_nULLREGION},
  {"prim_GDITypes_cpp_sIMPLEREGION",2,prim_GDITypes_cpp_sIMPLEREGION},
  {"prim_GDITypes_cpp_cOMPLEXREGION",2,prim_GDITypes_cpp_cOMPLEXREGION},
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
