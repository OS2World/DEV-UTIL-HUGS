/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsOpenGL.h"

static void hugsprim_glIndexubv_159(HugsStackPtr);
static void hugsprim_glIndexubv_159(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glIndexubv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexub_158(HugsStackPtr);
static void hugsprim_glIndexub_158(HugsStackPtr hugs_root)
{
    HsWord8 arg1;
    arg1 = hugs->getWord8();
    glIndexub(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexdv_157(HugsStackPtr);
static void hugsprim_glIndexdv_157(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glIndexdv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexd_156(HugsStackPtr);
static void hugsprim_glIndexd_156(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    arg1 = hugs->getDouble();
    glIndexd(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexfv_155(HugsStackPtr);
static void hugsprim_glIndexfv_155(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glIndexfv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexf_154(HugsStackPtr);
static void hugsprim_glIndexf_154(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    arg1 = hugs->getFloat();
    glIndexf(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexiv_153(HugsStackPtr);
static void hugsprim_glIndexiv_153(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glIndexiv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexi_152(HugsStackPtr);
static void hugsprim_glIndexi_152(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glIndexi(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexsv_151(HugsStackPtr);
static void hugsprim_glIndexsv_151(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glIndexsv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glIndexs_150(HugsStackPtr);
static void hugsprim_glIndexs_150(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    arg1 = hugs->getInt16();
    glIndexs(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5828_149(HugsStackPtr);
static void hugsprim_v5828_149(HugsStackPtr hugs_root)
{
    void (*v5828)(HsPtr arg1);
    HsPtr arg1;
    v5828 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5828(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5829_148(HugsStackPtr);
static void hugsprim_v5829_148(HugsStackPtr hugs_root)
{
    void (*v5829)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    v5829 = (void (*)(HsWord32, HsWord32, HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    v5829(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4uiv_147(HugsStackPtr);
static void hugsprim_glColor4uiv_147(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4uiv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3uiv_146(HugsStackPtr);
static void hugsprim_glColor3uiv_146(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3uiv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4ui_145(HugsStackPtr);
static void hugsprim_glColor4ui_145(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    glColor4ui(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3ui_144(HugsStackPtr);
static void hugsprim_glColor3ui_144(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    glColor3ui(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5830_143(HugsStackPtr);
static void hugsprim_v5830_143(HugsStackPtr hugs_root)
{
    void (*v5830)(HsPtr arg1);
    HsPtr arg1;
    v5830 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5830(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5831_142(HugsStackPtr);
static void hugsprim_v5831_142(HugsStackPtr hugs_root)
{
    void (*v5831)(HsWord16 arg1, HsWord16 arg2, HsWord16 arg3);
    HsWord16 arg1;
    HsWord16 arg2;
    HsWord16 arg3;
    v5831 = (void (*)(HsWord16, HsWord16, HsWord16))hugs->getFunPtr();
    arg1 = hugs->getWord16();
    arg2 = hugs->getWord16();
    arg3 = hugs->getWord16();
    v5831(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4usv_141(HugsStackPtr);
static void hugsprim_glColor4usv_141(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4usv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3usv_140(HugsStackPtr);
static void hugsprim_glColor3usv_140(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3usv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4us_139(HugsStackPtr);
static void hugsprim_glColor4us_139(HugsStackPtr hugs_root)
{
    HsWord16 arg1;
    HsWord16 arg2;
    HsWord16 arg3;
    HsWord16 arg4;
    arg1 = hugs->getWord16();
    arg2 = hugs->getWord16();
    arg3 = hugs->getWord16();
    arg4 = hugs->getWord16();
    glColor4us(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3us_138(HugsStackPtr);
static void hugsprim_glColor3us_138(HugsStackPtr hugs_root)
{
    HsWord16 arg1;
    HsWord16 arg2;
    HsWord16 arg3;
    arg1 = hugs->getWord16();
    arg2 = hugs->getWord16();
    arg3 = hugs->getWord16();
    glColor3us(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5832_137(HugsStackPtr);
static void hugsprim_v5832_137(HugsStackPtr hugs_root)
{
    void (*v5832)(HsPtr arg1);
    HsPtr arg1;
    v5832 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5832(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5833_136(HugsStackPtr);
static void hugsprim_v5833_136(HugsStackPtr hugs_root)
{
    void (*v5833)(HsWord8 arg1, HsWord8 arg2, HsWord8 arg3);
    HsWord8 arg1;
    HsWord8 arg2;
    HsWord8 arg3;
    v5833 = (void (*)(HsWord8, HsWord8, HsWord8))hugs->getFunPtr();
    arg1 = hugs->getWord8();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord8();
    v5833(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4ubv_135(HugsStackPtr);
static void hugsprim_glColor4ubv_135(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4ubv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3ubv_134(HugsStackPtr);
static void hugsprim_glColor3ubv_134(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3ubv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4ub_133(HugsStackPtr);
static void hugsprim_glColor4ub_133(HugsStackPtr hugs_root)
{
    HsWord8 arg1;
    HsWord8 arg2;
    HsWord8 arg3;
    HsWord8 arg4;
    arg1 = hugs->getWord8();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord8();
    arg4 = hugs->getWord8();
    glColor4ub(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3ub_132(HugsStackPtr);
static void hugsprim_glColor3ub_132(HugsStackPtr hugs_root)
{
    HsWord8 arg1;
    HsWord8 arg2;
    HsWord8 arg3;
    arg1 = hugs->getWord8();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord8();
    glColor3ub(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5834_131(HugsStackPtr);
static void hugsprim_v5834_131(HugsStackPtr hugs_root)
{
    void (*v5834)(HsPtr arg1);
    HsPtr arg1;
    v5834 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5834(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5835_130(HugsStackPtr);
static void hugsprim_v5835_130(HugsStackPtr hugs_root)
{
    void (*v5835)(HsDouble arg1, HsDouble arg2, HsDouble arg3);
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    v5835 = (void (*)(HsDouble, HsDouble, HsDouble))hugs->getFunPtr();
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    v5835(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4dv_129(HugsStackPtr);
static void hugsprim_glColor4dv_129(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3dv_128(HugsStackPtr);
static void hugsprim_glColor3dv_128(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4d_127(HugsStackPtr);
static void hugsprim_glColor4d_127(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    glColor4d(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3d_126(HugsStackPtr);
static void hugsprim_glColor3d_126(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    glColor3d(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5836_125(HugsStackPtr);
static void hugsprim_v5836_125(HugsStackPtr hugs_root)
{
    void (*v5836)(HsPtr arg1);
    HsPtr arg1;
    v5836 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5836(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5837_124(HugsStackPtr);
static void hugsprim_v5837_124(HugsStackPtr hugs_root)
{
    void (*v5837)(HsFloat arg1, HsFloat arg2, HsFloat arg3);
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    v5837 = (void (*)(HsFloat, HsFloat, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    v5837(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4fv_123(HugsStackPtr);
static void hugsprim_glColor4fv_123(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3fv_122(HugsStackPtr);
static void hugsprim_glColor3fv_122(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4f_121(HugsStackPtr);
static void hugsprim_glColor4f_121(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    glColor4f(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3f_120(HugsStackPtr);
static void hugsprim_glColor3f_120(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    glColor3f(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5838_119(HugsStackPtr);
static void hugsprim_v5838_119(HugsStackPtr hugs_root)
{
    void (*v5838)(HsPtr arg1);
    HsPtr arg1;
    v5838 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5838(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5839_118(HugsStackPtr);
static void hugsprim_v5839_118(HugsStackPtr hugs_root)
{
    void (*v5839)(HsInt32 arg1, HsInt32 arg2, HsInt32 arg3);
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    v5839 = (void (*)(HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    v5839(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4iv_117(HugsStackPtr);
static void hugsprim_glColor4iv_117(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3iv_116(HugsStackPtr);
static void hugsprim_glColor3iv_116(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4i_115(HugsStackPtr);
static void hugsprim_glColor4i_115(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glColor4i(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3i_114(HugsStackPtr);
static void hugsprim_glColor3i_114(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glColor3i(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5840_113(HugsStackPtr);
static void hugsprim_v5840_113(HugsStackPtr hugs_root)
{
    void (*v5840)(HsPtr arg1);
    HsPtr arg1;
    v5840 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5840(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5841_112(HugsStackPtr);
static void hugsprim_v5841_112(HugsStackPtr hugs_root)
{
    void (*v5841)(HsInt16 arg1, HsInt16 arg2, HsInt16 arg3);
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    v5841 = (void (*)(HsInt16, HsInt16, HsInt16))hugs->getFunPtr();
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    v5841(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4sv_111(HugsStackPtr);
static void hugsprim_glColor4sv_111(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3sv_110(HugsStackPtr);
static void hugsprim_glColor3sv_110(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4s_109(HugsStackPtr);
static void hugsprim_glColor4s_109(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    HsInt16 arg4;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    arg4 = hugs->getInt16();
    glColor4s(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3s_108(HugsStackPtr);
static void hugsprim_glColor3s_108(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    glColor3s(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5842_107(HugsStackPtr);
static void hugsprim_v5842_107(HugsStackPtr hugs_root)
{
    void (*v5842)(HsPtr arg1);
    HsPtr arg1;
    v5842 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5842(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5843_106(HugsStackPtr);
static void hugsprim_v5843_106(HugsStackPtr hugs_root)
{
    void (*v5843)(HsInt8 arg1, HsInt8 arg2, HsInt8 arg3);
    HsInt8 arg1;
    HsInt8 arg2;
    HsInt8 arg3;
    v5843 = (void (*)(HsInt8, HsInt8, HsInt8))hugs->getFunPtr();
    arg1 = hugs->getInt8();
    arg2 = hugs->getInt8();
    arg3 = hugs->getInt8();
    v5843(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4bv_105(HugsStackPtr);
static void hugsprim_glColor4bv_105(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor4bv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3bv_104(HugsStackPtr);
static void hugsprim_glColor3bv_104(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glColor3bv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor4b_103(HugsStackPtr);
static void hugsprim_glColor4b_103(HugsStackPtr hugs_root)
{
    HsInt8 arg1;
    HsInt8 arg2;
    HsInt8 arg3;
    HsInt8 arg4;
    arg1 = hugs->getInt8();
    arg2 = hugs->getInt8();
    arg3 = hugs->getInt8();
    arg4 = hugs->getInt8();
    glColor4b(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glColor3b_102(HugsStackPtr);
static void hugsprim_glColor3b_102(HugsStackPtr hugs_root)
{
    HsInt8 arg1;
    HsInt8 arg2;
    HsInt8 arg3;
    arg1 = hugs->getInt8();
    arg2 = hugs->getInt8();
    arg3 = hugs->getInt8();
    glColor3b(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5844_101(HugsStackPtr);
static void hugsprim_v5844_101(HugsStackPtr hugs_root)
{
    void (*v5844)(HsPtr arg1);
    HsPtr arg1;
    v5844 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5844(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5845_100(HugsStackPtr);
static void hugsprim_v5845_100(HugsStackPtr hugs_root)
{
    void (*v5845)(HsDouble arg1);
    HsDouble arg1;
    v5845 = (void (*)(HsDouble))hugs->getFunPtr();
    arg1 = hugs->getDouble();
    v5845(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5846_99(HugsStackPtr);
static void hugsprim_v5846_99(HugsStackPtr hugs_root)
{
    void (*v5846)(HsPtr arg1);
    HsPtr arg1;
    v5846 = (void (*)(HsPtr))hugs->getFunPtr();
    arg1 = hugs->getPtr();
    v5846(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5847_98(HugsStackPtr);
static void hugsprim_v5847_98(HugsStackPtr hugs_root)
{
    void (*v5847)(HsFloat arg1);
    HsFloat arg1;
    v5847 = (void (*)(HsFloat))hugs->getFunPtr();
    arg1 = hugs->getFloat();
    v5847(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3dv_97(HugsStackPtr);
static void hugsprim_glNormal3dv_97(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glNormal3dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3d_96(HugsStackPtr);
static void hugsprim_glNormal3d_96(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    glNormal3d(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3fv_95(HugsStackPtr);
static void hugsprim_glNormal3fv_95(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glNormal3fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3f_94(HugsStackPtr);
static void hugsprim_glNormal3f_94(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    glNormal3f(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3iv_93(HugsStackPtr);
static void hugsprim_glNormal3iv_93(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glNormal3iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3i_92(HugsStackPtr);
static void hugsprim_glNormal3i_92(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glNormal3i(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3sv_91(HugsStackPtr);
static void hugsprim_glNormal3sv_91(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glNormal3sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3s_90(HugsStackPtr);
static void hugsprim_glNormal3s_90(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    glNormal3s(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3bv_89(HugsStackPtr);
static void hugsprim_glNormal3bv_89(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glNormal3bv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glNormal3b_88(HugsStackPtr);
static void hugsprim_glNormal3b_88(HugsStackPtr hugs_root)
{
    HsInt8 arg1;
    HsInt8 arg2;
    HsInt8 arg3;
    arg1 = hugs->getInt8();
    arg2 = hugs->getInt8();
    arg3 = hugs->getInt8();
    glNormal3b(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5848_87(HugsStackPtr);
static void hugsprim_v5848_87(HugsStackPtr hugs_root)
{
    void (*v5848)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5848 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5848(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5849_86(HugsStackPtr);
static void hugsprim_v5849_86(HugsStackPtr hugs_root)
{
    void (*v5849)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5849 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5849(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5850_85(HugsStackPtr);
static void hugsprim_v5850_85(HugsStackPtr hugs_root)
{
    void (*v5850)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5850 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5850(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5851_84(HugsStackPtr);
static void hugsprim_v5851_84(HugsStackPtr hugs_root)
{
    void (*v5851)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5851 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5851(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5852_83(HugsStackPtr);
static void hugsprim_v5852_83(HugsStackPtr hugs_root)
{
    void (*v5852)(HsWord32 arg1, HsDouble arg2, HsDouble arg3, HsDouble arg4, HsDouble arg5);
    HsWord32 arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    HsDouble arg5;
    v5852 = (void (*)(HsWord32, HsDouble, HsDouble, HsDouble, HsDouble))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    arg5 = hugs->getDouble();
    v5852(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5853_82(HugsStackPtr);
static void hugsprim_v5853_82(HugsStackPtr hugs_root)
{
    void (*v5853)(HsWord32 arg1, HsDouble arg2, HsDouble arg3, HsDouble arg4);
    HsWord32 arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    v5853 = (void (*)(HsWord32, HsDouble, HsDouble, HsDouble))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    v5853(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5854_81(HugsStackPtr);
static void hugsprim_v5854_81(HugsStackPtr hugs_root)
{
    void (*v5854)(HsWord32 arg1, HsDouble arg2, HsDouble arg3);
    HsWord32 arg1;
    HsDouble arg2;
    HsDouble arg3;
    v5854 = (void (*)(HsWord32, HsDouble, HsDouble))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    v5854(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5855_80(HugsStackPtr);
static void hugsprim_v5855_80(HugsStackPtr hugs_root)
{
    void (*v5855)(HsWord32 arg1, HsDouble arg2);
    HsWord32 arg1;
    HsDouble arg2;
    v5855 = (void (*)(HsWord32, HsDouble))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getDouble();
    v5855(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4dv_79(HugsStackPtr);
static void hugsprim_glTexCoord4dv_79(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord4dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3dv_78(HugsStackPtr);
static void hugsprim_glTexCoord3dv_78(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord3dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2dv_77(HugsStackPtr);
static void hugsprim_glTexCoord2dv_77(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord2dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1dv_76(HugsStackPtr);
static void hugsprim_glTexCoord1dv_76(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord1dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4d_75(HugsStackPtr);
static void hugsprim_glTexCoord4d_75(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    glTexCoord4d(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3d_74(HugsStackPtr);
static void hugsprim_glTexCoord3d_74(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    glTexCoord3d(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2d_73(HugsStackPtr);
static void hugsprim_glTexCoord2d_73(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    glTexCoord2d(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1d_72(HugsStackPtr);
static void hugsprim_glTexCoord1d_72(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    arg1 = hugs->getDouble();
    glTexCoord1d(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5856_71(HugsStackPtr);
static void hugsprim_v5856_71(HugsStackPtr hugs_root)
{
    void (*v5856)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5856 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5856(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5857_70(HugsStackPtr);
static void hugsprim_v5857_70(HugsStackPtr hugs_root)
{
    void (*v5857)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5857 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5857(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5858_69(HugsStackPtr);
static void hugsprim_v5858_69(HugsStackPtr hugs_root)
{
    void (*v5858)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5858 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5858(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5859_68(HugsStackPtr);
static void hugsprim_v5859_68(HugsStackPtr hugs_root)
{
    void (*v5859)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5859 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5859(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5860_67(HugsStackPtr);
static void hugsprim_v5860_67(HugsStackPtr hugs_root)
{
    void (*v5860)(HsWord32 arg1, HsFloat arg2, HsFloat arg3, HsFloat arg4, HsFloat arg5);
    HsWord32 arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    HsFloat arg5;
    v5860 = (void (*)(HsWord32, HsFloat, HsFloat, HsFloat, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    arg5 = hugs->getFloat();
    v5860(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5861_66(HugsStackPtr);
static void hugsprim_v5861_66(HugsStackPtr hugs_root)
{
    void (*v5861)(HsWord32 arg1, HsFloat arg2, HsFloat arg3, HsFloat arg4);
    HsWord32 arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    v5861 = (void (*)(HsWord32, HsFloat, HsFloat, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    v5861(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5862_65(HugsStackPtr);
static void hugsprim_v5862_65(HugsStackPtr hugs_root)
{
    void (*v5862)(HsWord32 arg1, HsFloat arg2, HsFloat arg3);
    HsWord32 arg1;
    HsFloat arg2;
    HsFloat arg3;
    v5862 = (void (*)(HsWord32, HsFloat, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    v5862(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5863_64(HugsStackPtr);
static void hugsprim_v5863_64(HugsStackPtr hugs_root)
{
    void (*v5863)(HsWord32 arg1, HsFloat arg2);
    HsWord32 arg1;
    HsFloat arg2;
    v5863 = (void (*)(HsWord32, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    v5863(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4fv_63(HugsStackPtr);
static void hugsprim_glTexCoord4fv_63(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord4fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3fv_62(HugsStackPtr);
static void hugsprim_glTexCoord3fv_62(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord3fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2fv_61(HugsStackPtr);
static void hugsprim_glTexCoord2fv_61(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord2fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1fv_60(HugsStackPtr);
static void hugsprim_glTexCoord1fv_60(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord1fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4f_59(HugsStackPtr);
static void hugsprim_glTexCoord4f_59(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    glTexCoord4f(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3f_58(HugsStackPtr);
static void hugsprim_glTexCoord3f_58(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    glTexCoord3f(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2f_57(HugsStackPtr);
static void hugsprim_glTexCoord2f_57(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    glTexCoord2f(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1f_56(HugsStackPtr);
static void hugsprim_glTexCoord1f_56(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    arg1 = hugs->getFloat();
    glTexCoord1f(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5864_55(HugsStackPtr);
static void hugsprim_v5864_55(HugsStackPtr hugs_root)
{
    void (*v5864)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5864 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5864(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5865_54(HugsStackPtr);
static void hugsprim_v5865_54(HugsStackPtr hugs_root)
{
    void (*v5865)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5865 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5865(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5866_53(HugsStackPtr);
static void hugsprim_v5866_53(HugsStackPtr hugs_root)
{
    void (*v5866)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5866 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5866(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5867_52(HugsStackPtr);
static void hugsprim_v5867_52(HugsStackPtr hugs_root)
{
    void (*v5867)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5867 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5867(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5868_51(HugsStackPtr);
static void hugsprim_v5868_51(HugsStackPtr hugs_root)
{
    void (*v5868)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4, HsInt32 arg5);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsInt32 arg5;
    v5868 = (void (*)(HsWord32, HsInt32, HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getInt32();
    v5868(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5869_50(HugsStackPtr);
static void hugsprim_v5869_50(HugsStackPtr hugs_root)
{
    void (*v5869)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    v5869 = (void (*)(HsWord32, HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    v5869(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5870_49(HugsStackPtr);
static void hugsprim_v5870_49(HugsStackPtr hugs_root)
{
    void (*v5870)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    v5870 = (void (*)(HsWord32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    v5870(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5871_48(HugsStackPtr);
static void hugsprim_v5871_48(HugsStackPtr hugs_root)
{
    void (*v5871)(HsWord32 arg1, HsInt32 arg2);
    HsWord32 arg1;
    HsInt32 arg2;
    v5871 = (void (*)(HsWord32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    v5871(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4iv_47(HugsStackPtr);
static void hugsprim_glTexCoord4iv_47(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord4iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3iv_46(HugsStackPtr);
static void hugsprim_glTexCoord3iv_46(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord3iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2iv_45(HugsStackPtr);
static void hugsprim_glTexCoord2iv_45(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord2iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1iv_44(HugsStackPtr);
static void hugsprim_glTexCoord1iv_44(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord1iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4i_43(HugsStackPtr);
static void hugsprim_glTexCoord4i_43(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glTexCoord4i(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3i_42(HugsStackPtr);
static void hugsprim_glTexCoord3i_42(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glTexCoord3i(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2i_41(HugsStackPtr);
static void hugsprim_glTexCoord2i_41(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glTexCoord2i(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1i_40(HugsStackPtr);
static void hugsprim_glTexCoord1i_40(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    arg1 = hugs->getInt32();
    glTexCoord1i(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5872_39(HugsStackPtr);
static void hugsprim_v5872_39(HugsStackPtr hugs_root)
{
    void (*v5872)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5872 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5872(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5873_38(HugsStackPtr);
static void hugsprim_v5873_38(HugsStackPtr hugs_root)
{
    void (*v5873)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5873 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5873(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5874_37(HugsStackPtr);
static void hugsprim_v5874_37(HugsStackPtr hugs_root)
{
    void (*v5874)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5874 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5874(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5875_36(HugsStackPtr);
static void hugsprim_v5875_36(HugsStackPtr hugs_root)
{
    void (*v5875)(HsWord32 arg1, HsPtr arg2);
    HsWord32 arg1;
    HsPtr arg2;
    v5875 = (void (*)(HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    v5875(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5876_35(HugsStackPtr);
static void hugsprim_v5876_35(HugsStackPtr hugs_root)
{
    void (*v5876)(HsWord32 arg1, HsInt16 arg2, HsInt16 arg3, HsInt16 arg4, HsInt16 arg5);
    HsWord32 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    HsInt16 arg4;
    HsInt16 arg5;
    v5876 = (void (*)(HsWord32, HsInt16, HsInt16, HsInt16, HsInt16))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    arg4 = hugs->getInt16();
    arg5 = hugs->getInt16();
    v5876(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5877_34(HugsStackPtr);
static void hugsprim_v5877_34(HugsStackPtr hugs_root)
{
    void (*v5877)(HsWord32 arg1, HsInt16 arg2, HsInt16 arg3, HsInt16 arg4);
    HsWord32 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    HsInt16 arg4;
    v5877 = (void (*)(HsWord32, HsInt16, HsInt16, HsInt16))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    arg4 = hugs->getInt16();
    v5877(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5878_33(HugsStackPtr);
static void hugsprim_v5878_33(HugsStackPtr hugs_root)
{
    void (*v5878)(HsWord32 arg1, HsInt16 arg2, HsInt16 arg3);
    HsWord32 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    v5878 = (void (*)(HsWord32, HsInt16, HsInt16))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    v5878(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v5879_32(HugsStackPtr);
static void hugsprim_v5879_32(HugsStackPtr hugs_root)
{
    void (*v5879)(HsWord32 arg1, HsInt16 arg2);
    HsWord32 arg1;
    HsInt16 arg2;
    v5879 = (void (*)(HsWord32, HsInt16))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt16();
    v5879(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4sv_31(HugsStackPtr);
static void hugsprim_glTexCoord4sv_31(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord4sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3sv_30(HugsStackPtr);
static void hugsprim_glTexCoord3sv_30(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord3sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2sv_29(HugsStackPtr);
static void hugsprim_glTexCoord2sv_29(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord2sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1sv_28(HugsStackPtr);
static void hugsprim_glTexCoord1sv_28(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glTexCoord1sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord4s_27(HugsStackPtr);
static void hugsprim_glTexCoord4s_27(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    HsInt16 arg4;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    arg4 = hugs->getInt16();
    glTexCoord4s(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord3s_26(HugsStackPtr);
static void hugsprim_glTexCoord3s_26(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    glTexCoord3s(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord2s_25(HugsStackPtr);
static void hugsprim_glTexCoord2s_25(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    glTexCoord2s(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glTexCoord1s_24(HugsStackPtr);
static void hugsprim_glTexCoord1s_24(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    arg1 = hugs->getInt16();
    glTexCoord1s(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4dv_23(HugsStackPtr);
static void hugsprim_glVertex4dv_23(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex4dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3dv_22(HugsStackPtr);
static void hugsprim_glVertex3dv_22(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex3dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2dv_21(HugsStackPtr);
static void hugsprim_glVertex2dv_21(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex2dv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4d_20(HugsStackPtr);
static void hugsprim_glVertex4d_20(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    HsDouble arg4;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    arg4 = hugs->getDouble();
    glVertex4d(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3d_19(HugsStackPtr);
static void hugsprim_glVertex3d_19(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    HsDouble arg3;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    arg3 = hugs->getDouble();
    glVertex3d(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2d_18(HugsStackPtr);
static void hugsprim_glVertex2d_18(HugsStackPtr hugs_root)
{
    HsDouble arg1;
    HsDouble arg2;
    arg1 = hugs->getDouble();
    arg2 = hugs->getDouble();
    glVertex2d(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4fv_17(HugsStackPtr);
static void hugsprim_glVertex4fv_17(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex4fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3fv_16(HugsStackPtr);
static void hugsprim_glVertex3fv_16(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex3fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2fv_15(HugsStackPtr);
static void hugsprim_glVertex2fv_15(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex2fv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4f_14(HugsStackPtr);
static void hugsprim_glVertex4f_14(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    HsFloat arg4;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    arg4 = hugs->getFloat();
    glVertex4f(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3f_13(HugsStackPtr);
static void hugsprim_glVertex3f_13(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    HsFloat arg3;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    arg3 = hugs->getFloat();
    glVertex3f(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2f_12(HugsStackPtr);
static void hugsprim_glVertex2f_12(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    glVertex2f(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4iv_11(HugsStackPtr);
static void hugsprim_glVertex4iv_11(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex4iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3iv_10(HugsStackPtr);
static void hugsprim_glVertex3iv_10(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex3iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2iv_9(HugsStackPtr);
static void hugsprim_glVertex2iv_9(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex2iv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4i_8(HugsStackPtr);
static void hugsprim_glVertex4i_8(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    glVertex4i(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3i_7(HugsStackPtr);
static void hugsprim_glVertex3i_7(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    glVertex3i(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2i_6(HugsStackPtr);
static void hugsprim_glVertex2i_6(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    glVertex2i(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4sv_5(HugsStackPtr);
static void hugsprim_glVertex4sv_5(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex4sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3sv_4(HugsStackPtr);
static void hugsprim_glVertex3sv_4(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex3sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2sv_3(HugsStackPtr);
static void hugsprim_glVertex2sv_3(HugsStackPtr hugs_root)
{
    HsPtr arg1;
    arg1 = hugs->getPtr();
    glVertex2sv(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex4s_2(HugsStackPtr);
static void hugsprim_glVertex4s_2(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    HsInt16 arg4;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    arg4 = hugs->getInt16();
    glVertex4s(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex3s_1(HugsStackPtr);
static void hugsprim_glVertex3s_1(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    HsInt16 arg3;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    arg3 = hugs->getInt16();
    glVertex3s(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glVertex2s_0(HugsStackPtr);
static void hugsprim_glVertex2s_0(HugsStackPtr hugs_root)
{
    HsInt16 arg1;
    HsInt16 arg2;
    arg1 = hugs->getInt16();
    arg2 = hugs->getInt16();
    glVertex2s(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glIndexubv", 2, hugsprim_glIndexubv_159},
    {"glIndexub", 2, hugsprim_glIndexub_158},
    {"glIndexdv", 2, hugsprim_glIndexdv_157},
    {"glIndexd", 2, hugsprim_glIndexd_156},
    {"glIndexfv", 2, hugsprim_glIndexfv_155},
    {"glIndexf", 2, hugsprim_glIndexf_154},
    {"glIndexiv", 2, hugsprim_glIndexiv_153},
    {"glIndexi", 2, hugsprim_glIndexi_152},
    {"glIndexsv", 2, hugsprim_glIndexsv_151},
    {"glIndexs", 2, hugsprim_glIndexs_150},
    {"dyn_glSecondaryColor3uivEXT", 3, hugsprim_v5828_149},
    {"dyn_glSecondaryColor3uiEXT", 5, hugsprim_v5829_148},
    {"glColor4uiv", 2, hugsprim_glColor4uiv_147},
    {"glColor3uiv", 2, hugsprim_glColor3uiv_146},
    {"glColor4ui", 5, hugsprim_glColor4ui_145},
    {"glColor3ui", 4, hugsprim_glColor3ui_144},
    {"dyn_glSecondaryColor3usvEXT", 3, hugsprim_v5830_143},
    {"dyn_glSecondaryColor3usEXT", 5, hugsprim_v5831_142},
    {"glColor4usv", 2, hugsprim_glColor4usv_141},
    {"glColor3usv", 2, hugsprim_glColor3usv_140},
    {"glColor4us", 5, hugsprim_glColor4us_139},
    {"glColor3us", 4, hugsprim_glColor3us_138},
    {"dyn_glSecondaryColor3ubvEXT", 3, hugsprim_v5832_137},
    {"dyn_glSecondaryColor3ubEXT", 5, hugsprim_v5833_136},
    {"glColor4ubv", 2, hugsprim_glColor4ubv_135},
    {"glColor3ubv", 2, hugsprim_glColor3ubv_134},
    {"glColor4ub", 5, hugsprim_glColor4ub_133},
    {"glColor3ub", 4, hugsprim_glColor3ub_132},
    {"dyn_glSecondaryColor3dvEXT", 3, hugsprim_v5834_131},
    {"dyn_glSecondaryColor3dEXT", 5, hugsprim_v5835_130},
    {"glColor4dv", 2, hugsprim_glColor4dv_129},
    {"glColor3dv", 2, hugsprim_glColor3dv_128},
    {"glColor4d", 5, hugsprim_glColor4d_127},
    {"glColor3d", 4, hugsprim_glColor3d_126},
    {"dyn_glSecondaryColor3fvEXT", 3, hugsprim_v5836_125},
    {"dyn_glSecondaryColor3fEXT", 5, hugsprim_v5837_124},
    {"glColor4fv", 2, hugsprim_glColor4fv_123},
    {"glColor3fv", 2, hugsprim_glColor3fv_122},
    {"glColor4f", 5, hugsprim_glColor4f_121},
    {"glColor3f", 4, hugsprim_glColor3f_120},
    {"dyn_glSecondaryColor3ivEXT", 3, hugsprim_v5838_119},
    {"dyn_glSecondaryColor3iEXT", 5, hugsprim_v5839_118},
    {"glColor4iv", 2, hugsprim_glColor4iv_117},
    {"glColor3iv", 2, hugsprim_glColor3iv_116},
    {"glColor4i", 5, hugsprim_glColor4i_115},
    {"glColor3i", 4, hugsprim_glColor3i_114},
    {"dyn_glSecondaryColor3svEXT", 3, hugsprim_v5840_113},
    {"dyn_glSecondaryColor3sEXT", 5, hugsprim_v5841_112},
    {"glColor4sv", 2, hugsprim_glColor4sv_111},
    {"glColor3sv", 2, hugsprim_glColor3sv_110},
    {"glColor4s", 5, hugsprim_glColor4s_109},
    {"glColor3s", 4, hugsprim_glColor3s_108},
    {"dyn_glSecondaryColor3bvEXT", 3, hugsprim_v5842_107},
    {"dyn_glSecondaryColor3bEXT", 5, hugsprim_v5843_106},
    {"glColor4bv", 2, hugsprim_glColor4bv_105},
    {"glColor3bv", 2, hugsprim_glColor3bv_104},
    {"glColor4b", 5, hugsprim_glColor4b_103},
    {"glColor3b", 4, hugsprim_glColor3b_102},
    {"dyn_glFogCoorddvEXT", 3, hugsprim_v5844_101},
    {"dyn_glFogCoorddEXT", 3, hugsprim_v5845_100},
    {"dyn_glFogCoordfvEXT", 3, hugsprim_v5846_99},
    {"dyn_glFogCoordfEXT", 3, hugsprim_v5847_98},
    {"glNormal3dv", 2, hugsprim_glNormal3dv_97},
    {"glNormal3d", 4, hugsprim_glNormal3d_96},
    {"glNormal3fv", 2, hugsprim_glNormal3fv_95},
    {"glNormal3f", 4, hugsprim_glNormal3f_94},
    {"glNormal3iv", 2, hugsprim_glNormal3iv_93},
    {"glNormal3i", 4, hugsprim_glNormal3i_92},
    {"glNormal3sv", 2, hugsprim_glNormal3sv_91},
    {"glNormal3s", 4, hugsprim_glNormal3s_90},
    {"glNormal3bv", 2, hugsprim_glNormal3bv_89},
    {"glNormal3b", 4, hugsprim_glNormal3b_88},
    {"dyn_glMultiTexCoord4dvARB", 4, hugsprim_v5848_87},
    {"dyn_glMultiTexCoord3dvARB", 4, hugsprim_v5849_86},
    {"dyn_glMultiTexCoord2dvARB", 4, hugsprim_v5850_85},
    {"dyn_glMultiTexCoord1dvARB", 4, hugsprim_v5851_84},
    {"dyn_glMultiTexCoord4dARB", 7, hugsprim_v5852_83},
    {"dyn_glMultiTexCoord3dARB", 6, hugsprim_v5853_82},
    {"dyn_glMultiTexCoord2dARB", 5, hugsprim_v5854_81},
    {"dyn_glMultiTexCoord1dARB", 4, hugsprim_v5855_80},
    {"glTexCoord4dv", 2, hugsprim_glTexCoord4dv_79},
    {"glTexCoord3dv", 2, hugsprim_glTexCoord3dv_78},
    {"glTexCoord2dv", 2, hugsprim_glTexCoord2dv_77},
    {"glTexCoord1dv", 2, hugsprim_glTexCoord1dv_76},
    {"glTexCoord4d", 5, hugsprim_glTexCoord4d_75},
    {"glTexCoord3d", 4, hugsprim_glTexCoord3d_74},
    {"glTexCoord2d", 3, hugsprim_glTexCoord2d_73},
    {"glTexCoord1d", 2, hugsprim_glTexCoord1d_72},
    {"dyn_glMultiTexCoord4fvARB", 4, hugsprim_v5856_71},
    {"dyn_glMultiTexCoord3fvARB", 4, hugsprim_v5857_70},
    {"dyn_glMultiTexCoord2fvARB", 4, hugsprim_v5858_69},
    {"dyn_glMultiTexCoord1fvARB", 4, hugsprim_v5859_68},
    {"dyn_glMultiTexCoord4fARB", 7, hugsprim_v5860_67},
    {"dyn_glMultiTexCoord3fARB", 6, hugsprim_v5861_66},
    {"dyn_glMultiTexCoord2fARB", 5, hugsprim_v5862_65},
    {"dyn_glMultiTexCoord1fARB", 4, hugsprim_v5863_64},
    {"glTexCoord4fv", 2, hugsprim_glTexCoord4fv_63},
    {"glTexCoord3fv", 2, hugsprim_glTexCoord3fv_62},
    {"glTexCoord2fv", 2, hugsprim_glTexCoord2fv_61},
    {"glTexCoord1fv", 2, hugsprim_glTexCoord1fv_60},
    {"glTexCoord4f", 5, hugsprim_glTexCoord4f_59},
    {"glTexCoord3f", 4, hugsprim_glTexCoord3f_58},
    {"glTexCoord2f", 3, hugsprim_glTexCoord2f_57},
    {"glTexCoord1f", 2, hugsprim_glTexCoord1f_56},
    {"dyn_glMultiTexCoord4ivARB", 4, hugsprim_v5864_55},
    {"dyn_glMultiTexCoord3ivARB", 4, hugsprim_v5865_54},
    {"dyn_glMultiTexCoord2ivARB", 4, hugsprim_v5866_53},
    {"dyn_glMultiTexCoord1ivARB", 4, hugsprim_v5867_52},
    {"dyn_glMultiTexCoord4iARB", 7, hugsprim_v5868_51},
    {"dyn_glMultiTexCoord3iARB", 6, hugsprim_v5869_50},
    {"dyn_glMultiTexCoord2iARB", 5, hugsprim_v5870_49},
    {"dyn_glMultiTexCoord1iARB", 4, hugsprim_v5871_48},
    {"glTexCoord4iv", 2, hugsprim_glTexCoord4iv_47},
    {"glTexCoord3iv", 2, hugsprim_glTexCoord3iv_46},
    {"glTexCoord2iv", 2, hugsprim_glTexCoord2iv_45},
    {"glTexCoord1iv", 2, hugsprim_glTexCoord1iv_44},
    {"glTexCoord4i", 5, hugsprim_glTexCoord4i_43},
    {"glTexCoord3i", 4, hugsprim_glTexCoord3i_42},
    {"glTexCoord2i", 3, hugsprim_glTexCoord2i_41},
    {"glTexCoord1i", 2, hugsprim_glTexCoord1i_40},
    {"dyn_glMultiTexCoord4svARB", 4, hugsprim_v5872_39},
    {"dyn_glMultiTexCoord3svARB", 4, hugsprim_v5873_38},
    {"dyn_glMultiTexCoord2svARB", 4, hugsprim_v5874_37},
    {"dyn_glMultiTexCoord1svARB", 4, hugsprim_v5875_36},
    {"dyn_glMultiTexCoord4sARB", 7, hugsprim_v5876_35},
    {"dyn_glMultiTexCoord3sARB", 6, hugsprim_v5877_34},
    {"dyn_glMultiTexCoord2sARB", 5, hugsprim_v5878_33},
    {"dyn_glMultiTexCoord1sARB", 4, hugsprim_v5879_32},
    {"glTexCoord4sv", 2, hugsprim_glTexCoord4sv_31},
    {"glTexCoord3sv", 2, hugsprim_glTexCoord3sv_30},
    {"glTexCoord2sv", 2, hugsprim_glTexCoord2sv_29},
    {"glTexCoord1sv", 2, hugsprim_glTexCoord1sv_28},
    {"glTexCoord4s", 5, hugsprim_glTexCoord4s_27},
    {"glTexCoord3s", 4, hugsprim_glTexCoord3s_26},
    {"glTexCoord2s", 3, hugsprim_glTexCoord2s_25},
    {"glTexCoord1s", 2, hugsprim_glTexCoord1s_24},
    {"glVertex4dv", 2, hugsprim_glVertex4dv_23},
    {"glVertex3dv", 2, hugsprim_glVertex3dv_22},
    {"glVertex2dv", 2, hugsprim_glVertex2dv_21},
    {"glVertex4d", 5, hugsprim_glVertex4d_20},
    {"glVertex3d", 4, hugsprim_glVertex3d_19},
    {"glVertex2d", 3, hugsprim_glVertex2d_18},
    {"glVertex4fv", 2, hugsprim_glVertex4fv_17},
    {"glVertex3fv", 2, hugsprim_glVertex3fv_16},
    {"glVertex2fv", 2, hugsprim_glVertex2fv_15},
    {"glVertex4f", 5, hugsprim_glVertex4f_14},
    {"glVertex3f", 4, hugsprim_glVertex3f_13},
    {"glVertex2f", 3, hugsprim_glVertex2f_12},
    {"glVertex4iv", 2, hugsprim_glVertex4iv_11},
    {"glVertex3iv", 2, hugsprim_glVertex3iv_10},
    {"glVertex2iv", 2, hugsprim_glVertex2iv_9},
    {"glVertex4i", 5, hugsprim_glVertex4i_8},
    {"glVertex3i", 4, hugsprim_glVertex3i_7},
    {"glVertex2i", 3, hugsprim_glVertex2i_6},
    {"glVertex4sv", 2, hugsprim_glVertex4sv_5},
    {"glVertex3sv", 2, hugsprim_glVertex3sv_4},
    {"glVertex2sv", 2, hugsprim_glVertex2sv_3},
    {"glVertex4s", 5, hugsprim_glVertex4s_2},
    {"glVertex3s", 4, hugsprim_glVertex3s_1},
    {"glVertex2s", 3, hugsprim_glVertex2s_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGVertexSpec
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

