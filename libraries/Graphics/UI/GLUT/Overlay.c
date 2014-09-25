/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutPostWindowOverlayRedisplay_6(HugsStackPtr);
static void hugsprim_glutPostWindowOverlayRedisplay_6(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutPostWindowOverlayRedisplay(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutPostOverlayRedisplay_5(HugsStackPtr);
static void hugsprim_glutPostOverlayRedisplay_5(HugsStackPtr hugs_root)
{
    glutPostOverlayRedisplay();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutUseLayer_4(HugsStackPtr);
static void hugsprim_glutUseLayer_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glutUseLayer(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutHideOverlay_3(HugsStackPtr);
static void hugsprim_glutHideOverlay_3(HugsStackPtr hugs_root)
{
    glutHideOverlay();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutShowOverlay_2(HugsStackPtr);
static void hugsprim_glutShowOverlay_2(HugsStackPtr hugs_root)
{
    glutShowOverlay();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutEstablishOverlay_1(HugsStackPtr);
static void hugsprim_glutEstablishOverlay_1(HugsStackPtr hugs_root)
{
    glutEstablishOverlay();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutRemoveOverlay_0(HugsStackPtr);
static void hugsprim_glutRemoveOverlay_0(HugsStackPtr hugs_root)
{
    glutRemoveOverlay();
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutPostWindowOverlayRedisplay", 2, hugsprim_glutPostWindowOverlayRedisplay_6},
    {"glutPostOverlayRedisplay", 1, hugsprim_glutPostOverlayRedisplay_5},
    {"glutUseLayer", 2, hugsprim_glutUseLayer_4},
    {"glutHideOverlay", 1, hugsprim_glutHideOverlay_3},
    {"glutShowOverlay", 1, hugsprim_glutShowOverlay_2},
    {"glutEstablishOverlay", 1, hugsprim_glutEstablishOverlay_1},
    {"glutRemoveOverlay", 1, hugsprim_glutRemoveOverlay_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGOverlay
#endif

static struct hugs_primInfo hugs_prims = { hugs_primControl, hugs_primTable, 0 };

#ifdef __cplusplus
extern "C" {
#endif
#ifndef __cplusplus
DLLEXPORT(int)  HugsAPIVersion(void);
#endif
DLLEXPORT(int)  HugsAPIVersion() {return (5);}
DLLEXPORT(void) initModule(HugsAPI5 *);
DLLEXPORT(void) initModule(HugsAPI5 *hugsAPI) {
    hugs = hugsAPI;
    hugs->registerPrims(&hugs_prims);
}
#ifdef __cplusplus
}
#endif

