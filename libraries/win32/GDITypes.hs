module GDITypes
{-  -- still incomplete
	( POINT,        marshall_point, unmarshall_point
	, ListPOINT,    marshall_ListPOINT_
	, ListLenPOINT, marshall_ListLenPOINT_
	, RECT,         marshall_rect, unmarshall_rect
	, SIZE,         marshall_size, unmarshall_size
	, nullAddr
	, HBITMAP	, MbHBITMAP
	, HFONT		, MbHFONT
	, HCURSOR	, MbHCURSOR
	, HICON		, MbHICON
	, HRGN		, MbHRGN
	, HPALETTE	, MbHPALETTE
	, HBRUSH	, MbHBRUSH
	, HPEN		, MbHPEN
	, HACCEL	--, MbHACCEL
	, HDC		, MbHDC
	, HDWP          , MbHDWP
	, HWND		, MbHWND
	, HMENU		, MbHMENU
	, PolyFillMode
	, ArcDirection
	, MbArcDirection
	, GraphicsMode
	, MbGraphicsMode
	, BackgroundMode
	, HatchStyle
	, StretchBltMode
	, COLORREF
	, TextAlignment
	, ClippingMode
	, RegionType
	)
-}
	where

import StdDIS
import Win32Types
import Monad( zipWithM_ )
import IOExts
import Foreign


----------------------------------------------------------------
--
----------------------------------------------------------------

type POINT =
  ( LONG  -- x
  , LONG  -- y
  )
type RECT =
  ( LONG  -- left
  , LONG  -- top
  , LONG  -- right
  , LONG  -- bottom
  )
type SIZE =
  ( LONG  -- cx
  , LONG  -- cy
  )


----------------------------------------------------------------


marshall_listPOINT_ :: [POINT] -> IO Addr
marshall_listPOINT_ cs = do
  let l = length cs
  ps <- mallocPOINTs l
  zipWithM_ (setPOINT ps) [0..] cs
  return ps

marshall_listLenPOINT_ :: [POINT] -> IO (Addr, Int)
marshall_listLenPOINT_ cs = do
  let l = length cs
  ps <- mallocPOINTs l
  zipWithM_ (setPOINT ps) [0..] cs
  return (ps,l)
  
mallocPOINTs :: Int -> IO Addr
mallocPOINTs arg1 =
  prim_GDITypes_cpp_mallocPOINTs arg1 >>= \ (ps,gc_failed,gc_failstring) ->
  if ( gc_failed /= (0::Int))
  then unmarshall_string_ gc_failstring >>=  ioError  . userError
  else (return (ps))
primitive prim_GDITypes_cpp_mallocPOINTs :: Int -> IO (Addr,Int,Addr)

setPOINT :: Addr -> Int -> POINT -> IO ()
setPOINT ps i gc_arg1 =
  case gc_arg1 of { (gc_arg2,gc_arg4) ->
  case ( fromIntegral  gc_arg2) of { gc_arg3 ->
  case ( fromIntegral  gc_arg4) of { gc_arg5 ->
  prim_GDITypes_cpp_setPOINT ps i gc_arg3 gc_arg5}}}
primitive prim_GDITypes_cpp_setPOINT :: Addr -> Int -> Int -> Int -> IO ()

type   LPRECT   = Addr
type MbLPRECT   = Maybe LPRECT

getRECT :: LPRECT -> IO RECT
getRECT r =
  prim_GDITypes_cpp_getRECT r >>= \ (gc_res2,gc_res4,gc_res6,gc_res8) ->
  let gc_res1 = ( fromIntegral  (gc_res2)) in
  let gc_res3 = ( fromIntegral  (gc_res4)) in
  let gc_res5 = ( fromIntegral  (gc_res6)) in
  let gc_res7 = ( fromIntegral  (gc_res8)) in
  (return ((gc_res1,gc_res3,gc_res5,gc_res7)))
primitive prim_GDITypes_cpp_getRECT :: Addr -> IO (Int,Int,Int,Int)

----------------------------------------------------------------
-- (GDI related) Handles
----------------------------------------------------------------

type   HBITMAP    = Addr
type MbHBITMAP    = Maybe HBITMAP

type   HFONT      = Addr
type MbHFONT      = Maybe HFONT

type   HCURSOR    = Addr
type MbHCURSOR    = Maybe HCURSOR

type   HICON      = Addr
type MbHICON      = Maybe HICON


-- This is not the only handle / resource that should be
-- finalised for you, but it's a start.
-- ToDo.

type   HRGN       = ForeignObj
type MbHRGN       = Maybe HRGN

type   HPALETTE   = Addr
type MbHPALETTE   = Maybe HPALETTE

type   HBRUSH     = Addr
type MbHBRUSH     = Maybe HBRUSH

type   HPEN       = Addr
type MbHPEN       = Maybe HPEN

type   HACCEL     = Addr

type   HDC        = Addr
type MbHDC        = Maybe HDC

type   HDWP        = Addr
type MbHDWP        = Maybe HDWP

type   HWND       = Addr
type MbHWND       = Maybe HWND

hWND_BOTTOM :: HWND
hWND_BOTTOM =
  unsafePerformIO(
    prim_GDITypes_cpp_hWND_BOTTOM >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_hWND_BOTTOM :: IO (Addr)
hWND_NOTOPMOST :: HWND
hWND_NOTOPMOST =
  unsafePerformIO(
    prim_GDITypes_cpp_hWND_NOTOPMOST >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_hWND_NOTOPMOST :: IO (Addr)
hWND_TOP :: HWND
hWND_TOP =
  unsafePerformIO(
    prim_GDITypes_cpp_hWND_TOP >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_hWND_TOP :: IO (Addr)
hWND_TOPMOST :: HWND
hWND_TOPMOST =
  unsafePerformIO(
    prim_GDITypes_cpp_hWND_TOPMOST >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_hWND_TOPMOST :: IO (Addr)

type   HMENU      = Addr
type MbHMENU      = Maybe HMENU

----------------------------------------------------------------
-- COLORREF
----------------------------------------------------------------

type COLORREF   = DWORD

rgb :: BYTE -> BYTE -> BYTE -> COLORREF
rgb gc_arg1 gc_arg2 gc_arg3 =
  unsafePerformIO(
    case ( fromIntegral   gc_arg1) of { arg1 ->
    case ( fromIntegral   gc_arg2) of { arg2 ->
    case ( fromIntegral   gc_arg3) of { arg3 ->
    prim_GDITypes_cpp_rgb arg1 arg2 arg3 >>= \ (res1) ->
    (return (res1))}}})
primitive prim_GDITypes_cpp_rgb :: Word32 -> Word32 -> Word32 -> IO (Word32)

getRValue :: COLORREF -> BYTE
getRValue arg1 =
  unsafePerformIO(
    prim_GDITypes_cpp_getRValue arg1 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral   (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_getRValue :: Word32 -> IO (Word32)
getGValue :: COLORREF -> BYTE
getGValue arg1 =
  unsafePerformIO(
    prim_GDITypes_cpp_getGValue arg1 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral   (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_getGValue :: Word32 -> IO (Word32)
getBValue :: COLORREF -> BYTE
getBValue arg1 =
  unsafePerformIO(
    prim_GDITypes_cpp_getBValue arg1 >>= \ (res1) ->
    let gc_res1 = ( fromIntegral   (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_getBValue :: Word32 -> IO (Word32)

----------------------------------------------------------------
-- Miscellaneous enumerations
----------------------------------------------------------------

type PolyFillMode   = WORD
aLTERNATE :: PolyFillMode
aLTERNATE =
  unsafePerformIO(
    prim_GDITypes_cpp_aLTERNATE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_aLTERNATE :: IO (Word32)
wINDING :: PolyFillMode
wINDING =
  unsafePerformIO(
    prim_GDITypes_cpp_wINDING >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_wINDING :: IO (Word32)

----------------------------------------------------------------

type ArcDirection = WORD
type MbArcDirection = Maybe ArcDirection
aD_COUNTERCLOCKWISE :: ArcDirection
aD_COUNTERCLOCKWISE =
  unsafePerformIO(
    prim_GDITypes_cpp_aD_COUNTERCLOCKWISE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_aD_COUNTERCLOCKWISE :: IO (Word32)
aD_CLOCKWISE :: ArcDirection
aD_CLOCKWISE =
  unsafePerformIO(
    prim_GDITypes_cpp_aD_CLOCKWISE >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_aD_CLOCKWISE :: IO (Word32)

----------------------------------------------------------------

type GraphicsMode   = DWORD
type MbGraphicsMode = Maybe GraphicsMode
gM_COMPATIBLE :: GraphicsMode
gM_COMPATIBLE =
  unsafePerformIO(
    prim_GDITypes_cpp_gM_COMPATIBLE >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_gM_COMPATIBLE :: IO (Word32)
gM_ADVANCED :: GraphicsMode
gM_ADVANCED =
  unsafePerformIO(
    prim_GDITypes_cpp_gM_ADVANCED >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_gM_ADVANCED :: IO (Word32)

----------------------------------------------------------------

type BackgroundMode   = UINT
tRANSPARENT :: BackgroundMode
tRANSPARENT =
  unsafePerformIO(
    prim_GDITypes_cpp_tRANSPARENT >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tRANSPARENT :: IO (Word32)
oPAQUE :: BackgroundMode
oPAQUE =
  unsafePerformIO(
    prim_GDITypes_cpp_oPAQUE >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_oPAQUE :: IO (Word32)

----------------------------------------------------------------

type HatchStyle   = WORD

hS_HORIZONTAL :: HatchStyle
hS_HORIZONTAL =
  unsafePerformIO(
    prim_GDITypes_cpp_hS_HORIZONTAL >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_hS_HORIZONTAL :: IO (Word32)
hS_VERTICAL :: HatchStyle
hS_VERTICAL =
  unsafePerformIO(
    prim_GDITypes_cpp_hS_VERTICAL >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_hS_VERTICAL :: IO (Word32)
hS_FDIAGONAL :: HatchStyle
hS_FDIAGONAL =
  unsafePerformIO(
    prim_GDITypes_cpp_hS_FDIAGONAL >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_hS_FDIAGONAL :: IO (Word32)
hS_BDIAGONAL :: HatchStyle
hS_BDIAGONAL =
  unsafePerformIO(
    prim_GDITypes_cpp_hS_BDIAGONAL >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_hS_BDIAGONAL :: IO (Word32)
hS_CROSS :: HatchStyle
hS_CROSS =
  unsafePerformIO(
    prim_GDITypes_cpp_hS_CROSS >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_hS_CROSS :: IO (Word32)
hS_DIAGCROSS :: HatchStyle
hS_DIAGCROSS =
  unsafePerformIO(
    prim_GDITypes_cpp_hS_DIAGCROSS >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_hS_DIAGCROSS :: IO (Word32)

----------------------------------------------------------------

type StretchBltMode   = UINT

bLACKONWHITE :: StretchBltMode
bLACKONWHITE =
  unsafePerformIO(
    prim_GDITypes_cpp_bLACKONWHITE >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_bLACKONWHITE :: IO (Word32)
wHITEONBLACK :: StretchBltMode
wHITEONBLACK =
  unsafePerformIO(
    prim_GDITypes_cpp_wHITEONBLACK >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_wHITEONBLACK :: IO (Word32)
cOLORONCOLOR :: StretchBltMode
cOLORONCOLOR =
  unsafePerformIO(
    prim_GDITypes_cpp_cOLORONCOLOR >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_cOLORONCOLOR :: IO (Word32)
hALFTONE :: StretchBltMode
hALFTONE =
  unsafePerformIO(
    prim_GDITypes_cpp_hALFTONE >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_hALFTONE :: IO (Word32)
sTRETCH_ANDSCANS :: StretchBltMode
sTRETCH_ANDSCANS =
  unsafePerformIO(
    prim_GDITypes_cpp_sTRETCH_ANDSCANS >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_sTRETCH_ANDSCANS :: IO (Word32)
sTRETCH_ORSCANS :: StretchBltMode
sTRETCH_ORSCANS =
  unsafePerformIO(
    prim_GDITypes_cpp_sTRETCH_ORSCANS >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_sTRETCH_ORSCANS :: IO (Word32)
sTRETCH_DELETESCANS :: StretchBltMode
sTRETCH_DELETESCANS =
  unsafePerformIO(
    prim_GDITypes_cpp_sTRETCH_DELETESCANS >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_sTRETCH_DELETESCANS :: IO (Word32)

----------------------------------------------------------------

type TextAlignment   = UINT

tA_NOUPDATECP :: TextAlignment
tA_NOUPDATECP =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_NOUPDATECP >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_NOUPDATECP :: IO (Word32)
tA_UPDATECP :: TextAlignment
tA_UPDATECP =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_UPDATECP >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_UPDATECP :: IO (Word32)
tA_LEFT :: TextAlignment
tA_LEFT =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_LEFT >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_LEFT :: IO (Word32)
tA_RIGHT :: TextAlignment
tA_RIGHT =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_RIGHT >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_RIGHT :: IO (Word32)
tA_CENTER :: TextAlignment
tA_CENTER =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_CENTER >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_CENTER :: IO (Word32)
tA_TOP :: TextAlignment
tA_TOP =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_TOP >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_TOP :: IO (Word32)
tA_BOTTOM :: TextAlignment
tA_BOTTOM =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_BOTTOM >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_BOTTOM :: IO (Word32)
tA_BASELINE :: TextAlignment
tA_BASELINE =
  unsafePerformIO(
    prim_GDITypes_cpp_tA_BASELINE >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_tA_BASELINE :: IO (Word32)

----------------------------------------------------------------

type ClippingMode   = UINT

rGN_AND :: ClippingMode
rGN_AND =
  unsafePerformIO(
    prim_GDITypes_cpp_rGN_AND >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_rGN_AND :: IO (Word32)
rGN_OR :: ClippingMode
rGN_OR =
  unsafePerformIO(
    prim_GDITypes_cpp_rGN_OR >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_rGN_OR :: IO (Word32)
rGN_XOR :: ClippingMode
rGN_XOR =
  unsafePerformIO(
    prim_GDITypes_cpp_rGN_XOR >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_rGN_XOR :: IO (Word32)
rGN_DIFF :: ClippingMode
rGN_DIFF =
  unsafePerformIO(
    prim_GDITypes_cpp_rGN_DIFF >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_rGN_DIFF :: IO (Word32)
rGN_COPY :: ClippingMode
rGN_COPY =
  unsafePerformIO(
    prim_GDITypes_cpp_rGN_COPY >>= \ (res1) ->
    (return (res1)))
primitive prim_GDITypes_cpp_rGN_COPY :: IO (Word32)

----------------------------------------------------------------

type RegionType   = WORD

eRROR :: RegionType
eRROR =
  unsafePerformIO(
    prim_GDITypes_cpp_eRROR >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_eRROR :: IO (Word32)
nULLREGION :: RegionType
nULLREGION =
  unsafePerformIO(
    prim_GDITypes_cpp_nULLREGION >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_nULLREGION :: IO (Word32)
sIMPLEREGION :: RegionType
sIMPLEREGION =
  unsafePerformIO(
    prim_GDITypes_cpp_sIMPLEREGION >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_sIMPLEREGION :: IO (Word32)
cOMPLEXREGION :: RegionType
cOMPLEXREGION =
  unsafePerformIO(
    prim_GDITypes_cpp_cOMPLEXREGION >>= \ (res1) ->
    let gc_res1 = ( fromIntegral  (res1)) in
    (return (gc_res1)))
primitive prim_GDITypes_cpp_cOMPLEXREGION :: IO (Word32)

----------------------------------------------------------------
-- End
----------------------------------------------------------------
needPrims_hugs 2
