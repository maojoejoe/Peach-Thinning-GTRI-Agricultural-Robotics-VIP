

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NestedMessage_Plugin_937635785_h
#define NestedMessage_Plugin_937635785_h

#include "NestedMessage_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_Plugin.h"
#include "test_msgs/msg/dds_connext/BasicTypes_Plugin.h"
#include "test_msgs/msg/dds_connext/Builtins_Plugin.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_Goal_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_Goal_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_Goal_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_Goal_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_Goal_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_Goal_*
            NestedMessage_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_Goal_*
            NestedMessage_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_Goal_*
            NestedMessage_Goal_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_PluginSupport_copy_data(
                NestedMessage_Goal_ *out,
                const NestedMessage_Goal_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_Goal_PluginSupport_destroy_data_w_params(
                NestedMessage_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_Goal_PluginSupport_destroy_data_ex(
                NestedMessage_Goal_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_Goal_PluginSupport_destroy_data(
                NestedMessage_Goal_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_Goal_PluginSupport_print_data(
                const NestedMessage_Goal_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_Goal_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_Goal_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ *out,
                const NestedMessage_Goal_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_Goal_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Goal_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_Goal_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_Goal_Plugin_data_to_string(
                const NestedMessage_Goal_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Goal_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Goal_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Goal_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_Goal_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_Goal_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Goal_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_Goal_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_Goal_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_Goal_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_SendGoal_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_SendGoal_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_SendGoal_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_SendGoal_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_SendGoal_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_SendGoal_Request_*
            NestedMessage_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_SendGoal_Request_*
            NestedMessage_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_SendGoal_Request_*
            NestedMessage_SendGoal_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_PluginSupport_copy_data(
                NestedMessage_SendGoal_Request_ *out,
                const NestedMessage_SendGoal_Request_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Request_PluginSupport_destroy_data_w_params(
                NestedMessage_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Request_PluginSupport_destroy_data_ex(
                NestedMessage_SendGoal_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Request_PluginSupport_destroy_data(
                NestedMessage_SendGoal_Request_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Request_PluginSupport_print_data(
                const NestedMessage_SendGoal_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_SendGoal_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_SendGoal_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ *out,
                const NestedMessage_SendGoal_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_SendGoal_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_SendGoal_Request_Plugin_data_to_string(
                const NestedMessage_SendGoal_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_SendGoal_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_SendGoal_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_SendGoal_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_SendGoal_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_SendGoal_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_SendGoal_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_SendGoal_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_SendGoal_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_SendGoal_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_SendGoal_Response_*
            NestedMessage_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_SendGoal_Response_*
            NestedMessage_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_SendGoal_Response_*
            NestedMessage_SendGoal_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_PluginSupport_copy_data(
                NestedMessage_SendGoal_Response_ *out,
                const NestedMessage_SendGoal_Response_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Response_PluginSupport_destroy_data_w_params(
                NestedMessage_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Response_PluginSupport_destroy_data_ex(
                NestedMessage_SendGoal_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Response_PluginSupport_destroy_data(
                NestedMessage_SendGoal_Response_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Response_PluginSupport_print_data(
                const NestedMessage_SendGoal_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_SendGoal_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_SendGoal_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ *out,
                const NestedMessage_SendGoal_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_SendGoal_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_SendGoal_Response_Plugin_data_to_string(
                const NestedMessage_SendGoal_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_SendGoal_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_SendGoal_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_SendGoal_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_SendGoal_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_Result_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_Result_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_Result_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_Result_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_Result_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_Result_*
            NestedMessage_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_Result_*
            NestedMessage_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_Result_*
            NestedMessage_Result_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_PluginSupport_copy_data(
                NestedMessage_Result_ *out,
                const NestedMessage_Result_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_Result_PluginSupport_destroy_data_w_params(
                NestedMessage_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_Result_PluginSupport_destroy_data_ex(
                NestedMessage_Result_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_Result_PluginSupport_destroy_data(
                NestedMessage_Result_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_Result_PluginSupport_print_data(
                const NestedMessage_Result_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_Result_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_Result_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ *out,
                const NestedMessage_Result_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_Result_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Result_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_Result_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_Result_Plugin_data_to_string(
                const NestedMessage_Result_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Result_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Result_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_Result_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_Result_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Result_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_Result_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_Result_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_Result_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_GetResult_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_GetResult_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_GetResult_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_GetResult_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_GetResult_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_GetResult_Request_*
            NestedMessage_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_GetResult_Request_*
            NestedMessage_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_GetResult_Request_*
            NestedMessage_GetResult_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_PluginSupport_copy_data(
                NestedMessage_GetResult_Request_ *out,
                const NestedMessage_GetResult_Request_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Request_PluginSupport_destroy_data_w_params(
                NestedMessage_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Request_PluginSupport_destroy_data_ex(
                NestedMessage_GetResult_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Request_PluginSupport_destroy_data(
                NestedMessage_GetResult_Request_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Request_PluginSupport_print_data(
                const NestedMessage_GetResult_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_GetResult_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_GetResult_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ *out,
                const NestedMessage_GetResult_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_GetResult_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_GetResult_Request_Plugin_data_to_string(
                const NestedMessage_GetResult_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_GetResult_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_GetResult_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_GetResult_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_GetResult_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_GetResult_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_GetResult_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_GetResult_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_GetResult_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_GetResult_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_GetResult_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_GetResult_Response_*
            NestedMessage_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_GetResult_Response_*
            NestedMessage_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_GetResult_Response_*
            NestedMessage_GetResult_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_PluginSupport_copy_data(
                NestedMessage_GetResult_Response_ *out,
                const NestedMessage_GetResult_Response_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Response_PluginSupport_destroy_data_w_params(
                NestedMessage_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Response_PluginSupport_destroy_data_ex(
                NestedMessage_GetResult_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Response_PluginSupport_destroy_data(
                NestedMessage_GetResult_Response_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Response_PluginSupport_print_data(
                const NestedMessage_GetResult_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_GetResult_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_GetResult_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ *out,
                const NestedMessage_GetResult_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_GetResult_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_GetResult_Response_Plugin_data_to_string(
                const NestedMessage_GetResult_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_GetResult_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_GetResult_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_GetResult_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_GetResult_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_GetResult_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_Feedback_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_Feedback_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_Feedback_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_Feedback_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_Feedback_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_Feedback_*
            NestedMessage_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_Feedback_*
            NestedMessage_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_Feedback_*
            NestedMessage_Feedback_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_PluginSupport_copy_data(
                NestedMessage_Feedback_ *out,
                const NestedMessage_Feedback_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_Feedback_PluginSupport_destroy_data_w_params(
                NestedMessage_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_Feedback_PluginSupport_destroy_data_ex(
                NestedMessage_Feedback_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_Feedback_PluginSupport_destroy_data(
                NestedMessage_Feedback_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_Feedback_PluginSupport_print_data(
                const NestedMessage_Feedback_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_Feedback_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_Feedback_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ *out,
                const NestedMessage_Feedback_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_Feedback_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Feedback_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_Feedback_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_Feedback_Plugin_data_to_string(
                const NestedMessage_Feedback_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Feedback_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Feedback_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_Feedback_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_Feedback_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Feedback_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_Feedback_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_Feedback_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_Feedback_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            #define NestedMessage_FeedbackMessage_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define NestedMessage_FeedbackMessage_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define NestedMessage_FeedbackMessage_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define NestedMessage_FeedbackMessage_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define NestedMessage_FeedbackMessage_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern NestedMessage_FeedbackMessage_*
            NestedMessage_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern NestedMessage_FeedbackMessage_*
            NestedMessage_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern NestedMessage_FeedbackMessage_*
            NestedMessage_FeedbackMessage_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_PluginSupport_copy_data(
                NestedMessage_FeedbackMessage_ *out,
                const NestedMessage_FeedbackMessage_ *in);

            NDDSUSERDllExport extern void 
            NestedMessage_FeedbackMessage_PluginSupport_destroy_data_w_params(
                NestedMessage_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            NestedMessage_FeedbackMessage_PluginSupport_destroy_data_ex(
                NestedMessage_FeedbackMessage_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            NestedMessage_FeedbackMessage_PluginSupport_destroy_data(
                NestedMessage_FeedbackMessage_ *sample);

            NDDSUSERDllExport extern void 
            NestedMessage_FeedbackMessage_PluginSupport_print_data(
                const NestedMessage_FeedbackMessage_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            NestedMessage_FeedbackMessage_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            NestedMessage_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            NestedMessage_FeedbackMessage_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            NestedMessage_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            NestedMessage_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ *out,
                const NestedMessage_FeedbackMessage_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NestedMessage_FeedbackMessage_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                NestedMessage_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            NestedMessage_FeedbackMessage_Plugin_data_to_string(
                const NestedMessage_FeedbackMessage_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            NestedMessage_FeedbackMessage_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_FeedbackMessage_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            NestedMessage_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NestedMessage_FeedbackMessage_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            NestedMessage_FeedbackMessage_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            NestedMessage_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NestedMessage_FeedbackMessage_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            NestedMessage_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            NestedMessage_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NestedMessage_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            NestedMessage_FeedbackMessage_Plugin_new(void);

            NDDSUSERDllExport extern void
            NestedMessage_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* NestedMessage_Plugin_937635785_h */

