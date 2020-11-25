

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UnboundedSequences_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UnboundedSequences__1932909037_h
#define UnboundedSequences__1932909037_h

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

            extern const char *UnboundedSequences_TYPENAME;

            struct UnboundedSequences_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UnboundedSequences_TypeSupport;
            class UnboundedSequences_DataWriter;
            class UnboundedSequences_DataReader;
            #endif

            class UnboundedSequences_ 
            {
              public:
                typedef struct UnboundedSequences_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UnboundedSequences_TypeSupport TypeSupport;
                typedef UnboundedSequences_DataWriter DataWriter;
                typedef UnboundedSequences_DataReader DataReader;
                #endif

                DDS_BooleanSeq  bool_values_ ;
                DDS_OctetSeq  byte_values_ ;
                DDS_OctetSeq  char_values_ ;
                DDS_FloatSeq  float32_values_ ;
                DDS_DoubleSeq  float64_values_ ;
                DDS_OctetSeq  int8_values_ ;
                DDS_OctetSeq  uint8_values_ ;
                DDS_ShortSeq  int16_values_ ;
                DDS_UnsignedShortSeq  uint16_values_ ;
                DDS_LongSeq  int32_values_ ;
                DDS_UnsignedLongSeq  uint32_values_ ;
                DDS_LongLongSeq  int64_values_ ;
                DDS_UnsignedLongLongSeq  uint64_values_ ;
                DDS_StringSeq  string_values_ ;
                test_msgs::msg::dds_::BasicTypes_Seq  basic_types_values_ ;
                test_msgs::msg::dds_::Constants_Seq  constants_values_ ;
                test_msgs::msg::dds_::Defaults_Seq  defaults_values_ ;
                DDS_BooleanSeq  bool_values_default_ ;
                DDS_OctetSeq  byte_values_default_ ;
                DDS_OctetSeq  char_values_default_ ;
                DDS_FloatSeq  float32_values_default_ ;
                DDS_DoubleSeq  float64_values_default_ ;
                DDS_OctetSeq  int8_values_default_ ;
                DDS_OctetSeq  uint8_values_default_ ;
                DDS_ShortSeq  int16_values_default_ ;
                DDS_UnsignedShortSeq  uint16_values_default_ ;
                DDS_LongSeq  int32_values_default_ ;
                DDS_UnsignedLongSeq  uint32_values_default_ ;
                DDS_LongLongSeq  int64_values_default_ ;
                DDS_UnsignedLongLongSeq  uint64_values_default_ ;
                DDS_StringSeq  string_values_default_ ;
                DDS_Long   alignment_check_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UnboundedSequences__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UnboundedSequences_Seq, UnboundedSequences_);

            NDDSUSERDllExport
            RTIBool UnboundedSequences__initialize(
                UnboundedSequences_* self);

            NDDSUSERDllExport
            RTIBool UnboundedSequences__initialize_ex(
                UnboundedSequences_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UnboundedSequences__initialize_w_params(
                UnboundedSequences_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UnboundedSequences__finalize(
                UnboundedSequences_* self);

            NDDSUSERDllExport
            void UnboundedSequences__finalize_ex(
                UnboundedSequences_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UnboundedSequences__finalize_w_params(
                UnboundedSequences_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UnboundedSequences__finalize_optional_members(
                UnboundedSequences_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UnboundedSequences__copy(
                UnboundedSequences_* dst,
                const UnboundedSequences_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* UnboundedSequences_ */

