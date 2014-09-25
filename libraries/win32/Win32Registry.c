/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include <windows.h>
#include "errors.h"
#include "win32debug.h"
#include "finalizers.h"
PROTO_PRIM(prim_Win32Registry_hKEY_CLASSES_ROOT);
primFun(prim_Win32Registry_hKEY_CLASSES_ROOT)
{ HKEY res1;;
  {res1=HKEY_CLASSES_ROOT;
   hugs->putAddr((HKEY)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_hKEY_CURRENT_CONFIG);
primFun(prim_Win32Registry_hKEY_CURRENT_CONFIG)
{ HKEY res1;;
  {res1=HKEY_CURRENT_CONFIG;
   hugs->putAddr((HKEY)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_hKEY_CURRENT_USER);
primFun(prim_Win32Registry_hKEY_CURRENT_USER)
{ HKEY res1;;
  {res1=HKEY_CURRENT_USER;
   hugs->putAddr((HKEY)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_hKEY_LOCAL_MACHINE);
primFun(prim_Win32Registry_hKEY_LOCAL_MACHINE)
{ HKEY res1;;
  {res1=HKEY_LOCAL_MACHINE;
   hugs->putAddr((HKEY)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_hKEY_USERS);
primFun(prim_Win32Registry_hKEY_USERS)
{ HKEY res1;;
  {res1=HKEY_USERS;
   hugs->putAddr((HKEY)(res1));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regCloseKey);
primFun(prim_Win32Registry_regCloseKey)
{ HKEY arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  { LONG r = RegCloseKey(arg1);
   if ((gc_failed = ( r != ERROR_SUCCESS ))) {gc_failstring = ErrorWithCode("RegCloseKey",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regConnectRegistry);
primFun(prim_Win32Registry_regConnectRegistry)
{ char * arg1; HKEY arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = (char *)(hugs->getAddr());
  arg2 = ((HKEY) hugs->getForeign());
  { HKEY hk;
     LONG r;
     r = RegConnectRegistry((LPTSTR)arg1,
                            (HKEY)arg2,
                            &hk);
   if ((gc_failed = (  r != ERROR_SUCCESS ))) {gc_failstring = ErrorWithCode("RegConnectRegistry",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HKEY)(hk));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Registry_regCreateKey);
primFun(prim_Win32Registry_regCreateKey)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { HKEY res;
     LONG r;
     r = RegCreateKey((HKEY)arg1,(LPCTSTR)arg2,&res);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring = ErrorWithCode("RegCreateKey",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HKEY)(res));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_OPTION_NON_VOLATILE);
primFun(prim_Win32Registry_rEG_OPTION_NON_VOLATILE)
{ int res1;;
  {res1=REG_OPTION_NON_VOLATILE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_OPTION_VOLATILE);
primFun(prim_Win32Registry_rEG_OPTION_VOLATILE)
{ int res1;;
  {res1=REG_OPTION_VOLATILE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_ALL_ACCESS);
primFun(prim_Win32Registry_kEY_ALL_ACCESS)
{ int res1;;
  {res1=KEY_ALL_ACCESS;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_CREATE_LINK);
primFun(prim_Win32Registry_kEY_CREATE_LINK)
{ int res1;;
  {res1=KEY_CREATE_LINK;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_CREATE_SUB_KEY);
primFun(prim_Win32Registry_kEY_CREATE_SUB_KEY)
{ int res1;;
  {res1=KEY_CREATE_SUB_KEY;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_ENUMERATE_SUB_KEYS);
primFun(prim_Win32Registry_kEY_ENUMERATE_SUB_KEYS)
{ int res1;;
  {res1=KEY_ENUMERATE_SUB_KEYS;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_EXECUTE);
primFun(prim_Win32Registry_kEY_EXECUTE)
{ int res1;;
  {res1=KEY_EXECUTE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_NOTIFY);
primFun(prim_Win32Registry_kEY_NOTIFY)
{ int res1;;
  {res1=KEY_NOTIFY;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_QUERY_VALUE);
primFun(prim_Win32Registry_kEY_QUERY_VALUE)
{ int res1;;
  {res1=KEY_QUERY_VALUE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_READ);
primFun(prim_Win32Registry_kEY_READ)
{ int res1;;
  {res1=KEY_READ;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_SET_VALUE);
primFun(prim_Win32Registry_kEY_SET_VALUE)
{ int res1;;
  {res1=KEY_SET_VALUE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_kEY_WRITE);
primFun(prim_Win32Registry_kEY_WRITE)
{ int res1;;
  {res1=KEY_WRITE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_regCreateKeyEx);
primFun(prim_Win32Registry_regCreateKeyEx)
{ HKEY arg1; char * arg2; char * arg3; int arg4; int arg5; void * arg6;int gc_failed;
								       char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (char *)(hugs->getAddr());
  arg4 = (int)(hugs->getInt());
  arg5 = (int)(hugs->getInt());
  arg6 = (void *)(hugs->getAddr());
  { HKEY hkey;
     DWORD disp;
     LONG r;
     r = RegCreateKeyEx((HKEY)arg1,(LPCTSTR)arg2,(DWORD)0,
                        (LPTSTR)arg3,(DWORD)arg4,(REGSAM)arg5,
                        (LPSECURITY_ATTRIBUTES)arg6,&hkey,&disp);
   if ((gc_failed = ( r != ERROR_SUCCESS ))) {gc_failstring = ErrorWithCode("RegCreateKeyEx",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(disp == REG_CREATED_NEW_KEY));
   hugs->putAddr((HKEY)(hkey));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(5);
   }
}
PROTO_PRIM(prim_Win32Registry_regDeleteKey);
primFun(prim_Win32Registry_regDeleteKey)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { LONG r;
     r = RegDeleteKey((HKEY)arg1,(LPCTSTR)arg2);
   if ((gc_failed = ( r != ERROR_SUCCESS ))) {gc_failstring = ErrorWithCode("RegDeleteKey",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regDeleteValue);
primFun(prim_Win32Registry_regDeleteValue)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { LONG r;
     r = RegDeleteValue((HKEY)arg1,(LPCTSTR)arg2);
   if ((gc_failed = ( r != ERROR_SUCCESS ))) {gc_failstring = ErrorWithCode("RegDeleteValue",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_readWord32Addr);
primFun(prim_Win32Registry_readWord32Addr)
{ char* s; int i;DWORD res1;;
  s = (char*)(hugs->getAddr());
  i = (int)(hugs->getInt());
  { res1 = s[i]; ;
   hugs->putWord((DWORD)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_regEnumKey);
primFun(prim_Win32Registry_regEnumKey)
{ HKEY arg1; DWORD arg2; void * arg3; DWORD arg4;int gc_failed;
						 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (void *)(hugs->getAddr());
  arg4 = (DWORD)(hugs->getWord());
  { LONG res;
     res = RegEnumKey((HKEY)arg1,(DWORD)arg2,(LPTSTR)arg3,(DWORD)arg4);
   if ((gc_failed = (  res != ERROR_SUCCESS && res != ERROR_NO_MORE_ITEMS  ))) {gc_failstring =  ErrorWithCode("RegEnumKey",res)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res == ERROR_NO_MORE_ITEMS));
   hugs->putAddr((char *)(arg3));
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Registry_regEnumValue);
primFun(prim_Win32Registry_regEnumValue)
{ HKEY arg1; DWORD arg2; void * arg3; DWORD arg4; void * arg5; DWORD arg6;int gc_failed;
									  char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (DWORD)(hugs->getWord());
  arg3 = (void *)(hugs->getAddr());
  arg4 = (DWORD)(hugs->getWord());
  arg5 = (void *)(hugs->getAddr());
  arg6 = (DWORD)(hugs->getWord());
  { LONG res=0; DWORD regTy;
     res = RegEnumValue((HKEY)arg1,(DWORD)arg2,(LPSTR)arg3,(LPDWORD)&arg4,
                        NULL, &regTy, (LPBYTE)arg5, (LPDWORD)&arg6);
   if ((gc_failed = (  res != ERROR_SUCCESS && res != ERROR_NO_MORE_ITEMS  ))) {gc_failstring =  ErrorWithCode("RegEnumValue",res)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res == ERROR_NO_MORE_ITEMS));
   hugs->putAddr((char *)(arg3));
   hugs->putInt((int)(regTy));
   hugs_returnIO(5);
   }
}
PROTO_PRIM(prim_Win32Registry_regFlushKey);
primFun(prim_Win32Registry_regFlushKey)
{ HKEY arg1;int gc_failed;
	    char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  { LONG r = RegFlushKey((HKEY)arg1);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegFlushKey",r)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regLoadKey);
primFun(prim_Win32Registry_regLoadKey)
{ HKEY arg1; char * arg2; char * arg3;int gc_failed;
				      char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (char *)(hugs->getAddr());
  { LONG r;
     r = RegLoadKey((HKEY)arg1,(LPCTSTR)arg2,(LPCTSTR)arg3);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring = ErrorWithCode("RegLoadKey",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_NOTIFY_CHANGE_NAME);
primFun(prim_Win32Registry_rEG_NOTIFY_CHANGE_NAME)
{ int res1;;
  {res1=REG_NOTIFY_CHANGE_NAME;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_NOTIFY_CHANGE_ATTRIBUTES);
primFun(prim_Win32Registry_rEG_NOTIFY_CHANGE_ATTRIBUTES)
{ int res1;;
  {res1=REG_NOTIFY_CHANGE_ATTRIBUTES;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_NOTIFY_CHANGE_LAST_SET);
primFun(prim_Win32Registry_rEG_NOTIFY_CHANGE_LAST_SET)
{ int res1;;
  {res1=REG_NOTIFY_CHANGE_LAST_SET;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_NOTIFY_CHANGE_SECURITY);
primFun(prim_Win32Registry_rEG_NOTIFY_CHANGE_SECURITY)
{ int res1;;
  {res1=REG_NOTIFY_CHANGE_SECURITY;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_regNotifyChangeKeyValue);
primFun(prim_Win32Registry_regNotifyChangeKeyValue)
{ HKEY arg1; int arg2; int arg3; HANDLE arg4; int arg5;int gc_failed;
						       char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (int)(hugs->getInt());
  arg3 = (int)(hugs->getInt());
  arg4 = (HANDLE)(hugs->getAddr());
  arg5 = (int)(hugs->getInt());
  { LONG r;
     r = RegNotifyChangeKeyValue((HKEY)arg1,  (BOOL)arg2,
                                 (DWORD)arg3, (HANDLE)arg4,
                                 (BOOL)arg5);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegNotifyChangeKeyValue",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regOpenKey);
primFun(prim_Win32Registry_regOpenKey)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { HKEY ret;
     LONG r;
     r=RegOpenKey((HKEY)arg1,(LPCTSTR)arg2,&ret);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring = ErrorWithCode("RegOpenKey",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HKEY)(ret));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Registry_regOpenKeyEx);
primFun(prim_Win32Registry_regOpenKeyEx)
{ HKEY arg1; char * arg2; int arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (int)(hugs->getInt());
  { HKEY ret;
     LONG r;
     r=RegOpenKeyEx((HKEY)arg1,(LPCTSTR)arg2,(DWORD)0,
                    (REGSAM)arg3,&ret);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegOpenKeyEx",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((HKEY)(ret));
   hugs->putAddr(&deleteObj);
   hugs_returnIO(4);
   }
}
PROTO_PRIM(prim_Win32Registry_regQueryInfoKey);
primFun(prim_Win32Registry_regQueryInfoKey)
{ HKEY arg1;char * str; int cbClass; DWORD cSubKeys; DWORD cbMaxSubKeyLen; DWORD cbMaxClassLen; DWORD cValues; DWORD cbMaxValueNameLen; DWORD cbMaxValueLen; int cbSecurityDescriptor;int gc_failed;
																						      char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  { LONG r;
     char* str;
     DWORD cbClass;
     DWORD cSubKeys;
     DWORD cbMaxSubKeyLen;
     DWORD cbMaxClassLen;
     DWORD cValues;
     DWORD cbMaxValueNameLen;
     DWORD cbMaxValueLen;
     DWORD cbSecurityDescriptor;
     FILETIME ftLastWriteTime;

     cbClass = 100;
     str=(char*)malloc(sizeof(char)*cbClass);
     
     r=RegQueryInfoKey((HKEY)arg1, str, &cbClass, NULL,
                       &cSubKeys, &cbMaxSubKeyLen, &cbMaxClassLen,
			&cValues, &cbMaxValueNameLen, &cbMaxValueLen,
                       &cbSecurityDescriptor, &ftLastWriteTime
                      );
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegQueryInfoKey",r)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putWord((DWORD)(ftLastWriteTime.dwHighDateTime));
   hugs->putWord((DWORD)(ftLastWriteTime.dwLowDateTime));
   hugs->putInt((int)(cbSecurityDescriptor));
   hugs->putWord((DWORD)(cbMaxValueLen));
   hugs->putWord((DWORD)(cbMaxValueNameLen));
   hugs->putWord((DWORD)(cValues));
   hugs->putWord((DWORD)(cbMaxClassLen));
   hugs->putWord((DWORD)(cbMaxSubKeyLen));
   hugs->putWord((DWORD)(cSubKeys));
   hugs->putInt((int)(cbClass));
   hugs->putAddr((char *)(str));
   hugs_returnIO(13);
   }
}
PROTO_PRIM(prim_Win32Registry_regQueryValueKey);
primFun(prim_Win32Registry_regQueryValueKey)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { char* szValue; long valueLen;
     long res;
     res = RegQueryValue ((HKEY)arg1,(char*)arg2, NULL, &valueLen);
     if ( res == ERROR_SUCCESS ) {
        szValue=(LPTSTR)malloc(sizeof(char)*(valueLen + 1));
        res = RegQueryValue((HKEY)arg1,(char*)arg2, szValue, &valueLen);
     };
   if ((gc_failed = (  res != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegQueryValue",res)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(szValue));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Registry_regQueryValue);
primFun(prim_Win32Registry_regQueryValue)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { char* res1; DWORD valueLen;
     long res; DWORD ty;
     res = RegQueryValueEx ((HKEY)arg1,(char*)arg2, NULL, &ty, NULL, &valueLen);
     if ( ty== REG_SZ && res == ERROR_SUCCESS ) {
        res1=(LPTSTR)malloc(sizeof(char)*(valueLen + 1));
        res = RegQueryValueEx((HKEY)arg1,(char*)arg2, NULL, &ty, res1, &valueLen);
     } else {
        if ( ty != REG_SZ ) res = 1;
     };
   if ((gc_failed = (  res != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegQueryValue",res)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((char *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Registry_regQueryValueEx);
primFun(prim_Win32Registry_regQueryValueEx)
{ HKEY arg1; char * arg2; void * arg3; int arg4;int gc_failed;
						char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (void *)(hugs->getAddr());
  arg4 = (int)(hugs->getInt());
  { LONG res;
     DWORD ty;
     
     res = RegQueryValueEx ((HKEY)arg1, (LPTSTR)arg2,
                            NULL, &ty, (LPBYTE)arg3, (LPDWORD)arg4);
   if ((gc_failed = (  res != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegQueryValueEx",res)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putInt((int)(res));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_Win32Registry_regReplaceKey);
primFun(prim_Win32Registry_regReplaceKey)
{ HKEY arg1; char * arg2; char * arg3; char * arg4;int gc_failed;
						   char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (char *)(hugs->getAddr());
  arg4 = (char *)(hugs->getAddr());
  { LONG r;
     r= RegReplaceKey((HKEY)arg1,(LPCTSTR)arg2,
                      (LPCTSTR)arg3,(LPCTSTR)arg4);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegReplaceKey",r)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_WHOLE_HIVE_VOLATILE);
primFun(prim_Win32Registry_rEG_WHOLE_HIVE_VOLATILE)
{ int res1;;
  {res1=REG_WHOLE_HIVE_VOLATILE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_REFRESH_HIVE);
primFun(prim_Win32Registry_rEG_REFRESH_HIVE)
{ int res1;;
  {res1=REG_REFRESH_HIVE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_NO_LAZY_FLUSH);
primFun(prim_Win32Registry_rEG_NO_LAZY_FLUSH)
{ int res1;;
  {res1=REG_NO_LAZY_FLUSH;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_regRestoreKey);
primFun(prim_Win32Registry_regRestoreKey)
{ HKEY arg1; char * arg2; int arg3;int gc_failed;
				   char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (int)(hugs->getInt());
  { LONG r;
     r = RegRestoreKey((HKEY)arg1,(LPCTSTR)arg2,
                       (DWORD)arg3);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegRestoreKey",r)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regSaveKey);
primFun(prim_Win32Registry_regSaveKey)
{ HKEY arg1; char * arg2; void * arg3;int gc_failed;
				      char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (void *)(hugs->getAddr());
  { LONG r;
     r = RegSaveKey((HKEY)arg1,(LPCTSTR)arg2,
                    (LPSECURITY_ATTRIBUTES)arg3);
   if ((gc_failed = (  r != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegSaveKey",r)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regSetValue);
primFun(prim_Win32Registry_regSetValue)
{ HKEY arg1; char * arg2; char * arg3; int arg4;int gc_failed;
						char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (char *)(hugs->getAddr());
  arg4 = (int)(hugs->getInt());
  { LONG res = RegSetValue(arg1,arg2,REG_SZ,arg3,arg4);
   if ((gc_failed = (  res != ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegSetValue",res)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_BINARY);
primFun(prim_Win32Registry_rEG_BINARY)
{ int res1;;
  {res1=REG_BINARY;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_DWORD);
primFun(prim_Win32Registry_rEG_DWORD)
{ int res1;;
  {res1=REG_DWORD;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_DWORD_LITTLE_ENDIAN);
primFun(prim_Win32Registry_rEG_DWORD_LITTLE_ENDIAN)
{ int res1;;
  {res1=REG_DWORD_LITTLE_ENDIAN;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_DWORD_BIG_ENDIAN);
primFun(prim_Win32Registry_rEG_DWORD_BIG_ENDIAN)
{ int res1;;
  {res1=REG_DWORD_BIG_ENDIAN;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_EXPAND_SZ);
primFun(prim_Win32Registry_rEG_EXPAND_SZ)
{ int res1;;
  {res1=REG_EXPAND_SZ;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_LINK);
primFun(prim_Win32Registry_rEG_LINK)
{ int res1;;
  {res1=REG_LINK;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_MULTI_SZ);
primFun(prim_Win32Registry_rEG_MULTI_SZ)
{ int res1;;
  {res1=REG_MULTI_SZ;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_NONE);
primFun(prim_Win32Registry_rEG_NONE)
{ int res1;;
  {res1=REG_NONE;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_RESOURCE_LIST);
primFun(prim_Win32Registry_rEG_RESOURCE_LIST)
{ int res1;;
  {res1=REG_RESOURCE_LIST;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_rEG_SZ);
primFun(prim_Win32Registry_rEG_SZ)
{ int res1;;
  {res1=REG_SZ;
   hugs->putInt((int)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_Win32Registry_regSetValueEx);
primFun(prim_Win32Registry_regSetValueEx)
{ HKEY arg1; char * arg2; int arg3; void * arg4; int arg5;int gc_failed;
							  char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  arg3 = (int)(hugs->getInt());
  arg4 = (void *)(hugs->getAddr());
  arg5 = (int)(hugs->getInt());
  { LONG r;
     r = RegSetValueEx((HKEY)arg1,(LPCTSTR)arg2,
                       0,arg3,arg4,arg5);
   if ((gc_failed = (  r!=ERROR_SUCCESS  ))) {gc_failstring =  ErrorWithCode("RegSetValueEx",r)  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
PROTO_PRIM(prim_Win32Registry_regUnLoadKey);
primFun(prim_Win32Registry_regUnLoadKey)
{ HKEY arg1; char * arg2;int gc_failed;
			 char* gc_failstring;;
  arg1 = ((HKEY) hugs->getForeign());
  arg2 = (char *)(hugs->getAddr());
  { LONG r;
     r = RegUnLoadKey((HKEY)arg1,(LPCTSTR)arg2);
   if ((gc_failed = ( r != ERROR_SUCCESS ))) {gc_failstring = ErrorWithCode("RegUnLoadKey",r) ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs_returnIO(2);
   }
}
static struct primitive primTable[] = {
  {"prim_Win32Registry_hKEY_CLASSES_ROOT",2,prim_Win32Registry_hKEY_CLASSES_ROOT},
  {"prim_Win32Registry_hKEY_CURRENT_CONFIG",2,prim_Win32Registry_hKEY_CURRENT_CONFIG},
  {"prim_Win32Registry_hKEY_CURRENT_USER",2,prim_Win32Registry_hKEY_CURRENT_USER},
  {"prim_Win32Registry_hKEY_LOCAL_MACHINE",2,prim_Win32Registry_hKEY_LOCAL_MACHINE},
  {"prim_Win32Registry_hKEY_USERS",2,prim_Win32Registry_hKEY_USERS},
  {"prim_Win32Registry_regCloseKey",3,prim_Win32Registry_regCloseKey},
  {"prim_Win32Registry_regConnectRegistry",4,prim_Win32Registry_regConnectRegistry},
  {"prim_Win32Registry_regCreateKey",4,prim_Win32Registry_regCreateKey},
  {"prim_Win32Registry_rEG_OPTION_NON_VOLATILE",2,prim_Win32Registry_rEG_OPTION_NON_VOLATILE},
  {"prim_Win32Registry_rEG_OPTION_VOLATILE",2,prim_Win32Registry_rEG_OPTION_VOLATILE},
  {"prim_Win32Registry_kEY_ALL_ACCESS",2,prim_Win32Registry_kEY_ALL_ACCESS},
  {"prim_Win32Registry_kEY_CREATE_LINK",2,prim_Win32Registry_kEY_CREATE_LINK},
  {"prim_Win32Registry_kEY_CREATE_SUB_KEY",2,prim_Win32Registry_kEY_CREATE_SUB_KEY},
  {"prim_Win32Registry_kEY_ENUMERATE_SUB_KEYS",2,prim_Win32Registry_kEY_ENUMERATE_SUB_KEYS},
  {"prim_Win32Registry_kEY_EXECUTE",2,prim_Win32Registry_kEY_EXECUTE},
  {"prim_Win32Registry_kEY_NOTIFY",2,prim_Win32Registry_kEY_NOTIFY},
  {"prim_Win32Registry_kEY_QUERY_VALUE",2,prim_Win32Registry_kEY_QUERY_VALUE},
  {"prim_Win32Registry_kEY_READ",2,prim_Win32Registry_kEY_READ},
  {"prim_Win32Registry_kEY_SET_VALUE",2,prim_Win32Registry_kEY_SET_VALUE},
  {"prim_Win32Registry_kEY_WRITE",2,prim_Win32Registry_kEY_WRITE},
  {"prim_Win32Registry_regCreateKeyEx",8,prim_Win32Registry_regCreateKeyEx},
  {"prim_Win32Registry_regDeleteKey",4,prim_Win32Registry_regDeleteKey},
  {"prim_Win32Registry_regDeleteValue",4,prim_Win32Registry_regDeleteValue},
  {"prim_Win32Registry_readWord32Addr",4,prim_Win32Registry_readWord32Addr},
  {"prim_Win32Registry_regEnumKey",6,prim_Win32Registry_regEnumKey},
  {"prim_Win32Registry_regEnumValue",8,prim_Win32Registry_regEnumValue},
  {"prim_Win32Registry_regFlushKey",3,prim_Win32Registry_regFlushKey},
  {"prim_Win32Registry_regLoadKey",5,prim_Win32Registry_regLoadKey},
  {"prim_Win32Registry_rEG_NOTIFY_CHANGE_NAME",2,prim_Win32Registry_rEG_NOTIFY_CHANGE_NAME},
  {"prim_Win32Registry_rEG_NOTIFY_CHANGE_ATTRIBUTES",2,prim_Win32Registry_rEG_NOTIFY_CHANGE_ATTRIBUTES},
  {"prim_Win32Registry_rEG_NOTIFY_CHANGE_LAST_SET",2,prim_Win32Registry_rEG_NOTIFY_CHANGE_LAST_SET},
  {"prim_Win32Registry_rEG_NOTIFY_CHANGE_SECURITY",2,prim_Win32Registry_rEG_NOTIFY_CHANGE_SECURITY},
  {"prim_Win32Registry_regNotifyChangeKeyValue",7,prim_Win32Registry_regNotifyChangeKeyValue},
  {"prim_Win32Registry_regOpenKey",4,prim_Win32Registry_regOpenKey},
  {"prim_Win32Registry_regOpenKeyEx",5,prim_Win32Registry_regOpenKeyEx},
  {"prim_Win32Registry_regQueryInfoKey",3,prim_Win32Registry_regQueryInfoKey},
  {"prim_Win32Registry_regQueryValueKey",4,prim_Win32Registry_regQueryValueKey},
  {"prim_Win32Registry_regQueryValue",4,prim_Win32Registry_regQueryValue},
  {"prim_Win32Registry_regQueryValueEx",6,prim_Win32Registry_regQueryValueEx},
  {"prim_Win32Registry_regReplaceKey",6,prim_Win32Registry_regReplaceKey},
  {"prim_Win32Registry_rEG_WHOLE_HIVE_VOLATILE",2,prim_Win32Registry_rEG_WHOLE_HIVE_VOLATILE},
  {"prim_Win32Registry_rEG_REFRESH_HIVE",2,prim_Win32Registry_rEG_REFRESH_HIVE},
  {"prim_Win32Registry_rEG_NO_LAZY_FLUSH",2,prim_Win32Registry_rEG_NO_LAZY_FLUSH},
  {"prim_Win32Registry_regRestoreKey",5,prim_Win32Registry_regRestoreKey},
  {"prim_Win32Registry_regSaveKey",5,prim_Win32Registry_regSaveKey},
  {"prim_Win32Registry_regSetValue",6,prim_Win32Registry_regSetValue},
  {"prim_Win32Registry_rEG_BINARY",2,prim_Win32Registry_rEG_BINARY},
  {"prim_Win32Registry_rEG_DWORD",2,prim_Win32Registry_rEG_DWORD},
  {"prim_Win32Registry_rEG_DWORD_LITTLE_ENDIAN",2,prim_Win32Registry_rEG_DWORD_LITTLE_ENDIAN},
  {"prim_Win32Registry_rEG_DWORD_BIG_ENDIAN",2,prim_Win32Registry_rEG_DWORD_BIG_ENDIAN},
  {"prim_Win32Registry_rEG_EXPAND_SZ",2,prim_Win32Registry_rEG_EXPAND_SZ},
  {"prim_Win32Registry_rEG_LINK",2,prim_Win32Registry_rEG_LINK},
  {"prim_Win32Registry_rEG_MULTI_SZ",2,prim_Win32Registry_rEG_MULTI_SZ},
  {"prim_Win32Registry_rEG_NONE",2,prim_Win32Registry_rEG_NONE},
  {"prim_Win32Registry_rEG_RESOURCE_LIST",2,prim_Win32Registry_rEG_RESOURCE_LIST},
  {"prim_Win32Registry_rEG_SZ",2,prim_Win32Registry_rEG_SZ},
  {"prim_Win32Registry_regSetValueEx",7,prim_Win32Registry_regSetValueEx},
  {"prim_Win32Registry_regUnLoadKey",4,prim_Win32Registry_regUnLoadKey},
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

