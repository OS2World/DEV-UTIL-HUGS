/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsGLUT.h"

static void hugsprim_glutWireTeapot_17(HugsStackPtr);
static void hugsprim_glutWireTeapot_17(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    arg1 = hugs->getDouble();
    glutWireTeapot(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidTeapot_16(HugsStackPtr);
static void hugsprim_glutSolidTeapot_16(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    arg1 = hugs->getDouble();
    glutSolidTeapot(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireTorus_15(HugsStackPtr);
static void hugsprim_glutWireTorus_15(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glutWireTorus(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidTorus_14(HugsStackPtr);
static void hugsprim_glutSolidTorus_14(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glutSolidTorus(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireCone_13(HugsStackPtr);
static void hugsprim_glutWireCone_13(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glutWireCone(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidCone_12(HugsStackPtr);
static void hugsprim_glutSolidCone_12(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glutSolidCone(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireSphere_11(HugsStackPtr);
static void hugsprim_glutWireSphere_11(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glutWireSphere(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidSphere_10(HugsStackPtr);
static void hugsprim_glutSolidSphere_10(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glutSolidSphere(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidTetrahedron_9(HugsStackPtr);
static void hugsprim_glutSolidTetrahedron_9(HugsStackPtr hugs_root)
{
    glutSolidTetrahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireTetrahedron_8(HugsStackPtr);
static void hugsprim_glutWireTetrahedron_8(HugsStackPtr hugs_root)
{
    glutWireTetrahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireOctahedron_7(HugsStackPtr);
static void hugsprim_glutWireOctahedron_7(HugsStackPtr hugs_root)
{
    glutWireOctahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidOctahedron_6(HugsStackPtr);
static void hugsprim_glutSolidOctahedron_6(HugsStackPtr hugs_root)
{
    glutSolidOctahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidIcosahedron_5(HugsStackPtr);
static void hugsprim_glutSolidIcosahedron_5(HugsStackPtr hugs_root)
{
    glutSolidIcosahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireIcosahedron_4(HugsStackPtr);
static void hugsprim_glutWireIcosahedron_4(HugsStackPtr hugs_root)
{
    glutWireIcosahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireDodecahedron_3(HugsStackPtr);
static void hugsprim_glutWireDodecahedron_3(HugsStackPtr hugs_root)
{
    glutWireDodecahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidDodecahedron_2(HugsStackPtr);
static void hugsprim_glutSolidDodecahedron_2(HugsStackPtr hugs_root)
{
    glutSolidDodecahedron();
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutWireCube_1(HugsStackPtr);
static void hugsprim_glutWireCube_1(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    arg1 = hugs->getDouble();
    glutWireCube(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glutSolidCube_0(HugsStackPtr);
static void hugsprim_glutSolidCube_0(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    arg1 = hugs->getDouble();
    glutSolidCube(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"wireTeapot", 2, hugsprim_glutWireTeapot_17},
    {"solidTeapot", 2, hugsprim_glutSolidTeapot_16},
    {"wireTorus", 5, hugsprim_glutWireTorus_15},
    {"solidTorus", 5, hugsprim_glutSolidTorus_14},
    {"wireCone", 5, hugsprim_glutWireCone_13},
    {"solidCone", 5, hugsprim_glutSolidCone_12},
    {"wireSphere", 4, hugsprim_glutWireSphere_11},
    {"solidSphere", 4, hugsprim_glutSolidSphere_10},
    {"solidTetrahedron", 1, hugsprim_glutSolidTetrahedron_9},
    {"wireTetrahedron", 1, hugsprim_glutWireTetrahedron_8},
    {"wireOctahedron", 1, hugsprim_glutWireOctahedron_7},
    {"solidOctahedron", 1, hugsprim_glutSolidOctahedron_6},
    {"solidIcosahedron", 1, hugsprim_glutSolidIcosahedron_5},
    {"wireIcosahedron", 1, hugsprim_glutWireIcosahedron_4},
    {"wireDodecahedron", 1, hugsprim_glutWireDodecahedron_3},
    {"solidDodecahedron", 1, hugsprim_glutSolidDodecahedron_2},
    {"wireCube", 2, hugsprim_glutWireCube_1},
    {"solidCube", 2, hugsprim_glutSolidCube_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGUGObjects
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

