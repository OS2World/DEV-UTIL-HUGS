{-# OPTIONS -fno-implicit-prelude #-}
-----------------------------------------------------------------------------
-- |
-- Module      :  Text.Read
-- Copyright   :  (c) The University of Glasgow 2001
-- License     :  BSD-style (see the file libraries/base/LICENSE)
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  provisional
-- Portability :  non-portable (uses Text.ParserCombinators.ReadP)
--
-- The "Text.Read" library is the canonical library to import for
-- 'Read'-class facilities.  For GHC only, it offers an extended and much
-- improved 'Read' class, which constitutes a proposed alternative to the 
-- Haskell 98 'Read'.  In particular, writing parsers is easier, and
-- the parsers are much more efficient.
--
-----------------------------------------------------------------------------

module Text.Read (
   -- * The 'Read' class
   Read(..),		-- The Read class
   ReadS, 		-- String -> Maybe (a,String)

   -- * Haskell 98 functions
   reads,		-- :: (Read a) => ReadS a
   read,		-- :: (Read a) => String -> a
   readParen, 		-- :: Bool -> ReadS a -> ReadS a
   lex,			-- :: ReadS String


   -- * New parsing functions
   module Text.ParserCombinators.ReadPrec,
   L.Lexeme(..),	
   lexP,		-- :: ReadPrec Lexeme



 ) where



import Text.ParserCombinators.ReadPrec
import qualified Text.Read.Lex as L



-- copied from GHC.Read

lexP :: ReadPrec L.Lexeme
lexP = lift L.lex

