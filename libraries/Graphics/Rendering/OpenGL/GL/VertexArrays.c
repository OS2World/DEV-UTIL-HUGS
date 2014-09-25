/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;

static void hugsprim_v6436_20(HugsStackPtr);
static void hugsprim_v6436_20(HugsStackPtr hugs_root)
{
    void (*v6436)(HsWord32 arg1);
    HsWord32 arg1;
    v6436 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v6436(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6437_19(HugsStackPtr);
static void hugsprim_v6437_19(HugsStackPtr hugs_root)
{
    void (*v6437)();
    v6437 = (void (*)())hugs->getFunPtr();
    v6437();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6438_18(HugsStackPtr);
static void hugsprim_v6438_18(HugsStackPtr hugs_root)
{
    void (*v6438)(HsInt32 arg1, HsInt32 arg2);
    HsInt32 arg1;
    HsInt32 arg2;
    v6438 = (void (*)(HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    v6438(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6439_17(HugsStackPtr);
static void hugsprim_v6439_17(HugsStackPtr hugs_root)
{
    void (*v6439)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3, HsInt32 arg4, HsWord32 arg5, HsPtr arg6);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsInt32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    v6439 = (void (*)(HsWord32, HsWord32, HsWord32, HsInt32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    v6439(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6440_16(HugsStackPtr);
static void hugsprim_v6440_16(HugsStackPtr hugs_root)
{
    void (*v6440)(HsWord32 arg1, HsPtr arg2, HsWord32 arg3, HsPtr arg4, HsInt32 arg5);
    HsWord32 arg1;
    HsPtr arg2;
    HsWord32 arg3;
    HsPtr arg4;
    HsInt32 arg5;
    v6440 = (void (*)(HsWord32, HsPtr, HsWord32, HsPtr, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    arg5 = hugs->getInt32();
    v6440(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}
#include "HsOpenGL.h"

static void hugsprim_glDrawElements_15(HugsStackPtr);
static void hugsprim_glDrawElements_15(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsWord32 arg3;
    HsPtr arg4;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    glDrawElements(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6441_14(HugsStackPtr);
static void hugsprim_v6441_14(HugsStackPtr hugs_root)
{
    void (*v6441)(HsWord32 arg1, HsPtr arg2, HsPtr arg3, HsInt32 arg4);
    HsWord32 arg1;
    HsPtr arg2;
    HsPtr arg3;
    HsInt32 arg4;
    v6441 = (void (*)(HsWord32, HsPtr, HsPtr, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    arg3 = hugs->getPtr();
    arg4 = hugs->getInt32();
    v6441(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glDrawArrays_13(HugsStackPtr);
static void hugsprim_glDrawArrays_13(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glDrawArrays(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glArrayElement_12(HugsStackPtr);
static void hugsprim_glArrayElement_12(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glArrayElement(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6442_11(HugsStackPtr);
static void hugsprim_v6442_11(HugsStackPtr hugs_root)
{
    void (*v6442)(HsWord32 arg1);
    HsWord32 arg1;
    v6442 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v6442(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glDisableClientState_10(HugsStackPtr);
static void hugsprim_glDisableClientState_10(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glDisableClientState(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glEnableClientState_9(HugsStackPtr);
static void hugsprim_glEnableClientState_9(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    arg1 = hugs->getWord32();
    glEnableClientState(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glInterleavedArrays_8(HugsStackPtr);
static void hugsprim_glInterleavedArrays_8(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    glInterleavedArrays(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glEdgeFlagPointer_7(HugsStackPtr);
static void hugsprim_glEdgeFlagPointer_7(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsPtr arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getPtr();
    glEdgeFlagPointer(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoordPointer_6(HugsStackPtr);
static void hugsprim_glTexCoordPointer_6(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsPtr arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getPtr();
    glTexCoordPointer(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6443_5(HugsStackPtr);
static void hugsprim_v6443_5(HugsStackPtr hugs_root)
{
    void (*v6443)(HsWord32 arg1, HsInt32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    v6443 = (void (*)(HsWord32, HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    v6443(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexPointer_4(HugsStackPtr);
static void hugsprim_glIndexPointer_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    glIndexPointer(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6444_3(HugsStackPtr);
static void hugsprim_v6444_3(HugsStackPtr hugs_root)
{
    void (*v6444)(HsInt32 arg1, HsWord32 arg2, HsInt32 arg3, HsPtr arg4);
    HsInt32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsPtr arg4;
    v6444 = (void (*)(HsInt32, HsWord32, HsInt32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getPtr();
    v6444(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColorPointer_2(HugsStackPtr);
static void hugsprim_glColorPointer_2(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsPtr arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getPtr();
    glColorPointer(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormalPointer_1(HugsStackPtr);
static void hugsprim_glNormalPointer_1(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    glNormalPointer(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertexPointer_0(HugsStackPtr);
static void hugsprim_glVertexPointer_0(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsPtr arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getPtr();
    glVertexPointer(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"dyn_glPrimitiveRestartIndexNV", 3, hugsprim_v6436_20},
    {"dyn_glUnlockArraysEXT", 2, hugsprim_v6437_19},
    {"dyn_glLockArraysEXT", 4, hugsprim_v6438_18},
    {"dyn_glDrawRangeElementsEXT", 8, hugsprim_v6439_17},
    {"dyn_glMultiDrawElementsEXT", 7, hugsprim_v6440_16},
    {"glDrawElements", 5, hugsprim_glDrawElements_15},
    {"dyn_glMultiDrawArraysEXT", 6, hugsprim_v6441_14},
    {"glDrawArrays", 4, hugsprim_glDrawArrays_13},
    {"arrayElement", 2, hugsprim_glArrayElement_12},
    {"dyn_glClientActiveTextureARB", 3, hugsprim_v6442_11},
    {"glDisableClientState", 2, hugsprim_glDisableClientState_10},
    {"glEnableClientState", 2, hugsprim_glEnableClientState_9},
    {"glInterleavedArrays", 4, hugsprim_glInterleavedArrays_8},
    {"glEdgeFlagPointer", 3, hugsprim_glEdgeFlagPointer_7},
    {"glTexCoordPointer", 5, hugsprim_glTexCoordPointer_6},
    {"dyn_glFogCoordPointerEXT", 5, hugsprim_v6443_5},
    {"glIndexPointer", 4, hugsprim_glIndexPointer_4},
    {"dyn_glSecondaryColorPointerEXT", 6, hugsprim_v6444_3},
    {"glColorPointer", 5, hugsprim_glColorPointer_2},
    {"glNormalPointer", 4, hugsprim_glNormalPointer_1},
    {"glVertexPointer", 5, hugsprim_glVertexPointer_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGVertexArrays
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

