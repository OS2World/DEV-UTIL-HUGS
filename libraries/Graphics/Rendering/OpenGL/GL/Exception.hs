-- #hide
--------------------------------------------------------------------------------
-- |
-- Module      :  Graphics.Rendering.OpenGL.GL.Exception
-- Copyright   :  (c) Sven Panne 2003
-- License     :  BSD-style (see the file libraries/OpenGL/LICENSE)
-- 
-- Maintainer  :  sven_panne@yahoo.com
-- Stability   :  provisional
-- Portability :  portable
--
-- This is a purely internal module to compensate for differences between
-- Haskell implementations.
--
--------------------------------------------------------------------------------

module Graphics.Rendering.OpenGL.GL.Exception (
   finally
) where


import Control.Exception ( finally )

