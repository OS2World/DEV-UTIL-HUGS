module Win32Types
	( module Win32Types
	, nullAddr
	) where

import StdDIS


----------------------------------------------------------------
-- Platform specific definitions
--
-- Most typedefs and prototypes in Win32 are expressed in terms
-- of these types.  Try to follow suit - itll make it easier to
-- get things working on Win64 (or whatever they call it on Alphas).
----------------------------------------------------------------

	           
type BOOL          = Bool
type BYTE          = Word8
type USHORT        = Word16
type UINT          = Word32
type INT           = Int32
type WORD          = Word16
type DWORD         = Word32
type LONG          = Int32
type FLOAT         = Float
	           
type MbINT         = Maybe INT

----------------------------------------------------------------

	           
type ATOM          = UINT
type WPARAM        = UINT
type LPARAM        = LONG
type LRESULT       = LONG
	           
type MbATOM        = Maybe ATOM

----------------------------------------------------------------
-- Pointers
----------------------------------------------------------------

type LPVOID        = Addr
type LPCTSTR       = Addr
type LPCTSTR_      = String
type LPCSTR        = Addr
type LPSTR         = Addr



-- Note: marshalling allocates mem, so the programmer
-- has to make sure to free this stuff up after any
-- uses of LPCTSTR. Automating this is tricky to do
-- (in all situations).

unmarshall_lpctstr_ :: Addr -> IO String
unmarshall_lpctstr_ arg1 =
  prim_Win32Types_cpp_unmarshall_lpctstr_ arg1 >>= \ (gc_res2,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (unmarshall_string_ gc_res2) >>= \ gc_res1 ->
       (return (gc_res1))
primitive prim_Win32Types_cpp_unmarshall_lpctstr_ :: Addr -> IO (Addr,Int,Addr)

marshall_lpctstr_ :: String -> IO Addr
marshall_lpctstr_ gc_arg1 =
  (marshall_string_ gc_arg1) >>= \ (arg1) ->
  prim_Win32Types_cpp_marshall_lpctstr_ arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_Win32Types_cpp_marshall_lpctstr_ :: Addr -> IO (Addr,Int,Addr)

type MbLPVOID      = Maybe LPVOID
		   
type MbLPCSTR      = Maybe LPCSTR
type MbLPCTSTR     = Maybe LPCTSTR
		   
----------------------------------------------------------------
-- Handles
----------------------------------------------------------------

type   HANDLE      = Addr

handleToWord :: HANDLE -> UINT
handleToWord arg1 =
  unsafePerformIO(
    prim_Win32Types_cpp_handleToWord arg1 >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Types_cpp_handleToWord :: Addr -> IO (Word32)
		   
type   HKEY      = ForeignObj
		   
nullHANDLE :: Addr
nullHANDLE =
  unsafePerformIO(
    prim_Win32Types_cpp_nullHANDLE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Types_cpp_nullHANDLE :: IO (Addr)

type MbHANDLE      = Maybe HANDLE

type   HINSTANCE   = Addr
type MbHINSTANCE   = Maybe HINSTANCE

type   HMODULE     = Addr
type MbHMODULE     = Maybe HMODULE

nullFinalHANDLE :: ForeignObj
nullFinalHANDLE = unsafePerformIO (makeForeignObj nullAddr nullAddr)

----------------------------------------------------------------
-- End
----------------------------------------------------------------

needPrims_hugs 2
