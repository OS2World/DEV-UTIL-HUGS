/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsOpenGL.h"

static void hugsprim_glTexGendv_26(HugsStackPtr);
static void hugsprim_glTexGendv_26(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    glTexGendv(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glGetTexGendv_25(HugsStackPtr);
static void hugsprim_glGetTexGendv_25(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    glGetTexGendv(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexGeni_24(HugsStackPtr);
static void hugsprim_glTexGeni_24(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    glTexGeni(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glGetTexGeniv_23(HugsStackPtr);
static void hugsprim_glGetTexGeniv_23(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    glGetTexGeniv(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPopMatrix_22(HugsStackPtr);
static void hugsprim_glPopMatrix_22(HugsStackPtr hugs_root)
{
    glPopMatrix();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPushMatrix_21(HugsStackPtr);
static void hugsprim_glPushMatrix_21(HugsStackPtr hugs_root)
{
    glPushMatrix();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6440_20(HugsStackPtr);
static void hugsprim_v6440_20(HugsStackPtr hugs_root)
{
    void (*v6440)(HsWord32 arg1);
    HsWord32 arg1;
    v6440 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v6440(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glFrustum_19(HugsStackPtr);
static void hugsprim_glFrustum_19(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    HsDouble arg5;
    HsDouble arg6;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    arg5 = hugs->getDouble();
    arg6 = hugs->getDouble();
    glFrustum(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glOrtho_18(HugsStackPtr);
static void hugsprim_glOrtho_18(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    HsDouble arg5;
    HsDouble arg6;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    arg5 = hugs->getDouble();
    arg6 = hugs->getDouble();
    glOrtho(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glLoadIdentity_17(HugsStackPtr);
static void hugsprim_glLoadIdentity_17(HugsStackPtr hugs_root)
{
    glLoadIdentity();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glScaled_16(HugsStackPtr);
static void hugsprim_glScaled_16(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    glScaled(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glScalef_15(HugsStackPtr);
static void hugsprim_glScalef_15(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    glScalef(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTranslated_14(HugsStackPtr);
static void hugsprim_glTranslated_14(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    glTranslated(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTranslatef_13(HugsStackPtr);
static void hugsprim_glTranslatef_13(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    glTranslatef(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glRotated_12(HugsStackPtr);
static void hugsprim_glRotated_12(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    glRotated(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glRotatef_11(HugsStackPtr);
static void hugsprim_glRotatef_11(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    glRotatef(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6441_10(HugsStackPtr);
static void hugsprim_v6441_10(HugsStackPtr hugs_root)
{
    void (*v6441)(HsPtr arg1);
    HsPtr arg1;
    v6441 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v6441(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6442_9(HugsStackPtr);
static void hugsprim_v6442_9(HugsStackPtr hugs_root)
{
    void (*v6442)(HsPtr arg1);
    HsPtr arg1;
    v6442 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v6442(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glMultMatrixd_8(HugsStackPtr);
static void hugsprim_glMultMatrixd_8(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glMultMatrixd(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glMultMatrixf_7(HugsStackPtr);
static void hugsprim_glMultMatrixf_7(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glMultMatrixf(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6443_6(HugsStackPtr);
static void hugsprim_v6443_6(HugsStackPtr hugs_root)
{
    void (*v6443)(HsPtr arg1);
    HsPtr arg1;
    v6443 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v6443(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6444_5(HugsStackPtr);
static void hugsprim_v6444_5(HugsStackPtr hugs_root)
{
    void (*v6444)(HsPtr arg1);
    HsPtr arg1;
    v6444 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v6444(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glLoadMatrixd_4(HugsStackPtr);
static void hugsprim_glLoadMatrixd_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glLoadMatrixd(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glLoadMatrixf_3(HugsStackPtr);
static void hugsprim_glLoadMatrixf_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glLoadMatrixf(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glMatrixMode_2(HugsStackPtr);
static void hugsprim_glMatrixMode_2(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glMatrixMode(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glViewport_1(HugsStackPtr);
static void hugsprim_glViewport_1(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glViewport(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glDepthRange_0(HugsStackPtr);
static void hugsprim_glDepthRange_0(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    glDepthRange(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glTexGendv", 4, hugsprim_glTexGendv_26},
    {"glGetTexGendv", 4, hugsprim_glGetTexGendv_25},
    {"glTexGeni", 4, hugsprim_glTexGeni_24},
    {"glGetTexGeniv", 4, hugsprim_glGetTexGeniv_23},
    {"glPopMatrix", 1, hugsprim_glPopMatrix_22},
    {"glPushMatrix", 1, hugsprim_glPushMatrix_21},
    {"dyn_glActiveTextureARB", 3, hugsprim_v6440_20},
    {"frustum", 7, hugsprim_glFrustum_19},
    {"ortho", 7, hugsprim_glOrtho_18},
    {"loadIdentity", 1, hugsprim_glLoadIdentity_17},
    {"glScaled", 4, hugsprim_glScaled_16},
    {"glScalef", 4, hugsprim_glScalef_15},
    {"glTranslated", 4, hugsprim_glTranslated_14},
    {"glTranslatef", 4, hugsprim_glTranslatef_13},
    {"glRotated", 5, hugsprim_glRotated_12},
    {"glRotatef", 5, hugsprim_glRotatef_11},
    {"dyn_glMultTransposeMatrixdARB", 3, hugsprim_v6441_10},
    {"dyn_glMultTransposeMatrixfARB", 3, hugsprim_v6442_9},
    {"glMultMatrixd", 2, hugsprim_glMultMatrixd_8},
    {"glMultMatrixf", 2, hugsprim_glMultMatrixf_7},
    {"dyn_glLoadTransposeMatrixdARB", 3, hugsprim_v6443_6},
    {"dyn_glLoadTransposeMatrixfARB", 3, hugsprim_v6444_5},
    {"glLoadMatrixd", 2, hugsprim_glLoadMatrixd_4},
    {"glLoadMatrixf", 2, hugsprim_glLoadMatrixf_3},
    {"glMatrixMode", 2, hugsprim_glMatrixMode_2},
    {"glViewport", 5, hugsprim_glViewport_1},
    {"glDepthRange", 3, hugsprim_glDepthRange_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGCoordTrans
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

