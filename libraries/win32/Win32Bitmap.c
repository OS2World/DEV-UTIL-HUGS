/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  "Win32Aux.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
#include  "finalizers.h"
#include  "dumpBMP.h"
PROTO_PRIM(prim_Win32Bitmap_cpp_sRCCOPY);
primFun(prim_Win32Bitmap_cpp_sRCCOPY)
{ unsigned int res1;;
  {res1=SRCCOPY;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sRCPAINT);
primFun(prim_Win32Bitmap_cpp_sRCPAINT)
{ unsigned int res1;;
  {res1=SRCPAINT;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sRCAND);
primFun(prim_Win32Bitmap_cpp_sRCAND)
{ unsigned int res1;;
  {res1=SRCAND;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sRCINVERT);
primFun(prim_Win32Bitmap_cpp_sRCINVERT)
{ unsigned int res1;;
  {res1=SRCINVERT;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sRCERASE);
primFun(prim_Win32Bitmap_cpp_sRCERASE)
{ unsigned int res1;;
  {res1=SRCERASE;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_nOTSRCCOPY);
primFun(prim_Win32Bitmap_cpp_nOTSRCCOPY)
{ unsigned int res1;;
  {res1=NOTSRCCOPY;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_nOTSRCERASE);
primFun(prim_Win32Bitmap_cpp_nOTSRCERASE)
{ unsigned int res1;;
  {res1=NOTSRCERASE;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_mERGECOPY);
primFun(prim_Win32Bitmap_cpp_mERGECOPY)
{ unsigned int res1;;
  {res1=MERGECOPY;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_mERGEPAINT);
primFun(prim_Win32Bitmap_cpp_mERGEPAINT)
{ unsigned int res1;;
  {res1=MERGEPAINT;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_pATCOPY);
primFun(prim_Win32Bitmap_cpp_pATCOPY)
{ unsigned int res1;;
  {res1=PATCOPY;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_pATPAINT);
primFun(prim_Win32Bitmap_cpp_pATPAINT)
{ unsigned int res1;;
  {res1=PATPAINT;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_pATINVERT);
primFun(prim_Win32Bitmap_cpp_pATINVERT)
{ unsigned int res1;;
  {res1=PATINVERT;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_dSTINVERT);
primFun(prim_Win32Bitmap_cpp_dSTINVERT)
{ unsigned int res1;;
  {res1=DSTINVERT;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_bLACKNESS);
primFun(prim_Win32Bitmap_cpp_bLACKNESS)
{ unsigned int res1;;
  {res1=BLACKNESS;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_wHITENESS);
primFun(prim_Win32Bitmap_cpp_wHITENESS)
{ unsigned int res1;;
  {res1=WHITENESS;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_mAKEROP4);
primFun(prim_Win32Bitmap_cpp_mAKEROP4)
{ unsigned int arg1; unsigned int arg2;unsigned int res1;;
  arg1 = (unsigned int)(hugs->getWord());
  arg2 = (unsigned int)(hugs->getWord());
  {res1 = MAKEROP4(arg1, arg2);
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_setBITMAP);
primFun(prim_Win32Bitmap_cpp_setBITMAP)
{ BITMAP * arg1;;
  arg1 = (BITMAP *)(hugs->getAddr());
  (*arg1).bmType = (LONG)(hugs->getInt());
  (*arg1).bmWidth = (LONG)(hugs->getInt());
  (*arg1).bmHeight = (LONG)(hugs->getInt());
  (*arg1).bmWidthBytes = (LONG)(hugs->getInt());
  (*arg1).bmPlanes = (WORD)(hugs->getWord());
  (*arg1).bmBitsPixel = (WORD)(hugs->getWord());
  (*arg1).bmBits = (LPVOID)(hugs->getAddr());
  {hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_deleteBitmap);
primFun(prim_Win32Bitmap_cpp_deleteBitmap)
{ HBITMAP arg1;int gc_failed;
	       char* gc_failstring;;
  arg1 = (HBITMAP)(hugs->getAddr());
  { BOOL res = DeleteObject(arg1);
   if ((gc_failed = (  !res  ))) {gc_failstring =  ErrorString("DeleteBitmap")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_createCompatibleBitmap);
primFun(prim_Win32Bitmap_cpp_createCompatibleBitmap)
{ HDC arg1; int arg2; int arg3;HBITMAP res1;int gc_failed;
					    char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  {res1 = CreateCompatibleBitmap(arg1, arg2, arg3);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("CreateCompatibleBitmap")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBITMAP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_createBitmap);
primFun(prim_Win32Bitmap_cpp_createBitmap)
{ INT arg1; INT arg2; UINT arg3; UINT arg4; LPVOID arg5;HBITMAP res1;int gc_failed;
								     char* gc_failstring;;
  arg1 = (INT)(hugs->getInt());
  arg2 = (INT)(hugs->getInt());
  arg3 = (UINT)(hugs->getWord());
  arg4 = (UINT)(hugs->getWord());
  arg5 = (LPVOID)(hugs->getAddr());
  {res1 = CreateBitmap(arg1, arg2, arg3, arg4, arg5);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("CreateBitmap")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBITMAP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_createBitmapIndirect);
primFun(prim_Win32Bitmap_cpp_createBitmapIndirect)
{ BITMAP * arg1;HBITMAP res1;int gc_failed;
			     char* gc_failstring;;
  arg1 = (BITMAP *)(hugs->getAddr());
  {res1 = CreateBitmapIndirect(arg1);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("CreateBitmapIndirect")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBITMAP)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_createDIBPatternBrushPt);
primFun(prim_Win32Bitmap_cpp_createDIBPatternBrushPt)
{ LPVOID arg1; DWORD arg2;HBRUSH res1;int gc_failed;
				      char* gc_failstring;;
  arg1 = (LPVOID)(hugs->getAddr());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = CreateDIBPatternBrushPt(arg1, arg2);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("CreateDIBPatternBrushPt")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBRUSH)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_getBitmapDimensionEx);
primFun(prim_Win32Bitmap_cpp_getBitmapDimensionEx)
{ HBITMAP h;int gc_failed;
	    char* gc_failstring;;
  h = (HBITMAP)(hugs->getAddr());
  { SIZE sz; 
     BOOL success = GetBitmapDimensionEx(h,&sz);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("GetBitmapDimensionEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((sz).cy));
   hugs->putInt((LONG)((sz).cx));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_setBitmapDimensionEx);
primFun(prim_Win32Bitmap_cpp_setBitmapDimensionEx)
{ HBITMAP h;SIZE sz_in;int gc_failed;
		       char* gc_failstring;;
  h = (HBITMAP)(hugs->getAddr());
  (sz_in).cx = (LONG)(hugs->getInt());
  (sz_in).cy = (LONG)(hugs->getInt());
  { SIZE sz_out;
     BOOL success = SetBitmapDimensionEx(h,sz_in.cx,sz_in.cy,&sz_out);
   if ((gc_failed = (  !success  ))) {gc_failstring =  ErrorString("SetBitmapDimensionEx")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((LONG)((sz_out).cy));
   hugs->putInt((LONG)((sz_out).cx));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_getBitmapInfo);
primFun(prim_Win32Bitmap_cpp_getBitmapInfo)
{ HBITMAP x;int gc_failed;
	    char* gc_failstring;;
  x = (HBITMAP)(hugs->getAddr());
  { BITMAP bm;
     int nbytes = GetObject(x,sizeof(BITMAP),&bm);
   if ((gc_failed = (  nbytes != sizeof(BITMAP)  ))) {gc_failstring =  ErrorWin("getBitmapInfo")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((LPVOID)((bm).bmBits));
   hugs->putWord((WORD)((bm).bmBitsPixel));
   hugs->putWord((WORD)((bm).bmPlanes));
   hugs->putInt((LONG)((bm).bmWidthBytes));
   hugs->putInt((LONG)((bm).bmHeight));
   hugs->putInt((LONG)((bm).bmWidth));
   hugs->putInt((LONG)((bm).bmType));
   hugs_returnIO(9);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_bI_RGB);
primFun(prim_Win32Bitmap_cpp_bI_RGB)
{ WORD res1;;
  {res1=BI_RGB;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_bI_RLE8);
primFun(prim_Win32Bitmap_cpp_bI_RLE8)
{ WORD res1;;
  {res1=BI_RLE8;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_bI_RLE4);
primFun(prim_Win32Bitmap_cpp_bI_RLE4)
{ WORD res1;;
  {res1=BI_RLE4;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_bI_BITFIELDS);
primFun(prim_Win32Bitmap_cpp_bI_BITFIELDS)
{ WORD res1;;
  {res1=BI_BITFIELDS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_dIB_PAL_COLORS);
primFun(prim_Win32Bitmap_cpp_dIB_PAL_COLORS)
{ DWORD res1;;
  {res1=DIB_PAL_COLORS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_dIB_RGB_COLORS);
primFun(prim_Win32Bitmap_cpp_dIB_RGB_COLORS)
{ DWORD res1;;
  {res1=DIB_RGB_COLORS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_getBITMAPINFOHEADER_);
primFun(prim_Win32Bitmap_cpp_getBITMAPINFOHEADER_)
{ BITMAPINFOHEADER * arg1;;
  arg1 = (BITMAPINFOHEADER *)(hugs->getAddr());
  {hugs->putWord((DWORD)((*arg1).biClrImportant));
   hugs->putWord((DWORD)((*arg1).biClrUsed));
   hugs->putInt((LONG)((*arg1).biYPelsPerMeter));
   hugs->putInt((LONG)((*arg1).biXPelsPerMeter));
   hugs->putWord((DWORD)((*arg1).biSizeImage));
   hugs->putWord((WORD)((*arg1).biCompression));
   hugs->putWord((WORD)((*arg1).biBitCount));
   hugs->putWord((WORD)((*arg1).biPlanes));
   hugs->putInt((LONG)((*arg1).biHeight));
   hugs->putInt((LONG)((*arg1).biWidth));
   hugs->putWord((DWORD)((*arg1).biSize));
   hugs_returnIO(11);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_getBITMAPFILEHEADER);
primFun(prim_Win32Bitmap_cpp_getBITMAPFILEHEADER)
{ BITMAPFILEHEADER * arg1;;
  arg1 = (BITMAPFILEHEADER *)(hugs->getAddr());
  {hugs->putWord((DWORD)((*arg1).bfOffBits));
   hugs->putWord((WORD)((*arg1).bfReserved2));
   hugs->putWord((WORD)((*arg1).bfReserved1));
   hugs->putWord((DWORD)((*arg1).bfSize));
   hugs->putWord((WORD)((*arg1).bfType));
   hugs_returnIO(5);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sizeofBITMAP);
primFun(prim_Win32Bitmap_cpp_sizeofBITMAP)
{ unsigned int res1;;
  {res1= sizeof(BITMAP)           ;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sizeofBITMAPINFO);
primFun(prim_Win32Bitmap_cpp_sizeofBITMAPINFO)
{ unsigned int res1;;
  {res1= sizeof(BITMAPINFO)       ;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sizeofBITMAPINFOHEADER);
primFun(prim_Win32Bitmap_cpp_sizeofBITMAPINFOHEADER)
{ unsigned int res1;;
  {res1= sizeof(BITMAPINFOHEADER) ;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sizeofBITMAPFILEHEADER);
primFun(prim_Win32Bitmap_cpp_sizeofBITMAPFILEHEADER)
{ unsigned int res1;;
  {res1= sizeof(BITMAPFILEHEADER) ;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_sizeofLPBITMAPFILEHEADER);
primFun(prim_Win32Bitmap_cpp_sizeofLPBITMAPFILEHEADER)
{ unsigned int res1;;
  {res1= sizeof(BITMAPFILEHEADER) ;
   hugs->putWord((unsigned int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_createBMPFile);
primFun(prim_Win32Bitmap_cpp_createBMPFile)
{ char * arg1; HBITMAP arg2; HDC arg3;;
  arg1 = (char *)(hugs->getAddr());
  arg2 = (HBITMAP)(hugs->getAddr());
  arg3 = (HDC)(hugs->getAddr());
  {CreateBMPFile(arg1, arg2, arg3);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_cBM_INIT);
primFun(prim_Win32Bitmap_cpp_cBM_INIT)
{ DWORD res1;;
  {res1=CBM_INIT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_getDIBits);
primFun(prim_Win32Bitmap_cpp_getDIBits)
{ HDC arg1; HBITMAP arg2; INT arg3; INT arg4; LPVOID arg5; BITMAPINFO * arg6; DWORD arg7;INT res1;int gc_failed;
												  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HBITMAP)(hugs->getAddr());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  arg5 = (LPVOID)(hugs->getAddr());
  arg6 = (BITMAPINFO *)(hugs->getAddr());
  arg7 = (DWORD)(hugs->getWord());
  {res1 = GetDIBits(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("GetDIBits")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((INT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_setDIBits);
primFun(prim_Win32Bitmap_cpp_setDIBits)
{ HDC arg1; HBITMAP arg2; INT arg3; INT arg4; LPVOID arg5; BITMAPINFO * arg6; DWORD arg7;INT res1;int gc_failed;
												  char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (HBITMAP)(hugs->getAddr());
  arg3 = (INT)(hugs->getInt());
  arg4 = (INT)(hugs->getInt());
  arg5 = (LPVOID)(hugs->getAddr());
  arg6 = (BITMAPINFO *)(hugs->getAddr());
  arg7 = (DWORD)(hugs->getWord());
  {res1 = SetDIBits(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorWin("SetDIBits")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((INT)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Bitmap_cpp_createDIBitmap);
primFun(prim_Win32Bitmap_cpp_createDIBitmap)
{ HDC arg1; BITMAPINFOHEADER * arg2; DWORD arg3; LPVOID arg4; BITMAPINFO * arg5; DWORD arg6;HBITMAP res1;int gc_failed;
													 char* gc_failstring;;
  arg1 = (HDC)(hugs->getAddr());
  arg2 = (BITMAPINFOHEADER *)(hugs->getAddr());
  arg3 = (DWORD)(hugs->getWord());
  arg4 = (LPVOID)(hugs->getAddr());
  arg5 = (BITMAPINFO *)(hugs->getAddr());
  arg6 = (DWORD)(hugs->getWord());
  {res1 = CreateDIBitmap(arg1, arg2, arg3, arg4, arg5, arg6);
   if ((gc_failed = (  res1 == 0  ))) {gc_failstring =  ErrorString("CreateDIBitmap")  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HBITMAP)(res1));
   hugs_returnIO(3);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Bitmap_cpp_sRCCOPY",2,prim_Win32Bitmap_cpp_sRCCOPY},
  {"prim_Win32Bitmap_cpp_sRCPAINT",2,prim_Win32Bitmap_cpp_sRCPAINT},
  {"prim_Win32Bitmap_cpp_sRCAND",2,prim_Win32Bitmap_cpp_sRCAND},
  {"prim_Win32Bitmap_cpp_sRCINVERT",2,prim_Win32Bitmap_cpp_sRCINVERT},
  {"prim_Win32Bitmap_cpp_sRCERASE",2,prim_Win32Bitmap_cpp_sRCERASE},
  {"prim_Win32Bitmap_cpp_nOTSRCCOPY",2,prim_Win32Bitmap_cpp_nOTSRCCOPY},
  {"prim_Win32Bitmap_cpp_nOTSRCERASE",2,prim_Win32Bitmap_cpp_nOTSRCERASE},
  {"prim_Win32Bitmap_cpp_mERGECOPY",2,prim_Win32Bitmap_cpp_mERGECOPY},
  {"prim_Win32Bitmap_cpp_mERGEPAINT",2,prim_Win32Bitmap_cpp_mERGEPAINT},
  {"prim_Win32Bitmap_cpp_pATCOPY",2,prim_Win32Bitmap_cpp_pATCOPY},
  {"prim_Win32Bitmap_cpp_pATPAINT",2,prim_Win32Bitmap_cpp_pATPAINT},
  {"prim_Win32Bitmap_cpp_pATINVERT",2,prim_Win32Bitmap_cpp_pATINVERT},
  {"prim_Win32Bitmap_cpp_dSTINVERT",2,prim_Win32Bitmap_cpp_dSTINVERT},
  {"prim_Win32Bitmap_cpp_bLACKNESS",2,prim_Win32Bitmap_cpp_bLACKNESS},
  {"prim_Win32Bitmap_cpp_wHITENESS",2,prim_Win32Bitmap_cpp_wHITENESS},
  {"prim_Win32Bitmap_cpp_mAKEROP4",4,prim_Win32Bitmap_cpp_mAKEROP4},
  {"prim_Win32Bitmap_cpp_setBITMAP",10,prim_Win32Bitmap_cpp_setBITMAP},
  {"prim_Win32Bitmap_cpp_deleteBitmap",3,prim_Win32Bitmap_cpp_deleteBitmap},
  {"prim_Win32Bitmap_cpp_createCompatibleBitmap",5,prim_Win32Bitmap_cpp_createCompatibleBitmap},
  {"prim_Win32Bitmap_cpp_createBitmap",7,prim_Win32Bitmap_cpp_createBitmap},
  {"prim_Win32Bitmap_cpp_createBitmapIndirect",3,prim_Win32Bitmap_cpp_createBitmapIndirect},
  {"prim_Win32Bitmap_cpp_createDIBPatternBrushPt",4,prim_Win32Bitmap_cpp_createDIBPatternBrushPt},
  {"prim_Win32Bitmap_cpp_getBitmapDimensionEx",3,prim_Win32Bitmap_cpp_getBitmapDimensionEx},
  {"prim_Win32Bitmap_cpp_setBitmapDimensionEx",5,prim_Win32Bitmap_cpp_setBitmapDimensionEx},
  {"prim_Win32Bitmap_cpp_getBitmapInfo",3,prim_Win32Bitmap_cpp_getBitmapInfo},
  {"prim_Win32Bitmap_cpp_bI_RGB",2,prim_Win32Bitmap_cpp_bI_RGB},
  {"prim_Win32Bitmap_cpp_bI_RLE8",2,prim_Win32Bitmap_cpp_bI_RLE8},
  {"prim_Win32Bitmap_cpp_bI_RLE4",2,prim_Win32Bitmap_cpp_bI_RLE4},
  {"prim_Win32Bitmap_cpp_bI_BITFIELDS",2,prim_Win32Bitmap_cpp_bI_BITFIELDS},
  {"prim_Win32Bitmap_cpp_dIB_PAL_COLORS",2,prim_Win32Bitmap_cpp_dIB_PAL_COLORS},
  {"prim_Win32Bitmap_cpp_dIB_RGB_COLORS",2,prim_Win32Bitmap_cpp_dIB_RGB_COLORS},
  {"prim_Win32Bitmap_cpp_getBITMAPINFOHEADER_",3,prim_Win32Bitmap_cpp_getBITMAPINFOHEADER_},
  {"prim_Win32Bitmap_cpp_getBITMAPFILEHEADER",3,prim_Win32Bitmap_cpp_getBITMAPFILEHEADER},
  {"prim_Win32Bitmap_cpp_sizeofBITMAP",2,prim_Win32Bitmap_cpp_sizeofBITMAP},
  {"prim_Win32Bitmap_cpp_sizeofBITMAPINFO",2,prim_Win32Bitmap_cpp_sizeofBITMAPINFO},
  {"prim_Win32Bitmap_cpp_sizeofBITMAPINFOHEADER",2,prim_Win32Bitmap_cpp_sizeofBITMAPINFOHEADER},
  {"prim_Win32Bitmap_cpp_sizeofBITMAPFILEHEADER",2,prim_Win32Bitmap_cpp_sizeofBITMAPFILEHEADER},
  {"prim_Win32Bitmap_cpp_sizeofLPBITMAPFILEHEADER",2,prim_Win32Bitmap_cpp_sizeofLPBITMAPFILEHEADER},
  {"prim_Win32Bitmap_cpp_createBMPFile",5,prim_Win32Bitmap_cpp_createBMPFile},
  {"prim_Win32Bitmap_cpp_cBM_INIT",2,prim_Win32Bitmap_cpp_cBM_INIT},
  {"prim_Win32Bitmap_cpp_getDIBits",9,prim_Win32Bitmap_cpp_getDIBits},
  {"prim_Win32Bitmap_cpp_setDIBits",9,prim_Win32Bitmap_cpp_setDIBits},
  {"prim_Win32Bitmap_cpp_createDIBitmap",8,prim_Win32Bitmap_cpp_createDIBitmap},
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
