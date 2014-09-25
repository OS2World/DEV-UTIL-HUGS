--
-- StdDIS for Hugs
--
-- (c) Thomas Nordin and Alastair Reid, 1997
--

module StdDIS
        ( StablePtr
        , ForeignObj
        , module Int
        , module Word
        , module Addr
        , module IOExts
        , MbString
        , marshall_bool_,      unmarshall_bool_
        , marshall_string_,    unmarshall_string_
        , marshall_stringLen_, unmarshall_stringLen_
        , makeStablePtr, deRefStablePtr, freeStablePtr
        , malloc, free
        , makeForeignObj
        ) where


import Int
import Word
import Addr
import IOExts
import Monad( zipWithM_ )
import ForeignObj
import StablePtr
{-
import Foreign ( StablePtr, ForeignObj,
                 makeStablePtr, deRefStablePtr, 
                 freeStablePtr, makeForeignObj
               )

-}


makeStablePtr = newStablePtr


marshall_bool_ :: Bool -> IO Int
marshall_bool_ True  = return 1
marshall_bool_ False = return 0

unmarshall_bool_ :: Int -> IO Bool
unmarshall_bool_ 0 = return False
unmarshall_bool_ _ = return True

-- Ignore "IO" part of result type

----------------------------------------------------------------
-- Strings
----------------------------------------------------------------


type MbString      = Maybe String

marshall_string_ :: [Char] -> IO Addr
marshall_string_ cs =
 do arr <- allocCharStar (1 + length cs)
    zipWithM_ (writeCharAddr arr) [0..] (cs ++ "\0")
    return arr

marshall_stringLen_ :: [Char] -> IO (Addr, Int)
marshall_stringLen_ cs =
 do let l = length cs
    arr <- allocCharStar (l+1)
    zipWithM_ (writeCharAddr arr) [0..] (cs ++ "\0")
    return (arr,l)

unmarshall_string_ :: Addr -> IO String
unmarshall_string_ ptr = reads "" 0
  where
    reads str i =
      readCharAddr ptr i >>= \c ->
      if c == '\0' then
        return (reverse str)
      else
        reads (c:str) (i+1)

unmarshall_stringLen_ :: Addr -> Int -> IO String
unmarshall_stringLen_ ptr l = mapM (readCharAddr ptr) [0..l-1]

writeCharAddr :: Addr -> Int -> Char -> IO ()
writeCharAddr s i v =
  prim_StdDIS_cpp_writeCharAddr s i v
primitive prim_StdDIS_cpp_writeCharAddr :: Addr -> Int -> Char -> IO ()
 
readCharAddr :: Addr -> Int -> IO Char
readCharAddr s i =
  prim_StdDIS_cpp_readCharAddr s i >>= \ (res1) ->
  (return (res1))
primitive prim_StdDIS_cpp_readCharAddr :: Addr -> Int -> IO (Char)

allocCharStar :: Int -> IO Addr
allocCharStar arg1 =
  prim_StdDIS_cpp_allocCharStar arg1 >>= \ (res1) ->
  (return (res1))
primitive prim_StdDIS_cpp_allocCharStar :: Int -> IO (Addr)
 
----------------------------------------------------------------
-- malloc/free
----------------------------------------------------------------


malloc :: Word32 -> IO Addr
malloc arg1 =
  prim_StdDIS_cpp_malloc arg1 >>= \ (res1,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (res1))
primitive prim_StdDIS_cpp_malloc :: Word32 -> IO (Addr,Int,Addr)
 
free :: Addr -> IO ()
free arg1 =
  prim_StdDIS_cpp_free arg1
primitive prim_StdDIS_cpp_free :: Addr -> IO ()

----------------------------------------------------------------
-- Stable pointers
----------------------------------------------------------------

--
-- Use "stable" to create a stable pointer
-- 
-- Use "stablePtr" to manipulate (previously constructed) stable pointers 
-- in Haskell.
--

----------------------------------------------------------------
-- Foreign Objects
----------------------------------------------------------------

-- Use foreign when you want to control what free routine
-- to use.
--

----------------------------------------------------------------
-- End of StdDIS
----------------------------------------------------------------

needPrims_hugs 2
