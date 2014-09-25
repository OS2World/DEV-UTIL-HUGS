/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutDetachMenu_9(HugsStackPtr);
static void hugsprim_glutDetachMenu_9(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutDetachMenu(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutAttachMenu_8(HugsStackPtr);
static void hugsprim_glutAttachMenu_8(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutAttachMenu(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutRemoveMenuItem_7(HugsStackPtr);
static void hugsprim_glutRemoveMenuItem_7(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutRemoveMenuItem(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutAddSubMenu_6(HugsStackPtr);
static void hugsprim_glutAddSubMenu_6(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsInt32 arg2;
    arg1 = hugs->getPtr();
    arg2 = hugs->getInt32();
    glutAddSubMenu(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutAddMenuEntry_5(HugsStackPtr);
static void hugsprim_glutAddMenuEntry_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsInt32 arg2;
    arg1 = hugs->getPtr();
    arg2 = hugs->getInt32();
    glutAddMenuEntry(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutGetMenu_4(HugsStackPtr);
static void hugsprim_glutGetMenu_4(HugsStackPtr hugs_root)
{
    HsInt32 res1;
    res1 = glutGetMenu();
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSetMenu_3(HugsStackPtr);
static void hugsprim_glutSetMenu_3(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutSetMenu(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutDestroyMenu_2(HugsStackPtr);
static void hugsprim_glutDestroyMenu_2(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutDestroyMenu(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v7006(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1);
static void v7006(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    if (hugs->runIO(1)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v7006_1(HugsStackPtr);
static void hugsprim_v7006_1(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v7006,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutCreateMenu_0(HugsStackPtr);
static void hugsprim_glutCreateMenu_0(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    HsInt32 res1;
    arg1 = hugs->getFunPtr();
    res1 = glutCreateMenu(arg1);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutDetachMenu", 2, hugsprim_glutDetachMenu_9},
    {"glutAttachMenu", 2, hugsprim_glutAttachMenu_8},
    {"glutRemoveMenuItem", 2, hugsprim_glutRemoveMenuItem_7},
    {"glutAddSubMenu", 3, hugsprim_glutAddSubMenu_6},
    {"glutAddMenuEntry", 3, hugsprim_glutAddMenuEntry_5},
    {"glutGetMenu", 1, hugsprim_glutGetMenu_4},
    {"glutSetMenu", 2, hugsprim_glutSetMenu_3},
    {"glutDestroyMenu", 2, hugsprim_glutDestroyMenu_2},
    {"makeMenuFunc", 2, hugsprim_v7006_1},
    {"glutCreateMenu", 2, hugsprim_glutCreateMenu_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGMenu
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

