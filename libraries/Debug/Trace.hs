-----------------------------------------------------------------------------
-- |
-- Module      :  Debug.Trace
-- Copyright   :  (c) The University of Glasgow 2001
-- License     :  BSD-style (see the file libraries/base/LICENSE)
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  provisional
-- Portability :  portable
--
-- The 'trace' function.
--
-----------------------------------------------------------------------------

module Debug.Trace (
	-- * Tracing
	trace -- :: String -> a -> a
  ) where

import Prelude
import System.IO.Unsafe
import System.IO



{-# NOINLINE trace #-}
{-|
When called, 'trace' prints the string in its first argument to
standard error, before returning the second argument as its result.
The 'trace' function is not referentially transparent, and should only
be used for debugging, or for monitoring execution. Some
implementations of 'trace' may decorate the string that\'s output to
indicate that you\'re tracing.
-}
trace :: String -> a -> a
trace string expr = unsafePerformIO $ do
    hPutStr stderr string
    hPutChar stderr '\n'

    return expr


