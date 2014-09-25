/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutDeviceGet_2(HugsStackPtr);
static void hugsprim_glutDeviceGet_2(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 res1;
    arg1 = hugs->getWord32();
    res1 = glutDeviceGet(arg1);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutLayerGet_1(HugsStackPtr);
static void hugsprim_glutLayerGet_1(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 res1;
    arg1 = hugs->getWord32();
    res1 = glutLayerGet(arg1);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutGet_0(HugsStackPtr);
static void hugsprim_glutGet_0(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 res1;
    arg1 = hugs->getWord32();
    res1 = glutGet(arg1);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutDeviceGet", 2, hugsprim_glutDeviceGet_2},
    {"glutLayerGet", 2, hugsprim_glutLayerGet_1},
    {"glutGet", 2, hugsprim_glutGet_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGQueryUtils
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

