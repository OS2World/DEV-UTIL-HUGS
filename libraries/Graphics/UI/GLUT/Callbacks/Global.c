/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutTimerFunc_5(HugsStackPtr);
static void hugsprim_glutTimerFunc_5(HugsStackPtr hugs_root)
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

static void v6815(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1);
static void v6815(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    if (hugs->runIO(1)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6815_4(HugsStackPtr);
static void hugsprim_v6815_4(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6815,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutIdleFunc_3(HugsStackPtr);
static void hugsprim_glutIdleFunc_3(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutIdleFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6816(HugsStablePtr fun1, void* unusedArg);
static void v6816(HugsStablePtr fun1, void* unusedArg)
{
    hugs->derefStablePtr4(fun1);
    if (hugs->runIO(0)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6816_2(HugsStackPtr);
static void hugsprim_v6816_2(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6816,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutMenuStatusFunc_1(HugsStackPtr);
static void hugsprim_glutMenuStatusFunc_1(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutMenuStatusFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6817(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3);
static void v6817(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    hugs->putInt32(arg3);
    if (hugs->runIO(3)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6817_0(HugsStackPtr);
static void hugsprim_v6817_0(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6817,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutTimerFunc", 4, hugsprim_glutTimerFunc_5},
    {"makeTimerCallback", 2, hugsprim_v6815_4},
    {"glutIdleFunc", 2, hugsprim_glutIdleFunc_3},
    {"makeIdleCallback", 2, hugsprim_v6816_2},
    {"glutMenuStatusFunc", 2, hugsprim_glutMenuStatusFunc_1},
    {"makeMenuStatusCallback", 2, hugsprim_v6817_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGCGlobal
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

