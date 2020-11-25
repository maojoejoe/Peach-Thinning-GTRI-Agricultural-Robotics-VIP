

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Strings_.idl using "rtiddsgen".
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

#include "Strings_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {
            namespace Strings_Constants {
            } /* namespace Strings_Constants  */

            /* ========================================================================= */
            const char *Strings_TYPENAME = "test_msgs::msg::dds_::Strings_";

            DDS_TypeCode* Strings__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Strings__g_tc_string_value__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Strings__g_tc_string_value_default1__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Strings__g_tc_string_value_default2__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Strings__g_tc_string_value_default3__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Strings__g_tc_string_value_default4__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Strings__g_tc_string_value_default5__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Strings__g_tc_bounded_string_value__string = DDS_INITIALIZE_STRING_TYPECODE((22));
                static DDS_TypeCode Strings__g_tc_bounded_string_value_default1__string = DDS_INITIALIZE_STRING_TYPECODE((22));
                static DDS_TypeCode Strings__g_tc_bounded_string_value_default2__string = DDS_INITIALIZE_STRING_TYPECODE((22));
                static DDS_TypeCode Strings__g_tc_bounded_string_value_default3__string = DDS_INITIALIZE_STRING_TYPECODE((22));
                static DDS_TypeCode Strings__g_tc_bounded_string_value_default4__string = DDS_INITIALIZE_STRING_TYPECODE((22));
                static DDS_TypeCode Strings__g_tc_bounded_string_value_default5__string = DDS_INITIALIZE_STRING_TYPECODE((22));
                static DDS_TypeCode_Member Strings__g_tc_members[12]=
                {

                    {
                        (char *)"string_value_",/* Member name */
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
                        (char *)"string_value_default1_",/* Member name */
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
                        (char *)"string_value_default2_",/* Member name */
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
                        (char *)"string_value_default3_",/* Member name */
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
                        (char *)"string_value_default4_",/* Member name */
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
                        (char *)"string_value_default5_",/* Member name */
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
                        (char *)"bounded_string_value_",/* Member name */
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
                        (char *)"bounded_string_value_default1_",/* Member name */
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
                        (char *)"bounded_string_value_default2_",/* Member name */
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
                        (char *)"bounded_string_value_default3_",/* Member name */
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
                        (char *)"bounded_string_value_default4_",/* Member name */
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
                        (char *)"bounded_string_value_default5_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Strings__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::Strings_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        12, /* Number of members */
                        Strings__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Strings_*/

                if (is_initialized) {
                    return &Strings__g_tc;
                }

                Strings__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_string_value__string;

                Strings__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_string_value_default1__string;

                Strings__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_string_value_default2__string;

                Strings__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_string_value_default3__string;

                Strings__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_string_value_default4__string;

                Strings__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_string_value_default5__string;

                Strings__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_bounded_string_value__string;

                Strings__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_bounded_string_value_default1__string;

                Strings__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_bounded_string_value_default2__string;

                Strings__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_bounded_string_value_default3__string;

                Strings__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_bounded_string_value_default4__string;

                Strings__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&Strings__g_tc_bounded_string_value_default5__string;

                is_initialized = RTI_TRUE;

                return &Strings__g_tc;
            }

            RTIBool Strings__initialize(
                Strings_* sample) {
                return test_msgs::msg::dds_::Strings__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Strings__initialize_ex(
                Strings_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::Strings__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Strings__initialize_w_params(
                Strings_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->string_value_= DDS_String_alloc ((0));
                    if (sample->string_value_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_!= NULL) { 
                        sample->string_value_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->string_value_default1_= DDS_String_alloc ((0));
                    if (sample->string_value_default1_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_default1_!= NULL) { 
                        sample->string_value_default1_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->string_value_default2_= DDS_String_alloc ((0));
                    if (sample->string_value_default2_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_default2_!= NULL) { 
                        sample->string_value_default2_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->string_value_default3_= DDS_String_alloc ((0));
                    if (sample->string_value_default3_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_default3_!= NULL) { 
                        sample->string_value_default3_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->string_value_default4_= DDS_String_alloc ((0));
                    if (sample->string_value_default4_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_default4_!= NULL) { 
                        sample->string_value_default4_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->string_value_default5_= DDS_String_alloc ((0));
                    if (sample->string_value_default5_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_default5_!= NULL) { 
                        sample->string_value_default5_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->bounded_string_value_= DDS_String_alloc ((22));
                    if (sample->bounded_string_value_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->bounded_string_value_!= NULL) { 
                        sample->bounded_string_value_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->bounded_string_value_default1_= DDS_String_alloc ((22));
                    if (sample->bounded_string_value_default1_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->bounded_string_value_default1_!= NULL) { 
                        sample->bounded_string_value_default1_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->bounded_string_value_default2_= DDS_String_alloc ((22));
                    if (sample->bounded_string_value_default2_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->bounded_string_value_default2_!= NULL) { 
                        sample->bounded_string_value_default2_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->bounded_string_value_default3_= DDS_String_alloc ((22));
                    if (sample->bounded_string_value_default3_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->bounded_string_value_default3_!= NULL) { 
                        sample->bounded_string_value_default3_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->bounded_string_value_default4_= DDS_String_alloc ((22));
                    if (sample->bounded_string_value_default4_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->bounded_string_value_default4_!= NULL) { 
                        sample->bounded_string_value_default4_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->bounded_string_value_default5_= DDS_String_alloc ((22));
                    if (sample->bounded_string_value_default5_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->bounded_string_value_default5_!= NULL) { 
                        sample->bounded_string_value_default5_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void Strings__finalize(
                Strings_* sample)
            {

                test_msgs::msg::dds_::Strings__finalize_ex(sample,RTI_TRUE);
            }

            void Strings__finalize_ex(
                Strings_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::Strings__finalize_w_params(
                    sample,&deallocParams);
            }

            void Strings__finalize_w_params(
                Strings_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->string_value_ != NULL) {
                    DDS_String_free(sample->string_value_);
                    sample->string_value_=NULL;

                }
                if (sample->string_value_default1_ != NULL) {
                    DDS_String_free(sample->string_value_default1_);
                    sample->string_value_default1_=NULL;

                }
                if (sample->string_value_default2_ != NULL) {
                    DDS_String_free(sample->string_value_default2_);
                    sample->string_value_default2_=NULL;

                }
                if (sample->string_value_default3_ != NULL) {
                    DDS_String_free(sample->string_value_default3_);
                    sample->string_value_default3_=NULL;

                }
                if (sample->string_value_default4_ != NULL) {
                    DDS_String_free(sample->string_value_default4_);
                    sample->string_value_default4_=NULL;

                }
                if (sample->string_value_default5_ != NULL) {
                    DDS_String_free(sample->string_value_default5_);
                    sample->string_value_default5_=NULL;

                }
                if (sample->bounded_string_value_ != NULL) {
                    DDS_String_free(sample->bounded_string_value_);
                    sample->bounded_string_value_=NULL;

                }
                if (sample->bounded_string_value_default1_ != NULL) {
                    DDS_String_free(sample->bounded_string_value_default1_);
                    sample->bounded_string_value_default1_=NULL;

                }
                if (sample->bounded_string_value_default2_ != NULL) {
                    DDS_String_free(sample->bounded_string_value_default2_);
                    sample->bounded_string_value_default2_=NULL;

                }
                if (sample->bounded_string_value_default3_ != NULL) {
                    DDS_String_free(sample->bounded_string_value_default3_);
                    sample->bounded_string_value_default3_=NULL;

                }
                if (sample->bounded_string_value_default4_ != NULL) {
                    DDS_String_free(sample->bounded_string_value_default4_);
                    sample->bounded_string_value_default4_=NULL;

                }
                if (sample->bounded_string_value_default5_ != NULL) {
                    DDS_String_free(sample->bounded_string_value_default5_);
                    sample->bounded_string_value_default5_=NULL;

                }
            }

            void Strings__finalize_optional_members(
                Strings_* sample, RTIBool deletePointers)
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

            }

            RTIBool Strings__copy(
                Strings_* dst,
                const Strings_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_, src->string_value_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_default1_, src->string_value_default1_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_default2_, src->string_value_default2_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_default3_, src->string_value_default3_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_default4_, src->string_value_default4_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_default5_, src->string_value_default5_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->bounded_string_value_, src->bounded_string_value_, 
                        (22) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->bounded_string_value_default1_, src->bounded_string_value_default1_, 
                        (22) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->bounded_string_value_default2_, src->bounded_string_value_default2_, 
                        (22) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->bounded_string_value_default3_, src->bounded_string_value_default3_, 
                        (22) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->bounded_string_value_default4_, src->bounded_string_value_default4_, 
                        (22) + 1, RTI_FALSE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->bounded_string_value_default5_, src->bounded_string_value_default5_, 
                        (22) + 1, RTI_FALSE)){
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
            * Configure and implement 'Strings_' sequence class.
            */
            #define T Strings_
            #define TSeq Strings_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::Strings__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::Strings__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::Strings__copy

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
    } /* namespace msg  */
} /* namespace test_msgs  */

