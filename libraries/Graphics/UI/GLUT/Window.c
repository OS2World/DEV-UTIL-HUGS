/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutWarpPointer_19(HugsStackPtr);
static void hugsprim_glutWarpPointer_19(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glutWarpPointer(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSetCursor_18(HugsStackPtr);
static void hugsprim_glutSetCursor_18(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutSetCursor(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSetIconTitle_17(HugsStackPtr);
static void hugsprim_glutSetIconTitle_17(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glutSetIconTitle(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSetWindowTitle_16(HugsStackPtr);
static void hugsprim_glutSetWindowTitle_16(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glutSetWindowTitle(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutIconifyWindow_15(HugsStackPtr);
static void hugsprim_glutIconifyWindow_15(HugsStackPtr hugs_root)
{
    glutIconifyWindow();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutHideWindow_14(HugsStackPtr);
static void hugsprim_glutHideWindow_14(HugsStackPtr hugs_root)
{
    glutHideWindow();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutShowWindow_13(HugsStackPtr);
static void hugsprim_glutShowWindow_13(HugsStackPtr hugs_root)
{
    glutShowWindow();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutPopWindow_12(HugsStackPtr);
static void hugsprim_glutPopWindow_12(HugsStackPtr hugs_root)
{
    glutPopWindow();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutPushWindow_11(HugsStackPtr);
static void hugsprim_glutPushWindow_11(HugsStackPtr hugs_root)
{
    glutPushWindow();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutFullScreen_10(HugsStackPtr);
static void hugsprim_glutFullScreen_10(HugsStackPtr hugs_root)
{
    glutFullScreen();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutReshapeWindow_9(HugsStackPtr);
static void hugsprim_glutReshapeWindow_9(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glutReshapeWindow(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutPositionWindow_8(HugsStackPtr);
static void hugsprim_glutPositionWindow_8(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glutPositionWindow(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSwapBuffers_7(HugsStackPtr);
static void hugsprim_glutSwapBuffers_7(HugsStackPtr hugs_root)
{
    glutSwapBuffers();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutPostWindowRedisplay_6(HugsStackPtr);
static void hugsprim_glutPostWindowRedisplay_6(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutPostWindowRedisplay(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutPostRedisplay_5(HugsStackPtr);
static void hugsprim_glutPostRedisplay_5(HugsStackPtr hugs_root)
{
    glutPostRedisplay();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutGetWindow_4(HugsStackPtr);
static void hugsprim_glutGetWindow_4(HugsStackPtr hugs_root)
{
    HsInt32 res1;
    res1 = glutGetWindow();
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutSetWindow_3(HugsStackPtr);
static void hugsprim_glutSetWindow_3(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutSetWindow(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutDestroyWindow_2(HugsStackPtr);
static void hugsprim_glutDestroyWindow_2(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glutDestroyWindow(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutCreateSubWindow_1(HugsStackPtr);
static void hugsprim_glutCreateSubWindow_1(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsInt32 arg5;
    HsInt32 res1;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getInt32();
    res1 = glutCreateSubWindow(arg1, arg2, arg3, arg4, arg5);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutCreateWindow_0(HugsStackPtr);
static void hugsprim_glutCreateWindow_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsInt32 res1;
    arg1 = hugs->getPtr();
    res1 = glutCreateWindow(arg1);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutWarpPointer", 3, hugsprim_glutWarpPointer_19},
    {"glutSetCursor", 2, hugsprim_glutSetCursor_18},
    {"glutSetIconTitle", 2, hugsprim_glutSetIconTitle_17},
    {"glutSetWindowTitle", 2, hugsprim_glutSetWindowTitle_16},
    {"glutIconifyWindow", 1, hugsprim_glutIconifyWindow_15},
    {"glutHideWindow", 1, hugsprim_glutHideWindow_14},
    {"glutShowWindow", 1, hugsprim_glutShowWindow_13},
    {"popWindow", 1, hugsprim_glutPopWindow_12},
    {"pushWindow", 1, hugsprim_glutPushWindow_11},
    {"fullScreen", 1, hugsprim_glutFullScreen_10},
    {"glutReshapeWindow", 3, hugsprim_glutReshapeWindow_9},
    {"glutPositionWindow", 3, hugsprim_glutPositionWindow_8},
    {"swapBuffers", 1, hugsprim_glutSwapBuffers_7},
    {"glutPostWindowRedisplay", 2, hugsprim_glutPostWindowRedisplay_6},
    {"glutPostRedisplay", 1, hugsprim_glutPostRedisplay_5},
    {"glutGetWindow", 1, hugsprim_glutGetWindow_4},
    {"glutSetWindow", 2, hugsprim_glutSetWindow_3},
    {"destroyWindow", 2, hugsprim_glutDestroyWindow_2},
    {"glutCreateSubWindow", 6, hugsprim_glutCreateSubWindow_1},
    {"glutCreateWindow", 2, hugsprim_glutCreateWindow_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGWindow
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

