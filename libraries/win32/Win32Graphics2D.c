/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
PROTO_PRIM(prim_Win32Graphics2D_cpp_moveToEx);
primFun(prim_Win32Graphics2D_cpp_moveToEx)
{ HDC arg1; int arg2; int arg3;int gc_failed;
			       char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  { POINT res1;
     BOOL success = MoveToEx(arg1,arg2,arg3,&res1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("MoveToEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).y));
   hugs->putInt((LONG)((res1).x));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_lineTo);
primFun(prim_Win32Graphics2D_cpp_lineTo)
{ HDC arg1; int arg2; int arg3;int gc_failed;
			       char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  { BOOL success = LineTo(arg1,arg2,arg3);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("LineTo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_polyline);
primFun(prim_Win32Graphics2D_cpp_polyline)
{ HDC hdc; POINT * ps; int num_ps;int gc_failed;
				  char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  ps = (POINT *)(hugs->getAddr());
  num_ps = (int)(hugs->getInt());
  { BOOL success = Polyline(hdc,ps,num_ps);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("Polyline")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
    free(ps);}
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_polylineTo);
primFun(prim_Win32Graphics2D_cpp_polylineTo)
{ HDC hdc; POINT * ps; int num_ps;int gc_failed;
				  char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  ps = (POINT *)(hugs->getAddr());
  num_ps = (int)(hugs->getInt());
  { BOOL success = PolylineTo(hdc,ps,num_ps);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("PolylineTo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
    free(ps);}
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_polygon);
primFun(prim_Win32Graphics2D_cpp_polygon)
{ HDC hdc; POINT * ps; int num_ps;int gc_failed;
				  char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  ps = (POINT *)(hugs->getAddr());
  num_ps = (int)(hugs->getInt());
  { BOOL success = Polygon(hdc,ps,num_ps);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("Polygon")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
    free(ps);}
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_polyBezier);
primFun(prim_Win32Graphics2D_cpp_polyBezier)
{ HDC hdc; POINT * ps; int num_ps;int gc_failed;
				  char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  ps = (POINT *)(hugs->getAddr());
  num_ps = (int)(hugs->getInt());
  { BOOL success = PolyBezier(hdc, ps, num_ps);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("PolyBezier")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
    free(ps);}
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_polyBezierTo);
primFun(prim_Win32Graphics2D_cpp_polyBezierTo)
{ HDC hdc; POINT * ps; int num_ps;int gc_failed;
				  char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  ps = (POINT *)(hugs->getAddr());
  num_ps = (int)(hugs->getInt());
  { BOOL success = PolyBezierTo(hdc, ps, num_ps);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("PolyBezierTo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
    free(ps);}
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_fillRect);
primFun(prim_Win32Graphics2D_cpp_fillRect)
{ HDC arg1; HBRUSH arg3;RECT arg2;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  (arg2).left = (LONG)(hugs->getInt());
  (arg2).top = (LONG)(hugs->getInt());
  (arg2).right = (LONG)(hugs->getInt());
  (arg2).bottom = (LONG)(hugs->getInt());
  arg3 = (HBRUSH)(hugs->getAddr());
  { BOOL success = FillRect(arg1,&arg2,arg3);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("FillRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_frameRect);
primFun(prim_Win32Graphics2D_cpp_frameRect)
{ HDC arg1; HBRUSH arg3;RECT arg2;int gc_failed;
				  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  (arg2).left = (LONG)(hugs->getInt());
  (arg2).top = (LONG)(hugs->getInt());
  (arg2).right = (LONG)(hugs->getInt());
  (arg2).bottom = (LONG)(hugs->getInt());
  arg3 = (HBRUSH)(hugs->getAddr());
  { BOOL success = FrameRect(arg1,&arg2,arg3);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("FrameRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_invertRect);
primFun(prim_Win32Graphics2D_cpp_invertRect)
{ HDC arg1;RECT arg2;int gc_failed;
		     char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  (arg2).left = (LONG)(hugs->getInt());
  (arg2).top = (LONG)(hugs->getInt());
  (arg2).right = (LONG)(hugs->getInt());
  (arg2).bottom = (LONG)(hugs->getInt());
  { BOOL success = InvertRect(arg1,&arg2);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("InvertRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_rectangle);
primFun(prim_Win32Graphics2D_cpp_rectangle)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5;int gc_failed;
						   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  { BOOL success = Rectangle(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("Rectangle")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_roundRect);
primFun(prim_Win32Graphics2D_cpp_roundRect)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5; int arg6; int arg7;int gc_failed;
								       char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  arg7 = (int)(hugs->getInt());
  { BOOL success = RoundRect(arg1,arg2,arg3,arg4,arg5,arg6,arg7);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("RoundRect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_ellipse);
primFun(prim_Win32Graphics2D_cpp_ellipse)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5;int gc_failed;
						   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  { BOOL success = Ellipse(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("Ellipse")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_arc);
primFun(prim_Win32Graphics2D_cpp_arc)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5; int arg6; int arg7; int arg8; int arg9;int gc_failed;
											   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  arg7 = (int)(hugs->getInt());
  arg8 = (int)(hugs->getInt());
  arg9 = (int)(hugs->getInt());
  { BOOL success = Arc(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("Arc")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_arcTo);
primFun(prim_Win32Graphics2D_cpp_arcTo)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5; int arg6; int arg7; int arg8; int arg9;int gc_failed;
											   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  arg7 = (int)(hugs->getInt());
  arg8 = (int)(hugs->getInt());
  arg9 = (int)(hugs->getInt());
  { BOOL success = ArcTo(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("ArcTo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_angleArc);
primFun(prim_Win32Graphics2D_cpp_angleArc)
{ HDC arg1; int arg2; int arg3; WORD arg4; double arg5; double arg6;int gc_failed;
								    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (WORD)(hugs->getWord());
  arg5 = (double)(hugs->getDouble());
  arg6 = (double)(hugs->getDouble());
  { BOOL success = AngleArc(arg1,arg2,arg3,arg4,arg5,arg6);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("AngleArc")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_chord);
primFun(prim_Win32Graphics2D_cpp_chord)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5; int arg6; int arg7; int arg8; int arg9;int gc_failed;
											   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  arg7 = (int)(hugs->getInt());
  arg8 = (int)(hugs->getInt());
  arg9 = (int)(hugs->getInt());
  { BOOL success = Chord(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("Chord")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_pie);
primFun(prim_Win32Graphics2D_cpp_pie)
{ HDC arg1; int arg2; int arg3; int arg4; int arg5; int arg6; int arg7; int arg8; int arg9;int gc_failed;
											   char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (int)(hugs->getInt());
  arg7 = (int)(hugs->getInt());
  arg8 = (int)(hugs->getInt());
  arg9 = (int)(hugs->getInt());
  { BOOL success = Pie(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("Pie")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_bitBlt);
primFun(prim_Win32Graphics2D_cpp_bitBlt)
{ HDC arg1; INT arg2; INT arg3; INT arg4; INT arg5; HDC arg6; INT arg7; INT arg8; unsigned int arg9;int gc_failed;
												    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  arg5 = (INT)(hugs->getInt());
  arg6 = (HDC)(hugs->getAddr());
  arg7 = (INT)(hugs->getInt());
  arg8 = (INT)(hugs->getInt());
  arg9 = (unsigned int)(hugs->getWord());
  { BOOL success = BitBlt(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("BitBlt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_maskBlt);
primFun(prim_Win32Graphics2D_cpp_maskBlt)
{ HDC arg1; INT arg2; INT arg3; INT arg4; INT arg5; HDC arg6; INT arg7; INT arg8; HBITMAP arg9; INT arg10; INT arg11; unsigned int arg12;int gc_failed;
																	 char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  arg5 = (INT)(hugs->getInt());
  arg6 = (HDC)(hugs->getAddr());
  arg7 = (INT)(hugs->getInt());
  arg8 = (INT)(hugs->getInt());
  arg9 = (HBITMAP)(hugs->getAddr());
  arg10 = (INT)(hugs->getInt());
  arg11 = (INT)(hugs->getInt());
  arg12 = (unsigned int)(hugs->getWord());
  { BOOL success = MaskBlt(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11, arg12);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("MaskBlt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_stretchBlt);
primFun(prim_Win32Graphics2D_cpp_stretchBlt)
{ HDC arg1; INT arg2; INT arg3; INT arg4; INT arg5; HDC arg6; INT arg7; INT arg8; INT arg9; INT arg10; unsigned int arg11;int gc_failed;
															  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  arg5 = (INT)(hugs->getInt());
  arg6 = (HDC)(hugs->getAddr());
  arg7 = (INT)(hugs->getInt());
  arg8 = (INT)(hugs->getInt());
  arg9 = (INT)(hugs->getInt());
  arg10 = (INT)(hugs->getInt());
  arg11 = (unsigned int)(hugs->getWord());
  { BOOL success = StretchBlt(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("StretchBlt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_plgBlt);
primFun(prim_Win32Graphics2D_cpp_plgBlt)
{ HDC arg1; HDC arg2; INT x; INT y; INT w; INT h; HBITMAP bm; INT sx; INT sy;typedef POINT ThreePts[3]; ThreePts vertices;int gc_failed;
															  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  (vertices[0]).x = (LONG)(hugs->getInt());
  (vertices[0]).y = (LONG)(hugs->getInt());
  (vertices[1]).x = (LONG)(hugs->getInt());
  (vertices[1]).y = (LONG)(hugs->getInt());
  (vertices[2]).x = (LONG)(hugs->getInt());
  (vertices[2]).y = (LONG)(hugs->getInt());
  arg2 = (HDC)(hugs->getAddr());
  x = (INT)(hugs->getInt());
  y = (INT)(hugs->getInt());
  w = (INT)(hugs->getInt());
  h = (INT)(hugs->getInt());
  bm = (HBITMAP)(hugs->getAddr());
  sx = (INT)(hugs->getInt());
  sy = (INT)(hugs->getInt());
  { BOOL success = PlgBlt(arg1,vertices,arg2,x,y,w,h,bm,sx,sy);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("PlgBlt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_textOut);
primFun(prim_Win32Graphics2D_cpp_textOut)
{ HDC arg1; INT arg2; INT arg3; char * arg4; int arg5;int gc_failed;
						      char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (INT)(hugs->getInt());
  arg3 = (INT)(hugs->getInt());
  arg4 = (char *)(hugs->getAddr());
  arg5 = (int)(hugs->getInt());
  { BOOL success = TextOut(arg1,arg2,arg3,arg4,arg5);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("TextOut")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
     free(arg4);}
}
PROTO_PRIM(prim_Win32Graphics2D_cpp_getTextExtentPoint32);
primFun(prim_Win32Graphics2D_cpp_getTextExtentPoint32)
{ HDC hdc; char * str; int l;int gc_failed;
			     char* gc_failstring;;
  hdc = (HDC)(hugs->getAddr());
  str = (char *)(hugs->getAddr());
  l = (int)(hugs->getInt());
  { SIZE res1;
     BOOL success = GetTextExtentPoint32(hdc,str,l,&res1);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorWin("TextOut")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((res1).cy));
   hugs->putInt((LONG)((res1).cx));
   hugs_returnIO(4);
    free(str);}
}
static struct primitive primTable[] = {
  {"prim_Win32Graphics2D_cpp_moveToEx",5,prim_Win32Graphics2D_cpp_moveToEx},
  {"prim_Win32Graphics2D_cpp_lineTo",5,prim_Win32Graphics2D_cpp_lineTo},
  {"prim_Win32Graphics2D_cpp_polyline",5,prim_Win32Graphics2D_cpp_polyline},
  {"prim_Win32Graphics2D_cpp_polylineTo",5,prim_Win32Graphics2D_cpp_polylineTo},
  {"prim_Win32Graphics2D_cpp_polygon",5,prim_Win32Graphics2D_cpp_polygon},
  {"prim_Win32Graphics2D_cpp_polyBezier",5,prim_Win32Graphics2D_cpp_polyBezier},
  {"prim_Win32Graphics2D_cpp_polyBezierTo",5,prim_Win32Graphics2D_cpp_polyBezierTo},
  {"prim_Win32Graphics2D_cpp_fillRect",8,prim_Win32Graphics2D_cpp_fillRect},
  {"prim_Win32Graphics2D_cpp_frameRect",8,prim_Win32Graphics2D_cpp_frameRect},
  {"prim_Win32Graphics2D_cpp_invertRect",7,prim_Win32Graphics2D_cpp_invertRect},
  {"prim_Win32Graphics2D_cpp_rectangle",7,prim_Win32Graphics2D_cpp_rectangle},
  {"prim_Win32Graphics2D_cpp_roundRect",9,prim_Win32Graphics2D_cpp_roundRect},
  {"prim_Win32Graphics2D_cpp_ellipse",7,prim_Win32Graphics2D_cpp_ellipse},
  {"prim_Win32Graphics2D_cpp_arc",11,prim_Win32Graphics2D_cpp_arc},
  {"prim_Win32Graphics2D_cpp_arcTo",11,prim_Win32Graphics2D_cpp_arcTo},
  {"prim_Win32Graphics2D_cpp_angleArc",8,prim_Win32Graphics2D_cpp_angleArc},
  {"prim_Win32Graphics2D_cpp_chord",11,prim_Win32Graphics2D_cpp_chord},
  {"prim_Win32Graphics2D_cpp_pie",11,prim_Win32Graphics2D_cpp_pie},
  {"prim_Win32Graphics2D_cpp_bitBlt",11,prim_Win32Graphics2D_cpp_bitBlt},
  {"prim_Win32Graphics2D_cpp_maskBlt",14,prim_Win32Graphics2D_cpp_maskBlt},
  {"prim_Win32Graphics2D_cpp_stretchBlt",13,prim_Win32Graphics2D_cpp_stretchBlt},
  {"prim_Win32Graphics2D_cpp_plgBlt",17,prim_Win32Graphics2D_cpp_plgBlt},
  {"prim_Win32Graphics2D_cpp_textOut",7,prim_Win32Graphics2D_cpp_textOut},
  {"prim_Win32Graphics2D_cpp_getTextExtentPoint32",5,prim_Win32Graphics2D_cpp_getTextExtentPoint32},
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
