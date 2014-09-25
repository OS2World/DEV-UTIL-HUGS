/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <windows.h>
#include  "errors.h"
#include  "win32debug.h"
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SYSTEM_DEFAULT);
primFun(prim_Win32NLS_cpp_lOCALE_SYSTEM_DEFAULT)
{ DWORD res1;;
  {res1=LOCALE_SYSTEM_DEFAULT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_USER_DEFAULT);
primFun(prim_Win32NLS_cpp_lOCALE_USER_DEFAULT)
{ DWORD res1;;
  {res1=LOCALE_USER_DEFAULT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_NEUTRAL);
primFun(prim_Win32NLS_cpp_lOCALE_NEUTRAL)
{ DWORD res1;;
  {res1=LOCALE_NEUTRAL;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_convertDefaultLocale);
primFun(prim_Win32NLS_cpp_convertDefaultLocale)
{ DWORD arg1;DWORD res1;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = ConvertDefaultLocale(arg1);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_cP_ACP);
primFun(prim_Win32NLS_cpp_cP_ACP)
{ UINT res1;;
  {res1=CP_ACP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_cP_MACCP);
primFun(prim_Win32NLS_cpp_cP_MACCP)
{ UINT res1;;
  {res1=CP_MACCP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_cP_OEMCP);
primFun(prim_Win32NLS_cpp_cP_OEMCP)
{ UINT res1;;
  {res1=CP_OEMCP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getACP);
primFun(prim_Win32NLS_cpp_getACP)
{ UINT res1;;
  {res1 = GetACP();
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_setThreadLocale);
primFun(prim_Win32NLS_cpp_setThreadLocale)
{ DWORD arg1;;
  arg1 = (DWORD)(hugs->getWord());
  {SetThreadLocale(arg1);
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_ICALENDARTYPE);
primFun(prim_Win32NLS_cpp_lOCALE_ICALENDARTYPE)
{ UINT res1;;
  {res1=LOCALE_ICALENDARTYPE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SDATE);
primFun(prim_Win32NLS_cpp_lOCALE_SDATE)
{ UINT res1;;
  {res1=LOCALE_SDATE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_ICURRDIGITS);
primFun(prim_Win32NLS_cpp_lOCALE_ICURRDIGITS)
{ UINT res1;;
  {res1=LOCALE_ICURRDIGITS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SDECIMAL);
primFun(prim_Win32NLS_cpp_lOCALE_SDECIMAL)
{ UINT res1;;
  {res1=LOCALE_SDECIMAL;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_ICURRENCY);
primFun(prim_Win32NLS_cpp_lOCALE_ICURRENCY)
{ UINT res1;;
  {res1=LOCALE_ICURRENCY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SGROUPING);
primFun(prim_Win32NLS_cpp_lOCALE_SGROUPING)
{ UINT res1;;
  {res1=LOCALE_SGROUPING;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_IDIGITS);
primFun(prim_Win32NLS_cpp_lOCALE_IDIGITS)
{ UINT res1;;
  {res1=LOCALE_IDIGITS;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SLIST);
primFun(prim_Win32NLS_cpp_lOCALE_SLIST)
{ UINT res1;;
  {res1=LOCALE_SLIST;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_IFIRSTDAYOFWEEK);
primFun(prim_Win32NLS_cpp_lOCALE_IFIRSTDAYOFWEEK)
{ UINT res1;;
  {res1=LOCALE_IFIRSTDAYOFWEEK;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SLONGDATE);
primFun(prim_Win32NLS_cpp_lOCALE_SLONGDATE)
{ UINT res1;;
  {res1=LOCALE_SLONGDATE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_IFIRSTWEEKOFYEAR);
primFun(prim_Win32NLS_cpp_lOCALE_IFIRSTWEEKOFYEAR)
{ UINT res1;;
  {res1=LOCALE_IFIRSTWEEKOFYEAR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SMONDECIMALSEP);
primFun(prim_Win32NLS_cpp_lOCALE_SMONDECIMALSEP)
{ UINT res1;;
  {res1=LOCALE_SMONDECIMALSEP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_ILZERO);
primFun(prim_Win32NLS_cpp_lOCALE_ILZERO)
{ UINT res1;;
  {res1=LOCALE_ILZERO;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SMONGROUPING);
primFun(prim_Win32NLS_cpp_lOCALE_SMONGROUPING)
{ UINT res1;;
  {res1=LOCALE_SMONGROUPING;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_IMEASURE);
primFun(prim_Win32NLS_cpp_lOCALE_IMEASURE)
{ UINT res1;;
  {res1=LOCALE_IMEASURE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SMONTHOUSANDSEP);
primFun(prim_Win32NLS_cpp_lOCALE_SMONTHOUSANDSEP)
{ UINT res1;;
  {res1=LOCALE_SMONTHOUSANDSEP;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_INEGCURR);
primFun(prim_Win32NLS_cpp_lOCALE_INEGCURR)
{ UINT res1;;
  {res1=LOCALE_INEGCURR;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SNEGATIVESIGN);
primFun(prim_Win32NLS_cpp_lOCALE_SNEGATIVESIGN)
{ UINT res1;;
  {res1=LOCALE_SNEGATIVESIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_INEGNUMBER);
primFun(prim_Win32NLS_cpp_lOCALE_INEGNUMBER)
{ UINT res1;;
  {res1=LOCALE_INEGNUMBER;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SPOSITIVESIGN);
primFun(prim_Win32NLS_cpp_lOCALE_SPOSITIVESIGN)
{ UINT res1;;
  {res1=LOCALE_SPOSITIVESIGN;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SSHORTDATE);
primFun(prim_Win32NLS_cpp_lOCALE_SSHORTDATE)
{ UINT res1;;
  {res1=LOCALE_SSHORTDATE;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_ITIME);
primFun(prim_Win32NLS_cpp_lOCALE_ITIME)
{ UINT res1;;
  {res1=LOCALE_ITIME;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_STHOUSAND);
primFun(prim_Win32NLS_cpp_lOCALE_STHOUSAND)
{ UINT res1;;
  {res1=LOCALE_STHOUSAND;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_S1159);
primFun(prim_Win32NLS_cpp_lOCALE_S1159)
{ UINT res1;;
  {res1=LOCALE_S1159;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_STIME);
primFun(prim_Win32NLS_cpp_lOCALE_STIME)
{ UINT res1;;
  {res1=LOCALE_STIME;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_S2359);
primFun(prim_Win32NLS_cpp_lOCALE_S2359)
{ UINT res1;;
  {res1=LOCALE_S2359;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_STIMEFORMAT);
primFun(prim_Win32NLS_cpp_lOCALE_STIMEFORMAT)
{ UINT res1;;
  {res1=LOCALE_STIMEFORMAT;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lOCALE_SCURRENCY);
primFun(prim_Win32NLS_cpp_lOCALE_SCURRENCY)
{ UINT res1;;
  {res1=LOCALE_SCURRENCY;
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_setLocaleInfo);
primFun(prim_Win32NLS_cpp_setLocaleInfo)
{ DWORD arg1; UINT arg2;int gc_failed;
			char* gc_failstring;;
  arg1 = (DWORD)(hugs->getWord());
  arg2 = (UINT)(hugs->getWord());
  { LPCSTR s;
     BOOL b = SetLocaleInfo(arg1,arg2,s);
   if ((gc_failed = (  b == FALSE  ))) {gc_failstring = ErrorWin("SetLocaleInfo") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(s));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_BYTEREV);
primFun(prim_Win32NLS_cpp_lCMAP_BYTEREV)
{ DWORD res1;;
  {res1=LCMAP_BYTEREV;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_FULLWIDTH);
primFun(prim_Win32NLS_cpp_lCMAP_FULLWIDTH)
{ DWORD res1;;
  {res1=LCMAP_FULLWIDTH;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_HALFWIDTH);
primFun(prim_Win32NLS_cpp_lCMAP_HALFWIDTH)
{ DWORD res1;;
  {res1=LCMAP_HALFWIDTH;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_HIRAGANA);
primFun(prim_Win32NLS_cpp_lCMAP_HIRAGANA)
{ DWORD res1;;
  {res1=LCMAP_HIRAGANA;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_KATAKANA);
primFun(prim_Win32NLS_cpp_lCMAP_KATAKANA)
{ DWORD res1;;
  {res1=LCMAP_KATAKANA;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_LINGUISTIC_CASING);
primFun(prim_Win32NLS_cpp_lCMAP_LINGUISTIC_CASING)
{ DWORD res1;;
  {res1=LCMAP_LINGUISTIC_CASING;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_LOWERCASE);
primFun(prim_Win32NLS_cpp_lCMAP_LOWERCASE)
{ DWORD res1;;
  {res1=LCMAP_LOWERCASE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_SIMPLIFIED_CHINESE);
primFun(prim_Win32NLS_cpp_lCMAP_SIMPLIFIED_CHINESE)
{ DWORD res1;;
  {res1=LCMAP_SIMPLIFIED_CHINESE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_SORTKEY);
primFun(prim_Win32NLS_cpp_lCMAP_SORTKEY)
{ DWORD res1;;
  {res1=LCMAP_SORTKEY;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_TRADITIONAL_CHINESE);
primFun(prim_Win32NLS_cpp_lCMAP_TRADITIONAL_CHINESE)
{ DWORD res1;;
  {res1=LCMAP_TRADITIONAL_CHINESE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMAP_UPPERCASE);
primFun(prim_Win32NLS_cpp_lCMAP_UPPERCASE)
{ DWORD res1;;
  {res1=LCMAP_UPPERCASE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_nORM_IGNORECASE);
primFun(prim_Win32NLS_cpp_nORM_IGNORECASE)
{ DWORD res1;;
  {res1=NORM_IGNORECASE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_nORM_IGNORENONSPACE);
primFun(prim_Win32NLS_cpp_nORM_IGNORENONSPACE)
{ DWORD res1;;
  {res1=NORM_IGNORENONSPACE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_nORM_IGNOREKANATYPE);
primFun(prim_Win32NLS_cpp_nORM_IGNOREKANATYPE)
{ DWORD res1;;
  {res1=NORM_IGNOREKANATYPE;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_nORM_IGNORESYMBOLS);
primFun(prim_Win32NLS_cpp_nORM_IGNORESYMBOLS)
{ DWORD res1;;
  {res1=NORM_IGNORESYMBOLS;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_nORM_IGNOREWIDTH);
primFun(prim_Win32NLS_cpp_nORM_IGNOREWIDTH)
{ DWORD res1;;
  {res1=NORM_IGNOREWIDTH;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_STRINGSORT);
primFun(prim_Win32NLS_cpp_sORT_STRINGSORT)
{ DWORD res1;;
  {res1=SORT_STRINGSORT;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCMapString);
primFun(prim_Win32NLS_cpp_lCMapString)
{ DWORD arg1; DWORD arg2; char * arg3; int arg3_len; int arg4;int gc_failed;
							      char* gc_failstring;;
  arg1 = (DWORD)(hugs->getWord());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (char *)(hugs->getAddr());
  arg3_len = (int)(hugs->getInt());
  arg4 = (int)(hugs->getInt());
  { int i; char* str;
     str = malloc(sizeof(char)*arg4);
     i = LCMapString(arg1,arg2,arg3,arg3_len,str,arg4);
   if ((gc_failed = (  i == 0  ))) {gc_failstring =  ErrorWin("LCMapString") ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(str));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCID_INSTALLED);
primFun(prim_Win32NLS_cpp_lCID_INSTALLED)
{ DWORD res1;;
  {res1=LCID_INSTALLED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lCID_SUPPORTED);
primFun(prim_Win32NLS_cpp_lCID_SUPPORTED)
{ DWORD res1;;
  {res1=LCID_SUPPORTED;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_isValidLocale);
primFun(prim_Win32NLS_cpp_isValidLocale)
{ DWORD arg1; DWORD arg2;int res1;;
  arg1 = (DWORD)(hugs->getWord());
  arg2 = (DWORD)(hugs->getWord());
  {res1 = IsValidLocale(arg1, arg2);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_isValidCodePage);
primFun(prim_Win32NLS_cpp_isValidCodePage)
{ UINT arg1;int res1;;
  arg1 = (UINT)(hugs->getWord());
  {res1 = IsValidCodePage(arg1);
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getUserDefaultLCID);
primFun(prim_Win32NLS_cpp_getUserDefaultLCID)
{ DWORD res1;;
  {res1 = GetUserDefaultLCID();
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getUserDefaultLangID);
primFun(prim_Win32NLS_cpp_getUserDefaultLangID)
{ WORD res1;;
  {res1 = GetUserDefaultLangID();
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getThreadLocale);
primFun(prim_Win32NLS_cpp_getThreadLocale)
{ DWORD res1;;
  {res1 = GetThreadLocale();
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getSystemDefaultLCID);
primFun(prim_Win32NLS_cpp_getSystemDefaultLCID)
{ DWORD res1;;
  {res1 = GetSystemDefaultLCID();
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getSystemDefaultLangID);
primFun(prim_Win32NLS_cpp_getSystemDefaultLangID)
{ WORD res1;;
  {res1 = GetSystemDefaultLangID();
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_getOEMCP);
primFun(prim_Win32NLS_cpp_getOEMCP)
{ UINT res1;;
  {res1 = GetOEMCP();
   hugs->putWord((UINT)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANGIDFROMLCID);
primFun(prim_Win32NLS_cpp_lANGIDFROMLCID)
{ DWORD arg1;WORD res1;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = LANGIDFROMLCID(arg1);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_NEUTRAL);
primFun(prim_Win32NLS_cpp_lANG_NEUTRAL)
{ WORD res1;;
  {res1=LANG_NEUTRAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ARABIC);
primFun(prim_Win32NLS_cpp_lANG_ARABIC)
{ WORD res1;;
  {res1=LANG_ARABIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_BULGARIAN);
primFun(prim_Win32NLS_cpp_lANG_BULGARIAN)
{ WORD res1;;
  {res1=LANG_BULGARIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_CATALAN);
primFun(prim_Win32NLS_cpp_lANG_CATALAN)
{ WORD res1;;
  {res1=LANG_CATALAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_CHINESE);
primFun(prim_Win32NLS_cpp_lANG_CHINESE)
{ WORD res1;;
  {res1=LANG_CHINESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_CZECH);
primFun(prim_Win32NLS_cpp_lANG_CZECH)
{ WORD res1;;
  {res1=LANG_CZECH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_DANISH);
primFun(prim_Win32NLS_cpp_lANG_DANISH)
{ WORD res1;;
  {res1=LANG_DANISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_GERMAN);
primFun(prim_Win32NLS_cpp_lANG_GERMAN)
{ WORD res1;;
  {res1=LANG_GERMAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_GREEK);
primFun(prim_Win32NLS_cpp_lANG_GREEK)
{ WORD res1;;
  {res1=LANG_GREEK;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ENGLISH);
primFun(prim_Win32NLS_cpp_lANG_ENGLISH)
{ WORD res1;;
  {res1=LANG_ENGLISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SPANISH);
primFun(prim_Win32NLS_cpp_lANG_SPANISH)
{ WORD res1;;
  {res1=LANG_SPANISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_FINNISH);
primFun(prim_Win32NLS_cpp_lANG_FINNISH)
{ WORD res1;;
  {res1=LANG_FINNISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_FRENCH);
primFun(prim_Win32NLS_cpp_lANG_FRENCH)
{ WORD res1;;
  {res1=LANG_FRENCH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_HEBREW);
primFun(prim_Win32NLS_cpp_lANG_HEBREW)
{ WORD res1;;
  {res1=LANG_HEBREW;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_HUNGARIAN);
primFun(prim_Win32NLS_cpp_lANG_HUNGARIAN)
{ WORD res1;;
  {res1=LANG_HUNGARIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ICELANDIC);
primFun(prim_Win32NLS_cpp_lANG_ICELANDIC)
{ WORD res1;;
  {res1=LANG_ICELANDIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ITALIAN);
primFun(prim_Win32NLS_cpp_lANG_ITALIAN)
{ WORD res1;;
  {res1=LANG_ITALIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_JAPANESE);
primFun(prim_Win32NLS_cpp_lANG_JAPANESE)
{ WORD res1;;
  {res1=LANG_JAPANESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_KOREAN);
primFun(prim_Win32NLS_cpp_lANG_KOREAN)
{ WORD res1;;
  {res1=LANG_KOREAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_DUTCH);
primFun(prim_Win32NLS_cpp_lANG_DUTCH)
{ WORD res1;;
  {res1=LANG_DUTCH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_NORWEGIAN);
primFun(prim_Win32NLS_cpp_lANG_NORWEGIAN)
{ WORD res1;;
  {res1=LANG_NORWEGIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_POLISH);
primFun(prim_Win32NLS_cpp_lANG_POLISH)
{ WORD res1;;
  {res1=LANG_POLISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_PORTUGUESE);
primFun(prim_Win32NLS_cpp_lANG_PORTUGUESE)
{ WORD res1;;
  {res1=LANG_PORTUGUESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ROMANIAN);
primFun(prim_Win32NLS_cpp_lANG_ROMANIAN)
{ WORD res1;;
  {res1=LANG_ROMANIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_RUSSIAN);
primFun(prim_Win32NLS_cpp_lANG_RUSSIAN)
{ WORD res1;;
  {res1=LANG_RUSSIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_CROATIAN);
primFun(prim_Win32NLS_cpp_lANG_CROATIAN)
{ WORD res1;;
  {res1=LANG_CROATIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SERBIAN);
primFun(prim_Win32NLS_cpp_lANG_SERBIAN)
{ WORD res1;;
  {res1=LANG_SERBIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SLOVAK);
primFun(prim_Win32NLS_cpp_lANG_SLOVAK)
{ WORD res1;;
  {res1=LANG_SLOVAK;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ALBANIAN);
primFun(prim_Win32NLS_cpp_lANG_ALBANIAN)
{ WORD res1;;
  {res1=LANG_ALBANIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SWEDISH);
primFun(prim_Win32NLS_cpp_lANG_SWEDISH)
{ WORD res1;;
  {res1=LANG_SWEDISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_THAI);
primFun(prim_Win32NLS_cpp_lANG_THAI)
{ WORD res1;;
  {res1=LANG_THAI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_TURKISH);
primFun(prim_Win32NLS_cpp_lANG_TURKISH)
{ WORD res1;;
  {res1=LANG_TURKISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_URDU);
primFun(prim_Win32NLS_cpp_lANG_URDU)
{ WORD res1;;
  {res1=LANG_URDU;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_INDONESIAN);
primFun(prim_Win32NLS_cpp_lANG_INDONESIAN)
{ WORD res1;;
  {res1=LANG_INDONESIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_BELARUSIAN);
primFun(prim_Win32NLS_cpp_lANG_BELARUSIAN)
{ WORD res1;;
  {res1=LANG_BELARUSIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SLOVENIAN);
primFun(prim_Win32NLS_cpp_lANG_SLOVENIAN)
{ WORD res1;;
  {res1=LANG_SLOVENIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ESTONIAN);
primFun(prim_Win32NLS_cpp_lANG_ESTONIAN)
{ WORD res1;;
  {res1=LANG_ESTONIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_LATVIAN);
primFun(prim_Win32NLS_cpp_lANG_LATVIAN)
{ WORD res1;;
  {res1=LANG_LATVIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_LITHUANIAN);
primFun(prim_Win32NLS_cpp_lANG_LITHUANIAN)
{ WORD res1;;
  {res1=LANG_LITHUANIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_FARSI);
primFun(prim_Win32NLS_cpp_lANG_FARSI)
{ WORD res1;;
  {res1=LANG_FARSI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_VIETNAMESE);
primFun(prim_Win32NLS_cpp_lANG_VIETNAMESE)
{ WORD res1;;
  {res1=LANG_VIETNAMESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ARMENIAN);
primFun(prim_Win32NLS_cpp_lANG_ARMENIAN)
{ WORD res1;;
  {res1=LANG_ARMENIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_AZERI);
primFun(prim_Win32NLS_cpp_lANG_AZERI)
{ WORD res1;;
  {res1=LANG_AZERI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_BASQUE);
primFun(prim_Win32NLS_cpp_lANG_BASQUE)
{ WORD res1;;
  {res1=LANG_BASQUE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_MACEDONIAN);
primFun(prim_Win32NLS_cpp_lANG_MACEDONIAN)
{ WORD res1;;
  {res1=LANG_MACEDONIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_AFRIKAANS);
primFun(prim_Win32NLS_cpp_lANG_AFRIKAANS)
{ WORD res1;;
  {res1=LANG_AFRIKAANS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_GEORGIAN);
primFun(prim_Win32NLS_cpp_lANG_GEORGIAN)
{ WORD res1;;
  {res1=LANG_GEORGIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_FAEROESE);
primFun(prim_Win32NLS_cpp_lANG_FAEROESE)
{ WORD res1;;
  {res1=LANG_FAEROESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_HINDI);
primFun(prim_Win32NLS_cpp_lANG_HINDI)
{ WORD res1;;
  {res1=LANG_HINDI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_MALAY);
primFun(prim_Win32NLS_cpp_lANG_MALAY)
{ WORD res1;;
  {res1=LANG_MALAY;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_KAZAK);
primFun(prim_Win32NLS_cpp_lANG_KAZAK)
{ WORD res1;;
  {res1=LANG_KAZAK;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SWAHILI);
primFun(prim_Win32NLS_cpp_lANG_SWAHILI)
{ WORD res1;;
  {res1=LANG_SWAHILI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_UZBEK);
primFun(prim_Win32NLS_cpp_lANG_UZBEK)
{ WORD res1;;
  {res1=LANG_UZBEK;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_TATAR);
primFun(prim_Win32NLS_cpp_lANG_TATAR)
{ WORD res1;;
  {res1=LANG_TATAR;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_BENGALI);
primFun(prim_Win32NLS_cpp_lANG_BENGALI)
{ WORD res1;;
  {res1=LANG_BENGALI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_PUNJABI);
primFun(prim_Win32NLS_cpp_lANG_PUNJABI)
{ WORD res1;;
  {res1=LANG_PUNJABI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_GUJARATI);
primFun(prim_Win32NLS_cpp_lANG_GUJARATI)
{ WORD res1;;
  {res1=LANG_GUJARATI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ORIYA);
primFun(prim_Win32NLS_cpp_lANG_ORIYA)
{ WORD res1;;
  {res1=LANG_ORIYA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_TAMIL);
primFun(prim_Win32NLS_cpp_lANG_TAMIL)
{ WORD res1;;
  {res1=LANG_TAMIL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_TELUGU);
primFun(prim_Win32NLS_cpp_lANG_TELUGU)
{ WORD res1;;
  {res1=LANG_TELUGU;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_KANNADA);
primFun(prim_Win32NLS_cpp_lANG_KANNADA)
{ WORD res1;;
  {res1=LANG_KANNADA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_MALAYALAM);
primFun(prim_Win32NLS_cpp_lANG_MALAYALAM)
{ WORD res1;;
  {res1=LANG_MALAYALAM;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_ASSAMESE);
primFun(prim_Win32NLS_cpp_lANG_ASSAMESE)
{ WORD res1;;
  {res1=LANG_ASSAMESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_MARATHI);
primFun(prim_Win32NLS_cpp_lANG_MARATHI)
{ WORD res1;;
  {res1=LANG_MARATHI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SANSKRIT);
primFun(prim_Win32NLS_cpp_lANG_SANSKRIT)
{ WORD res1;;
  {res1=LANG_SANSKRIT;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_KONKANI);
primFun(prim_Win32NLS_cpp_lANG_KONKANI)
{ WORD res1;;
  {res1=LANG_KONKANI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_MANIPURI);
primFun(prim_Win32NLS_cpp_lANG_MANIPURI)
{ WORD res1;;
  {res1=LANG_MANIPURI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_SINDHI);
primFun(prim_Win32NLS_cpp_lANG_SINDHI)
{ WORD res1;;
  {res1=LANG_SINDHI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_KASHMIRI);
primFun(prim_Win32NLS_cpp_lANG_KASHMIRI)
{ WORD res1;;
  {res1=LANG_KASHMIRI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_lANG_NEPALI);
primFun(prim_Win32NLS_cpp_lANG_NEPALI)
{ WORD res1;;
  {res1=LANG_NEPALI;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_mAKELANGID);
primFun(prim_Win32NLS_cpp_mAKELANGID)
{ WORD arg1; WORD arg2;WORD res1;;
  arg1 = (WORD)(hugs->getWord());
  arg2 = (WORD)(hugs->getWord());
  {res1 = MAKELANGID(arg1, arg2);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_mAKELCID);
primFun(prim_Win32NLS_cpp_mAKELCID)
{ WORD arg1; WORD arg2;DWORD res1;;
  arg1 = (WORD)(hugs->getWord());
  arg2 = (WORD)(hugs->getWord());
  {res1 = MAKELCID(arg1, arg2);
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_pRIMARYLANGID);
primFun(prim_Win32NLS_cpp_pRIMARYLANGID)
{ WORD arg1;WORD res1;;
  arg1 = (WORD)(hugs->getWord());
  {res1 = PRIMARYLANGID(arg1);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANGID);
primFun(prim_Win32NLS_cpp_sUBLANGID)
{ WORD arg1;WORD res1;;
  arg1 = (WORD)(hugs->getWord());
  {res1 = SUBLANGID(arg1);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORTIDFROMLCID);
primFun(prim_Win32NLS_cpp_sORTIDFROMLCID)
{ DWORD arg1;WORD res1;;
  arg1 = (DWORD)(hugs->getWord());
  {res1 = SORTIDFROMLCID(arg1);
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_DEFAULT);
primFun(prim_Win32NLS_cpp_sORT_DEFAULT)
{ WORD res1;;
  {res1=SORT_DEFAULT;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_JAPANESE_XJIS);
primFun(prim_Win32NLS_cpp_sORT_JAPANESE_XJIS)
{ WORD res1;;
  {res1=SORT_JAPANESE_XJIS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_JAPANESE_UNICODE);
primFun(prim_Win32NLS_cpp_sORT_JAPANESE_UNICODE)
{ WORD res1;;
  {res1=SORT_JAPANESE_UNICODE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_CHINESE_BIG5);
primFun(prim_Win32NLS_cpp_sORT_CHINESE_BIG5)
{ WORD res1;;
  {res1=SORT_CHINESE_BIG5;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_CHINESE_UNICODE);
primFun(prim_Win32NLS_cpp_sORT_CHINESE_UNICODE)
{ WORD res1;;
  {res1=SORT_CHINESE_UNICODE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_KOREAN_KSC);
primFun(prim_Win32NLS_cpp_sORT_KOREAN_KSC)
{ WORD res1;;
  {res1=SORT_KOREAN_KSC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sORT_KOREAN_UNICODE);
primFun(prim_Win32NLS_cpp_sORT_KOREAN_UNICODE)
{ WORD res1;;
  {res1=SORT_KOREAN_UNICODE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_NEUTRAL);
primFun(prim_Win32NLS_cpp_sUBLANG_NEUTRAL)
{ WORD res1;;
  {res1=SUBLANG_NEUTRAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_DEFAULT);
primFun(prim_Win32NLS_cpp_sUBLANG_DEFAULT)
{ WORD res1;;
  {res1=SUBLANG_DEFAULT;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SYS_DEFAULT);
primFun(prim_Win32NLS_cpp_sUBLANG_SYS_DEFAULT)
{ WORD res1;;
  {res1=SUBLANG_SYS_DEFAULT;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_SAUDI_ARABIA);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_SAUDI_ARABIA)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_SAUDI_ARABIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_IRAQ);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_IRAQ)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_IRAQ;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_EGYPT);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_EGYPT)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_EGYPT;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_LIBYA);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_LIBYA)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_LIBYA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_ALGERIA);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_ALGERIA)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_ALGERIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_MOROCCO);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_MOROCCO)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_MOROCCO;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_TUNISIA);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_TUNISIA)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_TUNISIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_OMAN);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_OMAN)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_OMAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_YEMEN);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_YEMEN)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_YEMEN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_SYRIA);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_SYRIA)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_SYRIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_JORDAN);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_JORDAN)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_JORDAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_LEBANON);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_LEBANON)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_LEBANON;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_KUWAIT);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_KUWAIT)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_KUWAIT;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_UAE);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_UAE)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_UAE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_BAHRAIN);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_BAHRAIN)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_BAHRAIN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ARABIC_QATAR);
primFun(prim_Win32NLS_cpp_sUBLANG_ARABIC_QATAR)
{ WORD res1;;
  {res1=SUBLANG_ARABIC_QATAR;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_AZERI_CYRILLIC);
primFun(prim_Win32NLS_cpp_sUBLANG_AZERI_CYRILLIC)
{ WORD res1;;
  {res1=SUBLANG_AZERI_CYRILLIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_AZERI_LATIN);
primFun(prim_Win32NLS_cpp_sUBLANG_AZERI_LATIN)
{ WORD res1;;
  {res1=SUBLANG_AZERI_LATIN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_CHINESE_TRADITIONAL);
primFun(prim_Win32NLS_cpp_sUBLANG_CHINESE_TRADITIONAL)
{ WORD res1;;
  {res1=SUBLANG_CHINESE_TRADITIONAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_CHINESE_SIMPLIFIED);
primFun(prim_Win32NLS_cpp_sUBLANG_CHINESE_SIMPLIFIED)
{ WORD res1;;
  {res1=SUBLANG_CHINESE_SIMPLIFIED;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_CHINESE_HONGKONG);
primFun(prim_Win32NLS_cpp_sUBLANG_CHINESE_HONGKONG)
{ WORD res1;;
  {res1=SUBLANG_CHINESE_HONGKONG;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_CHINESE_SINGAPORE);
primFun(prim_Win32NLS_cpp_sUBLANG_CHINESE_SINGAPORE)
{ WORD res1;;
  {res1=SUBLANG_CHINESE_SINGAPORE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_CHINESE_MACAU);
primFun(prim_Win32NLS_cpp_sUBLANG_CHINESE_MACAU)
{ WORD res1;;
  {res1=SUBLANG_CHINESE_MACAU;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_DUTCH);
primFun(prim_Win32NLS_cpp_sUBLANG_DUTCH)
{ WORD res1;;
  {res1=SUBLANG_DUTCH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_DUTCH_BELGIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_DUTCH_BELGIAN)
{ WORD res1;;
  {res1=SUBLANG_DUTCH_BELGIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_US);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_US)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_US;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_UK);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_UK)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_UK;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_AUS);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_AUS)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_AUS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_CAN);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_CAN)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_CAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_NZ);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_NZ)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_NZ;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_EIRE);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_EIRE)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_EIRE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_SOUTH_AFRICA);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_SOUTH_AFRICA)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_SOUTH_AFRICA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_JAMAICA);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_JAMAICA)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_JAMAICA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_CARIBBEAN);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_CARIBBEAN)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_CARIBBEAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_BELIZE);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_BELIZE)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_BELIZE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_TRINIDAD);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_TRINIDAD)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_TRINIDAD;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_PHILIPPINES);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_PHILIPPINES)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_PHILIPPINES;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ENGLISH_ZIMBABWE);
primFun(prim_Win32NLS_cpp_sUBLANG_ENGLISH_ZIMBABWE)
{ WORD res1;;
  {res1=SUBLANG_ENGLISH_ZIMBABWE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_FRENCH);
primFun(prim_Win32NLS_cpp_sUBLANG_FRENCH)
{ WORD res1;;
  {res1=SUBLANG_FRENCH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_FRENCH_BELGIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_FRENCH_BELGIAN)
{ WORD res1;;
  {res1=SUBLANG_FRENCH_BELGIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_FRENCH_CANADIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_FRENCH_CANADIAN)
{ WORD res1;;
  {res1=SUBLANG_FRENCH_CANADIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_FRENCH_SWISS);
primFun(prim_Win32NLS_cpp_sUBLANG_FRENCH_SWISS)
{ WORD res1;;
  {res1=SUBLANG_FRENCH_SWISS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_FRENCH_LUXEMBOURG);
primFun(prim_Win32NLS_cpp_sUBLANG_FRENCH_LUXEMBOURG)
{ WORD res1;;
  {res1=SUBLANG_FRENCH_LUXEMBOURG;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_FRENCH_MONACO);
primFun(prim_Win32NLS_cpp_sUBLANG_FRENCH_MONACO)
{ WORD res1;;
  {res1=SUBLANG_FRENCH_MONACO;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_GERMAN);
primFun(prim_Win32NLS_cpp_sUBLANG_GERMAN)
{ WORD res1;;
  {res1=SUBLANG_GERMAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_GERMAN_SWISS);
primFun(prim_Win32NLS_cpp_sUBLANG_GERMAN_SWISS)
{ WORD res1;;
  {res1=SUBLANG_GERMAN_SWISS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_GERMAN_AUSTRIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_GERMAN_AUSTRIAN)
{ WORD res1;;
  {res1=SUBLANG_GERMAN_AUSTRIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_GERMAN_LUXEMBOURG);
primFun(prim_Win32NLS_cpp_sUBLANG_GERMAN_LUXEMBOURG)
{ WORD res1;;
  {res1=SUBLANG_GERMAN_LUXEMBOURG;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_GERMAN_LIECHTENSTEIN);
primFun(prim_Win32NLS_cpp_sUBLANG_GERMAN_LIECHTENSTEIN)
{ WORD res1;;
  {res1=SUBLANG_GERMAN_LIECHTENSTEIN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ITALIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_ITALIAN)
{ WORD res1;;
  {res1=SUBLANG_ITALIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_ITALIAN_SWISS);
primFun(prim_Win32NLS_cpp_sUBLANG_ITALIAN_SWISS)
{ WORD res1;;
  {res1=SUBLANG_ITALIAN_SWISS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_KASHMIRI_INDIA);
primFun(prim_Win32NLS_cpp_sUBLANG_KASHMIRI_INDIA)
{ WORD res1;;
  {res1=SUBLANG_KASHMIRI_INDIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_KOREAN);
primFun(prim_Win32NLS_cpp_sUBLANG_KOREAN)
{ WORD res1;;
  {res1=SUBLANG_KOREAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_LITHUANIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_LITHUANIAN)
{ WORD res1;;
  {res1=SUBLANG_LITHUANIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_LITHUANIAN_CLASSIC);
primFun(prim_Win32NLS_cpp_sUBLANG_LITHUANIAN_CLASSIC)
{ WORD res1;;
  {res1=SUBLANG_LITHUANIAN_CLASSIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_MALAY_MALAYSIA);
primFun(prim_Win32NLS_cpp_sUBLANG_MALAY_MALAYSIA)
{ WORD res1;;
  {res1=SUBLANG_MALAY_MALAYSIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_MALAY_BRUNEI_DARUSSALAM);
primFun(prim_Win32NLS_cpp_sUBLANG_MALAY_BRUNEI_DARUSSALAM)
{ WORD res1;;
  {res1=SUBLANG_MALAY_BRUNEI_DARUSSALAM;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_NEPALI_INDIA);
primFun(prim_Win32NLS_cpp_sUBLANG_NEPALI_INDIA)
{ WORD res1;;
  {res1=SUBLANG_NEPALI_INDIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_BOKMAL);
primFun(prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_BOKMAL)
{ WORD res1;;
  {res1=SUBLANG_NORWEGIAN_BOKMAL;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_NYNORSK);
primFun(prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_NYNORSK)
{ WORD res1;;
  {res1=SUBLANG_NORWEGIAN_NYNORSK;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_PORTUGUESE);
primFun(prim_Win32NLS_cpp_sUBLANG_PORTUGUESE)
{ WORD res1;;
  {res1=SUBLANG_PORTUGUESE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_PORTUGUESE_BRAZILIAN);
primFun(prim_Win32NLS_cpp_sUBLANG_PORTUGUESE_BRAZILIAN)
{ WORD res1;;
  {res1=SUBLANG_PORTUGUESE_BRAZILIAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SERBIAN_LATIN);
primFun(prim_Win32NLS_cpp_sUBLANG_SERBIAN_LATIN)
{ WORD res1;;
  {res1=SUBLANG_SERBIAN_LATIN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SERBIAN_CYRILLIC);
primFun(prim_Win32NLS_cpp_sUBLANG_SERBIAN_CYRILLIC)
{ WORD res1;;
  {res1=SUBLANG_SERBIAN_CYRILLIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH)
{ WORD res1;;
  {res1=SUBLANG_SPANISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_MEXICAN);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_MEXICAN)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_MEXICAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_MODERN);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_MODERN)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_MODERN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_GUATEMALA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_GUATEMALA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_GUATEMALA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_COSTA_RICA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_COSTA_RICA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_COSTA_RICA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_PANAMA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_PANAMA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_PANAMA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_DOMINICAN_REPUBLIC);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_DOMINICAN_REPUBLIC)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_DOMINICAN_REPUBLIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_VENEZUELA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_VENEZUELA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_VENEZUELA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_COLOMBIA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_COLOMBIA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_COLOMBIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_PERU);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_PERU)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_PERU;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_ARGENTINA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_ARGENTINA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_ARGENTINA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_ECUADOR);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_ECUADOR)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_ECUADOR;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_CHILE);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_CHILE)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_CHILE;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_URUGUAY);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_URUGUAY)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_URUGUAY;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_PARAGUAY);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_PARAGUAY)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_PARAGUAY;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_BOLIVIA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_BOLIVIA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_BOLIVIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_EL_SALVADOR);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_EL_SALVADOR)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_EL_SALVADOR;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_HONDURAS);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_HONDURAS)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_HONDURAS;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_NICARAGUA);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_NICARAGUA)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_NICARAGUA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SPANISH_PUERTO_RICO);
primFun(prim_Win32NLS_cpp_sUBLANG_SPANISH_PUERTO_RICO)
{ WORD res1;;
  {res1=SUBLANG_SPANISH_PUERTO_RICO;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SWEDISH);
primFun(prim_Win32NLS_cpp_sUBLANG_SWEDISH)
{ WORD res1;;
  {res1=SUBLANG_SWEDISH;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_SWEDISH_FINLAND);
primFun(prim_Win32NLS_cpp_sUBLANG_SWEDISH_FINLAND)
{ WORD res1;;
  {res1=SUBLANG_SWEDISH_FINLAND;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_URDU_PAKISTAN);
primFun(prim_Win32NLS_cpp_sUBLANG_URDU_PAKISTAN)
{ WORD res1;;
  {res1=SUBLANG_URDU_PAKISTAN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_URDU_INDIA);
primFun(prim_Win32NLS_cpp_sUBLANG_URDU_INDIA)
{ WORD res1;;
  {res1=SUBLANG_URDU_INDIA;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_UZBEK_LATIN);
primFun(prim_Win32NLS_cpp_sUBLANG_UZBEK_LATIN)
{ WORD res1;;
  {res1=SUBLANG_UZBEK_LATIN;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32NLS_cpp_sUBLANG_UZBEK_CYRILLIC);
primFun(prim_Win32NLS_cpp_sUBLANG_UZBEK_CYRILLIC)
{ WORD res1;;
  {res1=SUBLANG_UZBEK_CYRILLIC;
   hugs->putWord((WORD)(res1));
   hugs_returnIO(1);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32NLS_cpp_lOCALE_SYSTEM_DEFAULT",2,prim_Win32NLS_cpp_lOCALE_SYSTEM_DEFAULT},
  {"prim_Win32NLS_cpp_lOCALE_USER_DEFAULT",2,prim_Win32NLS_cpp_lOCALE_USER_DEFAULT},
  {"prim_Win32NLS_cpp_lOCALE_NEUTRAL",2,prim_Win32NLS_cpp_lOCALE_NEUTRAL},
  {"prim_Win32NLS_cpp_convertDefaultLocale",3,prim_Win32NLS_cpp_convertDefaultLocale},
  {"prim_Win32NLS_cpp_cP_ACP",2,prim_Win32NLS_cpp_cP_ACP},
  {"prim_Win32NLS_cpp_cP_MACCP",2,prim_Win32NLS_cpp_cP_MACCP},
  {"prim_Win32NLS_cpp_cP_OEMCP",2,prim_Win32NLS_cpp_cP_OEMCP},
  {"prim_Win32NLS_cpp_getACP",2,prim_Win32NLS_cpp_getACP},
  {"prim_Win32NLS_cpp_setThreadLocale",3,prim_Win32NLS_cpp_setThreadLocale},
  {"prim_Win32NLS_cpp_lOCALE_ICALENDARTYPE",2,prim_Win32NLS_cpp_lOCALE_ICALENDARTYPE},
  {"prim_Win32NLS_cpp_lOCALE_SDATE",2,prim_Win32NLS_cpp_lOCALE_SDATE},
  {"prim_Win32NLS_cpp_lOCALE_ICURRDIGITS",2,prim_Win32NLS_cpp_lOCALE_ICURRDIGITS},
  {"prim_Win32NLS_cpp_lOCALE_SDECIMAL",2,prim_Win32NLS_cpp_lOCALE_SDECIMAL},
  {"prim_Win32NLS_cpp_lOCALE_ICURRENCY",2,prim_Win32NLS_cpp_lOCALE_ICURRENCY},
  {"prim_Win32NLS_cpp_lOCALE_SGROUPING",2,prim_Win32NLS_cpp_lOCALE_SGROUPING},
  {"prim_Win32NLS_cpp_lOCALE_IDIGITS",2,prim_Win32NLS_cpp_lOCALE_IDIGITS},
  {"prim_Win32NLS_cpp_lOCALE_SLIST",2,prim_Win32NLS_cpp_lOCALE_SLIST},
  {"prim_Win32NLS_cpp_lOCALE_IFIRSTDAYOFWEEK",2,prim_Win32NLS_cpp_lOCALE_IFIRSTDAYOFWEEK},
  {"prim_Win32NLS_cpp_lOCALE_SLONGDATE",2,prim_Win32NLS_cpp_lOCALE_SLONGDATE},
  {"prim_Win32NLS_cpp_lOCALE_IFIRSTWEEKOFYEAR",2,prim_Win32NLS_cpp_lOCALE_IFIRSTWEEKOFYEAR},
  {"prim_Win32NLS_cpp_lOCALE_SMONDECIMALSEP",2,prim_Win32NLS_cpp_lOCALE_SMONDECIMALSEP},
  {"prim_Win32NLS_cpp_lOCALE_ILZERO",2,prim_Win32NLS_cpp_lOCALE_ILZERO},
  {"prim_Win32NLS_cpp_lOCALE_SMONGROUPING",2,prim_Win32NLS_cpp_lOCALE_SMONGROUPING},
  {"prim_Win32NLS_cpp_lOCALE_IMEASURE",2,prim_Win32NLS_cpp_lOCALE_IMEASURE},
  {"prim_Win32NLS_cpp_lOCALE_SMONTHOUSANDSEP",2,prim_Win32NLS_cpp_lOCALE_SMONTHOUSANDSEP},
  {"prim_Win32NLS_cpp_lOCALE_INEGCURR",2,prim_Win32NLS_cpp_lOCALE_INEGCURR},
  {"prim_Win32NLS_cpp_lOCALE_SNEGATIVESIGN",2,prim_Win32NLS_cpp_lOCALE_SNEGATIVESIGN},
  {"prim_Win32NLS_cpp_lOCALE_INEGNUMBER",2,prim_Win32NLS_cpp_lOCALE_INEGNUMBER},
  {"prim_Win32NLS_cpp_lOCALE_SPOSITIVESIGN",2,prim_Win32NLS_cpp_lOCALE_SPOSITIVESIGN},
  {"prim_Win32NLS_cpp_lOCALE_SSHORTDATE",2,prim_Win32NLS_cpp_lOCALE_SSHORTDATE},
  {"prim_Win32NLS_cpp_lOCALE_ITIME",2,prim_Win32NLS_cpp_lOCALE_ITIME},
  {"prim_Win32NLS_cpp_lOCALE_STHOUSAND",2,prim_Win32NLS_cpp_lOCALE_STHOUSAND},
  {"prim_Win32NLS_cpp_lOCALE_S1159",2,prim_Win32NLS_cpp_lOCALE_S1159},
  {"prim_Win32NLS_cpp_lOCALE_STIME",2,prim_Win32NLS_cpp_lOCALE_STIME},
  {"prim_Win32NLS_cpp_lOCALE_S2359",2,prim_Win32NLS_cpp_lOCALE_S2359},
  {"prim_Win32NLS_cpp_lOCALE_STIMEFORMAT",2,prim_Win32NLS_cpp_lOCALE_STIMEFORMAT},
  {"prim_Win32NLS_cpp_lOCALE_SCURRENCY",2,prim_Win32NLS_cpp_lOCALE_SCURRENCY},
  {"prim_Win32NLS_cpp_setLocaleInfo",4,prim_Win32NLS_cpp_setLocaleInfo},
  {"prim_Win32NLS_cpp_lCMAP_BYTEREV",2,prim_Win32NLS_cpp_lCMAP_BYTEREV},
  {"prim_Win32NLS_cpp_lCMAP_FULLWIDTH",2,prim_Win32NLS_cpp_lCMAP_FULLWIDTH},
  {"prim_Win32NLS_cpp_lCMAP_HALFWIDTH",2,prim_Win32NLS_cpp_lCMAP_HALFWIDTH},
  {"prim_Win32NLS_cpp_lCMAP_HIRAGANA",2,prim_Win32NLS_cpp_lCMAP_HIRAGANA},
  {"prim_Win32NLS_cpp_lCMAP_KATAKANA",2,prim_Win32NLS_cpp_lCMAP_KATAKANA},
  {"prim_Win32NLS_cpp_lCMAP_LINGUISTIC_CASING",2,prim_Win32NLS_cpp_lCMAP_LINGUISTIC_CASING},
  {"prim_Win32NLS_cpp_lCMAP_LOWERCASE",2,prim_Win32NLS_cpp_lCMAP_LOWERCASE},
  {"prim_Win32NLS_cpp_lCMAP_SIMPLIFIED_CHINESE",2,prim_Win32NLS_cpp_lCMAP_SIMPLIFIED_CHINESE},
  {"prim_Win32NLS_cpp_lCMAP_SORTKEY",2,prim_Win32NLS_cpp_lCMAP_SORTKEY},
  {"prim_Win32NLS_cpp_lCMAP_TRADITIONAL_CHINESE",2,prim_Win32NLS_cpp_lCMAP_TRADITIONAL_CHINESE},
  {"prim_Win32NLS_cpp_lCMAP_UPPERCASE",2,prim_Win32NLS_cpp_lCMAP_UPPERCASE},
  {"prim_Win32NLS_cpp_nORM_IGNORECASE",2,prim_Win32NLS_cpp_nORM_IGNORECASE},
  {"prim_Win32NLS_cpp_nORM_IGNORENONSPACE",2,prim_Win32NLS_cpp_nORM_IGNORENONSPACE},
  {"prim_Win32NLS_cpp_nORM_IGNOREKANATYPE",2,prim_Win32NLS_cpp_nORM_IGNOREKANATYPE},
  {"prim_Win32NLS_cpp_nORM_IGNORESYMBOLS",2,prim_Win32NLS_cpp_nORM_IGNORESYMBOLS},
  {"prim_Win32NLS_cpp_nORM_IGNOREWIDTH",2,prim_Win32NLS_cpp_nORM_IGNOREWIDTH},
  {"prim_Win32NLS_cpp_sORT_STRINGSORT",2,prim_Win32NLS_cpp_sORT_STRINGSORT},
  {"prim_Win32NLS_cpp_lCMapString",7,prim_Win32NLS_cpp_lCMapString},
  {"prim_Win32NLS_cpp_lCID_INSTALLED",2,prim_Win32NLS_cpp_lCID_INSTALLED},
  {"prim_Win32NLS_cpp_lCID_SUPPORTED",2,prim_Win32NLS_cpp_lCID_SUPPORTED},
  {"prim_Win32NLS_cpp_isValidLocale",4,prim_Win32NLS_cpp_isValidLocale},
  {"prim_Win32NLS_cpp_isValidCodePage",3,prim_Win32NLS_cpp_isValidCodePage},
  {"prim_Win32NLS_cpp_getUserDefaultLCID",2,prim_Win32NLS_cpp_getUserDefaultLCID},
  {"prim_Win32NLS_cpp_getUserDefaultLangID",2,prim_Win32NLS_cpp_getUserDefaultLangID},
  {"prim_Win32NLS_cpp_getThreadLocale",2,prim_Win32NLS_cpp_getThreadLocale},
  {"prim_Win32NLS_cpp_getSystemDefaultLCID",2,prim_Win32NLS_cpp_getSystemDefaultLCID},
  {"prim_Win32NLS_cpp_getSystemDefaultLangID",2,prim_Win32NLS_cpp_getSystemDefaultLangID},
  {"prim_Win32NLS_cpp_getOEMCP",2,prim_Win32NLS_cpp_getOEMCP},
  {"prim_Win32NLS_cpp_lANGIDFROMLCID",3,prim_Win32NLS_cpp_lANGIDFROMLCID},
  {"prim_Win32NLS_cpp_lANG_NEUTRAL",2,prim_Win32NLS_cpp_lANG_NEUTRAL},
  {"prim_Win32NLS_cpp_lANG_ARABIC",2,prim_Win32NLS_cpp_lANG_ARABIC},
  {"prim_Win32NLS_cpp_lANG_BULGARIAN",2,prim_Win32NLS_cpp_lANG_BULGARIAN},
  {"prim_Win32NLS_cpp_lANG_CATALAN",2,prim_Win32NLS_cpp_lANG_CATALAN},
  {"prim_Win32NLS_cpp_lANG_CHINESE",2,prim_Win32NLS_cpp_lANG_CHINESE},
  {"prim_Win32NLS_cpp_lANG_CZECH",2,prim_Win32NLS_cpp_lANG_CZECH},
  {"prim_Win32NLS_cpp_lANG_DANISH",2,prim_Win32NLS_cpp_lANG_DANISH},
  {"prim_Win32NLS_cpp_lANG_GERMAN",2,prim_Win32NLS_cpp_lANG_GERMAN},
  {"prim_Win32NLS_cpp_lANG_GREEK",2,prim_Win32NLS_cpp_lANG_GREEK},
  {"prim_Win32NLS_cpp_lANG_ENGLISH",2,prim_Win32NLS_cpp_lANG_ENGLISH},
  {"prim_Win32NLS_cpp_lANG_SPANISH",2,prim_Win32NLS_cpp_lANG_SPANISH},
  {"prim_Win32NLS_cpp_lANG_FINNISH",2,prim_Win32NLS_cpp_lANG_FINNISH},
  {"prim_Win32NLS_cpp_lANG_FRENCH",2,prim_Win32NLS_cpp_lANG_FRENCH},
  {"prim_Win32NLS_cpp_lANG_HEBREW",2,prim_Win32NLS_cpp_lANG_HEBREW},
  {"prim_Win32NLS_cpp_lANG_HUNGARIAN",2,prim_Win32NLS_cpp_lANG_HUNGARIAN},
  {"prim_Win32NLS_cpp_lANG_ICELANDIC",2,prim_Win32NLS_cpp_lANG_ICELANDIC},
  {"prim_Win32NLS_cpp_lANG_ITALIAN",2,prim_Win32NLS_cpp_lANG_ITALIAN},
  {"prim_Win32NLS_cpp_lANG_JAPANESE",2,prim_Win32NLS_cpp_lANG_JAPANESE},
  {"prim_Win32NLS_cpp_lANG_KOREAN",2,prim_Win32NLS_cpp_lANG_KOREAN},
  {"prim_Win32NLS_cpp_lANG_DUTCH",2,prim_Win32NLS_cpp_lANG_DUTCH},
  {"prim_Win32NLS_cpp_lANG_NORWEGIAN",2,prim_Win32NLS_cpp_lANG_NORWEGIAN},
  {"prim_Win32NLS_cpp_lANG_POLISH",2,prim_Win32NLS_cpp_lANG_POLISH},
  {"prim_Win32NLS_cpp_lANG_PORTUGUESE",2,prim_Win32NLS_cpp_lANG_PORTUGUESE},
  {"prim_Win32NLS_cpp_lANG_ROMANIAN",2,prim_Win32NLS_cpp_lANG_ROMANIAN},
  {"prim_Win32NLS_cpp_lANG_RUSSIAN",2,prim_Win32NLS_cpp_lANG_RUSSIAN},
  {"prim_Win32NLS_cpp_lANG_CROATIAN",2,prim_Win32NLS_cpp_lANG_CROATIAN},
  {"prim_Win32NLS_cpp_lANG_SERBIAN",2,prim_Win32NLS_cpp_lANG_SERBIAN},
  {"prim_Win32NLS_cpp_lANG_SLOVAK",2,prim_Win32NLS_cpp_lANG_SLOVAK},
  {"prim_Win32NLS_cpp_lANG_ALBANIAN",2,prim_Win32NLS_cpp_lANG_ALBANIAN},
  {"prim_Win32NLS_cpp_lANG_SWEDISH",2,prim_Win32NLS_cpp_lANG_SWEDISH},
  {"prim_Win32NLS_cpp_lANG_THAI",2,prim_Win32NLS_cpp_lANG_THAI},
  {"prim_Win32NLS_cpp_lANG_TURKISH",2,prim_Win32NLS_cpp_lANG_TURKISH},
  {"prim_Win32NLS_cpp_lANG_URDU",2,prim_Win32NLS_cpp_lANG_URDU},
  {"prim_Win32NLS_cpp_lANG_INDONESIAN",2,prim_Win32NLS_cpp_lANG_INDONESIAN},
  {"prim_Win32NLS_cpp_lANG_BELARUSIAN",2,prim_Win32NLS_cpp_lANG_BELARUSIAN},
  {"prim_Win32NLS_cpp_lANG_SLOVENIAN",2,prim_Win32NLS_cpp_lANG_SLOVENIAN},
  {"prim_Win32NLS_cpp_lANG_ESTONIAN",2,prim_Win32NLS_cpp_lANG_ESTONIAN},
  {"prim_Win32NLS_cpp_lANG_LATVIAN",2,prim_Win32NLS_cpp_lANG_LATVIAN},
  {"prim_Win32NLS_cpp_lANG_LITHUANIAN",2,prim_Win32NLS_cpp_lANG_LITHUANIAN},
  {"prim_Win32NLS_cpp_lANG_FARSI",2,prim_Win32NLS_cpp_lANG_FARSI},
  {"prim_Win32NLS_cpp_lANG_VIETNAMESE",2,prim_Win32NLS_cpp_lANG_VIETNAMESE},
  {"prim_Win32NLS_cpp_lANG_ARMENIAN",2,prim_Win32NLS_cpp_lANG_ARMENIAN},
  {"prim_Win32NLS_cpp_lANG_AZERI",2,prim_Win32NLS_cpp_lANG_AZERI},
  {"prim_Win32NLS_cpp_lANG_BASQUE",2,prim_Win32NLS_cpp_lANG_BASQUE},
  {"prim_Win32NLS_cpp_lANG_MACEDONIAN",2,prim_Win32NLS_cpp_lANG_MACEDONIAN},
  {"prim_Win32NLS_cpp_lANG_AFRIKAANS",2,prim_Win32NLS_cpp_lANG_AFRIKAANS},
  {"prim_Win32NLS_cpp_lANG_GEORGIAN",2,prim_Win32NLS_cpp_lANG_GEORGIAN},
  {"prim_Win32NLS_cpp_lANG_FAEROESE",2,prim_Win32NLS_cpp_lANG_FAEROESE},
  {"prim_Win32NLS_cpp_lANG_HINDI",2,prim_Win32NLS_cpp_lANG_HINDI},
  {"prim_Win32NLS_cpp_lANG_MALAY",2,prim_Win32NLS_cpp_lANG_MALAY},
  {"prim_Win32NLS_cpp_lANG_KAZAK",2,prim_Win32NLS_cpp_lANG_KAZAK},
  {"prim_Win32NLS_cpp_lANG_SWAHILI",2,prim_Win32NLS_cpp_lANG_SWAHILI},
  {"prim_Win32NLS_cpp_lANG_UZBEK",2,prim_Win32NLS_cpp_lANG_UZBEK},
  {"prim_Win32NLS_cpp_lANG_TATAR",2,prim_Win32NLS_cpp_lANG_TATAR},
  {"prim_Win32NLS_cpp_lANG_BENGALI",2,prim_Win32NLS_cpp_lANG_BENGALI},
  {"prim_Win32NLS_cpp_lANG_PUNJABI",2,prim_Win32NLS_cpp_lANG_PUNJABI},
  {"prim_Win32NLS_cpp_lANG_GUJARATI",2,prim_Win32NLS_cpp_lANG_GUJARATI},
  {"prim_Win32NLS_cpp_lANG_ORIYA",2,prim_Win32NLS_cpp_lANG_ORIYA},
  {"prim_Win32NLS_cpp_lANG_TAMIL",2,prim_Win32NLS_cpp_lANG_TAMIL},
  {"prim_Win32NLS_cpp_lANG_TELUGU",2,prim_Win32NLS_cpp_lANG_TELUGU},
  {"prim_Win32NLS_cpp_lANG_KANNADA",2,prim_Win32NLS_cpp_lANG_KANNADA},
  {"prim_Win32NLS_cpp_lANG_MALAYALAM",2,prim_Win32NLS_cpp_lANG_MALAYALAM},
  {"prim_Win32NLS_cpp_lANG_ASSAMESE",2,prim_Win32NLS_cpp_lANG_ASSAMESE},
  {"prim_Win32NLS_cpp_lANG_MARATHI",2,prim_Win32NLS_cpp_lANG_MARATHI},
  {"prim_Win32NLS_cpp_lANG_SANSKRIT",2,prim_Win32NLS_cpp_lANG_SANSKRIT},
  {"prim_Win32NLS_cpp_lANG_KONKANI",2,prim_Win32NLS_cpp_lANG_KONKANI},
  {"prim_Win32NLS_cpp_lANG_MANIPURI",2,prim_Win32NLS_cpp_lANG_MANIPURI},
  {"prim_Win32NLS_cpp_lANG_SINDHI",2,prim_Win32NLS_cpp_lANG_SINDHI},
  {"prim_Win32NLS_cpp_lANG_KASHMIRI",2,prim_Win32NLS_cpp_lANG_KASHMIRI},
  {"prim_Win32NLS_cpp_lANG_NEPALI",2,prim_Win32NLS_cpp_lANG_NEPALI},
  {"prim_Win32NLS_cpp_mAKELANGID",4,prim_Win32NLS_cpp_mAKELANGID},
  {"prim_Win32NLS_cpp_mAKELCID",4,prim_Win32NLS_cpp_mAKELCID},
  {"prim_Win32NLS_cpp_pRIMARYLANGID",3,prim_Win32NLS_cpp_pRIMARYLANGID},
  {"prim_Win32NLS_cpp_sUBLANGID",3,prim_Win32NLS_cpp_sUBLANGID},
  {"prim_Win32NLS_cpp_sORTIDFROMLCID",3,prim_Win32NLS_cpp_sORTIDFROMLCID},
  {"prim_Win32NLS_cpp_sORT_DEFAULT",2,prim_Win32NLS_cpp_sORT_DEFAULT},
  {"prim_Win32NLS_cpp_sORT_JAPANESE_XJIS",2,prim_Win32NLS_cpp_sORT_JAPANESE_XJIS},
  {"prim_Win32NLS_cpp_sORT_JAPANESE_UNICODE",2,prim_Win32NLS_cpp_sORT_JAPANESE_UNICODE},
  {"prim_Win32NLS_cpp_sORT_CHINESE_BIG5",2,prim_Win32NLS_cpp_sORT_CHINESE_BIG5},
  {"prim_Win32NLS_cpp_sORT_CHINESE_UNICODE",2,prim_Win32NLS_cpp_sORT_CHINESE_UNICODE},
  {"prim_Win32NLS_cpp_sORT_KOREAN_KSC",2,prim_Win32NLS_cpp_sORT_KOREAN_KSC},
  {"prim_Win32NLS_cpp_sORT_KOREAN_UNICODE",2,prim_Win32NLS_cpp_sORT_KOREAN_UNICODE},
  {"prim_Win32NLS_cpp_sUBLANG_NEUTRAL",2,prim_Win32NLS_cpp_sUBLANG_NEUTRAL},
  {"prim_Win32NLS_cpp_sUBLANG_DEFAULT",2,prim_Win32NLS_cpp_sUBLANG_DEFAULT},
  {"prim_Win32NLS_cpp_sUBLANG_SYS_DEFAULT",2,prim_Win32NLS_cpp_sUBLANG_SYS_DEFAULT},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_SAUDI_ARABIA",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_SAUDI_ARABIA},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_IRAQ",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_IRAQ},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_EGYPT",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_EGYPT},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_LIBYA",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_LIBYA},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_ALGERIA",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_ALGERIA},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_MOROCCO",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_MOROCCO},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_TUNISIA",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_TUNISIA},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_OMAN",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_OMAN},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_YEMEN",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_YEMEN},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_SYRIA",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_SYRIA},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_JORDAN",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_JORDAN},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_LEBANON",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_LEBANON},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_KUWAIT",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_KUWAIT},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_UAE",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_UAE},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_BAHRAIN",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_BAHRAIN},
  {"prim_Win32NLS_cpp_sUBLANG_ARABIC_QATAR",2,prim_Win32NLS_cpp_sUBLANG_ARABIC_QATAR},
  {"prim_Win32NLS_cpp_sUBLANG_AZERI_CYRILLIC",2,prim_Win32NLS_cpp_sUBLANG_AZERI_CYRILLIC},
  {"prim_Win32NLS_cpp_sUBLANG_AZERI_LATIN",2,prim_Win32NLS_cpp_sUBLANG_AZERI_LATIN},
  {"prim_Win32NLS_cpp_sUBLANG_CHINESE_TRADITIONAL",2,prim_Win32NLS_cpp_sUBLANG_CHINESE_TRADITIONAL},
  {"prim_Win32NLS_cpp_sUBLANG_CHINESE_SIMPLIFIED",2,prim_Win32NLS_cpp_sUBLANG_CHINESE_SIMPLIFIED},
  {"prim_Win32NLS_cpp_sUBLANG_CHINESE_HONGKONG",2,prim_Win32NLS_cpp_sUBLANG_CHINESE_HONGKONG},
  {"prim_Win32NLS_cpp_sUBLANG_CHINESE_SINGAPORE",2,prim_Win32NLS_cpp_sUBLANG_CHINESE_SINGAPORE},
  {"prim_Win32NLS_cpp_sUBLANG_CHINESE_MACAU",2,prim_Win32NLS_cpp_sUBLANG_CHINESE_MACAU},
  {"prim_Win32NLS_cpp_sUBLANG_DUTCH",2,prim_Win32NLS_cpp_sUBLANG_DUTCH},
  {"prim_Win32NLS_cpp_sUBLANG_DUTCH_BELGIAN",2,prim_Win32NLS_cpp_sUBLANG_DUTCH_BELGIAN},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_US",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_US},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_UK",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_UK},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_AUS",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_AUS},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_CAN",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_CAN},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_NZ",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_NZ},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_EIRE",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_EIRE},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_SOUTH_AFRICA",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_SOUTH_AFRICA},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_JAMAICA",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_JAMAICA},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_CARIBBEAN",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_CARIBBEAN},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_BELIZE",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_BELIZE},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_TRINIDAD",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_TRINIDAD},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_PHILIPPINES",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_PHILIPPINES},
  {"prim_Win32NLS_cpp_sUBLANG_ENGLISH_ZIMBABWE",2,prim_Win32NLS_cpp_sUBLANG_ENGLISH_ZIMBABWE},
  {"prim_Win32NLS_cpp_sUBLANG_FRENCH",2,prim_Win32NLS_cpp_sUBLANG_FRENCH},
  {"prim_Win32NLS_cpp_sUBLANG_FRENCH_BELGIAN",2,prim_Win32NLS_cpp_sUBLANG_FRENCH_BELGIAN},
  {"prim_Win32NLS_cpp_sUBLANG_FRENCH_CANADIAN",2,prim_Win32NLS_cpp_sUBLANG_FRENCH_CANADIAN},
  {"prim_Win32NLS_cpp_sUBLANG_FRENCH_SWISS",2,prim_Win32NLS_cpp_sUBLANG_FRENCH_SWISS},
  {"prim_Win32NLS_cpp_sUBLANG_FRENCH_LUXEMBOURG",2,prim_Win32NLS_cpp_sUBLANG_FRENCH_LUXEMBOURG},
  {"prim_Win32NLS_cpp_sUBLANG_FRENCH_MONACO",2,prim_Win32NLS_cpp_sUBLANG_FRENCH_MONACO},
  {"prim_Win32NLS_cpp_sUBLANG_GERMAN",2,prim_Win32NLS_cpp_sUBLANG_GERMAN},
  {"prim_Win32NLS_cpp_sUBLANG_GERMAN_SWISS",2,prim_Win32NLS_cpp_sUBLANG_GERMAN_SWISS},
  {"prim_Win32NLS_cpp_sUBLANG_GERMAN_AUSTRIAN",2,prim_Win32NLS_cpp_sUBLANG_GERMAN_AUSTRIAN},
  {"prim_Win32NLS_cpp_sUBLANG_GERMAN_LUXEMBOURG",2,prim_Win32NLS_cpp_sUBLANG_GERMAN_LUXEMBOURG},
  {"prim_Win32NLS_cpp_sUBLANG_GERMAN_LIECHTENSTEIN",2,prim_Win32NLS_cpp_sUBLANG_GERMAN_LIECHTENSTEIN},
  {"prim_Win32NLS_cpp_sUBLANG_ITALIAN",2,prim_Win32NLS_cpp_sUBLANG_ITALIAN},
  {"prim_Win32NLS_cpp_sUBLANG_ITALIAN_SWISS",2,prim_Win32NLS_cpp_sUBLANG_ITALIAN_SWISS},
  {"prim_Win32NLS_cpp_sUBLANG_KASHMIRI_INDIA",2,prim_Win32NLS_cpp_sUBLANG_KASHMIRI_INDIA},
  {"prim_Win32NLS_cpp_sUBLANG_KOREAN",2,prim_Win32NLS_cpp_sUBLANG_KOREAN},
  {"prim_Win32NLS_cpp_sUBLANG_LITHUANIAN",2,prim_Win32NLS_cpp_sUBLANG_LITHUANIAN},
  {"prim_Win32NLS_cpp_sUBLANG_LITHUANIAN_CLASSIC",2,prim_Win32NLS_cpp_sUBLANG_LITHUANIAN_CLASSIC},
  {"prim_Win32NLS_cpp_sUBLANG_MALAY_MALAYSIA",2,prim_Win32NLS_cpp_sUBLANG_MALAY_MALAYSIA},
  {"prim_Win32NLS_cpp_sUBLANG_MALAY_BRUNEI_DARUSSALAM",2,prim_Win32NLS_cpp_sUBLANG_MALAY_BRUNEI_DARUSSALAM},
  {"prim_Win32NLS_cpp_sUBLANG_NEPALI_INDIA",2,prim_Win32NLS_cpp_sUBLANG_NEPALI_INDIA},
  {"prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_BOKMAL",2,prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_BOKMAL},
  {"prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_NYNORSK",2,prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_NYNORSK},
  {"prim_Win32NLS_cpp_sUBLANG_PORTUGUESE",2,prim_Win32NLS_cpp_sUBLANG_PORTUGUESE},
  {"prim_Win32NLS_cpp_sUBLANG_PORTUGUESE_BRAZILIAN",2,prim_Win32NLS_cpp_sUBLANG_PORTUGUESE_BRAZILIAN},
  {"prim_Win32NLS_cpp_sUBLANG_SERBIAN_LATIN",2,prim_Win32NLS_cpp_sUBLANG_SERBIAN_LATIN},
  {"prim_Win32NLS_cpp_sUBLANG_SERBIAN_CYRILLIC",2,prim_Win32NLS_cpp_sUBLANG_SERBIAN_CYRILLIC},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH",2,prim_Win32NLS_cpp_sUBLANG_SPANISH},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_MEXICAN",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_MEXICAN},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_MODERN",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_MODERN},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_GUATEMALA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_GUATEMALA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_COSTA_RICA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_COSTA_RICA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_PANAMA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_PANAMA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_DOMINICAN_REPUBLIC",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_DOMINICAN_REPUBLIC},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_VENEZUELA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_VENEZUELA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_COLOMBIA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_COLOMBIA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_PERU",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_PERU},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_ARGENTINA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_ARGENTINA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_ECUADOR",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_ECUADOR},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_CHILE",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_CHILE},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_URUGUAY",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_URUGUAY},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_PARAGUAY",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_PARAGUAY},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_BOLIVIA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_BOLIVIA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_EL_SALVADOR",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_EL_SALVADOR},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_HONDURAS",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_HONDURAS},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_NICARAGUA",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_NICARAGUA},
  {"prim_Win32NLS_cpp_sUBLANG_SPANISH_PUERTO_RICO",2,prim_Win32NLS_cpp_sUBLANG_SPANISH_PUERTO_RICO},
  {"prim_Win32NLS_cpp_sUBLANG_SWEDISH",2,prim_Win32NLS_cpp_sUBLANG_SWEDISH},
  {"prim_Win32NLS_cpp_sUBLANG_SWEDISH_FINLAND",2,prim_Win32NLS_cpp_sUBLANG_SWEDISH_FINLAND},
  {"prim_Win32NLS_cpp_sUBLANG_URDU_PAKISTAN",2,prim_Win32NLS_cpp_sUBLANG_URDU_PAKISTAN},
  {"prim_Win32NLS_cpp_sUBLANG_URDU_INDIA",2,prim_Win32NLS_cpp_sUBLANG_URDU_INDIA},
  {"prim_Win32NLS_cpp_sUBLANG_UZBEK_LATIN",2,prim_Win32NLS_cpp_sUBLANG_UZBEK_LATIN},
  {"prim_Win32NLS_cpp_sUBLANG_UZBEK_CYRILLIC",2,prim_Win32NLS_cpp_sUBLANG_UZBEK_CYRILLIC},
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
