/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsOpenGL.h"

static void hugsprim_hOpenGL_getProcAddress_0(HugsStackPtr);
static void hugsprim_hOpenGL_getProcAddress_0(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    HsFunPtr res1;
    arg1 = hugs->getPtr();
    res1 = hOpenGL_getProcAddress(arg1);
    hugs->putFunPtr(res1);
    hugs->returnIO(hugs_root,1);
}

static struct hugs_primitive hugs_primTable[] = {
    {"hOpenGL_getProcAddress", 2, hugsprim_hOpenGL_getProcAddress_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGExtensions
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

