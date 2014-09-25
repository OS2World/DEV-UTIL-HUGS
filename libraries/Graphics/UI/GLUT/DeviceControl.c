/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutForceJoystickFunc_2(HugsStackPtr);
static void hugsprim_glutForceJoystickFunc_2(HugsStackPtr hugs_root)
{
    glutForceJoystickFunc();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutIgnoreKeyRepeat_1(HugsStackPtr);
static void hugsprim_glutIgnoreKeyRepeat_1(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutIgnoreKeyRepeat(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSetKeyRepeat_0(HugsStackPtr);
static void hugsprim_glutSetKeyRepeat_0(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutSetKeyRepeat(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"forceJoystickCallback", 1, hugsprim_glutForceJoystickFunc_2},
    {"glutIgnoreKeyRepeat", 2, hugsprim_glutIgnoreKeyRepeat_1},
    {"glutSetKeyRepeat", 2, hugsprim_glutSetKeyRepeat_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGDeviceControl
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

