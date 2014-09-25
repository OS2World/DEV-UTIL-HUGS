module Win32File
{-
	( AccessMode, ShareMode, CreateMode, FileAttributeOrFlag
	, CreateFile, CloseHandle, DeleteFile, CopyFile
	, MoveFileFlag, MoveFile, MoveFileEx, 
	)
-}
where

import Win32Types
import StdDIS


----------------------------------------------------------------
-- Enumeration types
----------------------------------------------------------------

type AccessMode   = UINT

gENERIC_NONE :: AccessMode
gENERIC_NONE =
  unsafePerformIO(
    prim_Win32File_cpp_gENERIC_NONE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_gENERIC_NONE :: IO (Word32)
gENERIC_READ :: AccessMode
gENERIC_READ =
  unsafePerformIO(
    prim_Win32File_cpp_gENERIC_READ >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_gENERIC_READ :: IO (Word32)
gENERIC_WRITE :: AccessMode
gENERIC_WRITE =
  unsafePerformIO(
    prim_Win32File_cpp_gENERIC_WRITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_gENERIC_WRITE :: IO (Word32)
gENERIC_EXECUTE :: AccessMode
gENERIC_EXECUTE =
  unsafePerformIO(
    prim_Win32File_cpp_gENERIC_EXECUTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_gENERIC_EXECUTE :: IO (Word32)
gENERIC_ALL :: AccessMode
gENERIC_ALL =
  unsafePerformIO(
    prim_Win32File_cpp_gENERIC_ALL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_gENERIC_ALL :: IO (Word32)
dELETE :: AccessMode
dELETE =
  unsafePerformIO(
    prim_Win32File_cpp_dELETE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dELETE :: IO (Word32)
rEAD_CONTROL :: AccessMode
rEAD_CONTROL =
  unsafePerformIO(
    prim_Win32File_cpp_rEAD_CONTROL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_rEAD_CONTROL :: IO (Word32)
wRITE_DAC :: AccessMode
wRITE_DAC =
  unsafePerformIO(
    prim_Win32File_cpp_wRITE_DAC >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_wRITE_DAC :: IO (Word32)
wRITE_OWNER :: AccessMode
wRITE_OWNER =
  unsafePerformIO(
    prim_Win32File_cpp_wRITE_OWNER >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_wRITE_OWNER :: IO (Word32)
sYNCHRONIZE :: AccessMode
sYNCHRONIZE =
  unsafePerformIO(
    prim_Win32File_cpp_sYNCHRONIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sYNCHRONIZE :: IO (Word32)
sTANDARD_RIGHTS_REQUIRED :: AccessMode
sTANDARD_RIGHTS_REQUIRED =
  unsafePerformIO(
    prim_Win32File_cpp_sTANDARD_RIGHTS_REQUIRED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sTANDARD_RIGHTS_REQUIRED :: IO (Word32)
sTANDARD_RIGHTS_READ :: AccessMode
sTANDARD_RIGHTS_READ =
  unsafePerformIO(
    prim_Win32File_cpp_sTANDARD_RIGHTS_READ >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sTANDARD_RIGHTS_READ :: IO (Word32)
sTANDARD_RIGHTS_WRITE :: AccessMode
sTANDARD_RIGHTS_WRITE =
  unsafePerformIO(
    prim_Win32File_cpp_sTANDARD_RIGHTS_WRITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sTANDARD_RIGHTS_WRITE :: IO (Word32)
sTANDARD_RIGHTS_EXECUTE :: AccessMode
sTANDARD_RIGHTS_EXECUTE =
  unsafePerformIO(
    prim_Win32File_cpp_sTANDARD_RIGHTS_EXECUTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sTANDARD_RIGHTS_EXECUTE :: IO (Word32)
sTANDARD_RIGHTS_ALL :: AccessMode
sTANDARD_RIGHTS_ALL =
  unsafePerformIO(
    prim_Win32File_cpp_sTANDARD_RIGHTS_ALL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sTANDARD_RIGHTS_ALL :: IO (Word32)
sPECIFIC_RIGHTS_ALL :: AccessMode
sPECIFIC_RIGHTS_ALL =
  unsafePerformIO(
    prim_Win32File_cpp_sPECIFIC_RIGHTS_ALL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sPECIFIC_RIGHTS_ALL :: IO (Word32)
aCCESS_SYSTEM_SECURITY :: AccessMode
aCCESS_SYSTEM_SECURITY =
  unsafePerformIO(
    prim_Win32File_cpp_aCCESS_SYSTEM_SECURITY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_aCCESS_SYSTEM_SECURITY :: IO (Word32)
mAXIMUM_ALLOWED :: AccessMode
mAXIMUM_ALLOWED =
  unsafePerformIO(
    prim_Win32File_cpp_mAXIMUM_ALLOWED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_mAXIMUM_ALLOWED :: IO (Word32)

----------------------------------------------------------------

type ShareMode   = UINT

fILE_SHARE_NONE :: ShareMode
fILE_SHARE_NONE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_SHARE_NONE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_SHARE_NONE :: IO (Word32)
fILE_SHARE_READ :: ShareMode
fILE_SHARE_READ =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_SHARE_READ >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_SHARE_READ :: IO (Word32)
fILE_SHARE_WRITE :: ShareMode
fILE_SHARE_WRITE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_SHARE_WRITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_SHARE_WRITE :: IO (Word32)

----------------------------------------------------------------

type CreateMode   = UINT

cREATE_NEW :: CreateMode
cREATE_NEW =
  unsafePerformIO(
    prim_Win32File_cpp_cREATE_NEW >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_cREATE_NEW :: IO (Word32)
cREATE_ALWAYS :: CreateMode
cREATE_ALWAYS =
  unsafePerformIO(
    prim_Win32File_cpp_cREATE_ALWAYS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_cREATE_ALWAYS :: IO (Word32)
oPEN_EXISTING :: CreateMode
oPEN_EXISTING =
  unsafePerformIO(
    prim_Win32File_cpp_oPEN_EXISTING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_oPEN_EXISTING :: IO (Word32)
oPEN_ALWAYS :: CreateMode
oPEN_ALWAYS =
  unsafePerformIO(
    prim_Win32File_cpp_oPEN_ALWAYS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_oPEN_ALWAYS :: IO (Word32)
tRUNCATE_EXISTING :: CreateMode
tRUNCATE_EXISTING =
  unsafePerformIO(
    prim_Win32File_cpp_tRUNCATE_EXISTING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_tRUNCATE_EXISTING :: IO (Word32)

----------------------------------------------------------------

type FileAttributeOrFlag   = UINT

fILE_ATTRIBUTE_READONLY :: FileAttributeOrFlag
fILE_ATTRIBUTE_READONLY =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_READONLY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_READONLY :: IO (Word32)
fILE_ATTRIBUTE_HIDDEN :: FileAttributeOrFlag
fILE_ATTRIBUTE_HIDDEN =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_HIDDEN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_HIDDEN :: IO (Word32)
fILE_ATTRIBUTE_SYSTEM :: FileAttributeOrFlag
fILE_ATTRIBUTE_SYSTEM =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_SYSTEM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_SYSTEM :: IO (Word32)
fILE_ATTRIBUTE_DIRECTORY :: FileAttributeOrFlag
fILE_ATTRIBUTE_DIRECTORY =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_DIRECTORY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_DIRECTORY :: IO (Word32)
fILE_ATTRIBUTE_ARCHIVE :: FileAttributeOrFlag
fILE_ATTRIBUTE_ARCHIVE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_ARCHIVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_ARCHIVE :: IO (Word32)
fILE_ATTRIBUTE_NORMAL :: FileAttributeOrFlag
fILE_ATTRIBUTE_NORMAL =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_NORMAL >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_NORMAL :: IO (Word32)
fILE_ATTRIBUTE_TEMPORARY :: FileAttributeOrFlag
fILE_ATTRIBUTE_TEMPORARY =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_TEMPORARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_TEMPORARY :: IO (Word32)
fILE_ATTRIBUTE_COMPRESSED :: FileAttributeOrFlag
fILE_ATTRIBUTE_COMPRESSED =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_ATTRIBUTE_COMPRESSED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_ATTRIBUTE_COMPRESSED :: IO (Word32)
fILE_FLAG_WRITE_THROUGH :: FileAttributeOrFlag
fILE_FLAG_WRITE_THROUGH =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_WRITE_THROUGH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_WRITE_THROUGH :: IO (Word32)
fILE_FLAG_OVERLAPPED :: FileAttributeOrFlag
fILE_FLAG_OVERLAPPED =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_OVERLAPPED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_OVERLAPPED :: IO (Word32)
fILE_FLAG_NO_BUFFERING :: FileAttributeOrFlag
fILE_FLAG_NO_BUFFERING =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_NO_BUFFERING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_NO_BUFFERING :: IO (Word32)
fILE_FLAG_RANDOM_ACCESS :: FileAttributeOrFlag
fILE_FLAG_RANDOM_ACCESS =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_RANDOM_ACCESS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_RANDOM_ACCESS :: IO (Word32)
fILE_FLAG_SEQUENTIAL_SCAN :: FileAttributeOrFlag
fILE_FLAG_SEQUENTIAL_SCAN =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_SEQUENTIAL_SCAN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_SEQUENTIAL_SCAN :: IO (Word32)
fILE_FLAG_DELETE_ON_CLOSE :: FileAttributeOrFlag
fILE_FLAG_DELETE_ON_CLOSE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_DELETE_ON_CLOSE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_DELETE_ON_CLOSE :: IO (Word32)
fILE_FLAG_BACKUP_SEMANTICS :: FileAttributeOrFlag
fILE_FLAG_BACKUP_SEMANTICS =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_BACKUP_SEMANTICS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_BACKUP_SEMANTICS :: IO (Word32)
fILE_FLAG_POSIX_SEMANTICS :: FileAttributeOrFlag
fILE_FLAG_POSIX_SEMANTICS =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_FLAG_POSIX_SEMANTICS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_FLAG_POSIX_SEMANTICS :: IO (Word32)
sECURITY_ANONYMOUS :: FileAttributeOrFlag
sECURITY_ANONYMOUS =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_ANONYMOUS >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_ANONYMOUS :: IO (Word32)
sECURITY_IDENTIFICATION :: FileAttributeOrFlag
sECURITY_IDENTIFICATION =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_IDENTIFICATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_IDENTIFICATION :: IO (Word32)
sECURITY_IMPERSONATION :: FileAttributeOrFlag
sECURITY_IMPERSONATION =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_IMPERSONATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_IMPERSONATION :: IO (Word32)
sECURITY_DELEGATION :: FileAttributeOrFlag
sECURITY_DELEGATION =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_DELEGATION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_DELEGATION :: IO (Word32)
sECURITY_CONTEXT_TRACKING :: FileAttributeOrFlag
sECURITY_CONTEXT_TRACKING =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_CONTEXT_TRACKING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_CONTEXT_TRACKING :: IO (Word32)
sECURITY_EFFECTIVE_ONLY :: FileAttributeOrFlag
sECURITY_EFFECTIVE_ONLY =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_EFFECTIVE_ONLY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_EFFECTIVE_ONLY :: IO (Word32)
sECURITY_SQOS_PRESENT :: FileAttributeOrFlag
sECURITY_SQOS_PRESENT =
  unsafePerformIO(
    prim_Win32File_cpp_sECURITY_SQOS_PRESENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sECURITY_SQOS_PRESENT :: IO (Word32)

----------------------------------------------------------------

type MoveFileFlag   = DWORD

mOVEFILE_REPLACE_EXISTING :: MoveFileFlag
mOVEFILE_REPLACE_EXISTING =
  unsafePerformIO(
    prim_Win32File_cpp_mOVEFILE_REPLACE_EXISTING >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_mOVEFILE_REPLACE_EXISTING :: IO (Word32)
mOVEFILE_COPY_ALLOWED :: MoveFileFlag
mOVEFILE_COPY_ALLOWED =
  unsafePerformIO(
    prim_Win32File_cpp_mOVEFILE_COPY_ALLOWED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_mOVEFILE_COPY_ALLOWED :: IO (Word32)
mOVEFILE_DELAY_UNTIL_REBOOT :: MoveFileFlag
mOVEFILE_DELAY_UNTIL_REBOOT =
  unsafePerformIO(
    prim_Win32File_cpp_mOVEFILE_DELAY_UNTIL_REBOOT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_mOVEFILE_DELAY_UNTIL_REBOOT :: IO (Word32)

----------------------------------------------------------------

type FilePtrDirection   = DWORD

fILE_BEGIN :: FilePtrDirection
fILE_BEGIN =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_BEGIN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_BEGIN :: IO (Word32)
fILE_CURRENT :: FilePtrDirection
fILE_CURRENT =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_CURRENT >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_CURRENT :: IO (Word32)
fILE_END :: FilePtrDirection
fILE_END =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_END >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_END :: IO (Word32)

----------------------------------------------------------------

type DriveType = UINT

dRIVE_UNKNOWN :: DriveType
dRIVE_UNKNOWN =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_UNKNOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_UNKNOWN :: IO (Word32)
dRIVE_NO_ROOT_DIR :: DriveType
dRIVE_NO_ROOT_DIR =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_NO_ROOT_DIR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_NO_ROOT_DIR :: IO (Word32)
dRIVE_REMOVABLE :: DriveType
dRIVE_REMOVABLE =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_REMOVABLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_REMOVABLE :: IO (Word32)
dRIVE_FIXED :: DriveType
dRIVE_FIXED =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_FIXED >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_FIXED :: IO (Word32)
dRIVE_REMOTE :: DriveType
dRIVE_REMOTE =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_REMOTE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_REMOTE :: IO (Word32)
dRIVE_CDROM :: DriveType
dRIVE_CDROM =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_CDROM >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_CDROM :: IO (Word32)
dRIVE_RAMDISK :: DriveType
dRIVE_RAMDISK =
  unsafePerformIO(
    prim_Win32File_cpp_dRIVE_RAMDISK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dRIVE_RAMDISK :: IO (Word32)

----------------------------------------------------------------

type DefineDosDeviceFlags = DWORD

dDD_RAW_TARGET_PATH :: DefineDosDeviceFlags
dDD_RAW_TARGET_PATH =
  unsafePerformIO(
    prim_Win32File_cpp_dDD_RAW_TARGET_PATH >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dDD_RAW_TARGET_PATH :: IO (Word32)
dDD_REMOVE_DEFINITION :: DefineDosDeviceFlags
dDD_REMOVE_DEFINITION =
  unsafePerformIO(
    prim_Win32File_cpp_dDD_REMOVE_DEFINITION >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dDD_REMOVE_DEFINITION :: IO (Word32)
dDD_EXACT_MATCH_ON_REMOVE :: DefineDosDeviceFlags
dDD_EXACT_MATCH_ON_REMOVE =
  unsafePerformIO(
    prim_Win32File_cpp_dDD_EXACT_MATCH_ON_REMOVE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_dDD_EXACT_MATCH_ON_REMOVE :: IO (Word32)

----------------------------------------------------------------

type BinaryType = DWORD

sCS_32BIT_BINARY :: BinaryType
sCS_32BIT_BINARY =
  unsafePerformIO(
    prim_Win32File_cpp_sCS_32BIT_BINARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sCS_32BIT_BINARY :: IO (Word32)
sCS_DOS_BINARY :: BinaryType
sCS_DOS_BINARY =
  unsafePerformIO(
    prim_Win32File_cpp_sCS_DOS_BINARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sCS_DOS_BINARY :: IO (Word32)
sCS_WOW_BINARY :: BinaryType
sCS_WOW_BINARY =
  unsafePerformIO(
    prim_Win32File_cpp_sCS_WOW_BINARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sCS_WOW_BINARY :: IO (Word32)
sCS_PIF_BINARY :: BinaryType
sCS_PIF_BINARY =
  unsafePerformIO(
    prim_Win32File_cpp_sCS_PIF_BINARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sCS_PIF_BINARY :: IO (Word32)
sCS_POSIX_BINARY :: BinaryType
sCS_POSIX_BINARY =
  unsafePerformIO(
    prim_Win32File_cpp_sCS_POSIX_BINARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sCS_POSIX_BINARY :: IO (Word32)
sCS_OS216_BINARY :: BinaryType
sCS_OS216_BINARY =
  unsafePerformIO(
    prim_Win32File_cpp_sCS_OS216_BINARY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_sCS_OS216_BINARY :: IO (Word32)

----------------------------------------------------------------

type FileNotificationFlag = DWORD

fILE_NOTIFY_CHANGE_FILE_NAME :: FileNotificationFlag
fILE_NOTIFY_CHANGE_FILE_NAME =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_NOTIFY_CHANGE_FILE_NAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_NOTIFY_CHANGE_FILE_NAME :: IO (Word32)
fILE_NOTIFY_CHANGE_DIR_NAME :: FileNotificationFlag
fILE_NOTIFY_CHANGE_DIR_NAME =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_NOTIFY_CHANGE_DIR_NAME >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_NOTIFY_CHANGE_DIR_NAME :: IO (Word32)
fILE_NOTIFY_CHANGE_ATTRIBUTES :: FileNotificationFlag
fILE_NOTIFY_CHANGE_ATTRIBUTES =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_NOTIFY_CHANGE_ATTRIBUTES >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_NOTIFY_CHANGE_ATTRIBUTES :: IO (Word32)
fILE_NOTIFY_CHANGE_SIZE :: FileNotificationFlag
fILE_NOTIFY_CHANGE_SIZE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_NOTIFY_CHANGE_SIZE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_NOTIFY_CHANGE_SIZE :: IO (Word32)
fILE_NOTIFY_CHANGE_LAST_WRITE :: FileNotificationFlag
fILE_NOTIFY_CHANGE_LAST_WRITE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_NOTIFY_CHANGE_LAST_WRITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_NOTIFY_CHANGE_LAST_WRITE :: IO (Word32)
fILE_NOTIFY_CHANGE_SECURITY :: FileNotificationFlag
fILE_NOTIFY_CHANGE_SECURITY =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_NOTIFY_CHANGE_SECURITY >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_NOTIFY_CHANGE_SECURITY :: IO (Word32)

----------------------------------------------------------------

type FileType = DWORD

fILE_TYPE_UNKNOWN :: FileType
fILE_TYPE_UNKNOWN =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_TYPE_UNKNOWN >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_TYPE_UNKNOWN :: IO (Word32)
fILE_TYPE_DISK :: FileType
fILE_TYPE_DISK =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_TYPE_DISK >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_TYPE_DISK :: IO (Word32)
fILE_TYPE_CHAR :: FileType
fILE_TYPE_CHAR =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_TYPE_CHAR >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_TYPE_CHAR :: IO (Word32)
fILE_TYPE_PIPE :: FileType
fILE_TYPE_PIPE =
  unsafePerformIO(
    prim_Win32File_cpp_fILE_TYPE_PIPE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32File_cpp_fILE_TYPE_PIPE :: IO (Word32)

----------------------------------------------------------------

type LPSECURITY_ATTRIBUTES = Addr
type MbLPSECURITY_ATTRIBUTES = Maybe LPSECURITY_ATTRIBUTES

----------------------------------------------------------------
-- File operations
----------------------------------------------------------------

deleteFile :: String -> IO ()
deleteFile gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32File_cpp_deleteFile arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_deleteFile :: Addr -> IO (Int,Addr)

copyFile :: String -> String -> Bool -> IO ()
copyFile gc_arg1 gc_arg2 gc_arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_string_ gc_arg2) >>= \ (arg2) ->
  (marshall_bool_ gc_arg3) >>= \ (arg3) ->
  prim_Win32File_cpp_copyFile arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_copyFile :: Addr -> Addr -> Int -> IO (Int,Addr)

moveFile :: String -> String -> IO ()
moveFile gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_string_ gc_arg2) >>= \ (arg2) ->
  prim_Win32File_cpp_moveFile arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_moveFile :: Addr -> Addr -> IO (Int,Addr)

moveFileEx :: String -> String -> MoveFileFlag -> IO ()
moveFileEx gc_arg1 gc_arg2 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_string_ gc_arg2) >>= \ (arg2) ->
  prim_Win32File_cpp_moveFileEx arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_moveFileEx :: Addr -> Addr -> Word32 -> IO (Int,Addr)

setCurrentDirectory :: String -> IO ()
setCurrentDirectory gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32File_cpp_setCurrentDirectory arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_setCurrentDirectory :: Addr -> IO (Int,Addr)

createDirectory :: String -> MbLPSECURITY_ATTRIBUTES -> IO ()
createDirectory gc_arg1 arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (case arg2 of {
      Nothing -> (return (nullAddr));
      (Just arg2) -> (return ((arg2)))
   }) >>= \ (arg2) ->
  prim_Win32File_cpp_createDirectory arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_createDirectory :: Addr -> Addr -> IO (Int,Addr)

createDirectoryEx :: String -> String -> MbLPSECURITY_ATTRIBUTES -> IO ()
createDirectoryEx gc_arg1 gc_arg2 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_string_ gc_arg2) >>= \ (arg2) ->
  (case arg3 of {
      Nothing -> (return (nullAddr));
      (Just arg3) -> (return ((arg3)))
   }) >>= \ (arg3) ->
  prim_Win32File_cpp_createDirectoryEx arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_createDirectoryEx :: Addr -> Addr -> Addr -> IO (Int,Addr)

removeDirectory :: String -> IO ()
removeDirectory gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32File_cpp_removeDirectory arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_removeDirectory :: Addr -> IO (Int,Addr)

getBinaryType :: String -> IO BinaryType
getBinaryType gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32File_cpp_getBinaryType arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_getBinaryType :: Addr -> IO (Word32,Int,Addr)

----------------------------------------------------------------
-- HANDLE operations
----------------------------------------------------------------

createFile :: String -> AccessMode -> ShareMode -> MbLPSECURITY_ATTRIBUTES -> CreateMode -> FileAttributeOrFlag -> MbHANDLE -> IO HANDLE
createFile gc_arg1 arg2 arg3 arg4 arg5 arg6 arg7 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (case arg4 of {
      Nothing -> (return (nullAddr));
      (Just arg4) -> (return ((arg4)))
   }) >>= \ (arg4) ->
  (case arg7 of {
      Nothing -> (return (nullHANDLE));
      (Just arg7) -> (return ((arg7)))
   }) >>= \ (arg7) ->
  prim_Win32File_cpp_createFile arg1 arg2 arg3 arg4 arg5 arg6 arg7 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_createFile :: Addr -> Word32 -> Word32 -> Addr -> Word32 -> Word32 -> Addr -> IO (Addr,Int,Addr)

closeHandle :: HANDLE -> IO ()
closeHandle arg1 =
  prim_Win32File_cpp_closeHandle arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_closeHandle :: Addr -> IO (Int,Addr)

getFileType :: HANDLE -> IO FileType
getFileType arg1 =
  prim_Win32File_cpp_getFileType arg1 >>= \ (res1) ->
  (return (res1))
primitive prim_Win32File_cpp_getFileType :: Addr -> IO (Word32)
--Apparently no error code

flushFileBuffers :: HANDLE -> IO ()
flushFileBuffers arg1 =
  prim_Win32File_cpp_flushFileBuffers arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_flushFileBuffers :: Addr -> IO (Int,Addr)

setEndOfFile :: HANDLE -> IO ()
setEndOfFile arg1 =
  prim_Win32File_cpp_setEndOfFile arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_setEndOfFile :: Addr -> IO (Int,Addr)

setFileAttributes :: String -> FileAttributeOrFlag -> IO ()
setFileAttributes gc_arg1 arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32File_cpp_setFileAttributes arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_setFileAttributes :: Addr -> Word32 -> IO (Int,Addr)

getFileAttributes :: String -> IO FileAttributeOrFlag
getFileAttributes gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32File_cpp_getFileAttributes arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_getFileAttributes :: Addr -> IO (Word32,Int,Addr)

----------------------------------------------------------------
-- Read/write files
----------------------------------------------------------------

-- No support for this yet
--type OVERLAPPED =
-- (DWORD,  -- Offset
--  DWORD,  -- OffsetHigh
--  HANDLE) -- hEvent

type LPOVERLAPPED = Addr

type MbLPOVERLAPPED = Maybe LPOVERLAPPED

--Sigh - I give up & prefix win32_ to the next two to avoid
-- senseless Prelude name clashes. --sof.

win32_ReadFile :: HANDLE -> Addr -> DWORD -> MbLPOVERLAPPED -> IO DWORD
win32_ReadFile arg1 arg2 arg3 arg4 =
  (case arg4 of {
      Nothing -> (return (nullAddr));
      (Just arg4) -> (return ((arg4)))
   }) >>= \ (arg4) ->
  prim_Win32File_cpp_win32_ReadFile arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_win32_ReadFile :: Addr -> Addr -> Word32 -> Addr -> IO (Word32,Int,Addr)

win32_WriteFile :: HANDLE -> Addr -> DWORD -> MbLPOVERLAPPED -> IO DWORD
win32_WriteFile arg1 arg2 arg3 arg4 =
  (case arg4 of {
      Nothing -> (return (nullAddr));
      (Just arg4) -> (return ((arg4)))
   }) >>= \ (arg4) ->
  prim_Win32File_cpp_win32_WriteFile arg1 arg2 arg3 arg4 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_win32_WriteFile :: Addr -> Addr -> Word32 -> Addr -> IO (Word32,Int,Addr)

-- missing Seek functioinality; GSL ???
-- Dont have Word64; ADR
-- %fun SetFilePointer :: HANDLE -> Word64 -> FilePtrDirection -> IO Word64

----------------------------------------------------------------
-- File Notifications
--
-- Use these to initialise, "increment" and close a HANDLE you can wait
-- on.
----------------------------------------------------------------

findFirstChangeNotification :: String -> Bool -> FileNotificationFlag -> IO HANDLE
findFirstChangeNotification gc_arg1 gc_arg2 arg3 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_bool_ gc_arg2) >>= \ (arg2) ->
  prim_Win32File_cpp_findFirstChangeNotification arg1 arg2 arg3 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_findFirstChangeNotification :: Addr -> Int -> Word32 -> IO (Addr,Int,Addr)

findNextChangeNotification :: HANDLE -> IO ()
findNextChangeNotification arg1 =
  prim_Win32File_cpp_findNextChangeNotification arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_findNextChangeNotification :: Addr -> IO (Int,Addr)

findCloseChangeNotification :: HANDLE -> IO ()
findCloseChangeNotification arg1 =
  prim_Win32File_cpp_findCloseChangeNotification arg1 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_findCloseChangeNotification :: Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- DOS Device flags
----------------------------------------------------------------

defineDosDevice :: DefineDosDeviceFlags -> String -> String -> IO ()
defineDosDevice arg1 gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg2) ->
  (marshall_string_ gc_arg2) >>= \ (arg3) ->
  prim_Win32File_cpp_defineDosDevice arg1 arg2 arg3 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_defineDosDevice :: Word32 -> Addr -> Addr -> IO (Int,Addr)

----------------------------------------------------------------

-- These functions are very unusual in the Win32 API:
-- They dont return error codes

areFileApisANSI :: IO Bool
areFileApisANSI =
  prim_Win32File_cpp_areFileApisANSI >>= \ (res1) ->
  (unmarshall_bool_ res1) >>= \ gc_res1 ->
  (return (gc_res1))
primitive prim_Win32File_cpp_areFileApisANSI :: IO (Int)
setFileApisToOEM :: IO ()
setFileApisToOEM =
  prim_Win32File_cpp_setFileApisToOEM
primitive prim_Win32File_cpp_setFileApisToOEM :: IO ()
setFileApisToANSI :: IO ()
setFileApisToANSI =
  prim_Win32File_cpp_setFileApisToANSI
primitive prim_Win32File_cpp_setFileApisToANSI :: IO ()
setHandleCount :: UINT -> IO UINT
setHandleCount arg1 =
  prim_Win32File_cpp_setHandleCount arg1 >>= \ (res1) ->
  (return (res1))
primitive prim_Win32File_cpp_setHandleCount :: Word32 -> IO (Word32)

----------------------------------------------------------------

getLogicalDrives :: IO DWORD
getLogicalDrives =
  prim_Win32File_cpp_getLogicalDrives >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32File_cpp_getLogicalDrives :: IO (Word32,Int,Addr)

-- %fun GetDriveType :: MbString -> IO DriveType

getDiskFreeSpace :: MbString -> IO (DWORD,DWORD,DWORD,DWORD)
getDiskFreeSpace gc_arg1 =
  (case gc_arg1 of {
      Nothing -> (return (nullAddr));
      (Just gc_arg1) -> (marshall_string_ gc_arg1) >>= \ (s) ->
			(return ((s)))
   }) >>= \ (s) ->
  prim_Win32File_cpp_getDiskFreeSpace s >>= \ (res1,res2,res3,res4,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return ((res1,res2,res3,res4)))
primitive prim_Win32File_cpp_getDiskFreeSpace :: Addr -> IO (Word32,Word32,Word32,Word32,Int,Addr)

setVolumeLabel :: String -> String -> IO ()
setVolumeLabel gc_arg1 gc_arg2 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  (marshall_string_ gc_arg2) >>= \ (arg2) ->
  prim_Win32File_cpp_setVolumeLabel arg1 arg2 >>= \ (gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (()))
primitive prim_Win32File_cpp_setVolumeLabel :: Addr -> Addr -> IO (Int,Addr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
