

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WStrings_.idl using "rtiddsgen".
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

#include "WStrings_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *WStrings_TYPENAME = "test_msgs::msg::dds_::WStrings_";

            DDS_TypeCode* WStrings__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode WStrings__g_tc_wstring_value__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_wstring_value_default1__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_wstring_value_default2__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_wstring_value_default3__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_array_of_wstrings__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_array_of_wstrings__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode WStrings__g_tc_bounded_sequence_of_wstrings__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_bounded_sequence_of_wstrings__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
                static DDS_TypeCode WStrings__g_tc_unbounded_sequence_of_wstrings__string = DDS_INITIALIZE_WSTRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode WStrings__g_tc_unbounded_sequence_of_wstrings__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member WStrings__g_tc_members[7]=
                {

                    {
                        (char *)"wstring_value_",/* Member name */
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
                        (char *)"wstring_value_default1_",/* Member name */
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
                        (char *)"wstring_value_default2_",/* Member name */
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
                        (char *)"wstring_value_default3_",/* Member name */
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
                        (char *)"array_of_wstrings_",/* Member name */
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
                        (char *)"bounded_sequence_of_wstrings_",/* Member name */
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
                        (char *)"unbounded_sequence_of_wstrings_",/* Member name */
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
                    }
                };

                static DDS_TypeCode WStrings__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::WStrings_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        WStrings__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for WStrings_*/

                if (is_initialized) {
                    return &WStrings__g_tc;
                }

                WStrings__g_tc_array_of_wstrings__array._data._typeCode =(RTICdrTypeCode *)&WStrings__g_tc_array_of_wstrings__string;

                WStrings__g_tc_bounded_sequence_of_wstrings__sequence._data._typeCode = (RTICdrTypeCode *)&WStrings__g_tc_bounded_sequence_of_wstrings__string;

                WStrings__g_tc_unbounded_sequence_of_wstrings__sequence._data._typeCode = (RTICdrTypeCode *)&WStrings__g_tc_unbounded_sequence_of_wstrings__string;

                WStrings__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&WStrings__g_tc_wstring_value__string;

                WStrings__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&WStrings__g_tc_wstring_value_default1__string;

                WStrings__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&WStrings__g_tc_wstring_value_default2__string;

                WStrings__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&WStrings__g_tc_wstring_value_default3__string;

                WStrings__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& WStrings__g_tc_array_of_wstrings__array;
                WStrings__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& WStrings__g_tc_bounded_sequence_of_wstrings__sequence;
                WStrings__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& WStrings__g_tc_unbounded_sequence_of_wstrings__sequence;

                is_initialized = RTI_TRUE;

                return &WStrings__g_tc;
            }

            RTIBool WStrings__initialize(
                WStrings_* sample) {
                return test_msgs::msg::dds_::WStrings__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool WStrings__initialize_ex(
                WStrings_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::WStrings__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool WStrings__initialize_w_params(
                WStrings_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->wstring_value_= DDS_Wstring_alloc ((0));
                    if (sample->wstring_value_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->wstring_value_!= NULL) { 
                        sample->wstring_value_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->wstring_value_default1_= DDS_Wstring_alloc ((0));
                    if (sample->wstring_value_default1_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->wstring_value_default1_!= NULL) { 
                        sample->wstring_value_default1_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->wstring_value_default2_= DDS_Wstring_alloc ((0));
                    if (sample->wstring_value_default2_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->wstring_value_default2_!= NULL) { 
                        sample->wstring_value_default2_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->wstring_value_default3_= DDS_Wstring_alloc ((0));
                    if (sample->wstring_value_default3_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->wstring_value_default3_!= NULL) { 
                        sample->wstring_value_default3_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    if (!RTICdrType_initStringArray(sample->array_of_wstrings_, (3),(0)+1,
                    RTI_CDR_WCHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                } else {
                    int i;    
                    DDS_Wchar ** elem =
                    (DDS_Wchar **)  &sample->array_of_wstrings_;  
                    for (i=0;i < (int)((3));i++,++elem) {
                        if (*elem != NULL) {
                            *elem[0]   = '\0';
                        }
                    }
                }    

                if (allocParams->allocate_memory) {
                    DDS_WstringSeq_initialize(&sample->bounded_sequence_of_wstrings_  );
                    DDS_WstringSeq_set_absolute_maximum(&sample->bounded_sequence_of_wstrings_ , (3));
                    if (!DDS_WstringSeq_set_maximum(&sample->bounded_sequence_of_wstrings_ , (3))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_WstringSeq_get_contiguous_bufferI(
                        &sample->bounded_sequence_of_wstrings_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (3),
                        (0)+1,
                        RTI_CDR_WCHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_WstringSeq_set_length(&sample->bounded_sequence_of_wstrings_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_WstringSeq_initialize(&sample->unbounded_sequence_of_wstrings_  );
                    DDS_WstringSeq_set_absolute_maximum(&sample->unbounded_sequence_of_wstrings_ , RTI_INT32_MAX);
                    if (!DDS_WstringSeq_set_maximum(&sample->unbounded_sequence_of_wstrings_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_WstringSeq_get_contiguous_bufferI(
                        &sample->unbounded_sequence_of_wstrings_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_WCHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_WstringSeq_set_length(&sample->unbounded_sequence_of_wstrings_, 0);
                }
                return RTI_TRUE;
            }

            void WStrings__finalize(
                WStrings_* sample)
            {

                test_msgs::msg::dds_::WStrings__finalize_ex(sample,RTI_TRUE);
            }

            void WStrings__finalize_ex(
                WStrings_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::WStrings__finalize_w_params(
                    sample,&deallocParams);
            }

            void WStrings__finalize_w_params(
                WStrings_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->wstring_value_ != NULL) {
                    DDS_Wstring_free(sample->wstring_value_);
                    sample->wstring_value_=NULL;

                }
                if (sample->wstring_value_default1_ != NULL) {
                    DDS_Wstring_free(sample->wstring_value_default1_);
                    sample->wstring_value_default1_=NULL;

                }
                if (sample->wstring_value_default2_ != NULL) {
                    DDS_Wstring_free(sample->wstring_value_default2_);
                    sample->wstring_value_default2_=NULL;

                }
                if (sample->wstring_value_default3_ != NULL) {
                    DDS_Wstring_free(sample->wstring_value_default3_);
                    sample->wstring_value_default3_=NULL;

                }
                RTICdrType_finalizeStringArray(sample->array_of_wstrings_, (3), RTI_CDR_WCHAR_TYPE);

                DDS_WstringSeq_finalize(&sample->bounded_sequence_of_wstrings_);

                DDS_WstringSeq_finalize(&sample->unbounded_sequence_of_wstrings_);

            }

            void WStrings__finalize_optional_members(
                WStrings_* sample, RTIBool deletePointers)
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

            RTIBool WStrings__copy(
                WStrings_* dst,
                const WStrings_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyWstringEx (
                        &dst->wstring_value_, src->wstring_value_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyWstringEx (
                        &dst->wstring_value_default1_, src->wstring_value_default1_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyWstringEx (
                        &dst->wstring_value_default2_, src->wstring_value_default2_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyWstringEx (
                        &dst->wstring_value_default3_, src->wstring_value_default3_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringArrayEx(
                        dst->array_of_wstrings_,  src->array_of_wstrings_,        
                        (3),(RTI_INT32_MAX-1) + 1 ,
                        RTI_CDR_WCHAR_TYPE,RTI_TRUE)) {
                        return RTI_FALSE;
                    }
                    if (!DDS_WstringSeq_copy(&dst->bounded_sequence_of_wstrings_ ,
                    &src->bounded_sequence_of_wstrings_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_WstringSeq_copy(&dst->unbounded_sequence_of_wstrings_ ,
                    &src->unbounded_sequence_of_wstrings_ )) {
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
            * Configure and implement 'WStrings_' sequence class.
            */
            #define T WStrings_
            #define TSeq WStrings_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::WStrings__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::WStrings__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::WStrings__copy

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

