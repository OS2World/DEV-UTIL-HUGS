-----------------------------------------------------------------------------
-- |
-- Module      :  Data.Complex
-- Copyright   :  (c) The University of Glasgow 2001
-- License     :  BSD-style (see the file libraries/base/LICENSE)
-- 
-- Maintainer  :  libraries@haskell.org
-- Stability   :  provisional
-- Portability :  portable
--
-- Complex numbers.
--
-----------------------------------------------------------------------------

module Data.Complex
	( Complex((:+))
	
	, realPart	-- :: (RealFloat a) => Complex a -> a
	, imagPart      -- :: (RealFloat a) => Complex a -> a
	, conjugate     -- :: (RealFloat a) => Complex a -> Complex a
	, mkPolar       -- :: (RealFloat a) => a -> a -> Complex a
	, cis           -- :: (RealFloat a) => a -> Complex a
	, polar         -- :: (RealFloat a) => Complex a -> (a,a)
	, magnitude     -- :: (RealFloat a) => Complex a -> a
	, phase         -- :: (RealFloat a) => Complex a -> a
	
	-- Complex instances:
	--
	--  (RealFloat a) => Eq         (Complex a)
	--  (RealFloat a) => Read       (Complex a)
	--  (RealFloat a) => Show       (Complex a)
	--  (RealFloat a) => Num        (Complex a)
	--  (RealFloat a) => Fractional (Complex a)
	--  (RealFloat a) => Floating   (Complex a)
	-- 
        -- Implementation checked wrt. Haskell 98 lib report, 1/99.

        )  where

import Prelude


import Data.Typeable



import Hugs.Prelude(Num(fromInt), Fractional(fromDouble))


infix  6  :+

-- -----------------------------------------------------------------------------
-- The Complex type

data  (RealFloat a)     => Complex a = !a :+ !a  deriving (Eq, Read, Show)


-- -----------------------------------------------------------------------------
-- Functions over Complex

realPart, imagPart :: (RealFloat a) => Complex a -> a
realPart (x :+ _) =  x
imagPart (_ :+ y) =  y

{-# SPECIALISE conjugate :: Complex Double -> Complex Double #-}
conjugate	 :: (RealFloat a) => Complex a -> Complex a
conjugate (x:+y) =  x :+ (-y)

{-# SPECIALISE mkPolar :: Double -> Double -> Complex Double #-}
mkPolar		 :: (RealFloat a) => a -> a -> Complex a
mkPolar r theta	 =  r * cos theta :+ r * sin theta

{-# SPECIALISE cis :: Double -> Complex Double #-}
cis		 :: (RealFloat a) => a -> Complex a
cis theta	 =  cos theta :+ sin theta

{-# SPECIALISE polar :: Complex Double -> (Double,Double) #-}
polar		 :: (RealFloat a) => Complex a -> (a,a)
polar z		 =  (magnitude z, phase z)

{-# SPECIALISE magnitude :: Complex Double -> Double #-}
magnitude :: (RealFloat a) => Complex a -> a
magnitude (x:+y) =  scaleFloat k
		     (sqrt ((scaleFloat mk x)^(2::Int) + (scaleFloat mk y)^(2::Int)))
		    where k  = max (exponent x) (exponent y)
		          mk = - k

{-# SPECIALISE phase :: Complex Double -> Double #-}
phase :: (RealFloat a) => Complex a -> a
phase (0 :+ 0)   = 0		-- SLPJ July 97 from John Peterson
phase (x:+y)	 = atan2 y x


-- -----------------------------------------------------------------------------
-- Instances of Complex













complexTc = mkTyCon "Complex"; instance Typeable a => Typeable (Complex a) where { typeOf x = mkAppTy complexTc [typeOf ((undefined :: Complex a -> a) x) ] }


instance  (RealFloat a) => Num (Complex a)  where
    {-# SPECIALISE instance Num (Complex Float) #-}
    {-# SPECIALISE instance Num (Complex Double) #-}
    (x:+y) + (x':+y')	=  (x+x') :+ (y+y')
    (x:+y) - (x':+y')	=  (x-x') :+ (y-y')
    (x:+y) * (x':+y')	=  (x*x'-y*y') :+ (x*y'+y*x')
    negate (x:+y)	=  negate x :+ negate y
    abs z		=  magnitude z :+ 0
    signum 0		=  0
    signum z@(x:+y)	=  x/r :+ y/r  where r = magnitude z
    fromInteger n	=  fromInteger n :+ 0

    fromInt n		=  fromInt n :+ 0


instance  (RealFloat a) => Fractional (Complex a)  where
    {-# SPECIALISE instance Fractional (Complex Float) #-}
    {-# SPECIALISE instance Fractional (Complex Double) #-}
    (x:+y) / (x':+y')	=  (x*x''+y*y'') / d :+ (y*x''-x*y'') / d
			   where x'' = scaleFloat k x'
				 y'' = scaleFloat k y'
				 k   = - max (exponent x') (exponent y')
				 d   = x'*x'' + y'*y''

    fromRational a	=  fromRational a :+ 0

    fromDouble a	=  fromDouble a :+ 0


instance  (RealFloat a) => Floating (Complex a)	where
    {-# SPECIALISE instance Floating (Complex Float) #-}
    {-# SPECIALISE instance Floating (Complex Double) #-}
    pi             =  pi :+ 0
    exp (x:+y)     =  expx * cos y :+ expx * sin y
                      where expx = exp x
    log z          =  log (magnitude z) :+ phase z

    sqrt 0         =  0
    sqrt z@(x:+y)  =  u :+ (if y < 0 then -v else v)
                      where (u,v) = if x < 0 then (v',u') else (u',v')
                            v'    = abs y / (u'*2)
                            u'    = sqrt ((magnitude z + abs x) / 2)

    sin (x:+y)     =  sin x * cosh y :+ cos x * sinh y
    cos (x:+y)     =  cos x * cosh y :+ (- sin x * sinh y)
    tan (x:+y)     =  (sinx*coshy:+cosx*sinhy)/(cosx*coshy:+(-sinx*sinhy))
                      where sinx  = sin x
                            cosx  = cos x
                            sinhy = sinh y
                            coshy = cosh y

    sinh (x:+y)    =  cos y * sinh x :+ sin  y * cosh x
    cosh (x:+y)    =  cos y * cosh x :+ sin y * sinh x
    tanh (x:+y)    =  (cosy*sinhx:+siny*coshx)/(cosy*coshx:+siny*sinhx)
                      where siny  = sin y
                            cosy  = cos y
                            sinhx = sinh x
                            coshx = cosh x

    asin z@(x:+y)  =  y':+(-x')
                      where  (x':+y') = log (((-y):+x) + sqrt (1 - z*z))
    acos z         =  y'':+(-x'')
                      where (x'':+y'') = log (z + ((-y'):+x'))
                            (x':+y')   = sqrt (1 - z*z)
    atan z@(x:+y)  =  y':+(-x')
                      where (x':+y') = log (((1-y):+x) / sqrt (1+z*z))

    asinh z        =  log (z + sqrt (1+z*z))
    acosh z        =  log (z + (z+1) * sqrt ((z-1)/(z+1)))
    atanh z        =  log ((1+z) / sqrt (1-z*z))
