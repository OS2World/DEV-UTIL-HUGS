/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutGameModeGet_3(HugsStackPtr);
static void hugsprim_glutGameModeGet_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 res1;
    arg1 = hugs->getWord32();
    res1 = glutGameModeGet(arg1);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutLeaveGameMode_2(HugsStackPtr);
static void hugsprim_glutLeaveGameMode_2(HugsStackPtr hugs_root)
{
    glutLeaveGameMode();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutEnterGameMode_1(HugsStackPtr);
static void hugsprim_glutEnterGameMode_1(HugsStackPtr hugs_root)
{
    HsInt32 res1;
    res1 = glutEnterGameMode();
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutGameModeString_0(HugsStackPtr);
static void hugsprim_glutGameModeString_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glutGameModeString(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutGameModeGet", 2, hugsprim_glutGameModeGet_3},
    {"leaveGameMode", 1, hugsprim_glutLeaveGameMode_2},
    {"glutEnterGameMode", 1, hugsprim_glutEnterGameMode_1},
    {"glutGameModeString", 2, hugsprim_glutGameModeString_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGGameMode
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

