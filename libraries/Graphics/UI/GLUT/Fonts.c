/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutStrokeLength_5(HugsStackPtr);
static void hugsprim_glutStrokeLength_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsInt32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = glutStrokeLength(arg1, arg2);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutBitmapLength_4(HugsStackPtr);
static void hugsprim_glutBitmapLength_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsPtr arg2;
    HsInt32 res1;
    arg1 = hugs->getPtr();
    arg2 = hugs->getPtr();
    res1 = glutBitmapLength(arg1, arg2);
    hugs->putInt32(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_glutStrokeCharacter_3(HugsStackPtr);
static void hugsprim_glutStrokeCharacter_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsInt32 arg2;
    arg1 = hugs->getPtr();
    arg2 = hugs->getInt32();
    glutStrokeCharacter(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutBitmapCharacter_2(HugsStackPtr);
static void hugsprim_glutBitmapCharacter_2(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsInt32 arg2;
    arg1 = hugs->getPtr();
    arg2 = hugs->getInt32();
    glutBitmapCharacter(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_hOpenGL_marshalStrokeFont_1(HugsStackPtr);
static void hugsprim_hOpenGL_marshalStrokeFont_1(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsPtr res1;
    arg1 = hugs->getInt32();
    res1 = hOpenGL_marshalStrokeFont(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

static void hugsprim_hOpenGL_marshalBitmapFont_0(HugsStackPtr);
static void hugsprim_hOpenGL_marshalBitmapFont_0(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsPtr res1;
    arg1 = hugs->getInt32();
    res1 = hOpenGL_marshalBitmapFont(arg1);
    hugs->putPtr(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glutStrokeLength", 3, hugsprim_glutStrokeLength_5},
    {"glutBitmapLength", 3, hugsprim_glutBitmapLength_4},
    {"glutStrokeCharacter", 3, hugsprim_glutStrokeCharacter_3},
    {"glutBitmapCharacter", 3, hugsprim_glutBitmapCharacter_2},
    {"hOpenGL_marshalStrokeFont", 2, hugsprim_hOpenGL_marshalStrokeFont_1},
    {"hOpenGL_marshalBitmapFont", 2, hugsprim_hOpenGL_marshalBitmapFont_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGFonts
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

