/* Auto generated GreenCard 2 code for Hugs */
#include "GreenCard.h"
#include  <stdlib.h>
PROTO_PRIM(prim_StdDIS_cpp_writeCharAddr);
primFun(prim_StdDIS_cpp_writeCharAddr)
{ char* s; int i; char v;;
  s = (char*)(hugs->getAddr());
  i = (int)(hugs->getInt());
  v = (char)(hugs->getChar());
  { s[i] = v; ;
   hugs_returnIO(0);
   }
}
PROTO_PRIM(prim_StdDIS_cpp_readCharAddr);
primFun(prim_StdDIS_cpp_readCharAddr)
{ char* s; int i;char res1;;
  s = (char*)(hugs->getAddr());
  i = (int)(hugs->getInt());
  { res1 = s[i]; ;
   hugs->putChar((char)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_StdDIS_cpp_allocCharStar);
primFun(prim_StdDIS_cpp_allocCharStar)
{ int arg1;char* res1;;
  arg1 = (int)(hugs->getInt());
  { res1 = (char *)malloc(sizeof(char) * arg1); ;
   hugs->putAddr((char*)(res1));
   hugs_returnIO(1);
   }
}
PROTO_PRIM(prim_StdDIS_cpp_malloc);
primFun(prim_StdDIS_cpp_malloc)
{ unsigned int arg1;void * res1;int gc_failed;
				char* gc_failstring;;
  arg1 = (unsigned int)(hugs->getWord());
  {res1 = malloc(arg1);
   if ((gc_failed = ( res1==0 ))) {gc_failstring =  "malloc failed"  ;}
   else {gc_failed = 0;}
   hugs->putAddr(gc_failstring);
   hugs->putInt(gc_failed);
   hugs->putAddr((void *)(res1));
   hugs_returnIO(3);
   }
}
PROTO_PRIM(prim_StdDIS_cpp_free);
primFun(prim_StdDIS_cpp_free)
{ void * arg1;;
  arg1 = (void *)(hugs->getAddr());
  {free(arg1);
   hugs_returnIO(0);
   }
}
static struct primitive primTable[] = {
  {"prim_StdDIS_cpp_writeCharAddr",5,prim_StdDIS_cpp_writeCharAddr},
  {"prim_StdDIS_cpp_readCharAddr",4,prim_StdDIS_cpp_readCharAddr},
  {"prim_StdDIS_cpp_allocCharStar",3,prim_StdDIS_cpp_allocCharStar},
  {"prim_StdDIS_cpp_malloc",3,prim_StdDIS_cpp_malloc},
  {"prim_StdDIS_cpp_free",3,prim_StdDIS_cpp_free},
  {0,0,0}
};
static struct primInfo prims = { 0, primTable, 0 };

#ifdef __cplusplus
extern "C" {
#endif
DLLEXPORT(void) initModule(HugsAPI2 *);
DLLEXPORT(void) initModule(HugsAPI2 *hugsAPI) {
    hugs = hugsAPI;
    hugs->registerPrims(&prims);
}
#ifdef __cplusplus
}
#endif
