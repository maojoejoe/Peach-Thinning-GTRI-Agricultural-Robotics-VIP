

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Arrays_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Arrays__1007571028_h
#define Arrays__1007571028_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/BasicTypes_.h"
#include "test_msgs/msg/dds_connext/Constants_.h"
#include "test_msgs/msg/dds_connext/Defaults_.h"
namespace test_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *Arrays_Request_TYPENAME;

            struct Arrays_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Arrays_Request_TypeSupport;
            class Arrays_Request_DataWriter;
            class Arrays_Request_DataReader;
            #endif

            class Arrays_Request_ 
            {
              public:
                typedef struct Arrays_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Arrays_Request_TypeSupport TypeSupport;
                typedef Arrays_Request_DataWriter DataWriter;
                typedef Arrays_Request_DataReader DataReader;
                #endif

                DDS_Boolean   bool_values_ [3];
                DDS_Octet   byte_values_ [3];
                DDS_Octet   char_values_ [3];
                DDS_Float   float32_values_ [3];
                DDS_Double   float64_values_ [3];
                DDS_Octet   int8_values_ [3];
                DDS_Octet   uint8_values_ [3];
                DDS_Short   int16_values_ [3];
                DDS_UnsignedShort   uint16_values_ [3];
                DDS_Long   int32_values_ [3];
                DDS_UnsignedLong   uint32_values_ [3];
                DDS_LongLong   int64_values_ [3];
                DDS_UnsignedLongLong   uint64_values_ [3];
                DDS_Char *   string_values_ [3];
                test_msgs::msg::dds_::BasicTypes_   basic_types_values_ [3];
                test_msgs::msg::dds_::Constants_   constants_values_ [3];
                test_msgs::msg::dds_::Defaults_   defaults_values_ [3];
                DDS_Boolean   bool_values_default_ [3];
                DDS_Octet   byte_values_default_ [3];
                DDS_Octet   char_values_default_ [3];
                DDS_Float   float32_values_default_ [3];
                DDS_Double   float64_values_default_ [3];
                DDS_Octet   int8_values_default_ [3];
                DDS_Octet   uint8_values_default_ [3];
                DDS_Short   int16_values_default_ [3];
                DDS_UnsignedShort   uint16_values_default_ [3];
                DDS_Long   int32_values_default_ [3];
                DDS_UnsignedLong   uint32_values_default_ [3];
                DDS_LongLong   int64_values_default_ [3];
                DDS_UnsignedLongLong   uint64_values_default_ [3];
                DDS_Char *   string_values_default_ [3];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Arrays_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Arrays_Request_Seq, Arrays_Request_);

            NDDSUSERDllExport
            RTIBool Arrays_Request__initialize(
                Arrays_Request_* self);

            NDDSUSERDllExport
            RTIBool Arrays_Request__initialize_ex(
                Arrays_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Arrays_Request__initialize_w_params(
                Arrays_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Arrays_Request__finalize(
                Arrays_Request_* self);

            NDDSUSERDllExport
            void Arrays_Request__finalize_ex(
                Arrays_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Arrays_Request__finalize_w_params(
                Arrays_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Arrays_Request__finalize_optional_members(
                Arrays_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Arrays_Request__copy(
                Arrays_Request_* dst,
                const Arrays_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *Arrays_Response_TYPENAME;

            struct Arrays_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Arrays_Response_TypeSupport;
            class Arrays_Response_DataWriter;
            class Arrays_Response_DataReader;
            #endif

            class Arrays_Response_ 
            {
              public:
                typedef struct Arrays_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Arrays_Response_TypeSupport TypeSupport;
                typedef Arrays_Response_DataWriter DataWriter;
                typedef Arrays_Response_DataReader DataReader;
                #endif

                DDS_Boolean   bool_values_ [3];
                DDS_Octet   byte_values_ [3];
                DDS_Octet   char_values_ [3];
                DDS_Float   float32_values_ [3];
                DDS_Double   float64_values_ [3];
                DDS_Octet   int8_values_ [3];
                DDS_Octet   uint8_values_ [3];
                DDS_Short   int16_values_ [3];
                DDS_UnsignedShort   uint16_values_ [3];
                DDS_Long   int32_values_ [3];
                DDS_UnsignedLong   uint32_values_ [3];
                DDS_LongLong   int64_values_ [3];
                DDS_UnsignedLongLong   uint64_values_ [3];
                DDS_Char *   string_values_ [3];
                test_msgs::msg::dds_::BasicTypes_   basic_types_values_ [3];
                test_msgs::msg::dds_::Constants_   constants_values_ [3];
                test_msgs::msg::dds_::Defaults_   defaults_values_ [3];
                DDS_Boolean   bool_values_default_ [3];
                DDS_Octet   byte_values_default_ [3];
                DDS_Octet   char_values_default_ [3];
                DDS_Float   float32_values_default_ [3];
                DDS_Double   float64_values_default_ [3];
                DDS_Octet   int8_values_default_ [3];
                DDS_Octet   uint8_values_default_ [3];
                DDS_Short   int16_values_default_ [3];
                DDS_UnsignedShort   uint16_values_default_ [3];
                DDS_Long   int32_values_default_ [3];
                DDS_UnsignedLong   uint32_values_default_ [3];
                DDS_LongLong   int64_values_default_ [3];
                DDS_UnsignedLongLong   uint64_values_default_ [3];
                DDS_Char *   string_values_default_ [3];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Arrays_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Arrays_Response_Seq, Arrays_Response_);

            NDDSUSERDllExport
            RTIBool Arrays_Response__initialize(
                Arrays_Response_* self);

            NDDSUSERDllExport
            RTIBool Arrays_Response__initialize_ex(
                Arrays_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Arrays_Response__initialize_w_params(
                Arrays_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Arrays_Response__finalize(
                Arrays_Response_* self);

            NDDSUSERDllExport
            void Arrays_Response__finalize_ex(
                Arrays_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Arrays_Response__finalize_w_params(
                Arrays_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Arrays_Response__finalize_optional_members(
                Arrays_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Arrays_Response__copy(
                Arrays_Response_* dst,
                const Arrays_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */

#endif /* Arrays_ */

