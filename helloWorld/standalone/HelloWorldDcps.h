#ifndef HelloWorldDCPS_H
#define HelloWorldDCPS_H

#include <dds_primitive_types.h>


#ifndef _HelloWorld_Message_defined
#define _HelloWorld_Message_defined
#ifdef __cplusplus
struct HelloWorld_Message;
#else /* __cplusplus */
typedef struct HelloWorld_Message HelloWorld_Message;
#endif /* __cplusplus */
#endif /* _HelloWorld_Message_defined */
 HelloWorld_Message *HelloWorld_Message__alloc (void);

struct HelloWorld_Message {
    DDS_string key;
    DDS_long value;
};

#endif
