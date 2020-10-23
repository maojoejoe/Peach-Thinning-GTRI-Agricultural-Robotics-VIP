

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BasicTypes_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BasicTypes__132266677_h
#define BasicTypes__132266677_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace test_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *BasicTypes_Request_TYPENAME;

            struct BasicTypes_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BasicTypes_Request_TypeSupport;
            class BasicTypes_Request_DataWriter;
            class BasicTypes_Request_DataReader;
            #endif

            class BasicTypes_Request_ 
            {
              public:
                typedef struct BasicTypes_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BasicTypes_Request_TypeSupport TypeSupport;
                typedef BasicTypes_Request_DataWriter DataWriter;
                typedef BasicTypes_Request_DataReader DataReader;
                #endif

                DDS_Boolean   bool_value_ ;
                DDS_Octet   byte_value_ ;
                DDS_Octet   char_value_ ;
                DDS_Float   float32_value_ ;
                DDS_Double   float64_value_ ;
                DDS_Octet   int8_value_ ;
                DDS_Octet   uint8_value_ ;
                DDS_Short   int16_value_ ;
                DDS_UnsignedShort   uint16_value_ ;
                DDS_Long   int32_value_ ;
                DDS_UnsignedLong   uint32_value_ ;
                DDS_LongLong   int64_value_ ;
                DDS_UnsignedLongLong   uint64_value_ ;
                DDS_Char *   string_value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BasicTypes_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BasicTypes_Request_Seq, BasicTypes_Request_);

            NDDSUSERDllExport
            RTIBool BasicTypes_Request__initialize(
                BasicTypes_Request_* self);

            NDDSUSERDllExport
            RTIBool BasicTypes_Request__initialize_ex(
                BasicTypes_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BasicTypes_Request__initialize_w_params(
                BasicTypes_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BasicTypes_Request__finalize(
                BasicTypes_Request_* self);

            NDDSUSERDllExport
            void BasicTypes_Request__finalize_ex(
                BasicTypes_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BasicTypes_Request__finalize_w_params(
                BasicTypes_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BasicTypes_Request__finalize_optional_members(
                BasicTypes_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BasicTypes_Request__copy(
                BasicTypes_Request_* dst,
                const BasicTypes_Request_* src);

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

            extern const char *BasicTypes_Response_TYPENAME;

            struct BasicTypes_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BasicTypes_Response_TypeSupport;
            class BasicTypes_Response_DataWriter;
            class BasicTypes_Response_DataReader;
            #endif

            class BasicTypes_Response_ 
            {
              public:
                typedef struct BasicTypes_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BasicTypes_Response_TypeSupport TypeSupport;
                typedef BasicTypes_Response_DataWriter DataWriter;
                typedef BasicTypes_Response_DataReader DataReader;
                #endif

                DDS_Boolean   bool_value_ ;
                DDS_Octet   byte_value_ ;
                DDS_Octet   char_value_ ;
                DDS_Float   float32_value_ ;
                DDS_Double   float64_value_ ;
                DDS_Octet   int8_value_ ;
                DDS_Octet   uint8_value_ ;
                DDS_Short   int16_value_ ;
                DDS_UnsignedShort   uint16_value_ ;
                DDS_Long   int32_value_ ;
                DDS_UnsignedLong   uint32_value_ ;
                DDS_LongLong   int64_value_ ;
                DDS_UnsignedLongLong   uint64_value_ ;
                DDS_Char *   string_value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BasicTypes_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BasicTypes_Response_Seq, BasicTypes_Response_);

            NDDSUSERDllExport
            RTIBool BasicTypes_Response__initialize(
                BasicTypes_Response_* self);

            NDDSUSERDllExport
            RTIBool BasicTypes_Response__initialize_ex(
                BasicTypes_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BasicTypes_Response__initialize_w_params(
                BasicTypes_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BasicTypes_Response__finalize(
                BasicTypes_Response_* self);

            NDDSUSERDllExport
            void BasicTypes_Response__finalize_ex(
                BasicTypes_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BasicTypes_Response__finalize_w_params(
                BasicTypes_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BasicTypes_Response__finalize_optional_members(
                BasicTypes_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BasicTypes_Response__copy(
                BasicTypes_Response_* dst,
                const BasicTypes_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */

#endif /* BasicTypes_ */

