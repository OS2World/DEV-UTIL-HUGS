/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutJoystickFunc_36(HugsStackPtr);
static void hugsprim_glutJoystickFunc_36(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    HsInt32 arg2;
    arg1 = hugs->getFunPtr();
    arg2 = hugs->getInt32();
    glutJoystickFunc(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void v6883(HugsStablePtr fun1, void* unusedArg, HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4);
static void v6883(HugsStablePtr fun1, void* unusedArg, HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4)
{
    hugs->derefStablePtr4(fun1);
    hugs->putWord32(arg1);
    hugs->putInt32(arg2);
    hugs->putInt32(arg3);
    hugs->putInt32(arg4);
    if (hugs->runIO(4)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6883_35(HugsStackPtr);
static void hugsprim_v6883_35(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6883,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutTabletButtonFunc_34(HugsStackPtr);
static void hugsprim_glutTabletButtonFunc_34(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutTabletButtonFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6884(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4);
static void v6884(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    hugs->putInt32(arg3);
    hugs->putInt32(arg4);
    if (hugs->runIO(4)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6884_33(HugsStackPtr);
static void hugsprim_v6884_33(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6884,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutTabletMotionFunc_32(HugsStackPtr);
static void hugsprim_glutTabletMotionFunc_32(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutTabletMotionFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6885(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2);
static void v6885(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    if (hugs->runIO(2)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6885_31(HugsStackPtr);
static void hugsprim_v6885_31(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6885,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutDialsFunc_30(HugsStackPtr);
static void hugsprim_glutDialsFunc_30(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutDialsFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6886(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2);
static void v6886(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    if (hugs->runIO(2)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6886_29(HugsStackPtr);
static void hugsprim_v6886_29(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6886,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutButtonBoxFunc_28(HugsStackPtr);
static void hugsprim_glutButtonBoxFunc_28(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutButtonBoxFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6887(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2);
static void v6887(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    if (hugs->runIO(2)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6887_27(HugsStackPtr);
static void hugsprim_v6887_27(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6887,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSpaceballButtonFunc_26(HugsStackPtr);
static void hugsprim_glutSpaceballButtonFunc_26(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutSpaceballButtonFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6888(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2);
static void v6888(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    if (hugs->runIO(2)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6888_25(HugsStackPtr);
static void hugsprim_v6888_25(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6888,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSpaceballRotateFunc_24(HugsStackPtr);
static void hugsprim_glutSpaceballRotateFunc_24(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutSpaceballRotateFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6889(HugsStablePtr fun1, void* unusedArg, HsInt arg1, HsInt arg2, HsInt arg3);
static void v6889(HugsStablePtr fun1, void* unusedArg, HsInt arg1, HsInt arg2, HsInt arg3)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt(arg1);
    hugs->putInt(arg2);
    hugs->putInt(arg3);
    if (hugs->runIO(3)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6889_23(HugsStackPtr);
static void hugsprim_v6889_23(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6889,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSpaceballMotionFunc_22(HugsStackPtr);
static void hugsprim_glutSpaceballMotionFunc_22(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutSpaceballMotionFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6890(HugsStablePtr fun1, void* unusedArg, HsInt arg1, HsInt arg2, HsInt arg3);
static void v6890(HugsStablePtr fun1, void* unusedArg, HsInt arg1, HsInt arg2, HsInt arg3)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt(arg1);
    hugs->putInt(arg2);
    hugs->putInt(arg3);
    if (hugs->runIO(3)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6890_21(HugsStackPtr);
static void hugsprim_v6890_21(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6890,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutEntryFunc_20(HugsStackPtr);
static void hugsprim_glutEntryFunc_20(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutEntryFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6891(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1);
static void v6891(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    if (hugs->runIO(1)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6891_19(HugsStackPtr);
static void hugsprim_v6891_19(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6891,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutPassiveMotionFunc_18(HugsStackPtr);
static void hugsprim_glutPassiveMotionFunc_18(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutPassiveMotionFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutMotionFunc_17(HugsStackPtr);
static void hugsprim_glutMotionFunc_17(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutMotionFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6892(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2);
static void v6892(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    if (hugs->runIO(2)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6892_16(HugsStackPtr);
static void hugsprim_v6892_16(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6892,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutGetModifiers_15(HugsStackPtr);
static void hugsprim_glutGetModifiers_15(HugsStackPtr hugs_root)
{
    HsInt32 res1;
    res1 = glutGetModifiers();
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutMouseFunc_14(HugsStackPtr);
static void hugsprim_glutMouseFunc_14(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutMouseFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6893(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4);
static void v6893(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    hugs->putInt32(arg3);
    hugs->putInt32(arg4);
    if (hugs->runIO(4)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6893_13(HugsStackPtr);
static void hugsprim_v6893_13(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6893,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSpecialUpFunc_12(HugsStackPtr);
static void hugsprim_glutSpecialUpFunc_12(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutSpecialUpFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSpecialFunc_11(HugsStackPtr);
static void hugsprim_glutSpecialFunc_11(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutSpecialFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6894(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3);
static void v6894(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2, HsInt32 arg3)
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

static void hugsprim_v6894_10(HugsStackPtr);
static void hugsprim_v6894_10(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6894,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutKeyboardUpFunc_9(HugsStackPtr);
static void hugsprim_glutKeyboardUpFunc_9(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutKeyboardUpFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutKeyboardFunc_8(HugsStackPtr);
static void hugsprim_glutKeyboardFunc_8(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutKeyboardFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6895(HugsStablePtr fun1, void* unusedArg, HsWord8 arg1, HsInt32 arg2, HsInt32 arg3);
static void v6895(HugsStablePtr fun1, void* unusedArg, HsWord8 arg1, HsInt32 arg2, HsInt32 arg3)
{
    hugs->derefStablePtr4(fun1);
    hugs->putWord8(arg1);
    hugs->putInt32(arg2);
    hugs->putInt32(arg3);
    if (hugs->runIO(3)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6895_7(HugsStackPtr);
static void hugsprim_v6895_7(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6895,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutVisibilityFunc_6(HugsStackPtr);
static void hugsprim_glutVisibilityFunc_6(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutVisibilityFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6896(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1);
static void v6896(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    if (hugs->runIO(1)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6896_5(HugsStackPtr);
static void hugsprim_v6896_5(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6896,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutReshapeFunc_4(HugsStackPtr);
static void hugsprim_glutReshapeFunc_4(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutReshapeFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6897(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2);
static void v6897(HugsStablePtr fun1, void* unusedArg, HsInt32 arg1, HsInt32 arg2)
{
    hugs->derefStablePtr4(fun1);
    hugs->putInt32(arg1);
    hugs->putInt32(arg2);
    if (hugs->runIO(2)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6897_3(HugsStackPtr);
static void hugsprim_v6897_3(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6897,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutOverlayDisplayFunc_2(HugsStackPtr);
static void hugsprim_glutOverlayDisplayFunc_2(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutOverlayDisplayFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutDisplayFunc_1(HugsStackPtr);
static void hugsprim_glutDisplayFunc_1(HugsStackPtr hugs_root)
{
    HsFunPtr arg1;
    arg1 = hugs->getFunPtr();
    glutDisplayFunc(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void v6898(HugsStablePtr fun1, void* unusedArg);
static void v6898(HugsStablePtr fun1, void* unusedArg)
{
    hugs->derefStablePtr4(fun1);
    if (hugs->runIO(0)) {
        exit(hugs->getInt());
    }
    hugs->getUnit();
    return;
}

static void hugsprim_v6898_0(HugsStackPtr);
static void hugsprim_v6898_0(HugsStackPtr hugs_root)
{
    HugsStablePtr arg1 = hugs->makeStablePtr4();
    void* thunk = hugs->mkThunk((HsFunPtr)v6898,arg1);
    hugs->putAddr(thunk);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutJoystickFunc", 3, hugsprim_glutJoystickFunc_36},
    {"makeJoystickFunc", 2, hugsprim_v6883_35},
    {"glutTabletButtonFunc", 2, hugsprim_glutTabletButtonFunc_34},
    {"makeTabletButtonFunc", 2, hugsprim_v6884_33},
    {"glutTabletMotionFunc", 2, hugsprim_glutTabletMotionFunc_32},
    {"makeTabletMotionFunc", 2, hugsprim_v6885_31},
    {"glutDialsFunc", 2, hugsprim_glutDialsFunc_30},
    {"makeDialsFunc", 2, hugsprim_v6886_29},
    {"glutButtonBoxFunc", 2, hugsprim_glutButtonBoxFunc_28},
    {"makeButtonBoxFunc", 2, hugsprim_v6887_27},
    {"glutSpaceballButtonFunc", 2, hugsprim_glutSpaceballButtonFunc_26},
    {"makeSpaceballButtonCallback", 2, hugsprim_v6888_25},
    {"glutSpaceballRotateFunc", 2, hugsprim_glutSpaceballRotateFunc_24},
    {"makeSpaceballRotationCallback", 2, hugsprim_v6889_23},
    {"glutSpaceballMotionFunc", 2, hugsprim_glutSpaceballMotionFunc_22},
    {"makeSpaceballMotionCallback", 2, hugsprim_v6890_21},
    {"glutEntryFunc", 2, hugsprim_glutEntryFunc_20},
    {"makeCrossingCallback", 2, hugsprim_v6891_19},
    {"glutPassiveMotionFunc", 2, hugsprim_glutPassiveMotionFunc_18},
    {"glutMotionFunc", 2, hugsprim_glutMotionFunc_17},
    {"makeMotionCallback", 2, hugsprim_v6892_16},
    {"glutGetModifiers", 1, hugsprim_glutGetModifiers_15},
    {"glutMouseFunc", 2, hugsprim_glutMouseFunc_14},
    {"makeMouseCallback", 2, hugsprim_v6893_13},
    {"glutSpecialUpFunc", 2, hugsprim_glutSpecialUpFunc_12},
    {"glutSpecialFunc", 2, hugsprim_glutSpecialFunc_11},
    {"makeSpecialCallback", 2, hugsprim_v6894_10},
    {"glutKeyboardUpFunc", 2, hugsprim_glutKeyboardUpFunc_9},
    {"glutKeyboardFunc", 2, hugsprim_glutKeyboardFunc_8},
    {"makeKeyboardCallback", 2, hugsprim_v6895_7},
    {"glutVisibilityFunc", 2, hugsprim_glutVisibilityFunc_6},
    {"makeVisibilityCallback", 2, hugsprim_v6896_5},
    {"glutReshapeFunc", 2, hugsprim_glutReshapeFunc_4},
    {"makeReshapeCallback", 2, hugsprim_v6897_3},
    {"glutOverlayDisplayFunc", 2, hugsprim_glutOverlayDisplayFunc_2},
    {"glutDisplayFunc", 2, hugsprim_glutDisplayFunc_1},
    {"makeDisplayCallback", 2, hugsprim_v6898_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGCWindow
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

