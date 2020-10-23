

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveBase_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MoveBase_Plugin_551658909_h
#define MoveBase_Plugin_551658909_h

#include "MoveBase_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseStamped_Plugin.h"
#include "builtin_interfaces/msg/dds_connext/Time_Plugin.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_Goal_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_Goal_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_Goal_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_Goal_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_Goal_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_Goal_*
            MoveBase_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_Goal_*
            MoveBase_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_Goal_*
            MoveBase_Goal_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_PluginSupport_copy_data(
                MoveBase_Goal_ *out,
                const MoveBase_Goal_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_Goal_PluginSupport_destroy_data_w_params(
                MoveBase_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_Goal_PluginSupport_destroy_data_ex(
                MoveBase_Goal_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_Goal_PluginSupport_destroy_data(
                MoveBase_Goal_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_Goal_PluginSupport_print_data(
                const MoveBase_Goal_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_Goal_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_Goal_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ *out,
                const MoveBase_Goal_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_Goal_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Goal_Plugin_deserialize_from_cdr_buffer(
                MoveBase_Goal_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_Goal_Plugin_data_to_string(
                const MoveBase_Goal_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_Goal_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Goal_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Goal_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_Goal_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_Goal_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Goal_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_Goal_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_Goal_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_Goal_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_SendGoal_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_SendGoal_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_SendGoal_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_SendGoal_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_SendGoal_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_SendGoal_Request_*
            MoveBase_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_SendGoal_Request_*
            MoveBase_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_SendGoal_Request_*
            MoveBase_SendGoal_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_PluginSupport_copy_data(
                MoveBase_SendGoal_Request_ *out,
                const MoveBase_SendGoal_Request_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Request_PluginSupport_destroy_data_w_params(
                MoveBase_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Request_PluginSupport_destroy_data_ex(
                MoveBase_SendGoal_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Request_PluginSupport_destroy_data(
                MoveBase_SendGoal_Request_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Request_PluginSupport_print_data(
                const MoveBase_SendGoal_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_SendGoal_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_SendGoal_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ *out,
                const MoveBase_SendGoal_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_SendGoal_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                MoveBase_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_SendGoal_Request_Plugin_data_to_string(
                const MoveBase_SendGoal_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_SendGoal_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_SendGoal_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_SendGoal_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_SendGoal_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_SendGoal_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_SendGoal_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_SendGoal_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_SendGoal_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_SendGoal_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_SendGoal_Response_*
            MoveBase_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_SendGoal_Response_*
            MoveBase_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_SendGoal_Response_*
            MoveBase_SendGoal_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_PluginSupport_copy_data(
                MoveBase_SendGoal_Response_ *out,
                const MoveBase_SendGoal_Response_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Response_PluginSupport_destroy_data_w_params(
                MoveBase_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Response_PluginSupport_destroy_data_ex(
                MoveBase_SendGoal_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Response_PluginSupport_destroy_data(
                MoveBase_SendGoal_Response_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Response_PluginSupport_print_data(
                const MoveBase_SendGoal_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_SendGoal_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_SendGoal_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ *out,
                const MoveBase_SendGoal_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_SendGoal_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                MoveBase_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_SendGoal_Response_Plugin_data_to_string(
                const MoveBase_SendGoal_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_SendGoal_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_SendGoal_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_SendGoal_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_SendGoal_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_Result_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_Result_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_Result_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_Result_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_Result_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_Result_*
            MoveBase_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_Result_*
            MoveBase_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_Result_*
            MoveBase_Result_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_PluginSupport_copy_data(
                MoveBase_Result_ *out,
                const MoveBase_Result_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_Result_PluginSupport_destroy_data_w_params(
                MoveBase_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_Result_PluginSupport_destroy_data_ex(
                MoveBase_Result_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_Result_PluginSupport_destroy_data(
                MoveBase_Result_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_Result_PluginSupport_print_data(
                const MoveBase_Result_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_Result_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_Result_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ *out,
                const MoveBase_Result_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_Result_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Result_Plugin_deserialize_from_cdr_buffer(
                MoveBase_Result_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_Result_Plugin_data_to_string(
                const MoveBase_Result_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_Result_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Result_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_Result_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_Result_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Result_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_Result_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_Result_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_Result_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_GetResult_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_GetResult_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_GetResult_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_GetResult_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_GetResult_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_GetResult_Request_*
            MoveBase_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_GetResult_Request_*
            MoveBase_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_GetResult_Request_*
            MoveBase_GetResult_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_PluginSupport_copy_data(
                MoveBase_GetResult_Request_ *out,
                const MoveBase_GetResult_Request_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Request_PluginSupport_destroy_data_w_params(
                MoveBase_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Request_PluginSupport_destroy_data_ex(
                MoveBase_GetResult_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Request_PluginSupport_destroy_data(
                MoveBase_GetResult_Request_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Request_PluginSupport_print_data(
                const MoveBase_GetResult_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_GetResult_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_GetResult_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ *out,
                const MoveBase_GetResult_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_GetResult_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                MoveBase_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_GetResult_Request_Plugin_data_to_string(
                const MoveBase_GetResult_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_GetResult_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_GetResult_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_GetResult_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_GetResult_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_GetResult_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_GetResult_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_GetResult_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_GetResult_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_GetResult_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_GetResult_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_GetResult_Response_*
            MoveBase_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_GetResult_Response_*
            MoveBase_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_GetResult_Response_*
            MoveBase_GetResult_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_PluginSupport_copy_data(
                MoveBase_GetResult_Response_ *out,
                const MoveBase_GetResult_Response_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Response_PluginSupport_destroy_data_w_params(
                MoveBase_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Response_PluginSupport_destroy_data_ex(
                MoveBase_GetResult_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Response_PluginSupport_destroy_data(
                MoveBase_GetResult_Response_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Response_PluginSupport_print_data(
                const MoveBase_GetResult_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_GetResult_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_GetResult_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ *out,
                const MoveBase_GetResult_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_GetResult_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                MoveBase_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_GetResult_Response_Plugin_data_to_string(
                const MoveBase_GetResult_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_GetResult_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_GetResult_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_GetResult_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_GetResult_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_GetResult_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_Feedback_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_Feedback_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_Feedback_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_Feedback_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_Feedback_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_Feedback_*
            MoveBase_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_Feedback_*
            MoveBase_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_Feedback_*
            MoveBase_Feedback_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_PluginSupport_copy_data(
                MoveBase_Feedback_ *out,
                const MoveBase_Feedback_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_Feedback_PluginSupport_destroy_data_w_params(
                MoveBase_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_Feedback_PluginSupport_destroy_data_ex(
                MoveBase_Feedback_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_Feedback_PluginSupport_destroy_data(
                MoveBase_Feedback_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_Feedback_PluginSupport_print_data(
                const MoveBase_Feedback_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_Feedback_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_Feedback_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ *out,
                const MoveBase_Feedback_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_Feedback_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Feedback_Plugin_deserialize_from_cdr_buffer(
                MoveBase_Feedback_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_Feedback_Plugin_data_to_string(
                const MoveBase_Feedback_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_Feedback_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Feedback_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_Feedback_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_Feedback_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Feedback_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_Feedback_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_Feedback_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_Feedback_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            #define MoveBase_FeedbackMessage_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define MoveBase_FeedbackMessage_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define MoveBase_FeedbackMessage_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define MoveBase_FeedbackMessage_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define MoveBase_FeedbackMessage_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern MoveBase_FeedbackMessage_*
            MoveBase_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern MoveBase_FeedbackMessage_*
            MoveBase_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern MoveBase_FeedbackMessage_*
            MoveBase_FeedbackMessage_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_PluginSupport_copy_data(
                MoveBase_FeedbackMessage_ *out,
                const MoveBase_FeedbackMessage_ *in);

            NDDSUSERDllExport extern void 
            MoveBase_FeedbackMessage_PluginSupport_destroy_data_w_params(
                MoveBase_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            MoveBase_FeedbackMessage_PluginSupport_destroy_data_ex(
                MoveBase_FeedbackMessage_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            MoveBase_FeedbackMessage_PluginSupport_destroy_data(
                MoveBase_FeedbackMessage_ *sample);

            NDDSUSERDllExport extern void 
            MoveBase_FeedbackMessage_PluginSupport_print_data(
                const MoveBase_FeedbackMessage_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            MoveBase_FeedbackMessage_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            MoveBase_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            MoveBase_FeedbackMessage_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            MoveBase_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            MoveBase_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ *out,
                const MoveBase_FeedbackMessage_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const MoveBase_FeedbackMessage_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                MoveBase_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            MoveBase_FeedbackMessage_Plugin_data_to_string(
                const MoveBase_FeedbackMessage_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            MoveBase_FeedbackMessage_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            MoveBase_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_FeedbackMessage_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            MoveBase_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const MoveBase_FeedbackMessage_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            MoveBase_FeedbackMessage_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            MoveBase_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const MoveBase_FeedbackMessage_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            MoveBase_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            MoveBase_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                MoveBase_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            MoveBase_FeedbackMessage_Plugin_new(void);

            NDDSUSERDllExport extern void
            MoveBase_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MoveBase_Plugin_551658909_h */

