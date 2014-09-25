/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
PROTO_PRIM(prim_Win32HDC_cpp_setArcDirection);
primFun(prim_Win32HDC_cpp_setArcDirection)
{ HDC arg1; WORD arg2;WORD res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (WORD)(hugs->getWord());
  {res1 = SetArcDirection(arg1, arg2);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("SetArcDirection")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getArcDirection);
primFun(prim_Win32HDC_cpp_getArcDirection)
{ HDC arg1;WORD res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetArcDirection(arg1);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("GetArcDirection")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setPolyFillMode);
primFun(prim_Win32HDC_cpp_setPolyFillMode)
{ HDC arg1; WORD arg2;WORD res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (WORD)(hugs->getWord());
  {res1 = SetPolyFillMode(arg1, arg2);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("SetPolyFillMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getPolyFillMode);
primFun(prim_Win32HDC_cpp_getPolyFillMode)
{ HDC arg1;WORD res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetPolyFillMode(arg1);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("GetPolyFillMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setGraphicsMode);
primFun(prim_Win32HDC_cpp_setGraphicsMode)
{ HDC arg1; DWORD arg2;DWORD res1;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = SetGraphicsMode(arg1, arg2);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("SetGraphicsMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getGraphicsMode);
primFun(prim_Win32HDC_cpp_getGraphicsMode)
{ HDC arg1;DWORD res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetGraphicsMode(arg1);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("GetGraphicsMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setStretchBltMode);
primFun(prim_Win32HDC_cpp_setStretchBltMode)
{ HDC arg1; UINT arg2;UINT res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  {res1 = SetStretchBltMode(arg1, arg2);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("SetStretchBltMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getStretchBltMode);
primFun(prim_Win32HDC_cpp_getStretchBltMode)
{ HDC arg1;UINT res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetStretchBltMode(arg1);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("GetStretchBltMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setBkColor);
primFun(prim_Win32HDC_cpp_setBkColor)
{ HDC arg1; DWORD arg2;DWORD res1;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = SetBkColor(arg1, arg2);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("SetBkColor")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getBkColor);
primFun(prim_Win32HDC_cpp_getBkColor)
{ HDC arg1;DWORD res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetBkColor(arg1);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("GetBkColor")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setTextColor);
primFun(prim_Win32HDC_cpp_setTextColor)
{ HDC arg1; DWORD arg2;DWORD res1;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = SetTextColor(arg1, arg2);
   if ((gc_failed = ( res1== CLR_INVALID  ))) {gc_failstring =  ErrorString("SetTextColor")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getTextColor);
primFun(prim_Win32HDC_cpp_getTextColor)
{ HDC arg1;DWORD res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetTextColor(arg1);
   if ((gc_failed = ( res1== CLR_INVALID  ))) {gc_failstring =  ErrorString("GetTextColor")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setBkMode);
primFun(prim_Win32HDC_cpp_setBkMode)
{ HDC arg1; UINT arg2;UINT res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  {res1 = SetBkMode(arg1, arg2);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("SetBkMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getBkMode);
primFun(prim_Win32HDC_cpp_getBkMode)
{ HDC arg1;UINT res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetBkMode(arg1);
   if ((gc_failed = ( res1== 0  ))) {gc_failstring =  ErrorString("GetBkMode")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setBrushOrgEx);
primFun(prim_Win32HDC_cpp_setBrushOrgEx)
{ HDC arg1; int arg2; int arg3;int gc_failed;
			       char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  { POINT res1;
     BOOL success = SetBrushOrgEx(arg1,arg2,arg3,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("SetBrushOrgEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).y));
   hugs->putInt((LONG)((res1).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getBrushOrgEx);
primFun(prim_Win32HDC_cpp_getBrushOrgEx)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { POINT res1;
     BOOL success = GetBrushOrgEx(arg1,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("GetBrushOrgEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).y));
   hugs->putInt((LONG)((res1).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setTextAlign);
primFun(prim_Win32HDC_cpp_setTextAlign)
{ HDC arg1; UINT arg2;UINT res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  {res1 = SetTextAlign(arg1, arg2);
   if ((gc_failed = ( res1== GDI_ERROR  ))) {gc_failstring =  ErrorWin("Set" "TextAlign")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getTextAlign);
primFun(prim_Win32HDC_cpp_getTextAlign)
{ HDC arg1;UINT res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetTextAlign(arg1);
   if ((gc_failed = ( res1== GDI_ERROR  ))) {gc_failstring =  ErrorWin("Get" "TextAlign")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((UINT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setTextCharacterExtra);
primFun(prim_Win32HDC_cpp_setTextCharacterExtra)
{ HDC arg1; int arg2;int res1;int gc_failed;
			      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  {res1 = SetTextCharacterExtra(arg1, arg2);
   if ((gc_failed = ( res1== 0x80000000  ))) {gc_failstring =  ErrorString("SetTextCharacterExtra")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getTextCharacterExtra);
primFun(prim_Win32HDC_cpp_getTextCharacterExtra)
{ HDC arg1;int res1;int gc_failed;
		    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = GetTextCharacterExtra(arg1);
   if ((gc_failed = ( res1== 0x80000000  ))) {gc_failstring =  ErrorString("GetTextCharacterExtra")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getMiterLimit);
primFun(prim_Win32HDC_cpp_getMiterLimit)
{ HDC arg1;float res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = GetMiterLimit(arg1,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("GetMiterLimit")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putFloat((float)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_setMiterLimit);
primFun(prim_Win32HDC_cpp_setMiterLimit)
{ HDC arg1; float arg2;float res1;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (float)(hugs->getFloat());
  { BOOL success = SetMiterLimit(arg1,arg2,&res1);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("SetMiterLimit")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putFloat((float)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_saveDC);
primFun(prim_Win32HDC_cpp_saveDC)
{ HDC arg1;int res1;int gc_failed;
		    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = SaveDC(arg1);
   if ((gc_failed = ( res1==0 ))) {gc_failstring =  ErrorString("SaveDC")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_restoreDC);
primFun(prim_Win32HDC_cpp_restoreDC)
{ HDC arg1; int arg2;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  { BOOL success = RestoreDC(arg1,arg2);
   if ((gc_failed = ( !success ))) {gc_failstring =  ErrorString("RestoreDC")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getCurrentBitmap);
primFun(prim_Win32HDC_cpp_getCurrentBitmap)
{ HDC arg1;HBITMAP res1;int gc_failed;
			char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { res1 = ( HBITMAP ) GetCurrentObject(arg1,  OBJ_BITMAP ) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("GetCurrentBitmap")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBITMAP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getCurrentBrush);
primFun(prim_Win32HDC_cpp_getCurrentBrush)
{ HDC arg1;HBRUSH res1;int gc_failed;
		       char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { res1 = (  HBRUSH ) GetCurrentObject(arg1,   OBJ_BRUSH ) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("GetCurrentBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getCurrentFont);
primFun(prim_Win32HDC_cpp_getCurrentFont)
{ HDC arg1;HFONT res1;int gc_failed;
		      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { res1 = (   HFONT ) GetCurrentObject(arg1,    OBJ_FONT ) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("GetCurrentFont")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HFONT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getCurrentPalette);
primFun(prim_Win32HDC_cpp_getCurrentPalette)
{ HDC arg1;HPALETTE res1;int gc_failed;
			 char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { res1 = (    HPALETTE ) GetCurrentObject(arg1, OBJ_PAL ) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("GetCurrentPalette")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPALETTE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_getCurrentPen);
primFun(prim_Win32HDC_cpp_getCurrentPen)
{ HDC arg1;HPEN res1;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { res1 = (    HPEN ) GetCurrentObject(arg1,     OBJ_PEN ) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("GetCurrentPen")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPEN)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectBitmap);
primFun(prim_Win32HDC_cpp_selectBitmap)
{ HDC arg1; HBITMAP arg2;HBITMAP res1;int gc_failed;
				      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HBITMAP)(hugs->getAddr());
  { res1 = (  HBITMAP ) SelectObject(arg1,arg2) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("SelectBitmap")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBITMAP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectBrush);
primFun(prim_Win32HDC_cpp_selectBrush)
{ HDC arg1; HBRUSH arg2;HBRUSH res1;int gc_failed;
				    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HBRUSH)(hugs->getAddr());
  { res1 = (   HBRUSH ) SelectObject(arg1,arg2) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("SelectBrush")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectFont);
primFun(prim_Win32HDC_cpp_selectFont)
{ HDC arg1; HFONT arg2;HFONT res1;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HFONT)(hugs->getAddr());
  { res1 = (    HFONT ) SelectObject(arg1,arg2) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("SelectFont")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HFONT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectPen);
primFun(prim_Win32HDC_cpp_selectPen)
{ HDC arg1; HPEN arg2;HPEN res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HPEN)(hugs->getAddr());
  { res1 = (     HPEN ) SelectObject(arg1,arg2) ;
   if ((gc_failed = ( res1==NULL ))) {gc_failstring =  ErrorString("SelectPen")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPEN)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectPalette);
primFun(prim_Win32HDC_cpp_selectPalette)
{ HDC arg1; HPALETTE arg2; int arg3;HPALETTE res1;int gc_failed;
						  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HPALETTE)(hugs->getAddr());
  arg3 = (int)(hugs->getInt());
  {res1 = SelectPalette(arg1, arg2, arg3);
   if ((gc_failed = ( res1 == NULL ))) {gc_failstring = ErrorWin("SelectPalette") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HPALETTE)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectRgn);
primFun(prim_Win32HDC_cpp_selectRgn)
{ HDC arg1; HRGN arg2;WORD res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  { res1 = (int)SelectObject(arg1,arg2);
   if ((gc_failed = ( res1==GDI_ERROR ))) {gc_failstring =  ErrorString("SelectRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectClipRgn);
primFun(prim_Win32HDC_cpp_selectClipRgn)
{ HDC arg1; HRGN arg2;WORD res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  {res1 = SelectClipRgn(arg1, arg2);
   if ((gc_failed = ( res1==ERROR ))) {gc_failstring =  ErrorString("SelectClipRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_extSelectClipRgn);
primFun(prim_Win32HDC_cpp_extSelectClipRgn)
{ HDC arg1; HRGN arg2; UINT arg3;WORD res1;int gc_failed;
					   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = ((HRGN) hugs->getForeign());
  arg3 = (UINT)(hugs->getWord());
  {res1 = ExtSelectClipRgn(arg1, arg2, arg3);
   if ((gc_failed = ( res1==ERROR ))) {gc_failstring =  ErrorString("ExtSelectClipRgn")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_selectClipPath);
primFun(prim_Win32HDC_cpp_selectClipPath)
{ HDC arg1; UINT arg2;WORD res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (UINT)(hugs->getWord());
  {res1 = SelectClipPath(arg1, arg2);
   if ((gc_failed = ( res1==0 ))) {gc_failstring =  ErrorWin("SelectClipPath")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_cancelDC);
primFun(prim_Win32HDC_cpp_cancelDC)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = CancelDC(arg1);
   if ((gc_failed = ( !success ))) {gc_failstring = "CancelDC" ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_createCompatibleDC);
primFun(prim_Win32HDC_cpp_createCompatibleDC)
{ HDC arg1;HDC res1;int gc_failed;
		    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  {res1 = CreateCompatibleDC(arg1);
   if ((gc_failed = ( res1==NULL ))) {gc_failstring = "CreateCompatibleDC" ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HDC)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32HDC_cpp_deleteDC);
primFun(prim_Win32HDC_cpp_deleteDC)
{ HDC arg1;int gc_failed;
	   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  { BOOL success = DeleteDC(arg1);
   if ((gc_failed = ( !success ))) {gc_failstring = "DeleteDC" ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32HDC_cpp_setArcDirection",4,prim_Win32HDC_cpp_setArcDirection},
  {"prim_Win32HDC_cpp_getArcDirection",3,prim_Win32HDC_cpp_getArcDirection},
  {"prim_Win32HDC_cpp_setPolyFillMode",4,prim_Win32HDC_cpp_setPolyFillMode},
  {"prim_Win32HDC_cpp_getPolyFillMode",3,prim_Win32HDC_cpp_getPolyFillMode},
  {"prim_Win32HDC_cpp_setGraphicsMode",4,prim_Win32HDC_cpp_setGraphicsMode},
  {"prim_Win32HDC_cpp_getGraphicsMode",3,prim_Win32HDC_cpp_getGraphicsMode},
  {"prim_Win32HDC_cpp_setStretchBltMode",4,prim_Win32HDC_cpp_setStretchBltMode},
  {"prim_Win32HDC_cpp_getStretchBltMode",3,prim_Win32HDC_cpp_getStretchBltMode},
  {"prim_Win32HDC_cpp_setBkColor",4,prim_Win32HDC_cpp_setBkColor},
  {"prim_Win32HDC_cpp_getBkColor",3,prim_Win32HDC_cpp_getBkColor},
  {"prim_Win32HDC_cpp_setTextColor",4,prim_Win32HDC_cpp_setTextColor},
  {"prim_Win32HDC_cpp_getTextColor",3,prim_Win32HDC_cpp_getTextColor},
  {"prim_Win32HDC_cpp_setBkMode",4,prim_Win32HDC_cpp_setBkMode},
  {"prim_Win32HDC_cpp_getBkMode",3,prim_Win32HDC_cpp_getBkMode},
  {"prim_Win32HDC_cpp_setBrushOrgEx",5,prim_Win32HDC_cpp_setBrushOrgEx},
  {"prim_Win32HDC_cpp_getBrushOrgEx",3,prim_Win32HDC_cpp_getBrushOrgEx},
  {"prim_Win32HDC_cpp_setTextAlign",4,prim_Win32HDC_cpp_setTextAlign},
  {"prim_Win32HDC_cpp_getTextAlign",3,prim_Win32HDC_cpp_getTextAlign},
  {"prim_Win32HDC_cpp_setTextCharacterExtra",4,prim_Win32HDC_cpp_setTextCharacterExtra},
  {"prim_Win32HDC_cpp_getTextCharacterExtra",3,prim_Win32HDC_cpp_getTextCharacterExtra},
  {"prim_Win32HDC_cpp_getMiterLimit",3,prim_Win32HDC_cpp_getMiterLimit},
  {"prim_Win32HDC_cpp_setMiterLimit",4,prim_Win32HDC_cpp_setMiterLimit},
  {"prim_Win32HDC_cpp_saveDC",3,prim_Win32HDC_cpp_saveDC},
  {"prim_Win32HDC_cpp_restoreDC",4,prim_Win32HDC_cpp_restoreDC},
  {"prim_Win32HDC_cpp_getCurrentBitmap",3,prim_Win32HDC_cpp_getCurrentBitmap},
  {"prim_Win32HDC_cpp_getCurrentBrush",3,prim_Win32HDC_cpp_getCurrentBrush},
  {"prim_Win32HDC_cpp_getCurrentFont",3,prim_Win32HDC_cpp_getCurrentFont},
  {"prim_Win32HDC_cpp_getCurrentPalette",3,prim_Win32HDC_cpp_getCurrentPalette},
  {"prim_Win32HDC_cpp_getCurrentPen",3,prim_Win32HDC_cpp_getCurrentPen},
  {"prim_Win32HDC_cpp_selectBitmap",4,prim_Win32HDC_cpp_selectBitmap},
  {"prim_Win32HDC_cpp_selectBrush",4,prim_Win32HDC_cpp_selectBrush},
  {"prim_Win32HDC_cpp_selectFont",4,prim_Win32HDC_cpp_selectFont},
  {"prim_Win32HDC_cpp_selectPen",4,prim_Win32HDC_cpp_selectPen},
  {"prim_Win32HDC_cpp_selectPalette",5,prim_Win32HDC_cpp_selectPalette},
  {"prim_Win32HDC_cpp_selectRgn",4,prim_Win32HDC_cpp_selectRgn},
  {"prim_Win32HDC_cpp_selectClipRgn",4,prim_Win32HDC_cpp_selectClipRgn},
  {"prim_Win32HDC_cpp_extSelectClipRgn",5,prim_Win32HDC_cpp_extSelectClipRgn},
  {"prim_Win32HDC_cpp_selectClipPath",4,prim_Win32HDC_cpp_selectClipPath},
  {"prim_Win32HDC_cpp_cancelDC",3,prim_Win32HDC_cpp_cancelDC},
  {"prim_Win32HDC_cpp_createCompatibleDC",3,prim_Win32HDC_cpp_createCompatibleDC},
  {"prim_Win32HDC_cpp_deleteDC",3,prim_Win32HDC_cpp_deleteDC},
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
