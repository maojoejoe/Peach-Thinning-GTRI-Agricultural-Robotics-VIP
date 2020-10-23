

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveBase_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MoveBase__551658909_h
#define MoveBase__551658909_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseStamped_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_Goal_TYPENAME;

            struct MoveBase_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_Goal_TypeSupport;
            class MoveBase_Goal_DataWriter;
            class MoveBase_Goal_DataReader;
            #endif

            class MoveBase_Goal_ 
            {
              public:
                typedef struct MoveBase_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_Goal_TypeSupport TypeSupport;
                typedef MoveBase_Goal_DataWriter DataWriter;
                typedef MoveBase_Goal_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::PoseStamped_   target_pose_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_Goal_Seq, MoveBase_Goal_);

            NDDSUSERDllExport
            RTIBool MoveBase_Goal__initialize(
                MoveBase_Goal_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_Goal__initialize_ex(
                MoveBase_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_Goal__initialize_w_params(
                MoveBase_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_Goal__finalize(
                MoveBase_Goal_* self);

            NDDSUSERDllExport
            void MoveBase_Goal__finalize_ex(
                MoveBase_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_Goal__finalize_w_params(
                MoveBase_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_Goal__finalize_optional_members(
                MoveBase_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_Goal__copy(
                MoveBase_Goal_* dst,
                const MoveBase_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_SendGoal_Request_TYPENAME;

            struct MoveBase_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_SendGoal_Request_TypeSupport;
            class MoveBase_SendGoal_Request_DataWriter;
            class MoveBase_SendGoal_Request_DataReader;
            #endif

            class MoveBase_SendGoal_Request_ 
            {
              public:
                typedef struct MoveBase_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_SendGoal_Request_TypeSupport TypeSupport;
                typedef MoveBase_SendGoal_Request_DataWriter DataWriter;
                typedef MoveBase_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                move_base_msgs::action::dds_::MoveBase_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_SendGoal_Request_Seq, MoveBase_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Request__initialize(
                MoveBase_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Request__initialize_ex(
                MoveBase_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Request__initialize_w_params(
                MoveBase_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_SendGoal_Request__finalize(
                MoveBase_SendGoal_Request_* self);

            NDDSUSERDllExport
            void MoveBase_SendGoal_Request__finalize_ex(
                MoveBase_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_SendGoal_Request__finalize_w_params(
                MoveBase_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_SendGoal_Request__finalize_optional_members(
                MoveBase_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Request__copy(
                MoveBase_SendGoal_Request_* dst,
                const MoveBase_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_SendGoal_Response_TYPENAME;

            struct MoveBase_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_SendGoal_Response_TypeSupport;
            class MoveBase_SendGoal_Response_DataWriter;
            class MoveBase_SendGoal_Response_DataReader;
            #endif

            class MoveBase_SendGoal_Response_ 
            {
              public:
                typedef struct MoveBase_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_SendGoal_Response_TypeSupport TypeSupport;
                typedef MoveBase_SendGoal_Response_DataWriter DataWriter;
                typedef MoveBase_SendGoal_Response_DataReader DataReader;
                #endif

                DDS_Boolean   accepted_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_SendGoal_Response_Seq, MoveBase_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Response__initialize(
                MoveBase_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Response__initialize_ex(
                MoveBase_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Response__initialize_w_params(
                MoveBase_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_SendGoal_Response__finalize(
                MoveBase_SendGoal_Response_* self);

            NDDSUSERDllExport
            void MoveBase_SendGoal_Response__finalize_ex(
                MoveBase_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_SendGoal_Response__finalize_w_params(
                MoveBase_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_SendGoal_Response__finalize_optional_members(
                MoveBase_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_SendGoal_Response__copy(
                MoveBase_SendGoal_Response_* dst,
                const MoveBase_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_Result_TYPENAME;

            struct MoveBase_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_Result_TypeSupport;
            class MoveBase_Result_DataWriter;
            class MoveBase_Result_DataReader;
            #endif

            class MoveBase_Result_ 
            {
              public:
                typedef struct MoveBase_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_Result_TypeSupport TypeSupport;
                typedef MoveBase_Result_DataWriter DataWriter;
                typedef MoveBase_Result_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_Result_Seq, MoveBase_Result_);

            NDDSUSERDllExport
            RTIBool MoveBase_Result__initialize(
                MoveBase_Result_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_Result__initialize_ex(
                MoveBase_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_Result__initialize_w_params(
                MoveBase_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_Result__finalize(
                MoveBase_Result_* self);

            NDDSUSERDllExport
            void MoveBase_Result__finalize_ex(
                MoveBase_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_Result__finalize_w_params(
                MoveBase_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_Result__finalize_optional_members(
                MoveBase_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_Result__copy(
                MoveBase_Result_* dst,
                const MoveBase_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_GetResult_Request_TYPENAME;

            struct MoveBase_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_GetResult_Request_TypeSupport;
            class MoveBase_GetResult_Request_DataWriter;
            class MoveBase_GetResult_Request_DataReader;
            #endif

            class MoveBase_GetResult_Request_ 
            {
              public:
                typedef struct MoveBase_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_GetResult_Request_TypeSupport TypeSupport;
                typedef MoveBase_GetResult_Request_DataWriter DataWriter;
                typedef MoveBase_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_GetResult_Request_Seq, MoveBase_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Request__initialize(
                MoveBase_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Request__initialize_ex(
                MoveBase_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Request__initialize_w_params(
                MoveBase_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_GetResult_Request__finalize(
                MoveBase_GetResult_Request_* self);

            NDDSUSERDllExport
            void MoveBase_GetResult_Request__finalize_ex(
                MoveBase_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_GetResult_Request__finalize_w_params(
                MoveBase_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_GetResult_Request__finalize_optional_members(
                MoveBase_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Request__copy(
                MoveBase_GetResult_Request_* dst,
                const MoveBase_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_GetResult_Response_TYPENAME;

            struct MoveBase_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_GetResult_Response_TypeSupport;
            class MoveBase_GetResult_Response_DataWriter;
            class MoveBase_GetResult_Response_DataReader;
            #endif

            class MoveBase_GetResult_Response_ 
            {
              public:
                typedef struct MoveBase_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_GetResult_Response_TypeSupport TypeSupport;
                typedef MoveBase_GetResult_Response_DataWriter DataWriter;
                typedef MoveBase_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                move_base_msgs::action::dds_::MoveBase_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_GetResult_Response_Seq, MoveBase_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Response__initialize(
                MoveBase_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Response__initialize_ex(
                MoveBase_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Response__initialize_w_params(
                MoveBase_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_GetResult_Response__finalize(
                MoveBase_GetResult_Response_* self);

            NDDSUSERDllExport
            void MoveBase_GetResult_Response__finalize_ex(
                MoveBase_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_GetResult_Response__finalize_w_params(
                MoveBase_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_GetResult_Response__finalize_optional_members(
                MoveBase_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_GetResult_Response__copy(
                MoveBase_GetResult_Response_* dst,
                const MoveBase_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_Feedback_TYPENAME;

            struct MoveBase_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_Feedback_TypeSupport;
            class MoveBase_Feedback_DataWriter;
            class MoveBase_Feedback_DataReader;
            #endif

            class MoveBase_Feedback_ 
            {
              public:
                typedef struct MoveBase_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_Feedback_TypeSupport TypeSupport;
                typedef MoveBase_Feedback_DataWriter DataWriter;
                typedef MoveBase_Feedback_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::PoseStamped_   base_position_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_Feedback_Seq, MoveBase_Feedback_);

            NDDSUSERDllExport
            RTIBool MoveBase_Feedback__initialize(
                MoveBase_Feedback_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_Feedback__initialize_ex(
                MoveBase_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_Feedback__initialize_w_params(
                MoveBase_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_Feedback__finalize(
                MoveBase_Feedback_* self);

            NDDSUSERDllExport
            void MoveBase_Feedback__finalize_ex(
                MoveBase_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_Feedback__finalize_w_params(
                MoveBase_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_Feedback__finalize_optional_members(
                MoveBase_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_Feedback__copy(
                MoveBase_Feedback_* dst,
                const MoveBase_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            extern const char *MoveBase_FeedbackMessage_TYPENAME;

            struct MoveBase_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MoveBase_FeedbackMessage_TypeSupport;
            class MoveBase_FeedbackMessage_DataWriter;
            class MoveBase_FeedbackMessage_DataReader;
            #endif

            class MoveBase_FeedbackMessage_ 
            {
              public:
                typedef struct MoveBase_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MoveBase_FeedbackMessage_TypeSupport TypeSupport;
                typedef MoveBase_FeedbackMessage_DataWriter DataWriter;
                typedef MoveBase_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                move_base_msgs::action::dds_::MoveBase_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MoveBase_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MoveBase_FeedbackMessage_Seq, MoveBase_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool MoveBase_FeedbackMessage__initialize(
                MoveBase_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool MoveBase_FeedbackMessage__initialize_ex(
                MoveBase_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MoveBase_FeedbackMessage__initialize_w_params(
                MoveBase_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MoveBase_FeedbackMessage__finalize(
                MoveBase_FeedbackMessage_* self);

            NDDSUSERDllExport
            void MoveBase_FeedbackMessage__finalize_ex(
                MoveBase_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MoveBase_FeedbackMessage__finalize_w_params(
                MoveBase_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MoveBase_FeedbackMessage__finalize_optional_members(
                MoveBase_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MoveBase_FeedbackMessage__copy(
                MoveBase_FeedbackMessage_* dst,
                const MoveBase_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_move_base_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */

#endif /* MoveBase_ */

