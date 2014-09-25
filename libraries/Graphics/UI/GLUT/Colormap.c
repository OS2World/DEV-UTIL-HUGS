/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutCopyColormap_2(HugsStackPtr);
static void hugsprim_glutCopyColormap_2(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutCopyColormap(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutGetColor_1(HugsStackPtr);
static void hugsprim_glutGetColor_1(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsFloat res1;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    res1 = glutGetColor(arg1, arg2);
    hugs->putFloat(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSetColor_0(HugsStackPtr);
static void hugsprim_glutSetColor_0(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    glutSetColor(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"copyColormap", 2, hugsprim_glutCopyColormap_2},
    {"glutGetColor", 3, hugsprim_glutGetColor_1},
    {"glutSetColor", 5, hugsprim_glutSetColor_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGColormap
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

