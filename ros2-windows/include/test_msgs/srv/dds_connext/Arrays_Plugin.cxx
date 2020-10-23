
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Arrays_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "Arrays_Plugin.h"

namespace test_msgs {
    namespace srv {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Arrays_Request_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Arrays_Request_*
            Arrays_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Arrays_Request_ *sample = NULL;

                sample = new (std::nothrow) Arrays_Request_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::srv::dds_::Arrays_Request__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Arrays_Request_ *
            Arrays_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Arrays_Request_ *sample = NULL;

                sample = new (std::nothrow) Arrays_Request_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::srv::dds_::Arrays_Request__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Arrays_Request_ *
            Arrays_Request_PluginSupport_create_data(void)
            {
                return test_msgs::srv::dds_::Arrays_Request_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Arrays_Request_PluginSupport_destroy_data_w_params(
                Arrays_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::srv::dds_::Arrays_Request__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Arrays_Request_PluginSupport_destroy_data_ex(
                Arrays_Request_ *sample,RTIBool deallocate_pointers) {

                test_msgs::srv::dds_::Arrays_Request__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Arrays_Request_PluginSupport_destroy_data(
                Arrays_Request_ *sample) {

                test_msgs::srv::dds_::Arrays_Request_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Arrays_Request_PluginSupport_copy_data(
                Arrays_Request_ *dst,
                const Arrays_Request_ *src)
            {
                return test_msgs::srv::dds_::Arrays_Request__copy(dst,(const Arrays_Request_*) src);
            }

            void 
            Arrays_Request_PluginSupport_print_data(
                const Arrays_Request_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printArray(
                    sample->bool_values_, (3), RTI_CDR_BOOLEAN_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printBoolean, 
                    "bool_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->byte_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "byte_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->char_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "char_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float32_values_, (3), RTI_CDR_FLOAT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printFloat, 
                    "float32_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float64_values_, (3), RTI_CDR_DOUBLE_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printDouble, 
                    "float64_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int8_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "int8_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint8_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "uint8_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int16_values_, (3), RTI_CDR_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printShort, 
                    "int16_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort, 
                    "uint16_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int32_values_, (3), RTI_CDR_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLong, 
                    "int32_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong, 
                    "uint32_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int64_values_, (3), RTI_CDR_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLongLong, 
                    "int64_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLongLong, 
                    "uint64_values_", indent_level + 1);        

                RTICdrType_printStringArray (
                    sample->string_values_, 
                    (3),       
                    "string_values_", indent_level + 1,
                    RTI_CDR_CHAR_TYPE);        

                RTICdrType_printArray(
                    sample->basic_types_values_, (3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                    (RTICdrTypePrintFunction)test_msgs::msg::dds_::BasicTypes_PluginSupport_print_data,
                    "basic_types_values_", indent_level + 1);

                RTICdrType_printArray(
                    sample->constants_values_, (3), sizeof(test_msgs::msg::dds_::Constants_),
                    (RTICdrTypePrintFunction)test_msgs::msg::dds_::Constants_PluginSupport_print_data,
                    "constants_values_", indent_level + 1);

                RTICdrType_printArray(
                    sample->defaults_values_, (3), sizeof(test_msgs::msg::dds_::Defaults_),
                    (RTICdrTypePrintFunction)test_msgs::msg::dds_::Defaults_PluginSupport_print_data,
                    "defaults_values_", indent_level + 1);

                RTICdrType_printArray(
                    sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printBoolean, 
                    "bool_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->byte_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "byte_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->char_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "char_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float32_values_default_, (3), RTI_CDR_FLOAT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printFloat, 
                    "float32_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float64_values_default_, (3), RTI_CDR_DOUBLE_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printDouble, 
                    "float64_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int8_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "int8_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint8_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "uint8_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int16_values_default_, (3), RTI_CDR_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printShort, 
                    "int16_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort, 
                    "uint16_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int32_values_default_, (3), RTI_CDR_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLong, 
                    "int32_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong, 
                    "uint32_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLongLong, 
                    "int64_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLongLong, 
                    "uint64_values_default_", indent_level + 1);        

                RTICdrType_printStringArray (
                    sample->string_values_default_, 
                    (3),       
                    "string_values_default_", indent_level + 1,
                    RTI_CDR_CHAR_TYPE);        

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Arrays_Request_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            Arrays_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Arrays_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    test_msgs::srv::dds_::Arrays_Request_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::srv::dds_::Arrays_Request_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Arrays_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Arrays_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ *sample,
                void *handle)
            {

                Arrays_Request__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Arrays_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ *dst,
                const Arrays_Request_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::srv::dds_::Arrays_Request_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Arrays_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Arrays_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Arrays_Request_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->bool_values_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->byte_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->char_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float32_values_, (3), RTI_CDR_FLOAT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float64_values_, (3), RTI_CDR_DOUBLE_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int16_values_, (3), RTI_CDR_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int32_values_, (3), RTI_CDR_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int64_values_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeStringArray(
                        stream,  (void*)sample->string_values_  ,
                        (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeNonPrimitiveArray(
                        stream,  (void*)sample->basic_types_values_,
                        (3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                        (RTICdrStreamSerializeFunction)test_msgs::msg::dds_::BasicTypes_Plugin_serialize,
                        RTI_FALSE,encapsulation_id, RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeNonPrimitiveArray(
                        stream,  (void*)sample->constants_values_,
                        (3), sizeof(test_msgs::msg::dds_::Constants_),
                        (RTICdrStreamSerializeFunction)test_msgs::msg::dds_::Constants_Plugin_serialize,
                        RTI_FALSE,encapsulation_id, RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeNonPrimitiveArray(
                        stream,  (void*)sample->defaults_values_,
                        (3), sizeof(test_msgs::msg::dds_::Defaults_),
                        (RTICdrStreamSerializeFunction)test_msgs::msg::dds_::Defaults_Plugin_serialize,
                        RTI_FALSE,encapsulation_id, RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->byte_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->char_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float32_values_default_, (3), RTI_CDR_FLOAT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float64_values_default_, (3), RTI_CDR_DOUBLE_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int16_values_default_, (3), RTI_CDR_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int32_values_default_, (3), RTI_CDR_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeStringArray(
                        stream,  (void*)sample->string_values_default_  ,
                        (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Arrays_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        test_msgs::srv::dds_::Arrays_Request__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->bool_values_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->byte_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->char_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float32_values_, (3), RTI_CDR_FLOAT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float64_values_, (3), RTI_CDR_DOUBLE_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int16_values_, (3), RTI_CDR_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int32_values_, (3), RTI_CDR_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int64_values_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeStringArrayEx(
                            stream,  (void*)sample->string_values_  ,
                            (3), (RTI_INT32_MAX-1) + 1,
                            RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeNonPrimitiveArray(
                            stream,  (void*)sample->basic_types_values_,
                            (3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                            (RTICdrStreamDeserializeFunction)test_msgs::msg::dds_::BasicTypes_Plugin_deserialize_sample,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeNonPrimitiveArray(
                            stream,  (void*)sample->constants_values_,
                            (3), sizeof(test_msgs::msg::dds_::Constants_),
                            (RTICdrStreamDeserializeFunction)test_msgs::msg::dds_::Constants_Plugin_deserialize_sample,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeNonPrimitiveArray(
                            stream,  (void*)sample->defaults_values_,
                            (3), sizeof(test_msgs::msg::dds_::Defaults_),
                            (RTICdrStreamDeserializeFunction)test_msgs::msg::dds_::Defaults_Plugin_deserialize_sample,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->byte_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->char_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float32_values_default_, (3), RTI_CDR_FLOAT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float64_values_default_, (3), RTI_CDR_DOUBLE_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int16_values_default_, (3), RTI_CDR_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int32_values_default_, (3), RTI_CDR_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeStringArrayEx(
                            stream,  (void*)sample->string_values_default_  ,
                            (3), (RTI_INT32_MAX-1) + 1,
                            RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                            goto fin; 
                        }

                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            Arrays_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Arrays_Request_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Arrays_Request_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Arrays_Request_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = test_msgs::srv::dds_::Arrays_Request_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Arrays_Request_Plugin_deserialize_from_cdr_buffer(
                Arrays_Request_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Arrays_Request__finalize_optional_members(sample, RTI_TRUE);
                return Arrays_Request_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Arrays_Request_Plugin_data_to_string(
                const Arrays_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!Arrays_Request_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Arrays_Request_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Arrays_Request__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            Arrays_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Arrays_Request_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::srv::dds_::Arrays_Request_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "Arrays_Request_");

                }

                return result;

            }

            RTIBool Arrays_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_FLOAT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_DOUBLE_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipStringArray(
                        stream, (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipNonPrimitiveArray(
                        stream,(3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                        (RTICdrStreamSkipFunction)test_msgs::msg::dds_::BasicTypes_Plugin_skip, 
                        RTI_FALSE,RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipNonPrimitiveArray(
                        stream,(3), sizeof(test_msgs::msg::dds_::Constants_),
                        (RTICdrStreamSkipFunction)test_msgs::msg::dds_::Constants_Plugin_skip, 
                        RTI_FALSE,RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipNonPrimitiveArray(
                        stream,(3), sizeof(test_msgs::msg::dds_::Defaults_),
                        (RTICdrStreamSkipFunction)test_msgs::msg::dds_::Defaults_Plugin_skip, 
                        RTI_FALSE,RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_FLOAT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_DOUBLE_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipStringArray(
                        stream, (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }      
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            Arrays_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            Arrays_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Arrays_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Arrays_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_BOOLEAN_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_FLOAT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_DOUBLE_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getStringArrayMaxSizeSerialized(
                    current_alignment, (3), 1, RTI_CDR_CHAR_TYPE);
                current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3),
                    test_msgs::msg::dds_::BasicTypes_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3),
                    test_msgs::msg::dds_::Constants_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3),
                    test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_BOOLEAN_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_FLOAT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_DOUBLE_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getStringArrayMaxSizeSerialized(
                    current_alignment, (3), 1, RTI_CDR_CHAR_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            Arrays_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Arrays_Request_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_BOOLEAN_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_FLOAT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_DOUBLE_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);  

                current_alignment +=  RTICdrType_getStringArraySerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), (3),
                        (void *) sample->string_values_ , RTI_CDR_CHAR_TYPE);

                current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                    current_alignment, (3), 
                    sizeof(test_msgs::msg::dds_::BasicTypes_),
                    (RTICdrTypeGetSerializedSampleSizeFunction)test_msgs::msg::dds_::BasicTypes_Plugin_get_serialized_sample_size,
                    RTI_FALSE,encapsulation_id,
                    (void *)sample->basic_types_values_, endpoint_data);

                current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                    current_alignment, (3), 
                    sizeof(test_msgs::msg::dds_::Constants_),
                    (RTICdrTypeGetSerializedSampleSizeFunction)test_msgs::msg::dds_::Constants_Plugin_get_serialized_sample_size,
                    RTI_FALSE,encapsulation_id,
                    (void *)sample->constants_values_, endpoint_data);

                current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                    current_alignment, (3), 
                    sizeof(test_msgs::msg::dds_::Defaults_),
                    (RTICdrTypeGetSerializedSampleSizeFunction)test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_size,
                    RTI_FALSE,encapsulation_id,
                    (void *)sample->defaults_values_, endpoint_data);

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_BOOLEAN_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_FLOAT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_DOUBLE_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);  

                current_alignment +=  RTICdrType_getStringArraySerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), (3),
                        (void *) sample->string_values_default_ , RTI_CDR_CHAR_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Arrays_Request_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Arrays_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Arrays_Request_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!test_msgs::srv::dds_::Arrays_Request_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool Arrays_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!test_msgs::srv::dds_::Arrays_Request_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool Arrays_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::srv::dds_::Arrays_Request_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            Arrays_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Arrays_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Arrays_Request_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Arrays_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!test_msgs::srv::dds_::Arrays_Request_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *Arrays_Request_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                test_msgs::srv::dds_::Arrays_Request_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::srv::dds_::Arrays_Request_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::srv::dds_::Arrays_Request_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::srv::dds_::Arrays_Request_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Arrays_Request_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Arrays_Request_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Arrays_Request__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Arrays_Request_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Arrays_Request_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::srv::dds_::Arrays_Request__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Arrays_Request_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Arrays_Request_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::srv::dds_::Arrays_Request_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Arrays_Request_TYPENAME;

                return plugin;
            }

            void
            Arrays_Request_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace srv {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type Arrays_Response_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            Arrays_Response_*
            Arrays_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                Arrays_Response_ *sample = NULL;

                sample = new (std::nothrow) Arrays_Response_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::srv::dds_::Arrays_Response__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            Arrays_Response_ *
            Arrays_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                Arrays_Response_ *sample = NULL;

                sample = new (std::nothrow) Arrays_Response_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!test_msgs::srv::dds_::Arrays_Response__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            Arrays_Response_ *
            Arrays_Response_PluginSupport_create_data(void)
            {
                return test_msgs::srv::dds_::Arrays_Response_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            Arrays_Response_PluginSupport_destroy_data_w_params(
                Arrays_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                test_msgs::srv::dds_::Arrays_Response__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            Arrays_Response_PluginSupport_destroy_data_ex(
                Arrays_Response_ *sample,RTIBool deallocate_pointers) {

                test_msgs::srv::dds_::Arrays_Response__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            Arrays_Response_PluginSupport_destroy_data(
                Arrays_Response_ *sample) {

                test_msgs::srv::dds_::Arrays_Response_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            Arrays_Response_PluginSupport_copy_data(
                Arrays_Response_ *dst,
                const Arrays_Response_ *src)
            {
                return test_msgs::srv::dds_::Arrays_Response__copy(dst,(const Arrays_Response_*) src);
            }

            void 
            Arrays_Response_PluginSupport_print_data(
                const Arrays_Response_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printArray(
                    sample->bool_values_, (3), RTI_CDR_BOOLEAN_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printBoolean, 
                    "bool_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->byte_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "byte_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->char_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "char_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float32_values_, (3), RTI_CDR_FLOAT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printFloat, 
                    "float32_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float64_values_, (3), RTI_CDR_DOUBLE_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printDouble, 
                    "float64_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int8_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "int8_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint8_values_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "uint8_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int16_values_, (3), RTI_CDR_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printShort, 
                    "int16_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort, 
                    "uint16_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int32_values_, (3), RTI_CDR_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLong, 
                    "int32_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong, 
                    "uint32_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int64_values_, (3), RTI_CDR_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLongLong, 
                    "int64_values_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLongLong, 
                    "uint64_values_", indent_level + 1);        

                RTICdrType_printStringArray (
                    sample->string_values_, 
                    (3),       
                    "string_values_", indent_level + 1,
                    RTI_CDR_CHAR_TYPE);        

                RTICdrType_printArray(
                    sample->basic_types_values_, (3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                    (RTICdrTypePrintFunction)test_msgs::msg::dds_::BasicTypes_PluginSupport_print_data,
                    "basic_types_values_", indent_level + 1);

                RTICdrType_printArray(
                    sample->constants_values_, (3), sizeof(test_msgs::msg::dds_::Constants_),
                    (RTICdrTypePrintFunction)test_msgs::msg::dds_::Constants_PluginSupport_print_data,
                    "constants_values_", indent_level + 1);

                RTICdrType_printArray(
                    sample->defaults_values_, (3), sizeof(test_msgs::msg::dds_::Defaults_),
                    (RTICdrTypePrintFunction)test_msgs::msg::dds_::Defaults_PluginSupport_print_data,
                    "defaults_values_", indent_level + 1);

                RTICdrType_printArray(
                    sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printBoolean, 
                    "bool_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->byte_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "byte_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->char_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "char_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float32_values_default_, (3), RTI_CDR_FLOAT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printFloat, 
                    "float32_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->float64_values_default_, (3), RTI_CDR_DOUBLE_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printDouble, 
                    "float64_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int8_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "int8_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint8_values_default_, (3), RTI_CDR_OCTET_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printOctet, 
                    "uint8_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int16_values_default_, (3), RTI_CDR_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printShort, 
                    "int16_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort, 
                    "uint16_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int32_values_default_, (3), RTI_CDR_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLong, 
                    "int32_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong, 
                    "uint32_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printLongLong, 
                    "int64_values_default_", indent_level + 1);        

                RTICdrType_printArray(
                    sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printUnsignedLongLong, 
                    "uint64_values_default_", indent_level + 1);        

                RTICdrType_printStringArray (
                    sample->string_values_default_, 
                    (3),       
                    "string_values_default_", indent_level + 1,
                    RTI_CDR_CHAR_TYPE);        

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            Arrays_Response_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            Arrays_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            Arrays_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    test_msgs::srv::dds_::Arrays_Response_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    test_msgs::srv::dds_::Arrays_Response_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            Arrays_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            Arrays_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ *sample,
                void *handle)
            {

                Arrays_Response__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            Arrays_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ *dst,
                const Arrays_Response_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return test_msgs::srv::dds_::Arrays_Response_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            Arrays_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            Arrays_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const Arrays_Response_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->bool_values_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->byte_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->char_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float32_values_, (3), RTI_CDR_FLOAT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float64_values_, (3), RTI_CDR_DOUBLE_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int16_values_, (3), RTI_CDR_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int32_values_, (3), RTI_CDR_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int64_values_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeStringArray(
                        stream,  (void*)sample->string_values_  ,
                        (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeNonPrimitiveArray(
                        stream,  (void*)sample->basic_types_values_,
                        (3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                        (RTICdrStreamSerializeFunction)test_msgs::msg::dds_::BasicTypes_Plugin_serialize,
                        RTI_FALSE,encapsulation_id, RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeNonPrimitiveArray(
                        stream,  (void*)sample->constants_values_,
                        (3), sizeof(test_msgs::msg::dds_::Constants_),
                        (RTICdrStreamSerializeFunction)test_msgs::msg::dds_::Constants_Plugin_serialize,
                        RTI_FALSE,encapsulation_id, RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeNonPrimitiveArray(
                        stream,  (void*)sample->defaults_values_,
                        (3), sizeof(test_msgs::msg::dds_::Defaults_),
                        (RTICdrStreamSerializeFunction)test_msgs::msg::dds_::Defaults_Plugin_serialize,
                        RTI_FALSE,encapsulation_id, RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->byte_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->char_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float32_values_default_, (3), RTI_CDR_FLOAT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->float64_values_default_, (3), RTI_CDR_DOUBLE_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int16_values_default_, (3), RTI_CDR_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int32_values_default_, (3), RTI_CDR_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeStringArray(
                        stream,  (void*)sample->string_values_default_  ,
                        (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            Arrays_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        test_msgs::srv::dds_::Arrays_Response__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->bool_values_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->byte_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->char_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float32_values_, (3), RTI_CDR_FLOAT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float64_values_, (3), RTI_CDR_DOUBLE_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint8_values_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int16_values_, (3), RTI_CDR_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int32_values_, (3), RTI_CDR_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int64_values_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeStringArrayEx(
                            stream,  (void*)sample->string_values_  ,
                            (3), (RTI_INT32_MAX-1) + 1,
                            RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeNonPrimitiveArray(
                            stream,  (void*)sample->basic_types_values_,
                            (3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                            (RTICdrStreamDeserializeFunction)test_msgs::msg::dds_::BasicTypes_Plugin_deserialize_sample,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeNonPrimitiveArray(
                            stream,  (void*)sample->constants_values_,
                            (3), sizeof(test_msgs::msg::dds_::Constants_),
                            (RTICdrStreamDeserializeFunction)test_msgs::msg::dds_::Constants_Plugin_deserialize_sample,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeNonPrimitiveArray(
                            stream,  (void*)sample->defaults_values_,
                            (3), sizeof(test_msgs::msg::dds_::Defaults_),
                            (RTICdrStreamDeserializeFunction)test_msgs::msg::dds_::Defaults_Plugin_deserialize_sample,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_data,endpoint_plugin_qos)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->byte_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->char_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float32_values_default_, (3), RTI_CDR_FLOAT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->float64_values_default_, (3), RTI_CDR_DOUBLE_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint8_values_default_, (3), RTI_CDR_OCTET_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int16_values_default_, (3), RTI_CDR_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int32_values_default_, (3), RTI_CDR_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeStringArrayEx(
                            stream,  (void*)sample->string_values_default_  ,
                            (3), (RTI_INT32_MAX-1) + 1,
                            RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                            goto fin; 
                        }

                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            Arrays_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const Arrays_Response_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                Arrays_Response_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    Arrays_Response_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = test_msgs::srv::dds_::Arrays_Response_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            Arrays_Response_Plugin_deserialize_from_cdr_buffer(
                Arrays_Response_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                Arrays_Response__finalize_optional_members(sample, RTI_TRUE);
                return Arrays_Response_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            Arrays_Response_Plugin_data_to_string(
                const Arrays_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!Arrays_Response_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!Arrays_Response_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    Arrays_Response__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            Arrays_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "Arrays_Response_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::srv::dds_::Arrays_Response_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "Arrays_Response_");

                }

                return result;

            }

            RTIBool Arrays_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_FLOAT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_DOUBLE_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipStringArray(
                        stream, (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipNonPrimitiveArray(
                        stream,(3), sizeof(test_msgs::msg::dds_::BasicTypes_),
                        (RTICdrStreamSkipFunction)test_msgs::msg::dds_::BasicTypes_Plugin_skip, 
                        RTI_FALSE,RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipNonPrimitiveArray(
                        stream,(3), sizeof(test_msgs::msg::dds_::Constants_),
                        (RTICdrStreamSkipFunction)test_msgs::msg::dds_::Constants_Plugin_skip, 
                        RTI_FALSE,RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipNonPrimitiveArray(
                        stream,(3), sizeof(test_msgs::msg::dds_::Defaults_),
                        (RTICdrStreamSkipFunction)test_msgs::msg::dds_::Defaults_Plugin_skip, 
                        RTI_FALSE,RTI_TRUE,
                        endpoint_data,endpoint_plugin_qos)){
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_BOOLEAN_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_FLOAT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_DOUBLE_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_OCTET_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipStringArray(
                        stream, (3), (RTI_INT32_MAX-1) + 1,
                        RTI_CDR_CHAR_TYPE)){
                        goto fin; 
                    }      
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            Arrays_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            Arrays_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Arrays_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            Arrays_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_BOOLEAN_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_FLOAT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_DOUBLE_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getStringArrayMaxSizeSerialized(
                    current_alignment, (3), 1, RTI_CDR_CHAR_TYPE);
                current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3),
                    test_msgs::msg::dds_::BasicTypes_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3),
                    test_msgs::msg::dds_::Constants_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3),
                    test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_min_size,
                    RTI_FALSE,encapsulation_id,endpoint_data);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_BOOLEAN_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_FLOAT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_DOUBLE_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_OCTET_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_SHORT_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);
                current_alignment +=RTICdrType_getStringArrayMaxSizeSerialized(
                    current_alignment, (3), 1, RTI_CDR_CHAR_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            Arrays_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const Arrays_Response_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_BOOLEAN_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_FLOAT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_DOUBLE_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);  

                current_alignment +=  RTICdrType_getStringArraySerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), (3),
                        (void *) sample->string_values_ , RTI_CDR_CHAR_TYPE);

                current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                    current_alignment, (3), 
                    sizeof(test_msgs::msg::dds_::BasicTypes_),
                    (RTICdrTypeGetSerializedSampleSizeFunction)test_msgs::msg::dds_::BasicTypes_Plugin_get_serialized_sample_size,
                    RTI_FALSE,encapsulation_id,
                    (void *)sample->basic_types_values_, endpoint_data);

                current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                    current_alignment, (3), 
                    sizeof(test_msgs::msg::dds_::Constants_),
                    (RTICdrTypeGetSerializedSampleSizeFunction)test_msgs::msg::dds_::Constants_Plugin_get_serialized_sample_size,
                    RTI_FALSE,encapsulation_id,
                    (void *)sample->constants_values_, endpoint_data);

                current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
                    current_alignment, (3), 
                    sizeof(test_msgs::msg::dds_::Defaults_),
                    (RTICdrTypeGetSerializedSampleSizeFunction)test_msgs::msg::dds_::Defaults_Plugin_get_serialized_sample_size,
                    RTI_FALSE,encapsulation_id,
                    (void *)sample->defaults_values_, endpoint_data);

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_BOOLEAN_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_FLOAT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_DOUBLE_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_OCTET_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_SHORT_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_LONG_LONG_TYPE);  

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (3), RTI_CDR_UNSIGNED_LONG_LONG_TYPE);  

                current_alignment +=  RTICdrType_getStringArraySerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), (3),
                        (void *) sample->string_values_default_ , RTI_CDR_CHAR_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            Arrays_Response_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            Arrays_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const Arrays_Response_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!test_msgs::srv::dds_::Arrays_Response_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool Arrays_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!test_msgs::srv::dds_::Arrays_Response_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool Arrays_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= test_msgs::srv::dds_::Arrays_Response_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            Arrays_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            Arrays_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = Arrays_Response_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            Arrays_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                Arrays_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!test_msgs::srv::dds_::Arrays_Response_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *Arrays_Response_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                test_msgs::srv::dds_::Arrays_Response_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                test_msgs::srv::dds_::Arrays_Response_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                test_msgs::srv::dds_::Arrays_Response_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                test_msgs::srv::dds_::Arrays_Response_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                Arrays_Response_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                Arrays_Response_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                Arrays_Response__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                Arrays_Response_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                Arrays_Response_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)test_msgs::srv::dds_::Arrays_Response__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                Arrays_Response_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                Arrays_Response_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                test_msgs::srv::dds_::Arrays_Response_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = Arrays_Response_TYPENAME;

                return plugin;
            }

            void
            Arrays_Response_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */
#undef RTI_CDR_CURRENT_SUBMODULE 
