/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutInitDisplayString_4(HugsStackPtr);
static void hugsprim_glutInitDisplayString_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glutInitDisplayString(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutInitDisplayMode_3(HugsStackPtr);
static void hugsprim_glutInitDisplayMode_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glutInitDisplayMode(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutInitWindowSize_2(HugsStackPtr);
static void hugsprim_glutInitWindowSize_2(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glutInitWindowSize(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutInitWindowPosition_1(HugsStackPtr);
static void hugsprim_glutInitWindowPosition_1(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glutInitWindowPosition(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutInit_0(HugsStackPtr);
static void hugsprim_glutInit_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    glutInit(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutInitDisplayString", 2, hugsprim_glutInitDisplayString_4},
    {"glutInitDisplayMode", 2, hugsprim_glutInitDisplayMode_3},
    {"glutInitWindowSize", 3, hugsprim_glutInitWindowSize_2},
    {"glutInitWindowPosition", 3, hugsprim_glutInitWindowPosition_1},
    {"glutInit", 3, hugsprim_glutInit_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGInitialization
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

