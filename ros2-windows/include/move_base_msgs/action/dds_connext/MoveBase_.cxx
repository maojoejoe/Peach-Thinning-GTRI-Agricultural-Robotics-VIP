

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveBase_.idl using "rtiddsgen".
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

#include "MoveBase_.h"

#include <new>

namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_Goal_TYPENAME = "move_base_msgs::action::dds_::MoveBase_Goal_";

            DDS_TypeCode* MoveBase_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_Goal__g_tc_members[1]=
                {

                    {
                        (char *)"target_pose_",/* Member name */
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

                static DDS_TypeCode MoveBase_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MoveBase_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_Goal_*/

                if (is_initialized) {
                    return &MoveBase_Goal__g_tc;
                }

                MoveBase_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PoseStamped__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_Goal__g_tc;
            }

            RTIBool MoveBase_Goal__initialize(
                MoveBase_Goal_* sample) {
                return move_base_msgs::action::dds_::MoveBase_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_Goal__initialize_ex(
                MoveBase_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_Goal__initialize_w_params(
                MoveBase_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::PoseStamped__initialize_w_params(&sample->target_pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MoveBase_Goal__finalize(
                MoveBase_Goal_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_Goal__finalize_ex(
                MoveBase_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_Goal__finalize_w_params(
                MoveBase_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::PoseStamped__finalize_w_params(&sample->target_pose_,deallocParams);

            }

            void MoveBase_Goal__finalize_optional_members(
                MoveBase_Goal_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::PoseStamped__finalize_optional_members(&sample->target_pose_, deallocParams->delete_pointers);
            }

            RTIBool MoveBase_Goal__copy(
                MoveBase_Goal_* dst,
                const MoveBase_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::PoseStamped__copy(
                        &dst->target_pose_,(const geometry_msgs::msg::dds_::PoseStamped_*)&src->target_pose_)) {
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
            * Configure and implement 'MoveBase_Goal_' sequence class.
            */
            #define T MoveBase_Goal_
            #define TSeq MoveBase_Goal_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_Goal__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_Goal__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_Goal__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_SendGoal_Request_TYPENAME = "move_base_msgs::action::dds_::MoveBase_SendGoal_Request_";

            DDS_TypeCode* MoveBase_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_SendGoal_Request__g_tc_members[2]=
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

                static DDS_TypeCode MoveBase_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MoveBase_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_SendGoal_Request_*/

                if (is_initialized) {
                    return &MoveBase_SendGoal_Request__g_tc;
                }

                MoveBase_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                MoveBase_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)move_base_msgs::action::dds_::MoveBase_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_SendGoal_Request__g_tc;
            }

            RTIBool MoveBase_SendGoal_Request__initialize(
                MoveBase_SendGoal_Request_* sample) {
                return move_base_msgs::action::dds_::MoveBase_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_SendGoal_Request__initialize_ex(
                MoveBase_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_SendGoal_Request__initialize_w_params(
                MoveBase_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!move_base_msgs::action::dds_::MoveBase_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MoveBase_SendGoal_Request__finalize(
                MoveBase_SendGoal_Request_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_SendGoal_Request__finalize_ex(
                MoveBase_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_SendGoal_Request__finalize_w_params(
                MoveBase_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                move_base_msgs::action::dds_::MoveBase_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void MoveBase_SendGoal_Request__finalize_optional_members(
                MoveBase_SendGoal_Request_* sample, RTIBool deletePointers)
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
                move_base_msgs::action::dds_::MoveBase_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool MoveBase_SendGoal_Request__copy(
                MoveBase_SendGoal_Request_* dst,
                const MoveBase_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!move_base_msgs::action::dds_::MoveBase_Goal__copy(
                        &dst->goal_,(const move_base_msgs::action::dds_::MoveBase_Goal_*)&src->goal_)) {
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
            * Configure and implement 'MoveBase_SendGoal_Request_' sequence class.
            */
            #define T MoveBase_SendGoal_Request_
            #define TSeq MoveBase_SendGoal_Request_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_SendGoal_Request__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_SendGoal_Request__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_SendGoal_Response_TYPENAME = "move_base_msgs::action::dds_::MoveBase_SendGoal_Response_";

            DDS_TypeCode* MoveBase_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_SendGoal_Response__g_tc_members[2]=
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

                static DDS_TypeCode MoveBase_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MoveBase_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_SendGoal_Response_*/

                if (is_initialized) {
                    return &MoveBase_SendGoal_Response__g_tc;
                }

                MoveBase_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                MoveBase_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_SendGoal_Response__g_tc;
            }

            RTIBool MoveBase_SendGoal_Response__initialize(
                MoveBase_SendGoal_Response_* sample) {
                return move_base_msgs::action::dds_::MoveBase_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_SendGoal_Response__initialize_ex(
                MoveBase_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_SendGoal_Response__initialize_w_params(
                MoveBase_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void MoveBase_SendGoal_Response__finalize(
                MoveBase_SendGoal_Response_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_SendGoal_Response__finalize_ex(
                MoveBase_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_SendGoal_Response__finalize_w_params(
                MoveBase_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void MoveBase_SendGoal_Response__finalize_optional_members(
                MoveBase_SendGoal_Response_* sample, RTIBool deletePointers)
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

            RTIBool MoveBase_SendGoal_Response__copy(
                MoveBase_SendGoal_Response_* dst,
                const MoveBase_SendGoal_Response_* src)
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
            * Configure and implement 'MoveBase_SendGoal_Response_' sequence class.
            */
            #define T MoveBase_SendGoal_Response_
            #define TSeq MoveBase_SendGoal_Response_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_SendGoal_Response__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_SendGoal_Response__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_Result_TYPENAME = "move_base_msgs::action::dds_::MoveBase_Result_";

            DDS_TypeCode* MoveBase_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_Result__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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

                static DDS_TypeCode MoveBase_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MoveBase_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_Result_*/

                if (is_initialized) {
                    return &MoveBase_Result__g_tc;
                }

                MoveBase_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &MoveBase_Result__g_tc;
            }

            RTIBool MoveBase_Result__initialize(
                MoveBase_Result_* sample) {
                return move_base_msgs::action::dds_::MoveBase_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_Result__initialize_ex(
                MoveBase_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_Result__initialize_w_params(
                MoveBase_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void MoveBase_Result__finalize(
                MoveBase_Result_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_Result__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_Result__finalize_ex(
                MoveBase_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_Result__finalize_w_params(
                MoveBase_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void MoveBase_Result__finalize_optional_members(
                MoveBase_Result_* sample, RTIBool deletePointers)
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

            RTIBool MoveBase_Result__copy(
                MoveBase_Result_* dst,
                const MoveBase_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'MoveBase_Result_' sequence class.
            */
            #define T MoveBase_Result_
            #define TSeq MoveBase_Result_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_Result__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_Result__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_Result__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_GetResult_Request_TYPENAME = "move_base_msgs::action::dds_::MoveBase_GetResult_Request_";

            DDS_TypeCode* MoveBase_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_GetResult_Request__g_tc_members[1]=
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

                static DDS_TypeCode MoveBase_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MoveBase_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_GetResult_Request_*/

                if (is_initialized) {
                    return &MoveBase_GetResult_Request__g_tc;
                }

                MoveBase_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_GetResult_Request__g_tc;
            }

            RTIBool MoveBase_GetResult_Request__initialize(
                MoveBase_GetResult_Request_* sample) {
                return move_base_msgs::action::dds_::MoveBase_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_GetResult_Request__initialize_ex(
                MoveBase_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_GetResult_Request__initialize_w_params(
                MoveBase_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void MoveBase_GetResult_Request__finalize(
                MoveBase_GetResult_Request_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_GetResult_Request__finalize_ex(
                MoveBase_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_GetResult_Request__finalize_w_params(
                MoveBase_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void MoveBase_GetResult_Request__finalize_optional_members(
                MoveBase_GetResult_Request_* sample, RTIBool deletePointers)
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

            RTIBool MoveBase_GetResult_Request__copy(
                MoveBase_GetResult_Request_* dst,
                const MoveBase_GetResult_Request_* src)
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
            * Configure and implement 'MoveBase_GetResult_Request_' sequence class.
            */
            #define T MoveBase_GetResult_Request_
            #define TSeq MoveBase_GetResult_Request_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_GetResult_Request__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_GetResult_Request__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_GetResult_Response_TYPENAME = "move_base_msgs::action::dds_::MoveBase_GetResult_Response_";

            DDS_TypeCode* MoveBase_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_GetResult_Response__g_tc_members[2]=
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

                static DDS_TypeCode MoveBase_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MoveBase_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_GetResult_Response_*/

                if (is_initialized) {
                    return &MoveBase_GetResult_Response__g_tc;
                }

                MoveBase_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                MoveBase_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)move_base_msgs::action::dds_::MoveBase_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_GetResult_Response__g_tc;
            }

            RTIBool MoveBase_GetResult_Response__initialize(
                MoveBase_GetResult_Response_* sample) {
                return move_base_msgs::action::dds_::MoveBase_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_GetResult_Response__initialize_ex(
                MoveBase_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_GetResult_Response__initialize_w_params(
                MoveBase_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!move_base_msgs::action::dds_::MoveBase_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MoveBase_GetResult_Response__finalize(
                MoveBase_GetResult_Response_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_GetResult_Response__finalize_ex(
                MoveBase_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_GetResult_Response__finalize_w_params(
                MoveBase_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                move_base_msgs::action::dds_::MoveBase_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void MoveBase_GetResult_Response__finalize_optional_members(
                MoveBase_GetResult_Response_* sample, RTIBool deletePointers)
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

                move_base_msgs::action::dds_::MoveBase_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool MoveBase_GetResult_Response__copy(
                MoveBase_GetResult_Response_* dst,
                const MoveBase_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!move_base_msgs::action::dds_::MoveBase_Result__copy(
                        &dst->result_,(const move_base_msgs::action::dds_::MoveBase_Result_*)&src->result_)) {
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
            * Configure and implement 'MoveBase_GetResult_Response_' sequence class.
            */
            #define T MoveBase_GetResult_Response_
            #define TSeq MoveBase_GetResult_Response_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_GetResult_Response__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_GetResult_Response__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_Feedback_TYPENAME = "move_base_msgs::action::dds_::MoveBase_Feedback_";

            DDS_TypeCode* MoveBase_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_Feedback__g_tc_members[1]=
                {

                    {
                        (char *)"base_position_",/* Member name */
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

                static DDS_TypeCode MoveBase_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MoveBase_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_Feedback_*/

                if (is_initialized) {
                    return &MoveBase_Feedback__g_tc;
                }

                MoveBase_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PoseStamped__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_Feedback__g_tc;
            }

            RTIBool MoveBase_Feedback__initialize(
                MoveBase_Feedback_* sample) {
                return move_base_msgs::action::dds_::MoveBase_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_Feedback__initialize_ex(
                MoveBase_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_Feedback__initialize_w_params(
                MoveBase_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::PoseStamped__initialize_w_params(&sample->base_position_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MoveBase_Feedback__finalize(
                MoveBase_Feedback_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_Feedback__finalize_ex(
                MoveBase_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_Feedback__finalize_w_params(
                MoveBase_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::PoseStamped__finalize_w_params(&sample->base_position_,deallocParams);

            }

            void MoveBase_Feedback__finalize_optional_members(
                MoveBase_Feedback_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::PoseStamped__finalize_optional_members(&sample->base_position_, deallocParams->delete_pointers);
            }

            RTIBool MoveBase_Feedback__copy(
                MoveBase_Feedback_* dst,
                const MoveBase_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::PoseStamped__copy(
                        &dst->base_position_,(const geometry_msgs::msg::dds_::PoseStamped_*)&src->base_position_)) {
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
            * Configure and implement 'MoveBase_Feedback_' sequence class.
            */
            #define T MoveBase_Feedback_
            #define TSeq MoveBase_Feedback_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_Feedback__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_Feedback__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_Feedback__copy

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
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *MoveBase_FeedbackMessage_TYPENAME = "move_base_msgs::action::dds_::MoveBase_FeedbackMessage_";

            DDS_TypeCode* MoveBase_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MoveBase_FeedbackMessage__g_tc_members[2]=
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

                static DDS_TypeCode MoveBase_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"move_base_msgs::action::dds_::MoveBase_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        MoveBase_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MoveBase_FeedbackMessage_*/

                if (is_initialized) {
                    return &MoveBase_FeedbackMessage__g_tc;
                }

                MoveBase_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                MoveBase_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)move_base_msgs::action::dds_::MoveBase_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &MoveBase_FeedbackMessage__g_tc;
            }

            RTIBool MoveBase_FeedbackMessage__initialize(
                MoveBase_FeedbackMessage_* sample) {
                return move_base_msgs::action::dds_::MoveBase_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MoveBase_FeedbackMessage__initialize_ex(
                MoveBase_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return move_base_msgs::action::dds_::MoveBase_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MoveBase_FeedbackMessage__initialize_w_params(
                MoveBase_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!move_base_msgs::action::dds_::MoveBase_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MoveBase_FeedbackMessage__finalize(
                MoveBase_FeedbackMessage_* sample)
            {

                move_base_msgs::action::dds_::MoveBase_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void MoveBase_FeedbackMessage__finalize_ex(
                MoveBase_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                move_base_msgs::action::dds_::MoveBase_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void MoveBase_FeedbackMessage__finalize_w_params(
                MoveBase_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                move_base_msgs::action::dds_::MoveBase_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void MoveBase_FeedbackMessage__finalize_optional_members(
                MoveBase_FeedbackMessage_* sample, RTIBool deletePointers)
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
                move_base_msgs::action::dds_::MoveBase_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool MoveBase_FeedbackMessage__copy(
                MoveBase_FeedbackMessage_* dst,
                const MoveBase_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!move_base_msgs::action::dds_::MoveBase_Feedback__copy(
                        &dst->feedback_,(const move_base_msgs::action::dds_::MoveBase_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'MoveBase_FeedbackMessage_' sequence class.
            */
            #define T MoveBase_FeedbackMessage_
            #define TSeq MoveBase_FeedbackMessage_Seq

            #define T_initialize_w_params move_base_msgs::action::dds_::MoveBase_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   move_base_msgs::action::dds_::MoveBase_FeedbackMessage__finalize_w_params
            #define T_copy       move_base_msgs::action::dds_::MoveBase_FeedbackMessage__copy

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
} /* namespace move_base_msgs  */

