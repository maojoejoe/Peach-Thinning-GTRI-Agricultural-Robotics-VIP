

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Arrays_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Arrays__1007569753_h
#define Arrays__1007569753_h

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
    namespace msg {
        namespace dds_ {

            extern const char *Arrays_TYPENAME;

            struct Arrays_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Arrays_TypeSupport;
            class Arrays_DataWriter;
            class Arrays_DataReader;
            #endif

            class Arrays_ 
            {
              public:
                typedef struct Arrays_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Arrays_TypeSupport TypeSupport;
                typedef Arrays_DataWriter DataWriter;
                typedef Arrays_DataReader DataReader;
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
                DDS_Long   alignment_check_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Arrays__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Arrays_Seq, Arrays_);

            NDDSUSERDllExport
            RTIBool Arrays__initialize(
                Arrays_* self);

            NDDSUSERDllExport
            RTIBool Arrays__initialize_ex(
                Arrays_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Arrays__initialize_w_params(
                Arrays_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Arrays__finalize(
                Arrays_* self);

            NDDSUSERDllExport
            void Arrays__finalize_ex(
                Arrays_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Arrays__finalize_w_params(
                Arrays_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Arrays__finalize_optional_members(
                Arrays_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Arrays__copy(
                Arrays_* dst,
                const Arrays_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Arrays_ */

