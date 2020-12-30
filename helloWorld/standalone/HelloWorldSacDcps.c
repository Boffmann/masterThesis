#if defined (__cplusplus)
extern "C" {
#endif

#include <dds_dcps.h>
#include <dds_dcps_private.h>

#include "HelloWorldSacDcps.h"
#include "HelloWorldSplDcps.h"

DDS_sequence_HelloWorld_Message *DDS_sequence_HelloWorld_Message__alloc (void)
{
    return (DDS_sequence_HelloWorld_Message *)DDS_alloc(sizeof(DDS_sequence_HelloWorld_Message), (DDS_deallocatorType)DDS_sequence_free);
}

HelloWorld_Message *DDS_sequence_HelloWorld_Message_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_HelloWorld_Message_freebuf (void *buffer);

    return (HelloWorld_Message *)DDS_sequence_allocbuf (DDS_sequence_HelloWorld_Message_freebuf, sizeof (HelloWorld_Message), len);
}

DDS_ReturnCode_t DDS_sequence_HelloWorld_Message_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_HelloWorld_Message_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    HelloWorld_Message *b = (HelloWorld_Message *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t HelloWorld_Message__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) HelloWorld_Message__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __HelloWorld_Message__copyIn(c_base base, const void *from, void *to);
extern void __HelloWorld_Message__copyOut(const void *from, void *to);


HelloWorld_MessageTypeSupport
HelloWorld_MessageTypeSupport__alloc (
    void
    )
{
    HelloWorld_MessageTypeSupport result;
    result = DDS_TypeSupportNew (
            "HelloWorld::Message",
            "",
            "key",
            HelloWorld_Message_metaDescriptor,
            HelloWorld_Message_metaDescriptorArrLength,
            HelloWorld_Message_metaDescriptorLength,
            (DDS_copyIn)__HelloWorld_Message__copyIn,
            (DDS_copyOut)__HelloWorld_Message__copyOut,
            (DDS_unsigned_long)(sizeof(HelloWorld_Message)),
            (DDS_allocBuffer)DDS_sequence_HelloWorld_Message_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageTypeSupport_register_type (
    HelloWorld_MessageTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
HelloWorld_MessageTypeSupport_get_type_name (
    HelloWorld_MessageTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorld_MessageDataWriter_register_instance (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorld_MessageDataWriter_register_instance_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_unregister_instance (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_unregister_instance_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_write (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_write_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_dispose (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_dispose_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_writedispose (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_writedispose_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataWriter_get_key_value (
    HelloWorld_MessageDataWriter _this,
    HelloWorld_Message *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorld_MessageDataWriter_lookup_instance (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_read (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_take (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_next_sample (
    HelloWorld_MessageDataReader _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_next_sample (
    HelloWorld_MessageDataReader _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_instance (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_instance (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_next_instance (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_next_instance (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_next_instance_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_next_instance_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_return_loan (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReader_get_key_value (
    HelloWorld_MessageDataReader _this,
    HelloWorld_Message *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorld_MessageDataReader_lookup_instance (
    HelloWorld_MessageDataReader _this,
    const HelloWorld_Message *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_next_sample (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_next_sample (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_instance (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_instance (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_next_instance (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_next_instance (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_return_loan (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_next_instance_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_next_instance_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_get_key_value (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
HelloWorld_MessageDataReaderView_lookup_instance (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

#if defined (__cplusplus)
}
#endif
