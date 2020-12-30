#if defined (__cplusplus)
extern "C" {
#endif

#include "vortex_os.h"
#include "HelloWorldSplDcps.h"
#include "HelloWorldDcps.h"

/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 150 */
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 156 */
#include <v_copyIn.h>
#include <v_topic.h>
#include <string.h>
#include <os_report.h>

/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__HelloWorld_Message__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const HelloWorld_Message *from = (const HelloWorld_Message *)_from;
    struct _HelloWorld_Message *to = (struct _HelloWorld_Message *)_to;
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->key) {
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->key = c_stringNew_s(base, from->key);
        if (to->key == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'HelloWorld::Message.key' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->key = c_stringNew_s(base, from->key);
    if ((to->key != NULL) && (to->key == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->value = (c_long)from->value;
/* Code generated in file: /home/pi/opensplice-OSPL_V6_9_190925OSS_RELEASE/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

#include <dds_dcps_private.h>

void
__HelloWorld_Message__copyOut(const void *_from, void *_to);
void
__HelloWorld_Message__copyOut(const void *_from, void *_to)
{
    const struct _HelloWorld_Message *from = (const struct _HelloWorld_Message *)_from;
    HelloWorld_Message *to = (HelloWorld_Message *)_to;
    DDS_string_replace (from->key ? from->key : "", &to->key);
    to->value = (DDS_long)from->value;
}

HelloWorld_Message *HelloWorld_Message__alloc (void)
{
    DDS_ReturnCode_t HelloWorld_Message__free (void *object);

    return (HelloWorld_Message *)DDS_alloc(sizeof(HelloWorld_Message), HelloWorld_Message__free);
}

DDS_ReturnCode_t HelloWorld_Message__free (void *object);
DDS_ReturnCode_t HelloWorld_Message__free (void *object)
{
    HelloWorld_Message *o = (HelloWorld_Message *)object;

    (void) o;

    DDS_string_clean (&o->key);
    return DDS_RETCODE_OK;
}

const char * HelloWorld_Message_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"HelloWorld\"><Struct name=\"Message\"><Member name=\"key\">",
"<String/></Member><Member name=\"value\"><Long/></Member></Struct></Module></MetaData>"};
const int  HelloWorld_Message_metaDescriptorArrLength = 2;
const int  HelloWorld_Message_metaDescriptorLength = 188;
#if defined (__cplusplus)
}
#endif
