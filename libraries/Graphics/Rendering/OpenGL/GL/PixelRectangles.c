/* Machine generated file, do not modify */
#include "HsFFI.h"
static HugsAPI5 *hugs = 0;
#include "HsOpenGL.h"

static void hugsprim_glPixelZoom_39(HugsStackPtr);
static void hugsprim_glPixelZoom_39(HugsStackPtr hugs_root)
{
    HsFloat arg1;
    HsFloat arg2;
    arg1 = hugs->getFloat();
    arg2 = hugs->getFloat();
    glPixelZoom(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glDrawPixels_38(HugsStackPtr);
static void hugsprim_glDrawPixels_38(HugsStackPtr hugs_root)
{
    HsInt32 arg1;
    HsInt32 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    arg1 = hugs->getInt32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    glDrawPixels(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6801_37(HugsStackPtr);
static void hugsprim_v6801_37(HugsStackPtr hugs_root)
{
    void (*v6801)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6801 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6801(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6802_36(HugsStackPtr);
static void hugsprim_v6802_36(HugsStackPtr hugs_root)
{
    void (*v6802)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6802 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6802(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6803_35(HugsStackPtr);
static void hugsprim_v6803_35(HugsStackPtr hugs_root)
{
    void (*v6803)(HsWord32 arg1, HsWord8 arg2, HsWord32 arg3, HsWord32 arg4, HsPtr arg5);
    HsWord32 arg1;
    HsWord8 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    v6803 = (void (*)(HsWord32, HsWord8, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    v6803(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6804_34(HugsStackPtr);
static void hugsprim_v6804_34(HugsStackPtr hugs_root)
{
    void (*v6804)(HsWord32 arg1);
    HsWord32 arg1;
    v6804 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v6804(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6805_33(HugsStackPtr);
static void hugsprim_v6805_33(HugsStackPtr hugs_root)
{
    void (*v6805)(HsWord32 arg1, HsWord32 arg2, HsWord8 arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord8 arg3;
    v6805 = (void (*)(HsWord32, HsWord32, HsWord8))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord8();
    v6805(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6806_32(HugsStackPtr);
static void hugsprim_v6806_32(HugsStackPtr hugs_root)
{
    void (*v6806)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6806 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6806(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6807_31(HugsStackPtr);
static void hugsprim_v6807_31(HugsStackPtr hugs_root)
{
    void (*v6807)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6807 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6807(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6808_30(HugsStackPtr);
static void hugsprim_v6808_30(HugsStackPtr hugs_root)
{
    void (*v6808)(HsWord32 arg1, HsWord8 arg2, HsWord32 arg3, HsWord32 arg4, HsPtr arg5);
    HsWord32 arg1;
    HsWord8 arg2;
    HsWord32 arg3;
    HsWord32 arg4;
    HsPtr arg5;
    v6808 = (void (*)(HsWord32, HsWord8, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord8();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getPtr();
    v6808(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6809_29(HugsStackPtr);
static void hugsprim_v6809_29(HugsStackPtr hugs_root)
{
    void (*v6809)(HsWord32 arg1);
    HsWord32 arg1;
    v6809 = (void (*)(HsWord32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    v6809(arg1);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6810_28(HugsStackPtr);
static void hugsprim_v6810_28(HugsStackPtr hugs_root)
{
    void (*v6810)(HsWord32 arg1, HsInt32 arg2, HsWord32 arg3, HsWord8 arg4);
    HsWord32 arg1;
    HsInt32 arg2;
    HsWord32 arg3;
    HsWord8 arg4;
    v6810 = (void (*)(HsWord32, HsInt32, HsWord32, HsWord8))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getWord8();
    v6810(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6811_27(HugsStackPtr);
static void hugsprim_v6811_27(HugsStackPtr hugs_root)
{
    void (*v6811)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3, HsPtr arg4, HsPtr arg5, HsPtr arg6);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr arg4;
    HsPtr arg5;
    HsPtr arg6;
    v6811 = (void (*)(HsWord32, HsWord32, HsWord32, HsPtr, HsPtr, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    arg5 = hugs->getPtr();
    arg6 = hugs->getPtr();
    v6811(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6812_26(HugsStackPtr);
static void hugsprim_v6812_26(HugsStackPtr hugs_root)
{
    void (*v6812)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsInt32 arg4, HsWord32 arg5, HsWord32 arg6, HsPtr arg7, HsPtr arg8);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsWord32 arg5;
    HsWord32 arg6;
    HsPtr arg7;
    HsPtr arg8;
    v6812 = (void (*)(HsWord32, HsWord32, HsInt32, HsInt32, HsWord32, HsWord32, HsPtr, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getWord32();
    arg7 = hugs->getPtr();
    arg8 = hugs->getPtr();
    v6812(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6813_25(HugsStackPtr);
static void hugsprim_v6813_25(HugsStackPtr hugs_root)
{
    void (*v6813)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6813 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6813(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6814_24(HugsStackPtr);
static void hugsprim_v6814_24(HugsStackPtr hugs_root)
{
    void (*v6814)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6814 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6814(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6815_23(HugsStackPtr);
static void hugsprim_v6815_23(HugsStackPtr hugs_root)
{
    void (*v6815)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3, HsPtr arg4);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr arg4;
    v6815 = (void (*)(HsWord32, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    v6815(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6816_22(HugsStackPtr);
static void hugsprim_v6816_22(HugsStackPtr hugs_root)
{
    void (*v6816)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsInt32 arg4, HsInt32 arg5, HsInt32 arg6);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsInt32 arg5;
    HsInt32 arg6;
    v6816 = (void (*)(HsWord32, HsWord32, HsInt32, HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getInt32();
    arg6 = hugs->getInt32();
    v6816(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6817_21(HugsStackPtr);
static void hugsprim_v6817_21(HugsStackPtr hugs_root)
{
    void (*v6817)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsInt32 arg4, HsInt32 arg5);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsInt32 arg5;
    v6817 = (void (*)(HsWord32, HsWord32, HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getInt32();
    v6817(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6818_20(HugsStackPtr);
static void hugsprim_v6818_20(HugsStackPtr hugs_root)
{
    void (*v6818)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6818 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6818(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6819_19(HugsStackPtr);
static void hugsprim_v6819_19(HugsStackPtr hugs_root)
{
    void (*v6819)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    v6819 = (void (*)(HsWord32, HsWord32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    v6819(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6820_18(HugsStackPtr);
static void hugsprim_v6820_18(HugsStackPtr hugs_root)
{
    void (*v6820)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6820 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6820(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6821_17(HugsStackPtr);
static void hugsprim_v6821_17(HugsStackPtr hugs_root)
{
    void (*v6821)(HsWord32 arg1, HsWord32 arg2, HsFloat arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsFloat arg3;
    v6821 = (void (*)(HsWord32, HsWord32, HsFloat))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getFloat();
    v6821(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6822_16(HugsStackPtr);
static void hugsprim_v6822_16(HugsStackPtr hugs_root)
{
    void (*v6822)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsInt32 arg4, HsWord32 arg5, HsWord32 arg6, HsPtr arg7);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsWord32 arg5;
    HsWord32 arg6;
    HsPtr arg7;
    v6822 = (void (*)(HsWord32, HsWord32, HsInt32, HsInt32, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getWord32();
    arg7 = hugs->getPtr();
    v6822(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6823_15(HugsStackPtr);
static void hugsprim_v6823_15(HugsStackPtr hugs_root)
{
    void (*v6823)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsWord32 arg4, HsWord32 arg5, HsPtr arg6);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    v6823 = (void (*)(HsWord32, HsWord32, HsInt32, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    v6823(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6824_14(HugsStackPtr);
static void hugsprim_v6824_14(HugsStackPtr hugs_root)
{
    void (*v6824)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6824 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6824(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6825_13(HugsStackPtr);
static void hugsprim_v6825_13(HugsStackPtr hugs_root)
{
    void (*v6825)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6825 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6825(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6826_12(HugsStackPtr);
static void hugsprim_v6826_12(HugsStackPtr hugs_root)
{
    void (*v6826)(HsWord32 arg1, HsWord32 arg2, HsPtr arg3);
    HsWord32 arg1;
    HsWord32 arg2;
    HsPtr arg3;
    v6826 = (void (*)(HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getPtr();
    v6826(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6827_11(HugsStackPtr);
static void hugsprim_v6827_11(HugsStackPtr hugs_root)
{
    void (*v6827)(HsWord32 arg1, HsWord32 arg2, HsWord32 arg3, HsPtr arg4);
    HsWord32 arg1;
    HsWord32 arg2;
    HsWord32 arg3;
    HsPtr arg4;
    v6827 = (void (*)(HsWord32, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getWord32();
    arg4 = hugs->getPtr();
    v6827(arg1, arg2, arg3, arg4);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6828_10(HugsStackPtr);
static void hugsprim_v6828_10(HugsStackPtr hugs_root)
{
    void (*v6828)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsInt32 arg4, HsInt32 arg5);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsInt32 arg5;
    v6828 = (void (*)(HsWord32, HsInt32, HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getInt32();
    v6828(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6829_9(HugsStackPtr);
static void hugsprim_v6829_9(HugsStackPtr hugs_root)
{
    void (*v6829)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsInt32 arg4, HsInt32 arg5);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsInt32 arg4;
    HsInt32 arg5;
    v6829 = (void (*)(HsWord32, HsWord32, HsInt32, HsInt32, HsInt32))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getInt32();
    arg5 = hugs->getInt32();
    v6829(arg1, arg2, arg3, arg4, arg5);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6830_8(HugsStackPtr);
static void hugsprim_v6830_8(HugsStackPtr hugs_root)
{
    void (*v6830)(HsWord32 arg1, HsInt32 arg2, HsInt32 arg3, HsWord32 arg4, HsWord32 arg5, HsPtr arg6);
    HsWord32 arg1;
    HsInt32 arg2;
    HsInt32 arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    v6830 = (void (*)(HsWord32, HsInt32, HsInt32, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    v6830(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_v6831_7(HugsStackPtr);
static void hugsprim_v6831_7(HugsStackPtr hugs_root)
{
    void (*v6831)(HsWord32 arg1, HsWord32 arg2, HsInt32 arg3, HsWord32 arg4, HsWord32 arg5, HsPtr arg6);
    HsWord32 arg1;
    HsWord32 arg2;
    HsInt32 arg3;
    HsWord32 arg4;
    HsWord32 arg5;
    HsPtr arg6;
    v6831 = (void (*)(HsWord32, HsWord32, HsInt32, HsWord32, HsWord32, HsPtr))hugs->getFunPtr();
    arg1 = hugs->getWord32();
    arg2 = hugs->getWord32();
    arg3 = hugs->getInt32();
    arg4 = hugs->getWord32();
    arg5 = hugs->getWord32();
    arg6 = hugs->getPtr();
    v6831(arg1, arg2, arg3, arg4, arg5, arg6);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPixelMapfv_6(HugsStackPtr);
static void hugsprim_glPixelMapfv_6(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    glPixelMapfv(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glGetPixelMapfv_5(HugsStackPtr);
static void hugsprim_glGetPixelMapfv_5(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsPtr arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    glGetPixelMapfv(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPixelMapuiv_4(HugsStackPtr);
static void hugsprim_glPixelMapuiv_4(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    HsPtr arg3;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    arg3 = hugs->getPtr();
    glPixelMapuiv(arg1, arg2, arg3);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glGetPixelMapuiv_3(HugsStackPtr);
static void hugsprim_glGetPixelMapuiv_3(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsPtr arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getPtr();
    glGetPixelMapuiv(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPixelTransferf_2(HugsStackPtr);
static void hugsprim_glPixelTransferf_2(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsFloat arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getFloat();
    glPixelTransferf(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPixelTransferi_1(HugsStackPtr);
static void hugsprim_glPixelTransferi_1(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    glPixelTransferi(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static void hugsprim_glPixelStorei_0(HugsStackPtr);
static void hugsprim_glPixelStorei_0(HugsStackPtr hugs_root)
{
    HsWord32 arg1;
    HsInt32 arg2;
    arg1 = hugs->getWord32();
    arg2 = hugs->getInt32();
    glPixelStorei(arg1, arg2);
    
    hugs->returnIO(hugs_root,0);
}

static struct hugs_primitive hugs_primTable[] = {
    {"glPixelZoom", 3, hugsprim_glPixelZoom_39},
    {"glDrawPixels", 6, hugsprim_glDrawPixels_38},
    {"dyn_glGetMinmaxParameteriv", 5, hugsprim_v6801_37},
    {"dyn_glGetMinmaxParameterfv", 5, hugsprim_v6802_36},
    {"dyn_glGetMinmax", 7, hugsprim_v6803_35},
    {"dyn_glResetMinmax", 3, hugsprim_v6804_34},
    {"dyn_glMinmax", 5, hugsprim_v6805_33},
    {"dyn_glGetHistogramParameteriv", 5, hugsprim_v6806_32},
    {"dyn_glGetHistogramParameterfv", 5, hugsprim_v6807_31},
    {"dyn_glGetHistogram", 7, hugsprim_v6808_30},
    {"dyn_glResetHistogram", 3, hugsprim_v6809_29},
    {"dyn_glHistogram", 6, hugsprim_v6810_28},
    {"dyn_glGetSeparableFilter", 8, hugsprim_v6811_27},
    {"dyn_glSeparableFilter2D", 10, hugsprim_v6812_26},
    {"dyn_glGetConvolutionParameteriv", 5, hugsprim_v6813_25},
    {"dyn_glGetConvolutionParameterfv", 5, hugsprim_v6814_24},
    {"dyn_glGetConvolutionFilter", 6, hugsprim_v6815_23},
    {"dyn_glCopyConvolutionFilter2D", 8, hugsprim_v6816_22},
    {"dyn_glCopyConvolutionFilter1D", 7, hugsprim_v6817_21},
    {"dyn_glConvolutionParameteriv", 5, hugsprim_v6818_20},
    {"dyn_glConvolutionParameteri", 5, hugsprim_v6819_19},
    {"dyn_glConvolutionParameterfv", 5, hugsprim_v6820_18},
    {"dyn_glConvolutionParameterf", 5, hugsprim_v6821_17},
    {"dyn_glConvolutionFilter2D", 9, hugsprim_v6822_16},
    {"dyn_glConvolutionFilter1D", 8, hugsprim_v6823_15},
    {"dyn_glGetColorTableParameteriv", 5, hugsprim_v6824_14},
    {"dyn_glColorTableParameterfv", 5, hugsprim_v6825_13},
    {"dyn_glGetColorTableParameterfv", 5, hugsprim_v6826_12},
    {"dyn_glGetColorTable", 6, hugsprim_v6827_11},
    {"dyn_glCopyColorSubTable", 7, hugsprim_v6828_10},
    {"dyn_glCopyColorTable", 7, hugsprim_v6829_9},
    {"dyn_glColorSubTable", 8, hugsprim_v6830_8},
    {"dyn_glColorTable", 8, hugsprim_v6831_7},
    {"glPixelMapfv", 4, hugsprim_glPixelMapfv_6},
    {"glGetPixelMapfv", 3, hugsprim_glGetPixelMapfv_5},
    {"glPixelMapuiv", 4, hugsprim_glPixelMapuiv_4},
    {"glGetPixelMapuiv", 3, hugsprim_glGetPixelMapuiv_3},
    {"glPixelTransferf", 3, hugsprim_glPixelTransferf_2},
    {"glPixelTransferi", 3, hugsprim_glPixelTransferi_1},
    {"glPixelStorei", 3, hugsprim_glPixelStorei_0},
};

static void hugs_primControl(int);
static void hugs_primControl(what)
int what; {
}

#ifdef STATIC_LINKAGE
#define initModule initGROGPixelRectangles
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

