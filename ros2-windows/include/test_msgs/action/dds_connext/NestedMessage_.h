

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NestedMessage__937635785_h
#define NestedMessage__937635785_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "test_msgs/msg/dds_connext/BasicTypes_.h"
#include "test_msgs/msg/dds_connext/Builtins_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_Goal_TYPENAME;

            struct NestedMessage_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_Goal_TypeSupport;
            class NestedMessage_Goal_DataWriter;
            class NestedMessage_Goal_DataReader;
            #endif

            class NestedMessage_Goal_ 
            {
              public:
                typedef struct NestedMessage_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_Goal_TypeSupport TypeSupport;
                typedef NestedMessage_Goal_DataWriter DataWriter;
                typedef NestedMessage_Goal_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Builtins_   nested_field_no_pkg_ ;
                test_msgs::msg::dds_::BasicTypes_   nested_field_ ;
                builtin_interfaces::msg::dds_::Time_   nested_different_pkg_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_Goal_Seq, NestedMessage_Goal_);

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal__initialize(
                NestedMessage_Goal_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal__initialize_ex(
                NestedMessage_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal__initialize_w_params(
                NestedMessage_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_Goal__finalize(
                NestedMessage_Goal_* self);

            NDDSUSERDllExport
            void NestedMessage_Goal__finalize_ex(
                NestedMessage_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_Goal__finalize_w_params(
                NestedMessage_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_Goal__finalize_optional_members(
                NestedMessage_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_Goal__copy(
                NestedMessage_Goal_* dst,
                const NestedMessage_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_SendGoal_Request_TYPENAME;

            struct NestedMessage_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_SendGoal_Request_TypeSupport;
            class NestedMessage_SendGoal_Request_DataWriter;
            class NestedMessage_SendGoal_Request_DataReader;
            #endif

            class NestedMessage_SendGoal_Request_ 
            {
              public:
                typedef struct NestedMessage_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_SendGoal_Request_TypeSupport TypeSupport;
                typedef NestedMessage_SendGoal_Request_DataWriter DataWriter;
                typedef NestedMessage_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                test_msgs::action::dds_::NestedMessage_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_SendGoal_Request_Seq, NestedMessage_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Request__initialize(
                NestedMessage_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Request__initialize_ex(
                NestedMessage_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Request__initialize_w_params(
                NestedMessage_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Request__finalize(
                NestedMessage_SendGoal_Request_* self);

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Request__finalize_ex(
                NestedMessage_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Request__finalize_w_params(
                NestedMessage_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Request__finalize_optional_members(
                NestedMessage_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Request__copy(
                NestedMessage_SendGoal_Request_* dst,
                const NestedMessage_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_SendGoal_Response_TYPENAME;

            struct NestedMessage_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_SendGoal_Response_TypeSupport;
            class NestedMessage_SendGoal_Response_DataWriter;
            class NestedMessage_SendGoal_Response_DataReader;
            #endif

            class NestedMessage_SendGoal_Response_ 
            {
              public:
                typedef struct NestedMessage_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_SendGoal_Response_TypeSupport TypeSupport;
                typedef NestedMessage_SendGoal_Response_DataWriter DataWriter;
                typedef NestedMessage_SendGoal_Response_DataReader DataReader;
                #endif

                DDS_Boolean   accepted_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_SendGoal_Response_Seq, NestedMessage_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Response__initialize(
                NestedMessage_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Response__initialize_ex(
                NestedMessage_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Response__initialize_w_params(
                NestedMessage_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Response__finalize(
                NestedMessage_SendGoal_Response_* self);

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Response__finalize_ex(
                NestedMessage_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Response__finalize_w_params(
                NestedMessage_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_SendGoal_Response__finalize_optional_members(
                NestedMessage_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_SendGoal_Response__copy(
                NestedMessage_SendGoal_Response_* dst,
                const NestedMessage_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_Result_TYPENAME;

            struct NestedMessage_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_Result_TypeSupport;
            class NestedMessage_Result_DataWriter;
            class NestedMessage_Result_DataReader;
            #endif

            class NestedMessage_Result_ 
            {
              public:
                typedef struct NestedMessage_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_Result_TypeSupport TypeSupport;
                typedef NestedMessage_Result_DataWriter DataWriter;
                typedef NestedMessage_Result_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Builtins_   nested_field_no_pkg_ ;
                test_msgs::msg::dds_::BasicTypes_   nested_field_ ;
                builtin_interfaces::msg::dds_::Time_   nested_different_pkg_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_Result_Seq, NestedMessage_Result_);

            NDDSUSERDllExport
            RTIBool NestedMessage_Result__initialize(
                NestedMessage_Result_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_Result__initialize_ex(
                NestedMessage_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_Result__initialize_w_params(
                NestedMessage_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_Result__finalize(
                NestedMessage_Result_* self);

            NDDSUSERDllExport
            void NestedMessage_Result__finalize_ex(
                NestedMessage_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_Result__finalize_w_params(
                NestedMessage_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_Result__finalize_optional_members(
                NestedMessage_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_Result__copy(
                NestedMessage_Result_* dst,
                const NestedMessage_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_GetResult_Request_TYPENAME;

            struct NestedMessage_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_GetResult_Request_TypeSupport;
            class NestedMessage_GetResult_Request_DataWriter;
            class NestedMessage_GetResult_Request_DataReader;
            #endif

            class NestedMessage_GetResult_Request_ 
            {
              public:
                typedef struct NestedMessage_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_GetResult_Request_TypeSupport TypeSupport;
                typedef NestedMessage_GetResult_Request_DataWriter DataWriter;
                typedef NestedMessage_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_GetResult_Request_Seq, NestedMessage_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Request__initialize(
                NestedMessage_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Request__initialize_ex(
                NestedMessage_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Request__initialize_w_params(
                NestedMessage_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_GetResult_Request__finalize(
                NestedMessage_GetResult_Request_* self);

            NDDSUSERDllExport
            void NestedMessage_GetResult_Request__finalize_ex(
                NestedMessage_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_GetResult_Request__finalize_w_params(
                NestedMessage_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_GetResult_Request__finalize_optional_members(
                NestedMessage_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Request__copy(
                NestedMessage_GetResult_Request_* dst,
                const NestedMessage_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_GetResult_Response_TYPENAME;

            struct NestedMessage_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_GetResult_Response_TypeSupport;
            class NestedMessage_GetResult_Response_DataWriter;
            class NestedMessage_GetResult_Response_DataReader;
            #endif

            class NestedMessage_GetResult_Response_ 
            {
              public:
                typedef struct NestedMessage_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_GetResult_Response_TypeSupport TypeSupport;
                typedef NestedMessage_GetResult_Response_DataWriter DataWriter;
                typedef NestedMessage_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                test_msgs::action::dds_::NestedMessage_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_GetResult_Response_Seq, NestedMessage_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Response__initialize(
                NestedMessage_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Response__initialize_ex(
                NestedMessage_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Response__initialize_w_params(
                NestedMessage_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_GetResult_Response__finalize(
                NestedMessage_GetResult_Response_* self);

            NDDSUSERDllExport
            void NestedMessage_GetResult_Response__finalize_ex(
                NestedMessage_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_GetResult_Response__finalize_w_params(
                NestedMessage_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_GetResult_Response__finalize_optional_members(
                NestedMessage_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_GetResult_Response__copy(
                NestedMessage_GetResult_Response_* dst,
                const NestedMessage_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_Feedback_TYPENAME;

            struct NestedMessage_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_Feedback_TypeSupport;
            class NestedMessage_Feedback_DataWriter;
            class NestedMessage_Feedback_DataReader;
            #endif

            class NestedMessage_Feedback_ 
            {
              public:
                typedef struct NestedMessage_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_Feedback_TypeSupport TypeSupport;
                typedef NestedMessage_Feedback_DataWriter DataWriter;
                typedef NestedMessage_Feedback_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Builtins_   nested_field_no_pkg_ ;
                test_msgs::msg::dds_::BasicTypes_   nested_field_ ;
                builtin_interfaces::msg::dds_::Time_   nested_different_pkg_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_Feedback_Seq, NestedMessage_Feedback_);

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__initialize(
                NestedMessage_Feedback_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__initialize_ex(
                NestedMessage_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__initialize_w_params(
                NestedMessage_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize(
                NestedMessage_Feedback_* self);

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize_ex(
                NestedMessage_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize_w_params(
                NestedMessage_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_Feedback__finalize_optional_members(
                NestedMessage_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_Feedback__copy(
                NestedMessage_Feedback_* dst,
                const NestedMessage_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            extern const char *NestedMessage_FeedbackMessage_TYPENAME;

            struct NestedMessage_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NestedMessage_FeedbackMessage_TypeSupport;
            class NestedMessage_FeedbackMessage_DataWriter;
            class NestedMessage_FeedbackMessage_DataReader;
            #endif

            class NestedMessage_FeedbackMessage_ 
            {
              public:
                typedef struct NestedMessage_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NestedMessage_FeedbackMessage_TypeSupport TypeSupport;
                typedef NestedMessage_FeedbackMessage_DataWriter DataWriter;
                typedef NestedMessage_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                test_msgs::action::dds_::NestedMessage_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NestedMessage_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NestedMessage_FeedbackMessage_Seq, NestedMessage_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool NestedMessage_FeedbackMessage__initialize(
                NestedMessage_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool NestedMessage_FeedbackMessage__initialize_ex(
                NestedMessage_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NestedMessage_FeedbackMessage__initialize_w_params(
                NestedMessage_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NestedMessage_FeedbackMessage__finalize(
                NestedMessage_FeedbackMessage_* self);

            NDDSUSERDllExport
            void NestedMessage_FeedbackMessage__finalize_ex(
                NestedMessage_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NestedMessage_FeedbackMessage__finalize_w_params(
                NestedMessage_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NestedMessage_FeedbackMessage__finalize_optional_members(
                NestedMessage_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NestedMessage_FeedbackMessage__copy(
                NestedMessage_FeedbackMessage_* dst,
                const NestedMessage_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace test_msgs  */

#endif /* NestedMessage_ */

