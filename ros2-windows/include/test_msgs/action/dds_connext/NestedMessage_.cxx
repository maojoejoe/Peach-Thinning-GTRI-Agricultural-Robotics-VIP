

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_.idl using "rtiddsgen".
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

#include "NestedMessage_.h"

#include <new>

namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_Goal_TYPENAME = "test_msgs::action::dds_::NestedMessage_Goal_";

            DDS_TypeCode* NestedMessage_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_Goal__g_tc_members[3]=
                {

                    {
                        (char *)"nested_field_no_pkg_",/* Member name */
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
                        (char *)"nested_field_",/* Member name */
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
                        (char *)"nested_different_pkg_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        NestedMessage_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_Goal_*/

                if (is_initialized) {
                    return &NestedMessage_Goal__g_tc;
                }

                NestedMessage_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Builtins__get_typecode();

                NestedMessage_Goal__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::BasicTypes__get_typecode();

                NestedMessage_Goal__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_Goal__g_tc;
            }

            RTIBool NestedMessage_Goal__initialize(
                NestedMessage_Goal_* sample) {
                return test_msgs::action::dds_::NestedMessage_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_Goal__initialize_ex(
                NestedMessage_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_Goal__initialize_w_params(
                NestedMessage_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!test_msgs::msg::dds_::Builtins__initialize_w_params(&sample->nested_field_no_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::BasicTypes__initialize_w_params(&sample->nested_field_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->nested_different_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_Goal__finalize(
                NestedMessage_Goal_* sample)
            {

                test_msgs::action::dds_::NestedMessage_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_Goal__finalize_ex(
                NestedMessage_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_Goal__finalize_w_params(
                NestedMessage_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::Builtins__finalize_w_params(&sample->nested_field_no_pkg_,deallocParams);

                test_msgs::msg::dds_::BasicTypes__finalize_w_params(&sample->nested_field_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->nested_different_pkg_,deallocParams);

            }

            void NestedMessage_Goal__finalize_optional_members(
                NestedMessage_Goal_* sample, RTIBool deletePointers)
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

                test_msgs::msg::dds_::Builtins__finalize_optional_members(&sample->nested_field_no_pkg_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::BasicTypes__finalize_optional_members(&sample->nested_field_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->nested_different_pkg_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_Goal__copy(
                NestedMessage_Goal_* dst,
                const NestedMessage_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::Builtins__copy(
                        &dst->nested_field_no_pkg_,(const test_msgs::msg::dds_::Builtins_*)&src->nested_field_no_pkg_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::BasicTypes__copy(
                        &dst->nested_field_,(const test_msgs::msg::dds_::BasicTypes_*)&src->nested_field_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->nested_different_pkg_,(const builtin_interfaces::msg::dds_::Time_*)&src->nested_different_pkg_)) {
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
            * Configure and implement 'NestedMessage_Goal_' sequence class.
            */
            #define T NestedMessage_Goal_
            #define TSeq NestedMessage_Goal_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_Goal__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_Goal__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_Goal__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_SendGoal_Request_TYPENAME = "test_msgs::action::dds_::NestedMessage_SendGoal_Request_";

            DDS_TypeCode* NestedMessage_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_SendGoal_Request__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"goal_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        NestedMessage_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_SendGoal_Request_*/

                if (is_initialized) {
                    return &NestedMessage_SendGoal_Request__g_tc;
                }

                NestedMessage_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                NestedMessage_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::action::dds_::NestedMessage_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_SendGoal_Request__g_tc;
            }

            RTIBool NestedMessage_SendGoal_Request__initialize(
                NestedMessage_SendGoal_Request_* sample) {
                return test_msgs::action::dds_::NestedMessage_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_SendGoal_Request__initialize_ex(
                NestedMessage_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_SendGoal_Request__initialize_w_params(
                NestedMessage_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::action::dds_::NestedMessage_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_SendGoal_Request__finalize(
                NestedMessage_SendGoal_Request_* sample)
            {

                test_msgs::action::dds_::NestedMessage_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_SendGoal_Request__finalize_ex(
                NestedMessage_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_SendGoal_Request__finalize_w_params(
                NestedMessage_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                test_msgs::action::dds_::NestedMessage_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void NestedMessage_SendGoal_Request__finalize_optional_members(
                NestedMessage_SendGoal_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                test_msgs::action::dds_::NestedMessage_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_SendGoal_Request__copy(
                NestedMessage_SendGoal_Request_* dst,
                const NestedMessage_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::action::dds_::NestedMessage_Goal__copy(
                        &dst->goal_,(const test_msgs::action::dds_::NestedMessage_Goal_*)&src->goal_)) {
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
            * Configure and implement 'NestedMessage_SendGoal_Request_' sequence class.
            */
            #define T NestedMessage_SendGoal_Request_
            #define TSeq NestedMessage_SendGoal_Request_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_SendGoal_Request__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_SendGoal_Request__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_SendGoal_Response_TYPENAME = "test_msgs::action::dds_::NestedMessage_SendGoal_Response_";

            DDS_TypeCode* NestedMessage_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_SendGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"accepted_",/* Member name */
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
                        (char *)"stamp_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        NestedMessage_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_SendGoal_Response_*/

                if (is_initialized) {
                    return &NestedMessage_SendGoal_Response__g_tc;
                }

                NestedMessage_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                NestedMessage_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_SendGoal_Response__g_tc;
            }

            RTIBool NestedMessage_SendGoal_Response__initialize(
                NestedMessage_SendGoal_Response_* sample) {
                return test_msgs::action::dds_::NestedMessage_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_SendGoal_Response__initialize_ex(
                NestedMessage_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_SendGoal_Response__initialize_w_params(
                NestedMessage_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->accepted_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_SendGoal_Response__finalize(
                NestedMessage_SendGoal_Response_* sample)
            {

                test_msgs::action::dds_::NestedMessage_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_SendGoal_Response__finalize_ex(
                NestedMessage_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_SendGoal_Response__finalize_w_params(
                NestedMessage_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void NestedMessage_SendGoal_Response__finalize_optional_members(
                NestedMessage_SendGoal_Response_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_SendGoal_Response__copy(
                NestedMessage_SendGoal_Response_* dst,
                const NestedMessage_SendGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->accepted_, &src->accepted_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
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
            * Configure and implement 'NestedMessage_SendGoal_Response_' sequence class.
            */
            #define T NestedMessage_SendGoal_Response_
            #define TSeq NestedMessage_SendGoal_Response_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_SendGoal_Response__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_SendGoal_Response__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_Result_TYPENAME = "test_msgs::action::dds_::NestedMessage_Result_";

            DDS_TypeCode* NestedMessage_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_Result__g_tc_members[3]=
                {

                    {
                        (char *)"nested_field_no_pkg_",/* Member name */
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
                        (char *)"nested_field_",/* Member name */
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
                        (char *)"nested_different_pkg_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        NestedMessage_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_Result_*/

                if (is_initialized) {
                    return &NestedMessage_Result__g_tc;
                }

                NestedMessage_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Builtins__get_typecode();

                NestedMessage_Result__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::BasicTypes__get_typecode();

                NestedMessage_Result__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_Result__g_tc;
            }

            RTIBool NestedMessage_Result__initialize(
                NestedMessage_Result_* sample) {
                return test_msgs::action::dds_::NestedMessage_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_Result__initialize_ex(
                NestedMessage_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_Result__initialize_w_params(
                NestedMessage_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!test_msgs::msg::dds_::Builtins__initialize_w_params(&sample->nested_field_no_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::BasicTypes__initialize_w_params(&sample->nested_field_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->nested_different_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_Result__finalize(
                NestedMessage_Result_* sample)
            {

                test_msgs::action::dds_::NestedMessage_Result__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_Result__finalize_ex(
                NestedMessage_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_Result__finalize_w_params(
                NestedMessage_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::Builtins__finalize_w_params(&sample->nested_field_no_pkg_,deallocParams);

                test_msgs::msg::dds_::BasicTypes__finalize_w_params(&sample->nested_field_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->nested_different_pkg_,deallocParams);

            }

            void NestedMessage_Result__finalize_optional_members(
                NestedMessage_Result_* sample, RTIBool deletePointers)
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

                test_msgs::msg::dds_::Builtins__finalize_optional_members(&sample->nested_field_no_pkg_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::BasicTypes__finalize_optional_members(&sample->nested_field_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->nested_different_pkg_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_Result__copy(
                NestedMessage_Result_* dst,
                const NestedMessage_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::Builtins__copy(
                        &dst->nested_field_no_pkg_,(const test_msgs::msg::dds_::Builtins_*)&src->nested_field_no_pkg_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::BasicTypes__copy(
                        &dst->nested_field_,(const test_msgs::msg::dds_::BasicTypes_*)&src->nested_field_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->nested_different_pkg_,(const builtin_interfaces::msg::dds_::Time_*)&src->nested_different_pkg_)) {
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
            * Configure and implement 'NestedMessage_Result_' sequence class.
            */
            #define T NestedMessage_Result_
            #define TSeq NestedMessage_Result_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_Result__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_Result__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_Result__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_GetResult_Request_TYPENAME = "test_msgs::action::dds_::NestedMessage_GetResult_Request_";

            DDS_TypeCode* NestedMessage_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_GetResult_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        NestedMessage_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_GetResult_Request_*/

                if (is_initialized) {
                    return &NestedMessage_GetResult_Request__g_tc;
                }

                NestedMessage_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_GetResult_Request__g_tc;
            }

            RTIBool NestedMessage_GetResult_Request__initialize(
                NestedMessage_GetResult_Request_* sample) {
                return test_msgs::action::dds_::NestedMessage_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_GetResult_Request__initialize_ex(
                NestedMessage_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_GetResult_Request__initialize_w_params(
                NestedMessage_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_GetResult_Request__finalize(
                NestedMessage_GetResult_Request_* sample)
            {

                test_msgs::action::dds_::NestedMessage_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_GetResult_Request__finalize_ex(
                NestedMessage_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_GetResult_Request__finalize_w_params(
                NestedMessage_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void NestedMessage_GetResult_Request__finalize_optional_members(
                NestedMessage_GetResult_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_GetResult_Request__copy(
                NestedMessage_GetResult_Request_* dst,
                const NestedMessage_GetResult_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
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
            * Configure and implement 'NestedMessage_GetResult_Request_' sequence class.
            */
            #define T NestedMessage_GetResult_Request_
            #define TSeq NestedMessage_GetResult_Request_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_GetResult_Request__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_GetResult_Request__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_GetResult_Response_TYPENAME = "test_msgs::action::dds_::NestedMessage_GetResult_Response_";

            DDS_TypeCode* NestedMessage_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_GetResult_Response__g_tc_members[2]=
                {

                    {
                        (char *)"status_",/* Member name */
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
                        (char *)"result_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        NestedMessage_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_GetResult_Response_*/

                if (is_initialized) {
                    return &NestedMessage_GetResult_Response__g_tc;
                }

                NestedMessage_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                NestedMessage_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::action::dds_::NestedMessage_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_GetResult_Response__g_tc;
            }

            RTIBool NestedMessage_GetResult_Response__initialize(
                NestedMessage_GetResult_Response_* sample) {
                return test_msgs::action::dds_::NestedMessage_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_GetResult_Response__initialize_ex(
                NestedMessage_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_GetResult_Response__initialize_w_params(
                NestedMessage_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (!test_msgs::action::dds_::NestedMessage_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_GetResult_Response__finalize(
                NestedMessage_GetResult_Response_* sample)
            {

                test_msgs::action::dds_::NestedMessage_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_GetResult_Response__finalize_ex(
                NestedMessage_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_GetResult_Response__finalize_w_params(
                NestedMessage_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::action::dds_::NestedMessage_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void NestedMessage_GetResult_Response__finalize_optional_members(
                NestedMessage_GetResult_Response_* sample, RTIBool deletePointers)
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

                test_msgs::action::dds_::NestedMessage_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_GetResult_Response__copy(
                NestedMessage_GetResult_Response_* dst,
                const NestedMessage_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!test_msgs::action::dds_::NestedMessage_Result__copy(
                        &dst->result_,(const test_msgs::action::dds_::NestedMessage_Result_*)&src->result_)) {
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
            * Configure and implement 'NestedMessage_GetResult_Response_' sequence class.
            */
            #define T NestedMessage_GetResult_Response_
            #define TSeq NestedMessage_GetResult_Response_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_GetResult_Response__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_GetResult_Response__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_Feedback_TYPENAME = "test_msgs::action::dds_::NestedMessage_Feedback_";

            DDS_TypeCode* NestedMessage_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_Feedback__g_tc_members[3]=
                {

                    {
                        (char *)"nested_field_no_pkg_",/* Member name */
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
                        (char *)"nested_field_",/* Member name */
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
                        (char *)"nested_different_pkg_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        NestedMessage_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_Feedback_*/

                if (is_initialized) {
                    return &NestedMessage_Feedback__g_tc;
                }

                NestedMessage_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Builtins__get_typecode();

                NestedMessage_Feedback__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::BasicTypes__get_typecode();

                NestedMessage_Feedback__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_Feedback__g_tc;
            }

            RTIBool NestedMessage_Feedback__initialize(
                NestedMessage_Feedback_* sample) {
                return test_msgs::action::dds_::NestedMessage_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_Feedback__initialize_ex(
                NestedMessage_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_Feedback__initialize_w_params(
                NestedMessage_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!test_msgs::msg::dds_::Builtins__initialize_w_params(&sample->nested_field_no_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::BasicTypes__initialize_w_params(&sample->nested_field_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->nested_different_pkg_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_Feedback__finalize(
                NestedMessage_Feedback_* sample)
            {

                test_msgs::action::dds_::NestedMessage_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_Feedback__finalize_ex(
                NestedMessage_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_Feedback__finalize_w_params(
                NestedMessage_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::Builtins__finalize_w_params(&sample->nested_field_no_pkg_,deallocParams);

                test_msgs::msg::dds_::BasicTypes__finalize_w_params(&sample->nested_field_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->nested_different_pkg_,deallocParams);

            }

            void NestedMessage_Feedback__finalize_optional_members(
                NestedMessage_Feedback_* sample, RTIBool deletePointers)
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

                test_msgs::msg::dds_::Builtins__finalize_optional_members(&sample->nested_field_no_pkg_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::BasicTypes__finalize_optional_members(&sample->nested_field_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->nested_different_pkg_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_Feedback__copy(
                NestedMessage_Feedback_* dst,
                const NestedMessage_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::Builtins__copy(
                        &dst->nested_field_no_pkg_,(const test_msgs::msg::dds_::Builtins_*)&src->nested_field_no_pkg_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::BasicTypes__copy(
                        &dst->nested_field_,(const test_msgs::msg::dds_::BasicTypes_*)&src->nested_field_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->nested_different_pkg_,(const builtin_interfaces::msg::dds_::Time_*)&src->nested_different_pkg_)) {
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
            * Configure and implement 'NestedMessage_Feedback_' sequence class.
            */
            #define T NestedMessage_Feedback_
            #define TSeq NestedMessage_Feedback_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_Feedback__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_Feedback__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_Feedback__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *NestedMessage_FeedbackMessage_TYPENAME = "test_msgs::action::dds_::NestedMessage_FeedbackMessage_";

            DDS_TypeCode* NestedMessage_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member NestedMessage_FeedbackMessage__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"feedback_",/* Member name */
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
                    }
                };

                static DDS_TypeCode NestedMessage_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::action::dds_::NestedMessage_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        NestedMessage_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NestedMessage_FeedbackMessage_*/

                if (is_initialized) {
                    return &NestedMessage_FeedbackMessage__g_tc;
                }

                NestedMessage_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                NestedMessage_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::action::dds_::NestedMessage_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &NestedMessage_FeedbackMessage__g_tc;
            }

            RTIBool NestedMessage_FeedbackMessage__initialize(
                NestedMessage_FeedbackMessage_* sample) {
                return test_msgs::action::dds_::NestedMessage_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NestedMessage_FeedbackMessage__initialize_ex(
                NestedMessage_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::action::dds_::NestedMessage_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NestedMessage_FeedbackMessage__initialize_w_params(
                NestedMessage_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::action::dds_::NestedMessage_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void NestedMessage_FeedbackMessage__finalize(
                NestedMessage_FeedbackMessage_* sample)
            {

                test_msgs::action::dds_::NestedMessage_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void NestedMessage_FeedbackMessage__finalize_ex(
                NestedMessage_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::action::dds_::NestedMessage_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void NestedMessage_FeedbackMessage__finalize_w_params(
                NestedMessage_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                test_msgs::action::dds_::NestedMessage_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void NestedMessage_FeedbackMessage__finalize_optional_members(
                NestedMessage_FeedbackMessage_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                test_msgs::action::dds_::NestedMessage_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool NestedMessage_FeedbackMessage__copy(
                NestedMessage_FeedbackMessage_* dst,
                const NestedMessage_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::action::dds_::NestedMessage_Feedback__copy(
                        &dst->feedback_,(const test_msgs::action::dds_::NestedMessage_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'NestedMessage_FeedbackMessage_' sequence class.
            */
            #define T NestedMessage_FeedbackMessage_
            #define TSeq NestedMessage_FeedbackMessage_Seq

            #define T_initialize_w_params test_msgs::action::dds_::NestedMessage_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   test_msgs::action::dds_::NestedMessage_FeedbackMessage__finalize_w_params
            #define T_copy       test_msgs::action::dds_::NestedMessage_FeedbackMessage__copy

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
    } /* namespace action  */
} /* namespace test_msgs  */

