#ifndef HelloWorldSPLTYPES_H
#define HelloWorldSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "HelloWorldDcps.h"


extern c_metaObject __HelloWorld_HelloWorld__load (c_base base);

extern const char *HelloWorld_Message_metaDescriptor[];
extern const int HelloWorld_Message_metaDescriptorArrLength;
extern const int HelloWorld_Message_metaDescriptorLength;
extern c_metaObject __HelloWorld_Message__load (c_base base);
struct _HelloWorld_Message ;
extern  v_copyin_result __HelloWorld_Message__copyIn(c_base base, const void *from, void *to);
extern  void __HelloWorld_Message__copyOut(const void *_from, void *_to);
struct _HelloWorld_Message {
    c_string key;
    c_long value;
};

#undef OS_API
#endif
