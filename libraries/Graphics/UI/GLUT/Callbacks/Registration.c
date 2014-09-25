/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutTimerFunc_1(HugsStackPtr);
static void hugsprim_glutTimerFunc_1(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsFunPtr arg2;
    HsInt32 arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getFunPtr();
    arg3 = hugs->getInt32();
    glutTimerFunc(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void v6764(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1);
static void v6764(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    if (hugs->runIO(1)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6764_0(HugsStackPtr);
static void hugsprim_v6764_0(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6764,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutTimerFunc", 4, hugsprim_glutTimerFunc_1},
    {"makeTimerCallback", 2, hugsprim_v6764_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGCRegistration
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

