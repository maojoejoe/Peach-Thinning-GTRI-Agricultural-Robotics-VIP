

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiNested_.idl using "rtiddsgen".
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

#include "MultiNested_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MultiNested_TYPENAME = "test_msgs::msg::dds_::MultiNested_";

            DDS_TypeCode* MultiNested__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MultiNested__g_tc_array_of_arrays__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode MultiNested__g_tc_array_of_bounded_sequences__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode MultiNested__g_tc_array_of_unbounded_sequences__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);
                static DDS_TypeCode MultiNested__g_tc_bounded_sequence_of_arrays__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
                static DDS_TypeCode MultiNested__g_tc_bounded_sequence_of_bounded_sequences__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
                static DDS_TypeCode MultiNested__g_tc_bounded_sequence_of_unbounded_sequences__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);
                static DDS_TypeCode MultiNested__g_tc_unbounded_sequence_of_arrays__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiNested__g_tc_unbounded_sequence_of_bounded_sequences__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiNested__g_tc_unbounded_sequence_of_unbounded_sequences__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MultiNested__g_tc_members[9]=
                {

                    {
                        (char *)"array_of_arrays_",/* Member name */
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
                        (char *)"array_of_bounded_sequences_",/* Member name */
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
                        (char *)"array_of_unbounded_sequences_",/* Member name */
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
                        (char *)"bounded_sequence_of_arrays_",/* Member name */
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
                        (char *)"bounded_sequence_of_bounded_sequences_",/* Member name */
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
                        (char *)"bounded_sequence_of_unbounded_sequences_",/* Member name */
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
                        (char *)"unbounded_sequence_of_arrays_",/* Member name */
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
                        (char *)"unbounded_sequence_of_bounded_sequences_",/* Member name */
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
                        (char *)"unbounded_sequence_of_unbounded_sequences_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MultiNested__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::MultiNested_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        9, /* Number of members */
                        MultiNested__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MultiNested_*/

                if (is_initialized) {
                    return &MultiNested__g_tc;
                }

                MultiNested__g_tc_array_of_arrays__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::Arrays__get_typecode();

                MultiNested__g_tc_array_of_bounded_sequences__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::BoundedSequences__get_typecode();

                MultiNested__g_tc_array_of_unbounded_sequences__array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::UnboundedSequences__get_typecode();

                MultiNested__g_tc_bounded_sequence_of_arrays__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Arrays__get_typecode();

                MultiNested__g_tc_bounded_sequence_of_bounded_sequences__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::BoundedSequences__get_typecode();

                MultiNested__g_tc_bounded_sequence_of_unbounded_sequences__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::UnboundedSequences__get_typecode();

                MultiNested__g_tc_unbounded_sequence_of_arrays__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Arrays__get_typecode();

                MultiNested__g_tc_unbounded_sequence_of_bounded_sequences__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::BoundedSequences__get_typecode();

                MultiNested__g_tc_unbounded_sequence_of_unbounded_sequences__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::UnboundedSequences__get_typecode();

                MultiNested__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_array_of_arrays__array;
                MultiNested__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_array_of_bounded_sequences__array;
                MultiNested__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_array_of_unbounded_sequences__array;
                MultiNested__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_bounded_sequence_of_arrays__sequence;
                MultiNested__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_bounded_sequence_of_bounded_sequences__sequence;
                MultiNested__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_bounded_sequence_of_unbounded_sequences__sequence;
                MultiNested__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_unbounded_sequence_of_arrays__sequence;
                MultiNested__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_unbounded_sequence_of_bounded_sequences__sequence;
                MultiNested__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& MultiNested__g_tc_unbounded_sequence_of_unbounded_sequences__sequence;

                is_initialized = RTI_TRUE;

                return &MultiNested__g_tc;
            }

            RTIBool MultiNested__initialize(
                MultiNested_* sample) {
                return test_msgs::msg::dds_::MultiNested__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MultiNested__initialize_ex(
                MultiNested_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::MultiNested__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MultiNested__initialize_w_params(
                MultiNested_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Arrays_* elem =
                    (test_msgs::msg::dds_::Arrays_*) &sample->array_of_arrays_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::Arrays__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::BoundedSequences_* elem =
                    (test_msgs::msg::dds_::BoundedSequences_*) &sample->array_of_bounded_sequences_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::BoundedSequences__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::UnboundedSequences_* elem =
                    (test_msgs::msg::dds_::UnboundedSequences_*) &sample->array_of_unbounded_sequences_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::UnboundedSequences__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::Arrays_Seq_initialize(&sample->bounded_sequence_of_arrays_ );
                    test_msgs::msg::dds_::Arrays_Seq_set_element_allocation_params(&sample->bounded_sequence_of_arrays_ ,allocParams);
                    test_msgs::msg::dds_::Arrays_Seq_set_absolute_maximum(&sample->bounded_sequence_of_arrays_ , (3));
                    if (!test_msgs::msg::dds_::Arrays_Seq_set_maximum(&sample->bounded_sequence_of_arrays_, (3))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::Arrays_Seq_set_length(&sample->bounded_sequence_of_arrays_, 0);
                }
                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::BoundedSequences_Seq_initialize(&sample->bounded_sequence_of_bounded_sequences_ );
                    test_msgs::msg::dds_::BoundedSequences_Seq_set_element_allocation_params(&sample->bounded_sequence_of_bounded_sequences_ ,allocParams);
                    test_msgs::msg::dds_::BoundedSequences_Seq_set_absolute_maximum(&sample->bounded_sequence_of_bounded_sequences_ , (3));
                    if (!test_msgs::msg::dds_::BoundedSequences_Seq_set_maximum(&sample->bounded_sequence_of_bounded_sequences_, (3))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::BoundedSequences_Seq_set_length(&sample->bounded_sequence_of_bounded_sequences_, 0);
                }
                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::UnboundedSequences_Seq_initialize(&sample->bounded_sequence_of_unbounded_sequences_ );
                    test_msgs::msg::dds_::UnboundedSequences_Seq_set_element_allocation_params(&sample->bounded_sequence_of_unbounded_sequences_ ,allocParams);
                    test_msgs::msg::dds_::UnboundedSequences_Seq_set_absolute_maximum(&sample->bounded_sequence_of_unbounded_sequences_ , (3));
                    if (!test_msgs::msg::dds_::UnboundedSequences_Seq_set_maximum(&sample->bounded_sequence_of_unbounded_sequences_, (3))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::UnboundedSequences_Seq_set_length(&sample->bounded_sequence_of_unbounded_sequences_, 0);
                }
                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::Arrays_Seq_initialize(&sample->unbounded_sequence_of_arrays_ );
                    test_msgs::msg::dds_::Arrays_Seq_set_element_allocation_params(&sample->unbounded_sequence_of_arrays_ ,allocParams);
                    test_msgs::msg::dds_::Arrays_Seq_set_absolute_maximum(&sample->unbounded_sequence_of_arrays_ , RTI_INT32_MAX);
                    if (!test_msgs::msg::dds_::Arrays_Seq_set_maximum(&sample->unbounded_sequence_of_arrays_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::Arrays_Seq_set_length(&sample->unbounded_sequence_of_arrays_, 0);
                }
                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::BoundedSequences_Seq_initialize(&sample->unbounded_sequence_of_bounded_sequences_ );
                    test_msgs::msg::dds_::BoundedSequences_Seq_set_element_allocation_params(&sample->unbounded_sequence_of_bounded_sequences_ ,allocParams);
                    test_msgs::msg::dds_::BoundedSequences_Seq_set_absolute_maximum(&sample->unbounded_sequence_of_bounded_sequences_ , RTI_INT32_MAX);
                    if (!test_msgs::msg::dds_::BoundedSequences_Seq_set_maximum(&sample->unbounded_sequence_of_bounded_sequences_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::BoundedSequences_Seq_set_length(&sample->unbounded_sequence_of_bounded_sequences_, 0);
                }
                if (allocParams->allocate_memory) {
                    test_msgs::msg::dds_::UnboundedSequences_Seq_initialize(&sample->unbounded_sequence_of_unbounded_sequences_ );
                    test_msgs::msg::dds_::UnboundedSequences_Seq_set_element_allocation_params(&sample->unbounded_sequence_of_unbounded_sequences_ ,allocParams);
                    test_msgs::msg::dds_::UnboundedSequences_Seq_set_absolute_maximum(&sample->unbounded_sequence_of_unbounded_sequences_ , RTI_INT32_MAX);
                    if (!test_msgs::msg::dds_::UnboundedSequences_Seq_set_maximum(&sample->unbounded_sequence_of_unbounded_sequences_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::UnboundedSequences_Seq_set_length(&sample->unbounded_sequence_of_unbounded_sequences_, 0);
                }
                return RTI_TRUE;
            }

            void MultiNested__finalize(
                MultiNested_* sample)
            {

                test_msgs::msg::dds_::MultiNested__finalize_ex(sample,RTI_TRUE);
            }

            void MultiNested__finalize_ex(
                MultiNested_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::MultiNested__finalize_w_params(
                    sample,&deallocParams);
            }

            void MultiNested__finalize_w_params(
                MultiNested_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Arrays_* elem =
                    (test_msgs::msg::dds_::Arrays_*) &sample->array_of_arrays_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Arrays__finalize_w_params(elem,deallocParams);
                    }
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::BoundedSequences_* elem =
                    (test_msgs::msg::dds_::BoundedSequences_*) &sample->array_of_bounded_sequences_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::BoundedSequences__finalize_w_params(elem,deallocParams);
                    }
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::UnboundedSequences_* elem =
                    (test_msgs::msg::dds_::UnboundedSequences_*) &sample->array_of_unbounded_sequences_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::UnboundedSequences__finalize_w_params(elem,deallocParams);
                    }
                }

                test_msgs::msg::dds_::Arrays_Seq_set_element_deallocation_params(
                    &sample->bounded_sequence_of_arrays_,deallocParams);
                test_msgs::msg::dds_::Arrays_Seq_finalize(&sample->bounded_sequence_of_arrays_);

                test_msgs::msg::dds_::BoundedSequences_Seq_set_element_deallocation_params(
                    &sample->bounded_sequence_of_bounded_sequences_,deallocParams);
                test_msgs::msg::dds_::BoundedSequences_Seq_finalize(&sample->bounded_sequence_of_bounded_sequences_);

                test_msgs::msg::dds_::UnboundedSequences_Seq_set_element_deallocation_params(
                    &sample->bounded_sequence_of_unbounded_sequences_,deallocParams);
                test_msgs::msg::dds_::UnboundedSequences_Seq_finalize(&sample->bounded_sequence_of_unbounded_sequences_);

                test_msgs::msg::dds_::Arrays_Seq_set_element_deallocation_params(
                    &sample->unbounded_sequence_of_arrays_,deallocParams);
                test_msgs::msg::dds_::Arrays_Seq_finalize(&sample->unbounded_sequence_of_arrays_);

                test_msgs::msg::dds_::BoundedSequences_Seq_set_element_deallocation_params(
                    &sample->unbounded_sequence_of_bounded_sequences_,deallocParams);
                test_msgs::msg::dds_::BoundedSequences_Seq_finalize(&sample->unbounded_sequence_of_bounded_sequences_);

                test_msgs::msg::dds_::UnboundedSequences_Seq_set_element_deallocation_params(
                    &sample->unbounded_sequence_of_unbounded_sequences_,deallocParams);
                test_msgs::msg::dds_::UnboundedSequences_Seq_finalize(&sample->unbounded_sequence_of_unbounded_sequences_);

            }

            void MultiNested__finalize_optional_members(
                MultiNested_* sample, RTIBool deletePointers)
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
                    test_msgs::msg::dds_::Arrays_* elem =
                    (test_msgs::msg::dds_::Arrays_*) &sample->array_of_arrays_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::Arrays__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::BoundedSequences_* elem =
                    (test_msgs::msg::dds_::BoundedSequences_*) &sample->array_of_bounded_sequences_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::BoundedSequences__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    int i = 0;
                    test_msgs::msg::dds_::UnboundedSequences_* elem =
                    (test_msgs::msg::dds_::UnboundedSequences_*) &sample->array_of_unbounded_sequences_[0];

                    for (i = 0; i < (int) ((3)); ++i, ++elem) {
                        test_msgs::msg::dds_::UnboundedSequences__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::Arrays_Seq_get_length(
                        &sample->bounded_sequence_of_arrays_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::Arrays__finalize_optional_members(
                            test_msgs::msg::dds_::Arrays_Seq_get_reference(
                                &sample->bounded_sequence_of_arrays_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::BoundedSequences_Seq_get_length(
                        &sample->bounded_sequence_of_bounded_sequences_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::BoundedSequences__finalize_optional_members(
                            test_msgs::msg::dds_::BoundedSequences_Seq_get_reference(
                                &sample->bounded_sequence_of_bounded_sequences_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::UnboundedSequences_Seq_get_length(
                        &sample->bounded_sequence_of_unbounded_sequences_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::UnboundedSequences__finalize_optional_members(
                            test_msgs::msg::dds_::UnboundedSequences_Seq_get_reference(
                                &sample->bounded_sequence_of_unbounded_sequences_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::Arrays_Seq_get_length(
                        &sample->unbounded_sequence_of_arrays_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::Arrays__finalize_optional_members(
                            test_msgs::msg::dds_::Arrays_Seq_get_reference(
                                &sample->unbounded_sequence_of_arrays_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::BoundedSequences_Seq_get_length(
                        &sample->unbounded_sequence_of_bounded_sequences_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::BoundedSequences__finalize_optional_members(
                            test_msgs::msg::dds_::BoundedSequences_Seq_get_reference(
                                &sample->unbounded_sequence_of_bounded_sequences_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::UnboundedSequences_Seq_get_length(
                        &sample->unbounded_sequence_of_unbounded_sequences_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::UnboundedSequences__finalize_optional_members(
                            test_msgs::msg::dds_::UnboundedSequences_Seq_get_reference(
                                &sample->unbounded_sequence_of_unbounded_sequences_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MultiNested__copy(
                MultiNested_* dst,
                const MultiNested_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    {
                        int i = 0;
                        test_msgs::msg::dds_::Arrays_* elemOut = (test_msgs::msg::dds_::Arrays_*) &dst->array_of_arrays_[0];
                        const test_msgs::msg::dds_::Arrays_* elemIn = (const test_msgs::msg::dds_::Arrays_*) &src->array_of_arrays_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::Arrays__copy (elemOut,(const test_msgs::msg::dds_::Arrays_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::BoundedSequences_* elemOut = (test_msgs::msg::dds_::BoundedSequences_*) &dst->array_of_bounded_sequences_[0];
                        const test_msgs::msg::dds_::BoundedSequences_* elemIn = (const test_msgs::msg::dds_::BoundedSequences_*) &src->array_of_bounded_sequences_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::BoundedSequences__copy (elemOut,(const test_msgs::msg::dds_::BoundedSequences_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    {
                        int i = 0;
                        test_msgs::msg::dds_::UnboundedSequences_* elemOut = (test_msgs::msg::dds_::UnboundedSequences_*) &dst->array_of_unbounded_sequences_[0];
                        const test_msgs::msg::dds_::UnboundedSequences_* elemIn = (const test_msgs::msg::dds_::UnboundedSequences_*) &src->array_of_unbounded_sequences_[0];
                        for (i = 0; i < (int) ((3));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::UnboundedSequences__copy (elemOut,(const test_msgs::msg::dds_::UnboundedSequences_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
                    }
                    if (!test_msgs::msg::dds_::Arrays_Seq_copy(&dst->bounded_sequence_of_arrays_ ,
                    &src->bounded_sequence_of_arrays_ )) {
                        return RTI_FALSE;
                    }
                    if (!test_msgs::msg::dds_::BoundedSequences_Seq_copy(&dst->bounded_sequence_of_bounded_sequences_ ,
                    &src->bounded_sequence_of_bounded_sequences_ )) {
                        return RTI_FALSE;
                    }
                    if (!test_msgs::msg::dds_::UnboundedSequences_Seq_copy(&dst->bounded_sequence_of_unbounded_sequences_ ,
                    &src->bounded_sequence_of_unbounded_sequences_ )) {
                        return RTI_FALSE;
                    }
                    if (!test_msgs::msg::dds_::Arrays_Seq_copy(&dst->unbounded_sequence_of_arrays_ ,
                    &src->unbounded_sequence_of_arrays_ )) {
                        return RTI_FALSE;
                    }
                    if (!test_msgs::msg::dds_::BoundedSequences_Seq_copy(&dst->unbounded_sequence_of_bounded_sequences_ ,
                    &src->unbounded_sequence_of_bounded_sequences_ )) {
                        return RTI_FALSE;
                    }
                    if (!test_msgs::msg::dds_::UnboundedSequences_Seq_copy(&dst->unbounded_sequence_of_unbounded_sequences_ ,
                    &src->unbounded_sequence_of_unbounded_sequences_ )) {
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
            * Configure and implement 'MultiNested_' sequence class.
            */
            #define T MultiNested_
            #define TSeq MultiNested_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::MultiNested__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::MultiNested__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::MultiNested__copy

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

