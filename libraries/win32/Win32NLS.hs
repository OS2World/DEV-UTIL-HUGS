module Win32NLS where

import StdDIS
import Addr
import Word
import Win32Types


type LCID = DWORD

lOCALE_SYSTEM_DEFAULT :: LCID
lOCALE_SYSTEM_DEFAULT =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SYSTEM_DEFAULT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SYSTEM_DEFAULT :: IO (Word32)
lOCALE_USER_DEFAULT :: LCID
lOCALE_USER_DEFAULT =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_USER_DEFAULT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_USER_DEFAULT :: IO (Word32)
lOCALE_NEUTRAL :: LCID
lOCALE_NEUTRAL =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_NEUTRAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_NEUTRAL :: IO (Word32)

convertDefaultLocale :: LCID -> IO LCID
convertDefaultLocale arg1 =
  prim_Win32NLS_cpp_convertDefaultLocale arg1 >>= \ (res1) ->
  (return (res1))
primitive prim_Win32NLS_cpp_convertDefaultLocale :: Word32 -> IO (Word32)

-- ToDo: various enum functions.

type CodePage = UINT

cP_ACP :: CodePage
cP_ACP =
  unsafePerformIO(
    prim_Win32NLS_cpp_cP_ACP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_cP_ACP :: IO (Word32)
cP_MACCP :: CodePage
cP_MACCP =
  unsafePerformIO(
    prim_Win32NLS_cpp_cP_MACCP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_cP_MACCP :: IO (Word32)
cP_OEMCP :: CodePage
cP_OEMCP =
  unsafePerformIO(
    prim_Win32NLS_cpp_cP_OEMCP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_cP_OEMCP :: IO (Word32)

getACP :: IO CodePage
getACP =
  prim_Win32NLS_cpp_getACP >>= \ (res1) ->
  (return (res1))
primitive prim_Win32NLS_cpp_getACP :: IO (Word32)

setThreadLocale :: LCID -> IO ()
setThreadLocale arg1 =
  prim_Win32NLS_cpp_setThreadLocale arg1
primitive prim_Win32NLS_cpp_setThreadLocale :: Word32 -> IO ()

type LCTYPE = UINT

lOCALE_ICALENDARTYPE :: LCTYPE
lOCALE_ICALENDARTYPE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_ICALENDARTYPE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_ICALENDARTYPE :: IO (Word32)
lOCALE_SDATE :: LCTYPE
lOCALE_SDATE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SDATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SDATE :: IO (Word32)
lOCALE_ICURRDIGITS :: LCTYPE
lOCALE_ICURRDIGITS =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_ICURRDIGITS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_ICURRDIGITS :: IO (Word32)
lOCALE_SDECIMAL :: LCTYPE
lOCALE_SDECIMAL =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SDECIMAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SDECIMAL :: IO (Word32)
lOCALE_ICURRENCY :: LCTYPE
lOCALE_ICURRENCY =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_ICURRENCY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_ICURRENCY :: IO (Word32)
lOCALE_SGROUPING :: LCTYPE
lOCALE_SGROUPING =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SGROUPING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SGROUPING :: IO (Word32)
lOCALE_IDIGITS :: LCTYPE
lOCALE_IDIGITS =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_IDIGITS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_IDIGITS :: IO (Word32)
lOCALE_SLIST :: LCTYPE
lOCALE_SLIST =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SLIST >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SLIST :: IO (Word32)
lOCALE_IFIRSTDAYOFWEEK :: LCTYPE
lOCALE_IFIRSTDAYOFWEEK =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_IFIRSTDAYOFWEEK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_IFIRSTDAYOFWEEK :: IO (Word32)
lOCALE_SLONGDATE :: LCTYPE
lOCALE_SLONGDATE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SLONGDATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SLONGDATE :: IO (Word32)
lOCALE_IFIRSTWEEKOFYEAR :: LCTYPE
lOCALE_IFIRSTWEEKOFYEAR =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_IFIRSTWEEKOFYEAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_IFIRSTWEEKOFYEAR :: IO (Word32)
lOCALE_SMONDECIMALSEP :: LCTYPE
lOCALE_SMONDECIMALSEP =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SMONDECIMALSEP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SMONDECIMALSEP :: IO (Word32)
lOCALE_ILZERO :: LCTYPE
lOCALE_ILZERO =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_ILZERO >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_ILZERO :: IO (Word32)
lOCALE_SMONGROUPING :: LCTYPE
lOCALE_SMONGROUPING =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SMONGROUPING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SMONGROUPING :: IO (Word32)
lOCALE_IMEASURE :: LCTYPE
lOCALE_IMEASURE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_IMEASURE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_IMEASURE :: IO (Word32)
lOCALE_SMONTHOUSANDSEP :: LCTYPE
lOCALE_SMONTHOUSANDSEP =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SMONTHOUSANDSEP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SMONTHOUSANDSEP :: IO (Word32)
lOCALE_INEGCURR :: LCTYPE
lOCALE_INEGCURR =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_INEGCURR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_INEGCURR :: IO (Word32)
lOCALE_SNEGATIVESIGN :: LCTYPE
lOCALE_SNEGATIVESIGN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SNEGATIVESIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SNEGATIVESIGN :: IO (Word32)
lOCALE_INEGNUMBER :: LCTYPE
lOCALE_INEGNUMBER =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_INEGNUMBER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_INEGNUMBER :: IO (Word32)
lOCALE_SPOSITIVESIGN :: LCTYPE
lOCALE_SPOSITIVESIGN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SPOSITIVESIGN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SPOSITIVESIGN :: IO (Word32)
lOCALE_SSHORTDATE :: LCTYPE
lOCALE_SSHORTDATE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SSHORTDATE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SSHORTDATE :: IO (Word32)
lOCALE_ITIME :: LCTYPE
lOCALE_ITIME =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_ITIME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_ITIME :: IO (Word32)
lOCALE_STHOUSAND :: LCTYPE
lOCALE_STHOUSAND =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_STHOUSAND >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_STHOUSAND :: IO (Word32)
lOCALE_S1159 :: LCTYPE
lOCALE_S1159 =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_S1159 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_S1159 :: IO (Word32)
lOCALE_STIME :: LCTYPE
lOCALE_STIME =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_STIME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_STIME :: IO (Word32)
lOCALE_S2359 :: LCTYPE
lOCALE_S2359 =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_S2359 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_S2359 :: IO (Word32)
lOCALE_STIMEFORMAT :: LCTYPE
lOCALE_STIMEFORMAT =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_STIMEFORMAT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_STIMEFORMAT :: IO (Word32)
lOCALE_SCURRENCY :: LCTYPE
lOCALE_SCURRENCY =
  unsafePerformIO(
    prim_Win32NLS_cpp_lOCALE_SCURRENCY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lOCALE_SCURRENCY :: IO (Word32)

-- doesn't work too well with Unicode strings coming back. ToDo: fix.

setLocaleInfo :: LCID -> LCTYPE -> IO String
setLocaleInfo arg1 arg2 =
  prim_Win32NLS_cpp_setLocaleInfo arg1 arg2 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32NLS_cpp_setLocaleInfo :: Word32 -> Word32 -> IO (Addr,Int,Addr)

type LCMapFlags = DWORD

lCMAP_BYTEREV :: LCMapFlags
lCMAP_BYTEREV =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_BYTEREV >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_BYTEREV :: IO (Word32)
lCMAP_FULLWIDTH :: LCMapFlags
lCMAP_FULLWIDTH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_FULLWIDTH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_FULLWIDTH :: IO (Word32)
lCMAP_HALFWIDTH :: LCMapFlags
lCMAP_HALFWIDTH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_HALFWIDTH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_HALFWIDTH :: IO (Word32)
lCMAP_HIRAGANA :: LCMapFlags
lCMAP_HIRAGANA =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_HIRAGANA >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_HIRAGANA :: IO (Word32)
lCMAP_KATAKANA :: LCMapFlags
lCMAP_KATAKANA =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_KATAKANA >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_KATAKANA :: IO (Word32)
lCMAP_LINGUISTIC_CASING :: LCMapFlags
lCMAP_LINGUISTIC_CASING =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_LINGUISTIC_CASING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_LINGUISTIC_CASING :: IO (Word32)
lCMAP_LOWERCASE :: LCMapFlags
lCMAP_LOWERCASE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_LOWERCASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_LOWERCASE :: IO (Word32)
lCMAP_SIMPLIFIED_CHINESE :: LCMapFlags
lCMAP_SIMPLIFIED_CHINESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_SIMPLIFIED_CHINESE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_SIMPLIFIED_CHINESE :: IO (Word32)
lCMAP_SORTKEY :: LCMapFlags
lCMAP_SORTKEY =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_SORTKEY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_SORTKEY :: IO (Word32)
lCMAP_TRADITIONAL_CHINESE :: LCMapFlags
lCMAP_TRADITIONAL_CHINESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_TRADITIONAL_CHINESE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_TRADITIONAL_CHINESE :: IO (Word32)
lCMAP_UPPERCASE :: LCMapFlags
lCMAP_UPPERCASE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCMAP_UPPERCASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCMAP_UPPERCASE :: IO (Word32)
nORM_IGNORECASE :: LCMapFlags
nORM_IGNORECASE =
  unsafePerformIO(
    prim_Win32NLS_cpp_nORM_IGNORECASE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_nORM_IGNORECASE :: IO (Word32)
nORM_IGNORENONSPACE :: LCMapFlags
nORM_IGNORENONSPACE =
  unsafePerformIO(
    prim_Win32NLS_cpp_nORM_IGNORENONSPACE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_nORM_IGNORENONSPACE :: IO (Word32)
nORM_IGNOREKANATYPE :: LCMapFlags
nORM_IGNOREKANATYPE =
  unsafePerformIO(
    prim_Win32NLS_cpp_nORM_IGNOREKANATYPE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_nORM_IGNOREKANATYPE :: IO (Word32)
nORM_IGNORESYMBOLS :: LCMapFlags
nORM_IGNORESYMBOLS =
  unsafePerformIO(
    prim_Win32NLS_cpp_nORM_IGNORESYMBOLS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_nORM_IGNORESYMBOLS :: IO (Word32)
nORM_IGNOREWIDTH :: LCMapFlags
nORM_IGNOREWIDTH =
  unsafePerformIO(
    prim_Win32NLS_cpp_nORM_IGNOREWIDTH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_nORM_IGNOREWIDTH :: IO (Word32)
sORT_STRINGSORT :: LCMapFlags
sORT_STRINGSORT =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_STRINGSORT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_sORT_STRINGSORT :: IO (Word32)

lCMapString :: LCID -> LCMapFlags -> String -> Int -> IO String
lCMapString arg1 arg2 gc_arg1 arg4 =
  (marshall_stringLen_ gc_arg1) >>= \ (arg3,arg3_len) ->
  prim_Win32NLS_cpp_lCMapString arg1 arg2 arg3 arg3_len arg4 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32NLS_cpp_lCMapString :: Word32 -> Word32 -> Addr -> Int -> Int -> IO (Addr,Int,Addr)

type LocaleTestFlags = DWORD

lCID_INSTALLED :: LocaleTestFlags
lCID_INSTALLED =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCID_INSTALLED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCID_INSTALLED :: IO (Word32)
lCID_SUPPORTED :: LocaleTestFlags
lCID_SUPPORTED =
  unsafePerformIO(
    prim_Win32NLS_cpp_lCID_SUPPORTED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_lCID_SUPPORTED :: IO (Word32)

isValidLocale :: LCID -> LocaleTestFlags -> IO Bool
isValidLocale arg1 arg2 =
  prim_Win32NLS_cpp_isValidLocale arg1 arg2 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32NLS_cpp_isValidLocale :: Word32 -> Word32 -> IO (Int)

isValidCodePage :: CodePage -> IO Bool
isValidCodePage arg1 =
  prim_Win32NLS_cpp_isValidCodePage arg1 >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32NLS_cpp_isValidCodePage :: Word32 -> IO (Int)

getUserDefaultLCID :: LCID
getUserDefaultLCID =
  unsafePerformIO(
    prim_Win32NLS_cpp_getUserDefaultLCID >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_getUserDefaultLCID :: IO (Word32)

getUserDefaultLangID :: LANGID
getUserDefaultLangID =
  unsafePerformIO(
    prim_Win32NLS_cpp_getUserDefaultLangID >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_getUserDefaultLangID :: IO (Word32)

getThreadLocale :: IO LCID
getThreadLocale =
  prim_Win32NLS_cpp_getThreadLocale >>= \ (res1) ->
  (return (res1))
primitive prim_Win32NLS_cpp_getThreadLocale :: IO (Word32)

getSystemDefaultLCID :: LCID
getSystemDefaultLCID =
  unsafePerformIO(
    prim_Win32NLS_cpp_getSystemDefaultLCID >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_getSystemDefaultLCID :: IO (Word32)

getSystemDefaultLangID :: LANGID
getSystemDefaultLangID =
  unsafePerformIO(
    prim_Win32NLS_cpp_getSystemDefaultLangID >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_getSystemDefaultLangID :: IO (Word32)

getOEMCP :: CodePage
getOEMCP =
  unsafePerformIO(
    prim_Win32NLS_cpp_getOEMCP >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32NLS_cpp_getOEMCP :: IO (Word32)

type LANGID = WORD

lANGIDFROMLCID :: LCID -> LANGID
lANGIDFROMLCID arg1 =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANGIDFROMLCID arg1 >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANGIDFROMLCID :: Word32 -> IO (Word32)

type SubLANGID = WORD

type PrimaryLANGID = WORD

lANG_NEUTRAL :: PrimaryLANGID
lANG_NEUTRAL =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_NEUTRAL >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_NEUTRAL :: IO (Word32)
lANG_ARABIC :: PrimaryLANGID
lANG_ARABIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ARABIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ARABIC :: IO (Word32)
lANG_BULGARIAN :: PrimaryLANGID
lANG_BULGARIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_BULGARIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_BULGARIAN :: IO (Word32)
lANG_CATALAN :: PrimaryLANGID
lANG_CATALAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_CATALAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_CATALAN :: IO (Word32)
lANG_CHINESE :: PrimaryLANGID
lANG_CHINESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_CHINESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_CHINESE :: IO (Word32)
lANG_CZECH :: PrimaryLANGID
lANG_CZECH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_CZECH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_CZECH :: IO (Word32)
lANG_DANISH :: PrimaryLANGID
lANG_DANISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_DANISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_DANISH :: IO (Word32)
lANG_GERMAN :: PrimaryLANGID
lANG_GERMAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_GERMAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_GERMAN :: IO (Word32)
lANG_GREEK :: PrimaryLANGID
lANG_GREEK =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_GREEK >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_GREEK :: IO (Word32)
lANG_ENGLISH :: PrimaryLANGID
lANG_ENGLISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ENGLISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ENGLISH :: IO (Word32)
lANG_SPANISH :: PrimaryLANGID
lANG_SPANISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SPANISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SPANISH :: IO (Word32)
lANG_FINNISH :: PrimaryLANGID
lANG_FINNISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_FINNISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_FINNISH :: IO (Word32)
lANG_FRENCH :: PrimaryLANGID
lANG_FRENCH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_FRENCH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_FRENCH :: IO (Word32)
lANG_HEBREW :: PrimaryLANGID
lANG_HEBREW =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_HEBREW >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_HEBREW :: IO (Word32)
lANG_HUNGARIAN :: PrimaryLANGID
lANG_HUNGARIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_HUNGARIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_HUNGARIAN :: IO (Word32)
lANG_ICELANDIC :: PrimaryLANGID
lANG_ICELANDIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ICELANDIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ICELANDIC :: IO (Word32)
lANG_ITALIAN :: PrimaryLANGID
lANG_ITALIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ITALIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ITALIAN :: IO (Word32)
lANG_JAPANESE :: PrimaryLANGID
lANG_JAPANESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_JAPANESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_JAPANESE :: IO (Word32)
lANG_KOREAN :: PrimaryLANGID
lANG_KOREAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_KOREAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_KOREAN :: IO (Word32)
lANG_DUTCH :: PrimaryLANGID
lANG_DUTCH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_DUTCH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_DUTCH :: IO (Word32)
lANG_NORWEGIAN :: PrimaryLANGID
lANG_NORWEGIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_NORWEGIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_NORWEGIAN :: IO (Word32)
lANG_POLISH :: PrimaryLANGID
lANG_POLISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_POLISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_POLISH :: IO (Word32)
lANG_PORTUGUESE :: PrimaryLANGID
lANG_PORTUGUESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_PORTUGUESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_PORTUGUESE :: IO (Word32)
lANG_ROMANIAN :: PrimaryLANGID
lANG_ROMANIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ROMANIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ROMANIAN :: IO (Word32)
lANG_RUSSIAN :: PrimaryLANGID
lANG_RUSSIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_RUSSIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_RUSSIAN :: IO (Word32)
lANG_CROATIAN :: PrimaryLANGID
lANG_CROATIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_CROATIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_CROATIAN :: IO (Word32)
lANG_SERBIAN :: PrimaryLANGID
lANG_SERBIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SERBIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SERBIAN :: IO (Word32)
lANG_SLOVAK :: PrimaryLANGID
lANG_SLOVAK =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SLOVAK >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SLOVAK :: IO (Word32)
lANG_ALBANIAN :: PrimaryLANGID
lANG_ALBANIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ALBANIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ALBANIAN :: IO (Word32)
lANG_SWEDISH :: PrimaryLANGID
lANG_SWEDISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SWEDISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SWEDISH :: IO (Word32)
lANG_THAI :: PrimaryLANGID
lANG_THAI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_THAI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_THAI :: IO (Word32)
lANG_TURKISH :: PrimaryLANGID
lANG_TURKISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_TURKISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_TURKISH :: IO (Word32)
lANG_URDU :: PrimaryLANGID
lANG_URDU =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_URDU >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_URDU :: IO (Word32)
lANG_INDONESIAN :: PrimaryLANGID
lANG_INDONESIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_INDONESIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_INDONESIAN :: IO (Word32)
lANG_BELARUSIAN :: PrimaryLANGID
lANG_BELARUSIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_BELARUSIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_BELARUSIAN :: IO (Word32)
lANG_SLOVENIAN :: PrimaryLANGID
lANG_SLOVENIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SLOVENIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SLOVENIAN :: IO (Word32)
lANG_ESTONIAN :: PrimaryLANGID
lANG_ESTONIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ESTONIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ESTONIAN :: IO (Word32)
lANG_LATVIAN :: PrimaryLANGID
lANG_LATVIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_LATVIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_LATVIAN :: IO (Word32)
lANG_LITHUANIAN :: PrimaryLANGID
lANG_LITHUANIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_LITHUANIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_LITHUANIAN :: IO (Word32)
lANG_FARSI :: PrimaryLANGID
lANG_FARSI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_FARSI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_FARSI :: IO (Word32)
lANG_VIETNAMESE :: PrimaryLANGID
lANG_VIETNAMESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_VIETNAMESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_VIETNAMESE :: IO (Word32)
lANG_ARMENIAN :: PrimaryLANGID
lANG_ARMENIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ARMENIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ARMENIAN :: IO (Word32)
lANG_AZERI :: PrimaryLANGID
lANG_AZERI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_AZERI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_AZERI :: IO (Word32)
lANG_BASQUE :: PrimaryLANGID
lANG_BASQUE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_BASQUE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_BASQUE :: IO (Word32)
lANG_MACEDONIAN :: PrimaryLANGID
lANG_MACEDONIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_MACEDONIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_MACEDONIAN :: IO (Word32)
lANG_AFRIKAANS :: PrimaryLANGID
lANG_AFRIKAANS =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_AFRIKAANS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_AFRIKAANS :: IO (Word32)
lANG_GEORGIAN :: PrimaryLANGID
lANG_GEORGIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_GEORGIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_GEORGIAN :: IO (Word32)
lANG_FAEROESE :: PrimaryLANGID
lANG_FAEROESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_FAEROESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_FAEROESE :: IO (Word32)
lANG_HINDI :: PrimaryLANGID
lANG_HINDI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_HINDI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_HINDI :: IO (Word32)
lANG_MALAY :: PrimaryLANGID
lANG_MALAY =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_MALAY >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_MALAY :: IO (Word32)
lANG_KAZAK :: PrimaryLANGID
lANG_KAZAK =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_KAZAK >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_KAZAK :: IO (Word32)
lANG_SWAHILI :: PrimaryLANGID
lANG_SWAHILI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SWAHILI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SWAHILI :: IO (Word32)
lANG_UZBEK :: PrimaryLANGID
lANG_UZBEK =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_UZBEK >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_UZBEK :: IO (Word32)
lANG_TATAR :: PrimaryLANGID
lANG_TATAR =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_TATAR >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_TATAR :: IO (Word32)
lANG_BENGALI :: PrimaryLANGID
lANG_BENGALI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_BENGALI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_BENGALI :: IO (Word32)
lANG_PUNJABI :: PrimaryLANGID
lANG_PUNJABI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_PUNJABI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_PUNJABI :: IO (Word32)
lANG_GUJARATI :: PrimaryLANGID
lANG_GUJARATI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_GUJARATI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_GUJARATI :: IO (Word32)
lANG_ORIYA :: PrimaryLANGID
lANG_ORIYA =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ORIYA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ORIYA :: IO (Word32)
lANG_TAMIL :: PrimaryLANGID
lANG_TAMIL =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_TAMIL >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_TAMIL :: IO (Word32)
lANG_TELUGU :: PrimaryLANGID
lANG_TELUGU =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_TELUGU >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_TELUGU :: IO (Word32)
lANG_KANNADA :: PrimaryLANGID
lANG_KANNADA =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_KANNADA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_KANNADA :: IO (Word32)
lANG_MALAYALAM :: PrimaryLANGID
lANG_MALAYALAM =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_MALAYALAM >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_MALAYALAM :: IO (Word32)
lANG_ASSAMESE :: PrimaryLANGID
lANG_ASSAMESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_ASSAMESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_ASSAMESE :: IO (Word32)
lANG_MARATHI :: PrimaryLANGID
lANG_MARATHI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_MARATHI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_MARATHI :: IO (Word32)
lANG_SANSKRIT :: PrimaryLANGID
lANG_SANSKRIT =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SANSKRIT >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SANSKRIT :: IO (Word32)
lANG_KONKANI :: PrimaryLANGID
lANG_KONKANI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_KONKANI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_KONKANI :: IO (Word32)
lANG_MANIPURI :: PrimaryLANGID
lANG_MANIPURI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_MANIPURI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_MANIPURI :: IO (Word32)
lANG_SINDHI :: PrimaryLANGID
lANG_SINDHI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_SINDHI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_SINDHI :: IO (Word32)
lANG_KASHMIRI :: PrimaryLANGID
lANG_KASHMIRI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_KASHMIRI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_KASHMIRI :: IO (Word32)
lANG_NEPALI :: PrimaryLANGID
lANG_NEPALI =
  unsafePerformIO(
    prim_Win32NLS_cpp_lANG_NEPALI >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_lANG_NEPALI :: IO (Word32)

mAKELANGID :: PrimaryLANGID -> SubLANGID -> LANGID
mAKELANGID gc_arg1 gc_arg2 =
  unsafePerformIO(
    case ( word16ToWord32  gc_arg1) of { arg1 ->
    case ( word16ToWord32  gc_arg2) of { arg2 ->
    prim_Win32NLS_cpp_mAKELANGID arg1 arg2 >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1))}})
primitive prim_Win32NLS_cpp_mAKELANGID :: Word32 -> Word32 -> IO (Word32)

mAKELCID :: LANGID -> SortID -> LCID
mAKELCID gc_arg1 gc_arg2 =
  unsafePerformIO(
    case ( word16ToWord32  gc_arg1) of { arg1 ->
    case ( word16ToWord32  gc_arg2) of { arg2 ->
    prim_Win32NLS_cpp_mAKELCID arg1 arg2 >>= \ (res1) ->
    (return (res1))}})
primitive prim_Win32NLS_cpp_mAKELCID :: Word32 -> Word32 -> IO (Word32)

pRIMARYLANGID :: LANGID -> PrimaryLANGID
pRIMARYLANGID gc_arg1 =
  unsafePerformIO(
    case ( word16ToWord32  gc_arg1) of { arg1 ->
    prim_Win32NLS_cpp_pRIMARYLANGID arg1 >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1))})
primitive prim_Win32NLS_cpp_pRIMARYLANGID :: Word32 -> IO (Word32)

sUBLANGID :: LANGID -> SubLANGID
sUBLANGID gc_arg1 =
  unsafePerformIO(
    case ( word16ToWord32  gc_arg1) of { arg1 ->
    prim_Win32NLS_cpp_sUBLANGID arg1 >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1))})
primitive prim_Win32NLS_cpp_sUBLANGID :: Word32 -> IO (Word32)

sORTIDFROMLCID :: LCID -> SortID
sORTIDFROMLCID arg1 =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORTIDFROMLCID arg1 >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORTIDFROMLCID :: Word32 -> IO (Word32)

type SortID = WORD

sORT_DEFAULT :: SortID
sORT_DEFAULT =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_DEFAULT >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_DEFAULT :: IO (Word32)
sORT_JAPANESE_XJIS :: SortID
sORT_JAPANESE_XJIS =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_JAPANESE_XJIS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_JAPANESE_XJIS :: IO (Word32)
sORT_JAPANESE_UNICODE :: SortID
sORT_JAPANESE_UNICODE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_JAPANESE_UNICODE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_JAPANESE_UNICODE :: IO (Word32)
sORT_CHINESE_BIG5 :: SortID
sORT_CHINESE_BIG5 =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_CHINESE_BIG5 >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_CHINESE_BIG5 :: IO (Word32)
sORT_CHINESE_UNICODE :: SortID
sORT_CHINESE_UNICODE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_CHINESE_UNICODE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_CHINESE_UNICODE :: IO (Word32)
sORT_KOREAN_KSC :: SortID
sORT_KOREAN_KSC =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_KOREAN_KSC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_KOREAN_KSC :: IO (Word32)
sORT_KOREAN_UNICODE :: SortID
sORT_KOREAN_UNICODE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sORT_KOREAN_UNICODE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sORT_KOREAN_UNICODE :: IO (Word32)

sUBLANG_NEUTRAL :: SubLANGID
sUBLANG_NEUTRAL =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_NEUTRAL >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_NEUTRAL :: IO (Word32)
sUBLANG_DEFAULT :: SubLANGID
sUBLANG_DEFAULT =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_DEFAULT >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_DEFAULT :: IO (Word32)
sUBLANG_SYS_DEFAULT :: SubLANGID
sUBLANG_SYS_DEFAULT =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SYS_DEFAULT >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SYS_DEFAULT :: IO (Word32)
sUBLANG_ARABIC_SAUDI_ARABIA :: SubLANGID
sUBLANG_ARABIC_SAUDI_ARABIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_SAUDI_ARABIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_SAUDI_ARABIA :: IO (Word32)
sUBLANG_ARABIC_IRAQ :: SubLANGID
sUBLANG_ARABIC_IRAQ =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_IRAQ >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_IRAQ :: IO (Word32)
sUBLANG_ARABIC_EGYPT :: SubLANGID
sUBLANG_ARABIC_EGYPT =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_EGYPT >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_EGYPT :: IO (Word32)
sUBLANG_ARABIC_LIBYA :: SubLANGID
sUBLANG_ARABIC_LIBYA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_LIBYA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_LIBYA :: IO (Word32)
sUBLANG_ARABIC_ALGERIA :: SubLANGID
sUBLANG_ARABIC_ALGERIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_ALGERIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_ALGERIA :: IO (Word32)
sUBLANG_ARABIC_MOROCCO :: SubLANGID
sUBLANG_ARABIC_MOROCCO =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_MOROCCO >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_MOROCCO :: IO (Word32)
sUBLANG_ARABIC_TUNISIA :: SubLANGID
sUBLANG_ARABIC_TUNISIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_TUNISIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_TUNISIA :: IO (Word32)
sUBLANG_ARABIC_OMAN :: SubLANGID
sUBLANG_ARABIC_OMAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_OMAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_OMAN :: IO (Word32)
sUBLANG_ARABIC_YEMEN :: SubLANGID
sUBLANG_ARABIC_YEMEN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_YEMEN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_YEMEN :: IO (Word32)
sUBLANG_ARABIC_SYRIA :: SubLANGID
sUBLANG_ARABIC_SYRIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_SYRIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_SYRIA :: IO (Word32)
sUBLANG_ARABIC_JORDAN :: SubLANGID
sUBLANG_ARABIC_JORDAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_JORDAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_JORDAN :: IO (Word32)
sUBLANG_ARABIC_LEBANON :: SubLANGID
sUBLANG_ARABIC_LEBANON =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_LEBANON >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_LEBANON :: IO (Word32)
sUBLANG_ARABIC_KUWAIT :: SubLANGID
sUBLANG_ARABIC_KUWAIT =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_KUWAIT >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_KUWAIT :: IO (Word32)
sUBLANG_ARABIC_UAE :: SubLANGID
sUBLANG_ARABIC_UAE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_UAE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_UAE :: IO (Word32)
sUBLANG_ARABIC_BAHRAIN :: SubLANGID
sUBLANG_ARABIC_BAHRAIN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_BAHRAIN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_BAHRAIN :: IO (Word32)
sUBLANG_ARABIC_QATAR :: SubLANGID
sUBLANG_ARABIC_QATAR =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ARABIC_QATAR >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ARABIC_QATAR :: IO (Word32)
sUBLANG_AZERI_CYRILLIC :: SubLANGID
sUBLANG_AZERI_CYRILLIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_AZERI_CYRILLIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_AZERI_CYRILLIC :: IO (Word32)
sUBLANG_AZERI_LATIN :: SubLANGID
sUBLANG_AZERI_LATIN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_AZERI_LATIN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_AZERI_LATIN :: IO (Word32)
sUBLANG_CHINESE_TRADITIONAL :: SubLANGID
sUBLANG_CHINESE_TRADITIONAL =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_CHINESE_TRADITIONAL >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_CHINESE_TRADITIONAL :: IO (Word32)
sUBLANG_CHINESE_SIMPLIFIED :: SubLANGID
sUBLANG_CHINESE_SIMPLIFIED =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_CHINESE_SIMPLIFIED >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_CHINESE_SIMPLIFIED :: IO (Word32)
sUBLANG_CHINESE_HONGKONG :: SubLANGID
sUBLANG_CHINESE_HONGKONG =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_CHINESE_HONGKONG >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_CHINESE_HONGKONG :: IO (Word32)
sUBLANG_CHINESE_SINGAPORE :: SubLANGID
sUBLANG_CHINESE_SINGAPORE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_CHINESE_SINGAPORE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_CHINESE_SINGAPORE :: IO (Word32)
sUBLANG_CHINESE_MACAU :: SubLANGID
sUBLANG_CHINESE_MACAU =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_CHINESE_MACAU >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_CHINESE_MACAU :: IO (Word32)
sUBLANG_DUTCH :: SubLANGID
sUBLANG_DUTCH =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_DUTCH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_DUTCH :: IO (Word32)
sUBLANG_DUTCH_BELGIAN :: SubLANGID
sUBLANG_DUTCH_BELGIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_DUTCH_BELGIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_DUTCH_BELGIAN :: IO (Word32)
sUBLANG_ENGLISH_US :: SubLANGID
sUBLANG_ENGLISH_US =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_US >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_US :: IO (Word32)
sUBLANG_ENGLISH_UK :: SubLANGID
sUBLANG_ENGLISH_UK =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_UK >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_UK :: IO (Word32)
sUBLANG_ENGLISH_AUS :: SubLANGID
sUBLANG_ENGLISH_AUS =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_AUS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_AUS :: IO (Word32)
sUBLANG_ENGLISH_CAN :: SubLANGID
sUBLANG_ENGLISH_CAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_CAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_CAN :: IO (Word32)
sUBLANG_ENGLISH_NZ :: SubLANGID
sUBLANG_ENGLISH_NZ =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_NZ >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_NZ :: IO (Word32)
sUBLANG_ENGLISH_EIRE :: SubLANGID
sUBLANG_ENGLISH_EIRE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_EIRE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_EIRE :: IO (Word32)
sUBLANG_ENGLISH_SOUTH_AFRICA :: SubLANGID
sUBLANG_ENGLISH_SOUTH_AFRICA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_SOUTH_AFRICA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_SOUTH_AFRICA :: IO (Word32)
sUBLANG_ENGLISH_JAMAICA :: SubLANGID
sUBLANG_ENGLISH_JAMAICA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_JAMAICA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_JAMAICA :: IO (Word32)
sUBLANG_ENGLISH_CARIBBEAN :: SubLANGID
sUBLANG_ENGLISH_CARIBBEAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_CARIBBEAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_CARIBBEAN :: IO (Word32)
sUBLANG_ENGLISH_BELIZE :: SubLANGID
sUBLANG_ENGLISH_BELIZE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_BELIZE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_BELIZE :: IO (Word32)
sUBLANG_ENGLISH_TRINIDAD :: SubLANGID
sUBLANG_ENGLISH_TRINIDAD =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_TRINIDAD >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_TRINIDAD :: IO (Word32)
sUBLANG_ENGLISH_PHILIPPINES :: SubLANGID
sUBLANG_ENGLISH_PHILIPPINES =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_PHILIPPINES >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_PHILIPPINES :: IO (Word32)
sUBLANG_ENGLISH_ZIMBABWE :: SubLANGID
sUBLANG_ENGLISH_ZIMBABWE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ENGLISH_ZIMBABWE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ENGLISH_ZIMBABWE :: IO (Word32)
sUBLANG_FRENCH :: SubLANGID
sUBLANG_FRENCH =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_FRENCH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_FRENCH :: IO (Word32)
sUBLANG_FRENCH_BELGIAN :: SubLANGID
sUBLANG_FRENCH_BELGIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_FRENCH_BELGIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_FRENCH_BELGIAN :: IO (Word32)
sUBLANG_FRENCH_CANADIAN :: SubLANGID
sUBLANG_FRENCH_CANADIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_FRENCH_CANADIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_FRENCH_CANADIAN :: IO (Word32)
sUBLANG_FRENCH_SWISS :: SubLANGID
sUBLANG_FRENCH_SWISS =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_FRENCH_SWISS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_FRENCH_SWISS :: IO (Word32)
sUBLANG_FRENCH_LUXEMBOURG :: SubLANGID
sUBLANG_FRENCH_LUXEMBOURG =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_FRENCH_LUXEMBOURG >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_FRENCH_LUXEMBOURG :: IO (Word32)
sUBLANG_FRENCH_MONACO :: SubLANGID
sUBLANG_FRENCH_MONACO =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_FRENCH_MONACO >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_FRENCH_MONACO :: IO (Word32)
sUBLANG_GERMAN :: SubLANGID
sUBLANG_GERMAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_GERMAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_GERMAN :: IO (Word32)
sUBLANG_GERMAN_SWISS :: SubLANGID
sUBLANG_GERMAN_SWISS =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_GERMAN_SWISS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_GERMAN_SWISS :: IO (Word32)
sUBLANG_GERMAN_AUSTRIAN :: SubLANGID
sUBLANG_GERMAN_AUSTRIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_GERMAN_AUSTRIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_GERMAN_AUSTRIAN :: IO (Word32)
sUBLANG_GERMAN_LUXEMBOURG :: SubLANGID
sUBLANG_GERMAN_LUXEMBOURG =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_GERMAN_LUXEMBOURG >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_GERMAN_LUXEMBOURG :: IO (Word32)
sUBLANG_GERMAN_LIECHTENSTEIN :: SubLANGID
sUBLANG_GERMAN_LIECHTENSTEIN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_GERMAN_LIECHTENSTEIN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_GERMAN_LIECHTENSTEIN :: IO (Word32)
sUBLANG_ITALIAN :: SubLANGID
sUBLANG_ITALIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ITALIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ITALIAN :: IO (Word32)
sUBLANG_ITALIAN_SWISS :: SubLANGID
sUBLANG_ITALIAN_SWISS =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_ITALIAN_SWISS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_ITALIAN_SWISS :: IO (Word32)
sUBLANG_KASHMIRI_INDIA :: SubLANGID
sUBLANG_KASHMIRI_INDIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_KASHMIRI_INDIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_KASHMIRI_INDIA :: IO (Word32)
sUBLANG_KOREAN :: SubLANGID
sUBLANG_KOREAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_KOREAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_KOREAN :: IO (Word32)
sUBLANG_LITHUANIAN :: SubLANGID
sUBLANG_LITHUANIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_LITHUANIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_LITHUANIAN :: IO (Word32)
sUBLANG_LITHUANIAN_CLASSIC :: SubLANGID
sUBLANG_LITHUANIAN_CLASSIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_LITHUANIAN_CLASSIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_LITHUANIAN_CLASSIC :: IO (Word32)
sUBLANG_MALAY_MALAYSIA :: SubLANGID
sUBLANG_MALAY_MALAYSIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_MALAY_MALAYSIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_MALAY_MALAYSIA :: IO (Word32)
sUBLANG_MALAY_BRUNEI_DARUSSALAM :: SubLANGID
sUBLANG_MALAY_BRUNEI_DARUSSALAM =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_MALAY_BRUNEI_DARUSSALAM >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_MALAY_BRUNEI_DARUSSALAM :: IO (Word32)
sUBLANG_NEPALI_INDIA :: SubLANGID
sUBLANG_NEPALI_INDIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_NEPALI_INDIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_NEPALI_INDIA :: IO (Word32)
sUBLANG_NORWEGIAN_BOKMAL :: SubLANGID
sUBLANG_NORWEGIAN_BOKMAL =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_BOKMAL >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_BOKMAL :: IO (Word32)
sUBLANG_NORWEGIAN_NYNORSK :: SubLANGID
sUBLANG_NORWEGIAN_NYNORSK =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_NYNORSK >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_NORWEGIAN_NYNORSK :: IO (Word32)
sUBLANG_PORTUGUESE :: SubLANGID
sUBLANG_PORTUGUESE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_PORTUGUESE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_PORTUGUESE :: IO (Word32)
sUBLANG_PORTUGUESE_BRAZILIAN :: SubLANGID
sUBLANG_PORTUGUESE_BRAZILIAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_PORTUGUESE_BRAZILIAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_PORTUGUESE_BRAZILIAN :: IO (Word32)
sUBLANG_SERBIAN_LATIN :: SubLANGID
sUBLANG_SERBIAN_LATIN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SERBIAN_LATIN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SERBIAN_LATIN :: IO (Word32)
sUBLANG_SERBIAN_CYRILLIC :: SubLANGID
sUBLANG_SERBIAN_CYRILLIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SERBIAN_CYRILLIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SERBIAN_CYRILLIC :: IO (Word32)
sUBLANG_SPANISH :: SubLANGID
sUBLANG_SPANISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH :: IO (Word32)
sUBLANG_SPANISH_MEXICAN :: SubLANGID
sUBLANG_SPANISH_MEXICAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_MEXICAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_MEXICAN :: IO (Word32)
sUBLANG_SPANISH_MODERN :: SubLANGID
sUBLANG_SPANISH_MODERN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_MODERN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_MODERN :: IO (Word32)
sUBLANG_SPANISH_GUATEMALA :: SubLANGID
sUBLANG_SPANISH_GUATEMALA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_GUATEMALA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_GUATEMALA :: IO (Word32)
sUBLANG_SPANISH_COSTA_RICA :: SubLANGID
sUBLANG_SPANISH_COSTA_RICA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_COSTA_RICA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_COSTA_RICA :: IO (Word32)
sUBLANG_SPANISH_PANAMA :: SubLANGID
sUBLANG_SPANISH_PANAMA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_PANAMA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_PANAMA :: IO (Word32)
sUBLANG_SPANISH_DOMINICAN_REPUBLIC :: SubLANGID
sUBLANG_SPANISH_DOMINICAN_REPUBLIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_DOMINICAN_REPUBLIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_DOMINICAN_REPUBLIC :: IO (Word32)
sUBLANG_SPANISH_VENEZUELA :: SubLANGID
sUBLANG_SPANISH_VENEZUELA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_VENEZUELA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_VENEZUELA :: IO (Word32)
sUBLANG_SPANISH_COLOMBIA :: SubLANGID
sUBLANG_SPANISH_COLOMBIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_COLOMBIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_COLOMBIA :: IO (Word32)
sUBLANG_SPANISH_PERU :: SubLANGID
sUBLANG_SPANISH_PERU =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_PERU >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_PERU :: IO (Word32)
sUBLANG_SPANISH_ARGENTINA :: SubLANGID
sUBLANG_SPANISH_ARGENTINA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_ARGENTINA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_ARGENTINA :: IO (Word32)
sUBLANG_SPANISH_ECUADOR :: SubLANGID
sUBLANG_SPANISH_ECUADOR =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_ECUADOR >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_ECUADOR :: IO (Word32)
sUBLANG_SPANISH_CHILE :: SubLANGID
sUBLANG_SPANISH_CHILE =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_CHILE >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_CHILE :: IO (Word32)
sUBLANG_SPANISH_URUGUAY :: SubLANGID
sUBLANG_SPANISH_URUGUAY =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_URUGUAY >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_URUGUAY :: IO (Word32)
sUBLANG_SPANISH_PARAGUAY :: SubLANGID
sUBLANG_SPANISH_PARAGUAY =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_PARAGUAY >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_PARAGUAY :: IO (Word32)
sUBLANG_SPANISH_BOLIVIA :: SubLANGID
sUBLANG_SPANISH_BOLIVIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_BOLIVIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_BOLIVIA :: IO (Word32)
sUBLANG_SPANISH_EL_SALVADOR :: SubLANGID
sUBLANG_SPANISH_EL_SALVADOR =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_EL_SALVADOR >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_EL_SALVADOR :: IO (Word32)
sUBLANG_SPANISH_HONDURAS :: SubLANGID
sUBLANG_SPANISH_HONDURAS =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_HONDURAS >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_HONDURAS :: IO (Word32)
sUBLANG_SPANISH_NICARAGUA :: SubLANGID
sUBLANG_SPANISH_NICARAGUA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_NICARAGUA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_NICARAGUA :: IO (Word32)
sUBLANG_SPANISH_PUERTO_RICO :: SubLANGID
sUBLANG_SPANISH_PUERTO_RICO =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SPANISH_PUERTO_RICO >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SPANISH_PUERTO_RICO :: IO (Word32)
sUBLANG_SWEDISH :: SubLANGID
sUBLANG_SWEDISH =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SWEDISH >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SWEDISH :: IO (Word32)
sUBLANG_SWEDISH_FINLAND :: SubLANGID
sUBLANG_SWEDISH_FINLAND =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_SWEDISH_FINLAND >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_SWEDISH_FINLAND :: IO (Word32)
sUBLANG_URDU_PAKISTAN :: SubLANGID
sUBLANG_URDU_PAKISTAN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_URDU_PAKISTAN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_URDU_PAKISTAN :: IO (Word32)
sUBLANG_URDU_INDIA :: SubLANGID
sUBLANG_URDU_INDIA =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_URDU_INDIA >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_URDU_INDIA :: IO (Word32)
sUBLANG_UZBEK_LATIN :: SubLANGID
sUBLANG_UZBEK_LATIN =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_UZBEK_LATIN >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_UZBEK_LATIN :: IO (Word32)
sUBLANG_UZBEK_CYRILLIC :: SubLANGID
sUBLANG_UZBEK_CYRILLIC =
  unsafePerformIO(
    prim_Win32NLS_cpp_sUBLANG_UZBEK_CYRILLIC >>= \ (res1) ->
    let gc_res1 = ( word32ToWord16  (res1)) in
    (return (gc_res1)))
primitive prim_Win32NLS_cpp_sUBLANG_UZBEK_CYRILLIC :: IO (Word32)



 
needPrims_hugs 2
