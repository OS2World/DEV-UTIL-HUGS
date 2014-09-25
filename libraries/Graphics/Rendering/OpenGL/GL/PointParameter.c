/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;

static void hugsprim_v5661_2(HugsStackPtr);
static void hugsprim_v5661_2(HugsStackPtr hugs_root)
{
    void (*v5661)(HsWord32 arg1, HsInt32 arg2);
    HsWord32 arg1;
    HsInt32 arg2;
    v5661 = (void (*)(HsWord32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    v5661(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5662_1(HugsStackPtr);
static void hugsprim_v5662_1(HugsStackPtr hugs_root)
{
    void (*v5662)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5662 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5662(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5663_0(HugsStackPtr);
static void hugsprim_v5663_0(HugsStackPtr hugs_root)
{
    void (*v5663)(HsWord32 arg1, HsFloat arg2);
    HsWord32 arg1;
    HsFloat arg2;
    v5663 = (void (*)(HsWord32, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    v5663(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"dyn_glPointParameteriNV", 4, hugsprim_v5661_2},
    {"dyn_glPointParameterfvARB", 4, hugsprim_v5662_1},
    {"dyn_glPointParameterfARB", 4, hugsprim_v5663_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGPointParameter
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

