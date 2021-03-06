{-# OPTIONS -cpp #-}
-----------------------------------------------------------------------------
-- |
-- Module      :  Text.Regex
-- Copyright   :  (c) The University of Glasgow 2001
-- License     :  BSD-style (see the file libraries/base/LICENSE)
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  experimental
-- Portability :  non-portable (only on platforms that provide a regex lib)
--
-- Regular expression matching.  Uses the POSIX regular expression
-- interface in "Text.Regex.Posix".
--
-----------------------------------------------------------------------------







































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































module Text.Regex (
    -- * Regular expressions
    Regex,

  ) where

import Prelude
import qualified Text.Regex.Posix as RE
import Text.Regex.Posix ( Regex )
import System.IO.Unsafe


