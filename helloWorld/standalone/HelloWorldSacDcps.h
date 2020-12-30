#ifndef HelloWorldSACDCPS_H
#define HelloWorldSACDCPS_H

#include "dds_dcps.h"
#include "HelloWorldDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define HelloWorld_MessageTypeSupport DDS_TypeSupport

 HelloWorld_MessageTypeSupport
HelloWorld_MessageTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
HelloWorld_MessageTypeSupport_register_type (
    HelloWorld_MessageTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
HelloWorld_MessageTypeSupport_get_type_name (
    HelloWorld_MessageTypeSupport _this
    );

#ifndef _DDS_sequence_HelloWorld_Message_defined
#define _DDS_sequence_HelloWorld_Message_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    HelloWorld_Message *_buffer;
    DDS_boolean _release;
} DDS_sequence_HelloWorld_Message;

 DDS_sequence_HelloWorld_Message *DDS_sequence_HelloWorld_Message__alloc (void);
 HelloWorld_Message *DDS_sequence_HelloWorld_Message_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_HelloWorld_Message_defined */

#define HelloWorld_MessageDataWriter DDS_DataWriter

#define HelloWorld_MessageDataWriter_enable DDS_Entity_enable

#define HelloWorld_MessageDataWriter_get_status_changes DDS_Entity_get_status_changes

#define HelloWorld_MessageDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define HelloWorld_MessageDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define HelloWorld_MessageDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define HelloWorld_MessageDataWriter_get_listener DDS_DataWriter_get_listener

#define HelloWorld_MessageDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define HelloWorld_MessageDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define HelloWorld_MessageDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define HelloWorld_MessageDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define HelloWorld_MessageDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define HelloWorld_MessageDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define HelloWorld_MessageDataWriter_get_publisher DDS_DataWriter_get_publisher

#define HelloWorld_MessageDataWriter_get_qos DDS_DataWriter_get_qos

#define HelloWorld_MessageDataWriter_get_topic DDS_DataWriter_get_topic

#define HelloWorld_MessageDataWriter_set_listener DDS_DataWriter_set_listener

#define HelloWorld_MessageDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
HelloWorld_MessageDataWriter_register_instance (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data
    );

 DDS_InstanceHandle_t
HelloWorld_MessageDataWriter_register_instance_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_unregister_instance (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_unregister_instance_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_write (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_write_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_dispose (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_dispose_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_writedispose (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_writedispose_w_timestamp (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataWriter_get_key_value (
    HelloWorld_MessageDataWriter _this,
    HelloWorld_Message *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
HelloWorld_MessageDataWriter_lookup_instance (
    HelloWorld_MessageDataWriter _this,
    const HelloWorld_Message *key_holder
    );

#define HelloWorld_MessageDataReader DDS_DataReader

#define HelloWorld_MessageDataReader_enable DDS_Entity_enable

#define HelloWorld_MessageDataReader_get_status_changes DDS_Entity_get_status_changes

#define HelloWorld_MessageDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define HelloWorld_MessageDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define HelloWorld_MessageDataReader_create_querycondition DDS_DataReader_create_querycondition

#define HelloWorld_MessageDataReader_create_readcondition DDS_DataReader_create_readcondition

#define HelloWorld_MessageDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define HelloWorld_MessageDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define HelloWorld_MessageDataReader_get_listener DDS_DataReader_get_listener

#define HelloWorld_MessageDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define HelloWorld_MessageDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define HelloWorld_MessageDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define HelloWorld_MessageDataReader_get_qos DDS_DataReader_get_qos

#define HelloWorld_MessageDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define HelloWorld_MessageDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define HelloWorld_MessageDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define HelloWorld_MessageDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define HelloWorld_MessageDataReader_get_subscriber DDS_DataReader_get_subscriber

#define HelloWorld_MessageDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define HelloWorld_MessageDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define HelloWorld_MessageDataReader_set_listener DDS_DataReader_set_listener

#define HelloWorld_MessageDataReader_set_qos DDS_DataReader_set_qos

#define HelloWorld_MessageDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_read (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_take (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_next_sample (
    HelloWorld_MessageDataReader _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_next_sample (
    HelloWorld_MessageDataReader _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    );

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
    );

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
    );

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
    );

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
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_read_next_instance_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_take_next_instance_w_condition (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_return_loan (
    HelloWorld_MessageDataReader _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReader_get_key_value (
    HelloWorld_MessageDataReader _this,
    HelloWorld_Message *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
HelloWorld_MessageDataReader_lookup_instance (
    HelloWorld_MessageDataReader _this,
    const HelloWorld_Message *key_holder
    );

#define HelloWorld_MessageDataReaderView DDS_DataReaderView

#define HelloWorld_MessageDataReaderView_enable DDS_Entity_enable

#define HelloWorld_MessageDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define HelloWorld_MessageDataReaderView_get_qos DDS_DataReaderView_get_qos

#define HelloWorld_MessageDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define HelloWorld_MessageDataReaderView_set_qos DDS_DataReaderView_set_qos

#define HelloWorld_MessageDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define HelloWorld_MessageDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define HelloWorld_MessageDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define HelloWorld_MessageDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_next_sample (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_next_sample (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *received_data,
    DDS_SampleInfo *sample_info
    );

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
    );

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
    );

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
    );

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
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_return_loan (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_read_next_instance_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_take_next_instance_w_condition (
    HelloWorld_MessageDataReaderView _this,
    DDS_sequence_HelloWorld_Message *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorld_MessageDataReaderView_get_key_value (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
HelloWorld_MessageDataReaderView_lookup_instance (
    HelloWorld_MessageDataReaderView _this,
    HelloWorld_Message *key_holder
    );

#endif
