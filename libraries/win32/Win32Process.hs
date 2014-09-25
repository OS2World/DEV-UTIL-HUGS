module Win32Process where

import Win32Types
import StdDIS

-- constant to wait for a very long time.
iNFINITE :: DWORD
iNFINITE =
  unsafePerformIO(
    prim_Win32Process_cpp_iNFINITE >>= \ (res1) ->
    (return (res1)))
primitive prim_Win32Process_cpp_iNFINITE :: IO (Word32)

sleep :: DWORD -> IO ()
sleep arg1 =
  prim_Win32Process_cpp_sleep arg1
primitive prim_Win32Process_cpp_sleep :: Word32 -> IO ()
needPrims_hugs 2
