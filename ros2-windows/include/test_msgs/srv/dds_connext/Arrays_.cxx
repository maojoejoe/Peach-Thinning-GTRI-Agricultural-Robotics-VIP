

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Arrays_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Arrays_.h"

#include <new>

namespace test_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Arrays_Request_TYPENAME = "test_msgs::srv::dds_::Arrays_Request_";

            DDS_TypeCode* Arrays_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Arrays_Request__g_tc_bool_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_byte_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_char_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_float32_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_float64_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int8_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint8_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int16_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint16_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int32_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint32_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int64_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint64_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_string_values__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Arrays_Request__g_tc_string_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_basic_types_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_constants_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_defaults_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_bool_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_byte_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_char_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_float32_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_float64_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int8_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint8_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int16_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint16_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int32_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint32_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_int64_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_uint64_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Request__g_tc_string_values_default__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Arrays_Request__g_tc_string_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode_Member Arrays_Request__g_tc_members[31]=
                {

                    {
                        (char *)"bool_values_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"byte_values_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"char_values_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float32_values_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float64_values_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int8_values_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint8_values_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int16_values_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint16_values_",/* Member name */
                        {
                            8,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int32_values_",/* Member name */
                        {
                            9,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint32_values_",/* Member name */
                        {
                            10,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int64_values_",/* Member name */
                        {
                            11,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint64_values_",/* Member name */
                        {
                            12,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"string_values_",/* Member name */
                        {
                            13,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"basic_types_values_",/* Member name */
                        {
                            14,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"constants_values_",/* Member name */
                        {
                            15,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"defaults_values_",/* Member name */
                        {
                            16,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"bool_values_default_",/* Member name */
                        {
                            17,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"byte_values_default_",/* Member name */
                        {
                            18,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"char_values_default_",/* Member name */
                        {
                            19,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float32_values_default_",/* Member name */
                        {
                            20,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float64_values_default_",/* Member name */
                        {
                            21,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int8_values_default_",/* Member name */
                        {
                            22,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint8_values_default_",/* Member name */
                        {
                            23,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int16_values_default_",/* Member name */
                        {
                            24,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint16_values_default_",/* Member name */
                        {
                            25,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int32_values_default_",/* Member name */
                        {
                            26,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint32_values_default_",/* Member name */
                        {
                            27,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int64_values_default_",/* Member name */
                        {
                            28,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint64_values_default_",/* Member name */
                        {
                            29,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"string_values_default_",/* Member name */
                        {
                            30,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Arrays_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::srv::dds_::Arrays_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        31, /* Number of members */
                        Arrays_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Arrays_Request_*/

                if (is_initialized) {
                    return &Arrays_Request__g_tc;
                }

                Arrays_Request__g_tc_bool_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_boolean;

                Arrays_Request__g_tc_byte_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_char_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_float32_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;

                Arrays_Request__g_tc_float64_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                Arrays_Request__g_tc_int8_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_uint8_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_int16_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;

                Arrays_Request__g_tc_uint16_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                Arrays_Request__g_tc_int32_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                Arrays_Request__g_tc_uint32_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                Arrays_Request__g_tc_int64_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_longlong;

                Arrays_Request__g_tc_uint64_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                Arrays_Request__g_tc_string_values__array._data._typeCode =(RTICdrTypeCode *)&Arrays_Request__g_tc_string_values__string;

                Arrays_Request__g_tc_basic_types_values__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::BasicTypes__get_typecode();

                Arrays_Request__g_tc_constants_values__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::Constants__get_typecode();

                Arrays_Request__g_tc_defaults_values__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::Defaults__get_typecode();

                Arrays_Request__g_tc_bool_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_boolean;

                Arrays_Request__g_tc_byte_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_char_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_float32_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;

                Arrays_Request__g_tc_float64_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                Arrays_Request__g_tc_int8_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_uint8_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Request__g_tc_int16_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;

                Arrays_Request__g_tc_uint16_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                Arrays_Request__g_tc_int32_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                Arrays_Request__g_tc_uint32_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                Arrays_Request__g_tc_int64_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_longlong;

                Arrays_Request__g_tc_uint64_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                Arrays_Request__g_tc_string_values_default__array._data._typeCode =(RTICdrTypeCode *)&Arrays_Request__g_tc_string_values_default__string;

                Arrays_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_bool_values__array;
                Arrays_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_byte_values__array;
                Arrays_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_char_values__array;
                Arrays_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_float32_values__array;
                Arrays_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_float64_values__array;
                Arrays_Request__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int8_values__array;
                Arrays_Request__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint8_values__array;
                Arrays_Request__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int16_values__array;
                Arrays_Request__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint16_values__array;
                Arrays_Request__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int32_values__array;
                Arrays_Request__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint32_values__array;
                Arrays_Request__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int64_values__array;
                Arrays_Request__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint64_values__array;
                Arrays_Request__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_string_values__array;
                Arrays_Request__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_basic_types_values__array;
                Arrays_Request__g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_constants_values__array;
                Arrays_Request__g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_defaults_values__array;
                Arrays_Request__g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_bool_values_default__array;
                Arrays_Request__g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_byte_values_default__array;
                Arrays_Request__g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_char_values_default__array;
                Arrays_Request__g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_float32_values_default__array;
                Arrays_Request__g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_float64_values_default__array;
                Arrays_Request__g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int8_values_default__array;
                Arrays_Request__g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint8_values_default__array;
                Arrays_Request__g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int16_values_default__array;
                Arrays_Request__g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint16_values_default__array;
                Arrays_Request__g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int32_values_default__array;
                Arrays_Request__g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint32_values_default__array;
                Arrays_Request__g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_int64_values_default__array;
                Arrays_Request__g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_uint64_values_default__array;
                Arrays_Request__g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Request__g_tc_string_values_default__array;

                is_initialized = RTI_TRUE;

                return &Arrays_Request__g_tc;
            }

            RTIBool Arrays_Request__initialize(
                Arrays_Request_* sample) {
                return test_msgs::srv::dds_::Arrays_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Arrays_Request__initialize_ex(
                Arrays_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::srv::dds_::Arrays_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Arrays_Request__initialize_w_params(
                Arrays_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->bool_values_, (3), RTI_CDR_BOOLEAN_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->byte_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->char_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float32_values_, (3), RTI_CDR_FLOAT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float64_values_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int8_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint8_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int16_values_, (3), RTI_CDR_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int32_values_, (3), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int64_values_, (3), RTI_CDR_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    if (!RTICdrType_initStringArray(sample->string_values_, (3),(0)+1,
                    RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                } else {
                    int i;    
                    DDS_Char ** elem =
                    (DDS_Char **)  &sample->string_values_;  
                    for (i=0;i < (int)((3));i++,++elem) {
                        if (*elem != NULL) {
                            *elem[0]   = '\0';
                        }
                    }
                }    

                {
                    int i = 0;
                    test_msgs::msg::dds_::BasicTypes_* elem =
                    (test_msgs::msg::dds_::BasicTypes_*) &sample->basic_types_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::BasicTypes__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Constants_* elem =
                    (test_msgs::msg::dds_::Constants_*) &sample->constants_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::Constants__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Defaults_* elem =
                    (test_msgs::msg::dds_::Defaults_*) &sample->defaults_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::Defaults__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                if (!RTICdrType_initArray(
                    sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->byte_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->char_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float32_values_default_, (3), RTI_CDR_FLOAT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float64_values_default_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int8_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint8_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int16_values_default_, (3), RTI_CDR_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int32_values_default_, (3), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    if (!RTICdrType_initStringArray(sample->string_values_default_, (3),(0)+1,
                    RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                } else {
                    int i;    
                    DDS_Char ** elem =
                    (DDS_Char **)  &sample->string_values_default_;  
                    for (i=0;i < (int)((3));i++,++elem) {
                        if (*elem != NULL) {
                            *elem[0]   = '\0';
                        }
                    }
                }    

                return RTI_TRUE;
            }

            void Arrays_Request__finalize(
                Arrays_Request_* sample)
            {

                test_msgs::srv::dds_::Arrays_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Arrays_Request__finalize_ex(
                Arrays_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::srv::dds_::Arrays_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Arrays_Request__finalize_w_params(
                Arrays_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                RTICdrType_finalizeStringArray(sample->string_values_, (3), RTI_CDR_CHAR_TYPE);

                {
                    int i = 0;
                    test_msgs::msg::dds_::BasicTypes_* elem =
                    (test_msgs::msg::dds_::BasicTypes_*) &sample->basic_types_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::BasicTypes__finalize_w_params(elem,deallocParams);
                    }
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Constants_* elem =
                    (test_msgs::msg::dds_::Constants_*) &sample->constants_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Constants__finalize_w_params(elem,deallocParams);
                    }
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Defaults_* elem =
                    (test_msgs::msg::dds_::Defaults_*) &sample->defaults_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Defaults__finalize_w_params(elem,deallocParams);
                    }
                }

                RTICdrType_finalizeStringArray(sample->string_values_default_, (3), RTI_CDR_CHAR_TYPE);

            }

            void Arrays_Request__finalize_optional_members(
                Arrays_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                {
                    int i = 0;
                    test_msgs::msg::dds_::BasicTypes_* elem =
                    (test_msgs::msg::dds_::BasicTypes_*) &sample->basic_types_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::BasicTypes__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Constants_* elem =
                    (test_msgs::msg::dds_::Constants_*) &sample->constants_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Constants__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Defaults_* elem =
                    (test_msgs::msg::dds_::Defaults_*) &sample->defaults_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Defaults__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
            }

            RTIBool Arrays_Request__copy(
                Arrays_Request_* dst,
                const Arrays_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        dst->bool_values_ ,src->bool_values_,(3), RTI_CDR_BOOLEAN_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->byte_values_ ,src->byte_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->char_values_ ,src->char_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float32_values_ ,src->float32_values_,(3), RTI_CDR_FLOAT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float64_values_ ,src->float64_values_,(3), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int8_values_ ,src->int8_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint8_values_ ,src->uint8_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int16_values_ ,src->int16_values_,(3), RTI_CDR_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint16_values_ ,src->uint16_values_,(3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int32_values_ ,src->int32_values_,(3), RTI_CDR_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint32_values_ ,src->uint32_values_,(3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int64_values_ ,src->int64_values_,(3), RTI_CDR_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint64_values_ ,src->uint64_values_,(3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringArrayEx(
                        dst->string_values_,  src->string_values_,        
                        (3),(RTI_INT32_MAX-1) + 1 ,
                        RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                        return RTI_FALSE;
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::BasicTypes_* elemOut = (test_msgs::msg::dds_::BasicTypes_*) &dst->basic_types_values_[0];
                        const test_msgs::msg::dds_::BasicTypes_* elemIn = (const test_msgs::msg::dds_::BasicTypes_*) &src->basic_types_values_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::BasicTypes__copy (elemOut,(const test_msgs::msg::dds_::BasicTypes_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::Constants_* elemOut = (test_msgs::msg::dds_::Constants_*) &dst->constants_values_[0];
                        const test_msgs::msg::dds_::Constants_* elemIn = (const test_msgs::msg::dds_::Constants_*) &src->constants_values_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::Constants__copy (elemOut,(const test_msgs::msg::dds_::Constants_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::Defaults_* elemOut = (test_msgs::msg::dds_::Defaults_*) &dst->defaults_values_[0];
                        const test_msgs::msg::dds_::Defaults_* elemIn = (const test_msgs::msg::dds_::Defaults_*) &src->defaults_values_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::Defaults__copy (elemOut,(const test_msgs::msg::dds_::Defaults_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    if (!RTICdrType_copyArray(
                        dst->bool_values_default_ ,src->bool_values_default_,(3), RTI_CDR_BOOLEAN_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->byte_values_default_ ,src->byte_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->char_values_default_ ,src->char_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float32_values_default_ ,src->float32_values_default_,(3), RTI_CDR_FLOAT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float64_values_default_ ,src->float64_values_default_,(3), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int8_values_default_ ,src->int8_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint8_values_default_ ,src->uint8_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int16_values_default_ ,src->int16_values_default_,(3), RTI_CDR_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint16_values_default_ ,src->uint16_values_default_,(3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int32_values_default_ ,src->int32_values_default_,(3), RTI_CDR_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint32_values_default_ ,src->uint32_values_default_,(3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int64_values_default_ ,src->int64_values_default_,(3), RTI_CDR_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint64_values_default_ ,src->uint64_values_default_,(3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringArrayEx(
                        dst->string_values_default_,  src->string_values_default_,        
                        (3),(RTI_INT32_MAX-1) + 1 ,
                        RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Arrays_Request_' sequence class.
            */
            #define T Arrays_Request_
            #define TSeq Arrays_Request_Seq

            #define T_initialize_w_params test_msgs::srv::dds_::Arrays_Request__initialize_w_params

            #define T_finalize_w_params   test_msgs::srv::dds_::Arrays_Request__finalize_w_params
            #define T_copy       test_msgs::srv::dds_::Arrays_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Arrays_Response_TYPENAME = "test_msgs::srv::dds_::Arrays_Response_";

            DDS_TypeCode* Arrays_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Arrays_Response__g_tc_bool_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_byte_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_char_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_float32_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_float64_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int8_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint8_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int16_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint16_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int32_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint32_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int64_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint64_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_string_values__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Arrays_Response__g_tc_string_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_basic_types_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_constants_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_defaults_values__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_bool_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_byte_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_char_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_float32_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_float64_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int8_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint8_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int16_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint16_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int32_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint32_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_int64_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_uint64_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode Arrays_Response__g_tc_string_values_default__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Arrays_Response__g_tc_string_values_default__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode_Member Arrays_Response__g_tc_members[31]=
                {

                    {
                        (char *)"bool_values_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"byte_values_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"char_values_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float32_values_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float64_values_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int8_values_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint8_values_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int16_values_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint16_values_",/* Member name */
                        {
                            8,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int32_values_",/* Member name */
                        {
                            9,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint32_values_",/* Member name */
                        {
                            10,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int64_values_",/* Member name */
                        {
                            11,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint64_values_",/* Member name */
                        {
                            12,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"string_values_",/* Member name */
                        {
                            13,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"basic_types_values_",/* Member name */
                        {
                            14,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"constants_values_",/* Member name */
                        {
                            15,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"defaults_values_",/* Member name */
                        {
                            16,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"bool_values_default_",/* Member name */
                        {
                            17,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"byte_values_default_",/* Member name */
                        {
                            18,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"char_values_default_",/* Member name */
                        {
                            19,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float32_values_default_",/* Member name */
                        {
                            20,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float64_values_default_",/* Member name */
                        {
                            21,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int8_values_default_",/* Member name */
                        {
                            22,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint8_values_default_",/* Member name */
                        {
                            23,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int16_values_default_",/* Member name */
                        {
                            24,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint16_values_default_",/* Member name */
                        {
                            25,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int32_values_default_",/* Member name */
                        {
                            26,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint32_values_default_",/* Member name */
                        {
                            27,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int64_values_default_",/* Member name */
                        {
                            28,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint64_values_default_",/* Member name */
                        {
                            29,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"string_values_default_",/* Member name */
                        {
                            30,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Arrays_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::srv::dds_::Arrays_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        31, /* Number of members */
                        Arrays_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Arrays_Response_*/

                if (is_initialized) {
                    return &Arrays_Response__g_tc;
                }

                Arrays_Response__g_tc_bool_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_boolean;

                Arrays_Response__g_tc_byte_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_char_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_float32_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;

                Arrays_Response__g_tc_float64_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                Arrays_Response__g_tc_int8_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_uint8_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_int16_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;

                Arrays_Response__g_tc_uint16_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                Arrays_Response__g_tc_int32_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                Arrays_Response__g_tc_uint32_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                Arrays_Response__g_tc_int64_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_longlong;

                Arrays_Response__g_tc_uint64_values__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                Arrays_Response__g_tc_string_values__array._data._typeCode =(RTICdrTypeCode *)&Arrays_Response__g_tc_string_values__string;

                Arrays_Response__g_tc_basic_types_values__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::BasicTypes__get_typecode();

                Arrays_Response__g_tc_constants_values__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::Constants__get_typecode();

                Arrays_Response__g_tc_defaults_values__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::Defaults__get_typecode();

                Arrays_Response__g_tc_bool_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_boolean;

                Arrays_Response__g_tc_byte_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_char_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_float32_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;

                Arrays_Response__g_tc_float64_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                Arrays_Response__g_tc_int8_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_uint8_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                Arrays_Response__g_tc_int16_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;

                Arrays_Response__g_tc_uint16_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                Arrays_Response__g_tc_int32_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                Arrays_Response__g_tc_uint32_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                Arrays_Response__g_tc_int64_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_longlong;

                Arrays_Response__g_tc_uint64_values_default__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                Arrays_Response__g_tc_string_values_default__array._data._typeCode =(RTICdrTypeCode *)&Arrays_Response__g_tc_string_values_default__string;

                Arrays_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_bool_values__array;
                Arrays_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_byte_values__array;
                Arrays_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_char_values__array;
                Arrays_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_float32_values__array;
                Arrays_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_float64_values__array;
                Arrays_Response__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int8_values__array;
                Arrays_Response__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint8_values__array;
                Arrays_Response__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int16_values__array;
                Arrays_Response__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint16_values__array;
                Arrays_Response__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int32_values__array;
                Arrays_Response__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint32_values__array;
                Arrays_Response__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int64_values__array;
                Arrays_Response__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint64_values__array;
                Arrays_Response__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_string_values__array;
                Arrays_Response__g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_basic_types_values__array;
                Arrays_Response__g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_constants_values__array;
                Arrays_Response__g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_defaults_values__array;
                Arrays_Response__g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_bool_values_default__array;
                Arrays_Response__g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_byte_values_default__array;
                Arrays_Response__g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_char_values_default__array;
                Arrays_Response__g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_float32_values_default__array;
                Arrays_Response__g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_float64_values_default__array;
                Arrays_Response__g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int8_values_default__array;
                Arrays_Response__g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint8_values_default__array;
                Arrays_Response__g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int16_values_default__array;
                Arrays_Response__g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint16_values_default__array;
                Arrays_Response__g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int32_values_default__array;
                Arrays_Response__g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint32_values_default__array;
                Arrays_Response__g_tc_members[28]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_int64_values_default__array;
                Arrays_Response__g_tc_members[29]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_uint64_values_default__array;
                Arrays_Response__g_tc_members[30]._representation._typeCode = (RTICdrTypeCode *)& Arrays_Response__g_tc_string_values_default__array;

                is_initialized = RTI_TRUE;

                return &Arrays_Response__g_tc;
            }

            RTIBool Arrays_Response__initialize(
                Arrays_Response_* sample) {
                return test_msgs::srv::dds_::Arrays_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Arrays_Response__initialize_ex(
                Arrays_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::srv::dds_::Arrays_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Arrays_Response__initialize_w_params(
                Arrays_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    sample->bool_values_, (3), RTI_CDR_BOOLEAN_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->byte_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->char_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float32_values_, (3), RTI_CDR_FLOAT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float64_values_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int8_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint8_values_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int16_values_, (3), RTI_CDR_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint16_values_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int32_values_, (3), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint32_values_, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int64_values_, (3), RTI_CDR_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint64_values_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    if (!RTICdrType_initStringArray(sample->string_values_, (3),(0)+1,
                    RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                } else {
                    int i;    
                    DDS_Char ** elem =
                    (DDS_Char **)  &sample->string_values_;  
                    for (i=0;i < (int)((3));i++,++elem) {
                        if (*elem != NULL) {
                            *elem[0]   = '\0';
                        }
                    }
                }    

                {
                    int i = 0;
                    test_msgs::msg::dds_::BasicTypes_* elem =
                    (test_msgs::msg::dds_::BasicTypes_*) &sample->basic_types_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::BasicTypes__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Constants_* elem =
                    (test_msgs::msg::dds_::Constants_*) &sample->constants_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::Constants__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Defaults_* elem =
                    (test_msgs::msg::dds_::Defaults_*) &sample->defaults_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::Defaults__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                if (!RTICdrType_initArray(
                    sample->bool_values_default_, (3), RTI_CDR_BOOLEAN_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->byte_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->char_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float32_values_default_, (3), RTI_CDR_FLOAT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->float64_values_default_, (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int8_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint8_values_default_, (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int16_values_default_, (3), RTI_CDR_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint16_values_default_, (3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int32_values_default_, (3), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint32_values_default_, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->int64_values_default_, (3), RTI_CDR_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->uint64_values_default_, (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    if (!RTICdrType_initStringArray(sample->string_values_default_, (3),(0)+1,
                    RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                } else {
                    int i;    
                    DDS_Char ** elem =
                    (DDS_Char **)  &sample->string_values_default_;  
                    for (i=0;i < (int)((3));i++,++elem) {
                        if (*elem != NULL) {
                            *elem[0]   = '\0';
                        }
                    }
                }    

                return RTI_TRUE;
            }

            void Arrays_Response__finalize(
                Arrays_Response_* sample)
            {

                test_msgs::srv::dds_::Arrays_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Arrays_Response__finalize_ex(
                Arrays_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::srv::dds_::Arrays_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Arrays_Response__finalize_w_params(
                Arrays_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                RTICdrType_finalizeStringArray(sample->string_values_, (3), RTI_CDR_CHAR_TYPE);

                {
                    int i = 0;
                    test_msgs::msg::dds_::BasicTypes_* elem =
                    (test_msgs::msg::dds_::BasicTypes_*) &sample->basic_types_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::BasicTypes__finalize_w_params(elem,deallocParams);
                    }
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Constants_* elem =
                    (test_msgs::msg::dds_::Constants_*) &sample->constants_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Constants__finalize_w_params(elem,deallocParams);
                    }
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Defaults_* elem =
                    (test_msgs::msg::dds_::Defaults_*) &sample->defaults_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Defaults__finalize_w_params(elem,deallocParams);
                    }
                }

                RTICdrType_finalizeStringArray(sample->string_values_default_, (3), RTI_CDR_CHAR_TYPE);

            }

            void Arrays_Response__finalize_optional_members(
                Arrays_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                {
                    int i = 0;
                    test_msgs::msg::dds_::BasicTypes_* elem =
                    (test_msgs::msg::dds_::BasicTypes_*) &sample->basic_types_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::BasicTypes__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Constants_* elem =
                    (test_msgs::msg::dds_::Constants_*) &sample->constants_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Constants__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::Defaults_* elem =
                    (test_msgs::msg::dds_::Defaults_*) &sample->defaults_values_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Defaults__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
            }

            RTIBool Arrays_Response__copy(
                Arrays_Response_* dst,
                const Arrays_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        dst->bool_values_ ,src->bool_values_,(3), RTI_CDR_BOOLEAN_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->byte_values_ ,src->byte_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->char_values_ ,src->char_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float32_values_ ,src->float32_values_,(3), RTI_CDR_FLOAT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float64_values_ ,src->float64_values_,(3), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int8_values_ ,src->int8_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint8_values_ ,src->uint8_values_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int16_values_ ,src->int16_values_,(3), RTI_CDR_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint16_values_ ,src->uint16_values_,(3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int32_values_ ,src->int32_values_,(3), RTI_CDR_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint32_values_ ,src->uint32_values_,(3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int64_values_ ,src->int64_values_,(3), RTI_CDR_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint64_values_ ,src->uint64_values_,(3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringArrayEx(
                        dst->string_values_,  src->string_values_,        
                        (3),(RTI_INT32_MAX-1) + 1 ,
                        RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                        return RTI_FALSE;
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::BasicTypes_* elemOut = (test_msgs::msg::dds_::BasicTypes_*) &dst->basic_types_values_[0];
                        const test_msgs::msg::dds_::BasicTypes_* elemIn = (const test_msgs::msg::dds_::BasicTypes_*) &src->basic_types_values_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::BasicTypes__copy (elemOut,(const test_msgs::msg::dds_::BasicTypes_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::Constants_* elemOut = (test_msgs::msg::dds_::Constants_*) &dst->constants_values_[0];
                        const test_msgs::msg::dds_::Constants_* elemIn = (const test_msgs::msg::dds_::Constants_*) &src->constants_values_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::Constants__copy (elemOut,(const test_msgs::msg::dds_::Constants_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::Defaults_* elemOut = (test_msgs::msg::dds_::Defaults_*) &dst->defaults_values_[0];
                        const test_msgs::msg::dds_::Defaults_* elemIn = (const test_msgs::msg::dds_::Defaults_*) &src->defaults_values_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::Defaults__copy (elemOut,(const test_msgs::msg::dds_::Defaults_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    if (!RTICdrType_copyArray(
                        dst->bool_values_default_ ,src->bool_values_default_,(3), RTI_CDR_BOOLEAN_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->byte_values_default_ ,src->byte_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->char_values_default_ ,src->char_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float32_values_default_ ,src->float32_values_default_,(3), RTI_CDR_FLOAT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->float64_values_default_ ,src->float64_values_default_,(3), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int8_values_default_ ,src->int8_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint8_values_default_ ,src->uint8_values_default_,(3), RTI_CDR_OCTET_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int16_values_default_ ,src->int16_values_default_,(3), RTI_CDR_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint16_values_default_ ,src->uint16_values_default_,(3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int32_values_default_ ,src->int32_values_default_,(3), RTI_CDR_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint32_values_default_ ,src->uint32_values_default_,(3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->int64_values_default_ ,src->int64_values_default_,(3), RTI_CDR_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->uint64_values_default_ ,src->uint64_values_default_,(3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringArrayEx(
                        dst->string_values_default_,  src->string_values_default_,        
                        (3),(RTI_INT32_MAX-1) + 1 ,
                        RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Arrays_Response_' sequence class.
            */
            #define T Arrays_Response_
            #define TSeq Arrays_Response_Seq

            #define T_initialize_w_params test_msgs::srv::dds_::Arrays_Response__initialize_w_params

            #define T_finalize_w_params   test_msgs::srv::dds_::Arrays_Response__finalize_w_params
            #define T_copy       test_msgs::srv::dds_::Arrays_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */

