
--Stubs for Win32 API for accessing the registry.
module Win32Registry 
		( module Win32Registry
		, MbString(..)
		) where
{- What's really on offer:
	(
	  regCloseKey        -- :: HKEY -> IO ()
	, regConnectRegistry -- :: MbString -> HKEY -> IO HKEY
	, regCreateKey       -- :: HKEY -> String -> IO HKEY
	, regCreateKeyEx     -- :: HKEY -> String -> String 
	                     -- -> RegCreateOptions -> REGSAM
			     -- -> MbLPSECURITY_ATTRIBUTES 
			     -- -> IO (HKEY, Bool)
        , regDeleteKey       -- :: HKEY -> String -> IO ()
	, regDeleteValue     -- :: HKEY -> String -> IO ()
	, regEnumKeys	     -- :: HKEY -> IO [String]
	, regEnumKey 	     -- :: HKEY -> DWORD -> Addr -> DWORD -> IO String
	, regEnumKeyValue    -- :: HKEY -> DWORD -> Addr -> DWORD -> Addr -> DWORD -> IO String
	, regFlushKey        -- :: HKEY -> IO ()
	, regLoadKey         -- :: HKEY -> String -> String -> IO ()
	, regNotifyChangeKeyValue -- :: HKEY -> Bool -> RegNotifyOptions 
				  -- -> HANDLE -> Bool -> IO ()
	, regOpenKey         -- :: HKEY -> String -> IO HKEY
	, regOpenKeyEx 	     -- :: HKEY -> String -> REGSAM -> IO HKEY
	, regQueryInfoKey    -- :: HKEY -> IO RegInfoKey
	, regQueryValue      -- :: HKEY -> String -> IO String
	, regQueryValueEx    -- :: HKEY -> String -> Addr -> Int -> IO RegValueType
	, regReplaceKey      -- :: HKEY -> String -> String -> String -> IO ()
	, regRestoreKey      -- :: HKEY -> String -> RegRestoreFlags -> IO ()
	, regSaveKey         -- :: HKEY -> String -> MbLPSECURITY_ATTRIBUTES -> IO ()
	, regSetValue        -- :: HKEY -> String -> String -> IO ()
	, regSetValueEx      -- :: HKEY -> String -> RegValueType -> Addr -> Int -> IO ()
	, regSetStringValue  -- :: HKEY -> String -> String -> IO ()
	, regUnloadKey       -- :: HKEY -> String -> IO ()
	) where
-}

{-
 Registry API omissions:

   RegQueryMultipleValues()
   RegEnumKeyEx()

-}

import StdDIS
import Addr
import Word
import Win32Types
import Win32File


hKEY_CLASSES_ROOT :: HKEY
hKEY_CLASSES_ROOT =
  unsafePerformIO(
    prim_Win32Registry_hKEY_CLASSES_ROOT >>= \ (gc_res3,gc_res1) ->
    (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
    (return (gc_res2)))
primitive prim_Win32Registry_hKEY_CLASSES_ROOT :: IO (Addr,Addr)
hKEY_CURRENT_CONFIG :: HKEY
hKEY_CURRENT_CONFIG =
  unsafePerformIO(
    prim_Win32Registry_hKEY_CURRENT_CONFIG >>= \ (gc_res3,gc_res1) ->
    (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
    (return (gc_res2)))
primitive prim_Win32Registry_hKEY_CURRENT_CONFIG :: IO (Addr,Addr)
hKEY_CURRENT_USER :: HKEY
hKEY_CURRENT_USER =
  unsafePerformIO(
    prim_Win32Registry_hKEY_CURRENT_USER >>= \ (gc_res3,gc_res1) ->
    (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
    (return (gc_res2)))
primitive prim_Win32Registry_hKEY_CURRENT_USER :: IO (Addr,Addr)
hKEY_LOCAL_MACHINE :: HKEY
hKEY_LOCAL_MACHINE =
  unsafePerformIO(
    prim_Win32Registry_hKEY_LOCAL_MACHINE >>= \ (gc_res3,gc_res1) ->
    (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
    (return (gc_res2)))
primitive prim_Win32Registry_hKEY_LOCAL_MACHINE :: IO (Addr,Addr)
hKEY_USERS :: HKEY
hKEY_USERS =
  unsafePerformIO(
    prim_Win32Registry_hKEY_USERS >>= \ (gc_res3,gc_res1) ->
    (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
    (return (gc_res2)))
primitive prim_Win32Registry_hKEY_USERS :: IO (Addr,Addr)

regCloseKey :: HKEY -> IO ()
regCloseKey arg1 =
  prim_Win32Registry_regCloseKey arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regCloseKey :: ForeignObj -> IO (Int,Addr)

-- Connects to a predefined registry handle on another computer.
regConnectRegistry :: MbString -> HKEY -> IO HKEY
regConnectRegistry gc_arg1 arg2 =
  (case gc_arg1 of {
      Nothing -> (return (nullAddr));
      (Just gc_arg1) -> (marshall_string_ gc_arg1) >>= \ (arg1) ->
			(return ((arg1)))
   }) >>= \ (arg1) ->
  prim_Win32Registry_regConnectRegistry arg1 arg2 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))
primitive prim_Win32Registry_regConnectRegistry :: Addr -> ForeignObj -> IO (Addr,Addr,Int,Addr)

regCreateKey :: HKEY -> String -> IO HKEY
regCreateKey arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Registry_regCreateKey arg1 arg2 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))
primitive prim_Win32Registry_regCreateKey :: ForeignObj -> Addr -> IO (Addr,Addr,Int,Addr)

type RegCreateOptions = Int32

rEG_OPTION_NON_VOLATILE :: RegCreateOptions
rEG_OPTION_NON_VOLATILE =
  unsafePerformIO(
    prim_Win32Registry_rEG_OPTION_NON_VOLATILE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_OPTION_NON_VOLATILE :: IO (Int)
rEG_OPTION_VOLATILE :: RegCreateOptions
rEG_OPTION_VOLATILE =
  unsafePerformIO(
    prim_Win32Registry_rEG_OPTION_VOLATILE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_OPTION_VOLATILE :: IO (Int)

type REGSAM = Int32

kEY_ALL_ACCESS :: REGSAM
kEY_ALL_ACCESS =
  unsafePerformIO(
    prim_Win32Registry_kEY_ALL_ACCESS >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_ALL_ACCESS :: IO (Int)
kEY_CREATE_LINK :: REGSAM
kEY_CREATE_LINK =
  unsafePerformIO(
    prim_Win32Registry_kEY_CREATE_LINK >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_CREATE_LINK :: IO (Int)
kEY_CREATE_SUB_KEY :: REGSAM
kEY_CREATE_SUB_KEY =
  unsafePerformIO(
    prim_Win32Registry_kEY_CREATE_SUB_KEY >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_CREATE_SUB_KEY :: IO (Int)
kEY_ENUMERATE_SUB_KEYS :: REGSAM
kEY_ENUMERATE_SUB_KEYS =
  unsafePerformIO(
    prim_Win32Registry_kEY_ENUMERATE_SUB_KEYS >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_ENUMERATE_SUB_KEYS :: IO (Int)
kEY_EXECUTE :: REGSAM
kEY_EXECUTE =
  unsafePerformIO(
    prim_Win32Registry_kEY_EXECUTE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_EXECUTE :: IO (Int)
kEY_NOTIFY :: REGSAM
kEY_NOTIFY =
  unsafePerformIO(
    prim_Win32Registry_kEY_NOTIFY >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_NOTIFY :: IO (Int)
kEY_QUERY_VALUE :: REGSAM
kEY_QUERY_VALUE =
  unsafePerformIO(
    prim_Win32Registry_kEY_QUERY_VALUE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_QUERY_VALUE :: IO (Int)
kEY_READ :: REGSAM
kEY_READ =
  unsafePerformIO(
    prim_Win32Registry_kEY_READ >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_READ :: IO (Int)
kEY_SET_VALUE :: REGSAM
kEY_SET_VALUE =
  unsafePerformIO(
    prim_Win32Registry_kEY_SET_VALUE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_SET_VALUE :: IO (Int)
kEY_WRITE :: REGSAM
kEY_WRITE =
  unsafePerformIO(
    prim_Win32Registry_kEY_WRITE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_kEY_WRITE :: IO (Int)


regCreateKeyEx :: HKEY -> String -> String -> RegCreateOptions -> REGSAM -> MbLPSECURITY_ATTRIBUTES -> IO (HKEY,Bool)
regCreateKeyEx arg1 gc_arg1 gc_arg2 gc_arg3 gc_arg4 arg6 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (marshall_string_ gc_arg2) >>= \ (arg3) ->
  case ( fromIntegral  gc_arg3) of { arg4 ->
  case ( fromIntegral  gc_arg4) of { arg5 ->
  (case arg6 of {
      Nothing -> (return (nullAddr));
      (Just arg6) -> (return ((arg6)))
   }) >>= \ (arg6) ->
  prim_Win32Registry_regCreateKeyEx arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_res3,gc_res1,gc_res5,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (unmarshall_bool_ gc_res5) >>= \ gc_res4 ->
       (return ((gc_res2,gc_res4)))}}
primitive prim_Win32Registry_regCreateKeyEx :: ForeignObj -> Addr -> Addr -> Int -> Int -> Addr -> IO (Addr,Addr,Int,Int,Addr)

regDeleteKey :: HKEY -> String -> IO ()
regDeleteKey arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Registry_regDeleteKey arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regDeleteKey :: ForeignObj -> Addr -> IO (Int,Addr)

regDeleteValue :: HKEY -> String -> IO ()
regDeleteValue arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Registry_regDeleteValue arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regDeleteValue :: ForeignObj -> Addr -> IO (Int,Addr)

regEnumKeys :: HKEY -> IO [String]
regEnumKeys hkey = do
   hinfo <- regQueryInfoKey hkey
   let buflen = 1+max_subkey_len hinfo
   buf   <- malloc buflen
   ls    <- go 0 buf buflen
   free buf
   return ls
 where
   go n buf buflen = do
      (v,flg)  <- regEnumKey hkey n buf buflen
      if flg /= 0
       then return []
       else do
         vs <- go (n+1) buf buflen
         return (v:vs)

regEnumKeyVals :: HKEY -> IO [(String,String,RegValueType)]
regEnumKeyVals hkey = do
   hinfo <- regQueryInfoKey hkey
   let nmlen  = 1+max_value_name_len hinfo  -- add spc for terminating NUL.
   let vallen = 1+max_value_len hinfo
   nmbuf  <- malloc nmlen
   valbuf <- malloc vallen
   ls     <- go 0 nmbuf nmlen valbuf vallen
   free nmbuf
   free valbuf
   return ls
 where
   go n nmbuf nmlen valbuf vallen = do
      (ty,nm,flg) <- regEnumValue hkey n nmbuf nmlen valbuf vallen
      if flg /= 0
       then return []
       else do

        val <- 
	   case ty of
	     x | x == rEG_SZ    -> unmarshall_string_ valbuf
	       | x == rEG_DWORD -> readWord32Addr valbuf 0 >>= \ v -> return (show v)
	       | otherwise      -> return "<<unknown>>"

        vs <- go (n+1) nmbuf nmlen valbuf vallen
        return ((nm,val,ty):vs)

readWord32Addr :: Addr -> Int -> IO DWORD
readWord32Addr s i =
  prim_Win32Registry_readWord32Addr s i >>= \ (res1) ->
  (return (res1))
primitive prim_Win32Registry_readWord32Addr :: Addr -> Int -> IO (Word32)

-- It's up to the programmer to ensure that a large enough
-- buffer is passed in here.

regEnumKey :: HKEY -> DWORD -> Addr -> DWORD -> IO (String,Int)
regEnumKey arg1 arg2 arg3 arg4 =
  prim_Win32Registry_regEnumKey arg1 arg2 arg3 arg4 >>= \ (gc_res2,gc_res3,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return ((gc_res1,gc_res3)))
primitive prim_Win32Registry_regEnumKey :: ForeignObj -> Word32 -> Addr -> Word32 -> IO (Addr,Int,Int,Addr)

regEnumValue :: HKEY -> DWORD -> Addr -> DWORD -> Addr -> DWORD -> IO (RegValueType,String,Int)
regEnumValue arg1 arg2 arg3 arg4 arg5 arg6 =
  prim_Win32Registry_regEnumValue arg1 arg2 arg3 arg4 arg5 arg6 >>= \ (gc_res2,gc_res4,gc_res5,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       (unmarshall_string_ gc_res4) >>= \ gc_res3 ->
       (return ((gc_res1,gc_res3,gc_res5)))
primitive prim_Win32Registry_regEnumValue :: ForeignObj -> Word32 -> Addr -> Word32 -> Addr -> Word32 -> IO (Int,Addr,Int,Int,Addr)

regFlushKey :: HKEY -> IO ()
regFlushKey arg1 =
  prim_Win32Registry_regFlushKey arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regFlushKey :: ForeignObj -> IO (Int,Addr)

-- #ifdef FOR_WINDOWS_NT
-- %fun RegGetKeySecurity :: HKEY -> SECURITY_INFORMATION -> IO SECURITY_DESCRIPTION

-- #endif


regLoadKey :: HKEY -> String -> String -> IO ()
regLoadKey arg1 gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (marshall_string_ gc_arg2) >>= \ (arg3) ->
  prim_Win32Registry_regLoadKey arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regLoadKey :: ForeignObj -> Addr -> Addr -> IO (Int,Addr)

-- #ifdef FOR_WINDOWS_NT

type RegNotifyOptions = Int32

rEG_NOTIFY_CHANGE_NAME :: RegNotifyOptions
rEG_NOTIFY_CHANGE_NAME =
  unsafePerformIO(
    prim_Win32Registry_rEG_NOTIFY_CHANGE_NAME >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_NOTIFY_CHANGE_NAME :: IO (Int)
rEG_NOTIFY_CHANGE_ATTRIBUTES :: RegNotifyOptions
rEG_NOTIFY_CHANGE_ATTRIBUTES =
  unsafePerformIO(
    prim_Win32Registry_rEG_NOTIFY_CHANGE_ATTRIBUTES >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_NOTIFY_CHANGE_ATTRIBUTES :: IO (Int)
rEG_NOTIFY_CHANGE_LAST_SET :: RegNotifyOptions
rEG_NOTIFY_CHANGE_LAST_SET =
  unsafePerformIO(
    prim_Win32Registry_rEG_NOTIFY_CHANGE_LAST_SET >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_NOTIFY_CHANGE_LAST_SET :: IO (Int)
rEG_NOTIFY_CHANGE_SECURITY :: RegNotifyOptions
rEG_NOTIFY_CHANGE_SECURITY =
  unsafePerformIO(
    prim_Win32Registry_rEG_NOTIFY_CHANGE_SECURITY >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_NOTIFY_CHANGE_SECURITY :: IO (Int)



regNotifyChangeKeyValue :: HKEY -> Bool -> RegNotifyOptions -> HANDLE -> Bool -> IO ()
regNotifyChangeKeyValue arg1 gc_arg1 gc_arg2 arg4 gc_arg3 =
  (marshall_bool_ gc_arg1) >>= \ (arg2) ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  (marshall_bool_ gc_arg3) >>= \ (arg5) ->
  prim_Win32Registry_regNotifyChangeKeyValue arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Registry_regNotifyChangeKeyValue :: ForeignObj -> Int -> Int -> Addr -> Int -> IO (Int,Addr)

-- #endif

-- for Win 3.x compatibility, use RegOpenKeyEx instead.
regOpenKey :: HKEY -> String -> IO HKEY
regOpenKey arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Registry_regOpenKey arg1 arg2 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))
primitive prim_Win32Registry_regOpenKey :: ForeignObj -> Addr -> IO (Addr,Addr,Int,Addr)

regOpenKeyEx :: HKEY -> String -> REGSAM -> IO HKEY
regOpenKeyEx arg1 gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Registry_regOpenKeyEx arg1 arg2 arg3 >>= \ (gc_res3,gc_res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (makeForeignObj gc_res1 gc_res3) >>= \ gc_res2 ->
       (return (gc_res2))}
primitive prim_Win32Registry_regOpenKeyEx :: ForeignObj -> Addr -> Int -> IO (Addr,Addr,Int,Addr)

data RegInfoKey =
 RegInfoKey {
    class_string       :: String,
    class_id           :: Int,
    subkeys            :: Word32,
    max_subkey_len     :: Word32,
    max_class_len      :: Word32,
    values             :: Word32,
    max_value_name_len :: Word32,
    max_value_len      :: Word32,
    sec_len            :: Int,
    lastWrite_lo       :: Word32,
    lastWrite_hi       :: Word32
 }

regQueryInfoKey :: HKEY -> IO RegInfoKey
regQueryInfoKey arg1 =
  prim_Win32Registry_regQueryInfoKey arg1 >>= \ (str,cbClass,cSubKeys,cbMaxSubKeyLen,cbMaxClassLen,cValues,cbMaxValueNameLen,cbMaxValueLen,cbSecurityDescriptor,gc_res2,gc_res3,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ str) >>= \ gc_res1 ->
       (return ((RegInfoKey gc_res1 cbClass cSubKeys cbMaxSubKeyLen cbMaxClassLen cValues cbMaxValueNameLen cbMaxValueLen cbSecurityDescriptor gc_res2 gc_res3)))
primitive prim_Win32Registry_regQueryInfoKey :: ForeignObj -> IO (Addr,Int,Word32,Word32,Word32,Word32,Word32,Word32,Int,Word32,Word32,Int,Addr)

-- %fun RegQueryMultipleValues :: HKEY -> IO ([VALENT],String)

-- RegQueryValue() isn't really that, it just allows you to
-- get at the default values of keys, so we provide our own
-- (and better!) version of it. If you want RegQueryValue()s
-- behaviour, use regQueryValueKey.

regQueryValueKey :: HKEY -> MbString -> IO String
regQueryValueKey arg1 gc_arg1 =
  (case gc_arg1 of {
      Nothing -> (return (nullAddr));
      (Just gc_arg1) -> (marshall_string_ gc_arg1) >>= \ (arg2) ->
			(return ((arg2)))
   }) >>= \ (arg2) ->
  prim_Win32Registry_regQueryValueKey arg1 arg2 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Registry_regQueryValueKey :: ForeignObj -> Addr -> IO (Addr,Int,Addr)

regQueryValue :: HKEY -> MbString -> IO String
regQueryValue arg1 gc_arg1 =
  (case gc_arg1 of {
      Nothing -> (return (nullAddr));
      (Just gc_arg1) -> (marshall_string_ gc_arg1) >>= \ (arg2) ->
			(return ((arg2)))
   }) >>= \ (arg2) ->
  prim_Win32Registry_regQueryValue arg1 arg2 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Registry_regQueryValue :: ForeignObj -> Addr -> IO (Addr,Int,Addr)

-- %end free(szValue);

regQueryValueEx :: HKEY -> String -> Addr -> Int -> IO RegValueType
regQueryValueEx arg1 gc_arg1 arg3 arg4 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Registry_regQueryValueEx arg1 arg2 arg3 arg4 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else let gc_res1 = ( fromIntegral  (gc_res2)) in
       (return (gc_res1))
primitive prim_Win32Registry_regQueryValueEx :: ForeignObj -> Addr -> Addr -> Int -> IO (Int,Int,Addr)

regReplaceKey :: HKEY -> String -> String -> String -> IO ()
regReplaceKey arg1 gc_arg1 gc_arg2 gc_arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (marshall_string_ gc_arg2) >>= \ (arg3) ->
  (marshall_string_ gc_arg3) >>= \ (arg4) ->
  prim_Win32Registry_regReplaceKey arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regReplaceKey :: ForeignObj -> Addr -> Addr -> Addr -> IO (Int,Addr)

type RegRestoreFlags = Int32

rEG_WHOLE_HIVE_VOLATILE :: RegRestoreFlags
rEG_WHOLE_HIVE_VOLATILE =
  unsafePerformIO(
    prim_Win32Registry_rEG_WHOLE_HIVE_VOLATILE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_WHOLE_HIVE_VOLATILE :: IO (Int)
rEG_REFRESH_HIVE :: RegRestoreFlags
rEG_REFRESH_HIVE =
  unsafePerformIO(
    prim_Win32Registry_rEG_REFRESH_HIVE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_REFRESH_HIVE :: IO (Int)
rEG_NO_LAZY_FLUSH :: RegRestoreFlags
rEG_NO_LAZY_FLUSH =
  unsafePerformIO(
    prim_Win32Registry_rEG_NO_LAZY_FLUSH >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_NO_LAZY_FLUSH :: IO (Int)

regRestoreKey :: HKEY -> String -> RegRestoreFlags -> IO ()
regRestoreKey arg1 gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Registry_regRestoreKey arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Registry_regRestoreKey :: ForeignObj -> Addr -> Int -> IO (Int,Addr)

regSaveKey :: HKEY -> String -> MbLPSECURITY_ATTRIBUTES -> IO ()
regSaveKey arg1 gc_arg1 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (case arg3 of {
      Nothing -> (return (nullAddr));
      (Just arg3) -> (return ((arg3)))
   }) >>= \ (arg3) ->
  prim_Win32Registry_regSaveKey arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regSaveKey :: ForeignObj -> Addr -> Addr -> IO (Int,Addr)

-- #ifdef FOR_WINDOWS_NT

-- %fun RegSetKeySecurity :: HKEY -> SECURITY_INFORMATION -> SECURITY_DESCRIPTOR -> IO ()

-- #endif

-- 3.1 compat. - only allows storage of REG_SZ values.
regSetValue :: HKEY -> String -> String -> IO ()
regSetValue arg1 gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (marshall_stringLen_ gc_arg2) >>= \ (arg3,arg4) ->
  prim_Win32Registry_regSetValue arg1 arg2 arg3 arg4 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regSetValue :: ForeignObj -> Addr -> Addr -> Int -> IO (Int,Addr)


type RegValueType = Int32

rEG_BINARY :: RegValueType
rEG_BINARY =
  unsafePerformIO(
    prim_Win32Registry_rEG_BINARY >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_BINARY :: IO (Int)
rEG_DWORD :: RegValueType
rEG_DWORD =
  unsafePerformIO(
    prim_Win32Registry_rEG_DWORD >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_DWORD :: IO (Int)
rEG_DWORD_LITTLE_ENDIAN :: RegValueType
rEG_DWORD_LITTLE_ENDIAN =
  unsafePerformIO(
    prim_Win32Registry_rEG_DWORD_LITTLE_ENDIAN >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_DWORD_LITTLE_ENDIAN :: IO (Int)
rEG_DWORD_BIG_ENDIAN :: RegValueType
rEG_DWORD_BIG_ENDIAN =
  unsafePerformIO(
    prim_Win32Registry_rEG_DWORD_BIG_ENDIAN >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_DWORD_BIG_ENDIAN :: IO (Int)
rEG_EXPAND_SZ :: RegValueType
rEG_EXPAND_SZ =
  unsafePerformIO(
    prim_Win32Registry_rEG_EXPAND_SZ >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_EXPAND_SZ :: IO (Int)
rEG_LINK :: RegValueType
rEG_LINK =
  unsafePerformIO(
    prim_Win32Registry_rEG_LINK >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_LINK :: IO (Int)
rEG_MULTI_SZ :: RegValueType
rEG_MULTI_SZ =
  unsafePerformIO(
    prim_Win32Registry_rEG_MULTI_SZ >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_MULTI_SZ :: IO (Int)
rEG_NONE :: RegValueType
rEG_NONE =
  unsafePerformIO(
    prim_Win32Registry_rEG_NONE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_NONE :: IO (Int)
rEG_RESOURCE_LIST :: RegValueType
rEG_RESOURCE_LIST =
  unsafePerformIO(
    prim_Win32Registry_rEG_RESOURCE_LIST >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_RESOURCE_LIST :: IO (Int)
rEG_SZ :: RegValueType
rEG_SZ =
  unsafePerformIO(
    prim_Win32Registry_rEG_SZ >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_Win32Registry_rEG_SZ :: IO (Int)


-- regSetValueEx has a somewhat wieldly interface if all you want to do is
-- add a string value (a Common Thing to want to do), so we support this
-- specially:
regSetStringValue :: HKEY -> String -> String -> IO ()
regSetStringValue hk key val = do
   v <- marshall_string_ val
   regSetValueEx hk key rEG_SZ v (length val)
   free v
   return ()

regSetValueEx :: HKEY -> String -> RegValueType -> Addr -> Int -> IO ()
regSetValueEx arg1 gc_arg1 gc_arg2 arg4 arg5 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  case ( fromIntegral  gc_arg2) of { arg3 ->
  prim_Win32Registry_regSetValueEx arg1 arg2 arg3 arg4 arg5 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))}
primitive prim_Win32Registry_regSetValueEx :: ForeignObj -> Addr -> Int -> Addr -> Int -> IO (Int,Addr)

regUnLoadKey :: HKEY -> String -> IO ()
regUnLoadKey arg1 gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  prim_Win32Registry_regUnLoadKey arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32Registry_regUnLoadKey :: ForeignObj -> Addr -> IO (Int,Addr)

needPrims_hugs 3
