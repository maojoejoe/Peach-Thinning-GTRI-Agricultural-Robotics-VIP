

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundedSequences_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BoundedSequences__1881741113_h
#define BoundedSequences__1881741113_h

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

            extern const char *BoundedSequences_TYPENAME;

            struct BoundedSequences_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BoundedSequences_TypeSupport;
            class BoundedSequences_DataWriter;
            class BoundedSequences_DataReader;
            #endif

            class BoundedSequences_ 
            {
              public:
                typedef struct BoundedSequences_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BoundedSequences_TypeSupport TypeSupport;
                typedef BoundedSequences_DataWriter DataWriter;
                typedef BoundedSequences_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* BoundedSequences__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BoundedSequences_Seq, BoundedSequences_);

            NDDSUSERDllExport
            RTIBool BoundedSequences__initialize(
                BoundedSequences_* self);

            NDDSUSERDllExport
            RTIBool BoundedSequences__initialize_ex(
                BoundedSequences_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BoundedSequences__initialize_w_params(
                BoundedSequences_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BoundedSequences__finalize(
                BoundedSequences_* self);

            NDDSUSERDllExport
            void BoundedSequences__finalize_ex(
                BoundedSequences_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BoundedSequences__finalize_w_params(
                BoundedSequences_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BoundedSequences__finalize_optional_members(
                BoundedSequences_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BoundedSequences__copy(
                BoundedSequences_* dst,
                const BoundedSequences_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* BoundedSequences_ */

