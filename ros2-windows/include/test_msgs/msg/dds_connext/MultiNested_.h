

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiNested__1764599978_h
#define MultiNested__1764599978_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/Arrays_.h"
#include "test_msgs/msg/dds_connext/BoundedSequences_.h"
#include "test_msgs/msg/dds_connext/UnboundedSequences_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MultiNested_TYPENAME;

            struct MultiNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiNested_TypeSupport;
            class MultiNested_DataWriter;
            class MultiNested_DataReader;
            #endif

            class MultiNested_ 
            {
              public:
                typedef struct MultiNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiNested_TypeSupport TypeSupport;
                typedef MultiNested_DataWriter DataWriter;
                typedef MultiNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Arrays_   array_of_arrays_ [3];
                test_msgs::msg::dds_::BoundedSequences_   array_of_bounded_sequences_ [3];
                test_msgs::msg::dds_::UnboundedSequences_   array_of_unbounded_sequences_ [3];
                test_msgs::msg::dds_::Arrays_Seq  bounded_sequence_of_arrays_ ;
                test_msgs::msg::dds_::BoundedSequences_Seq  bounded_sequence_of_bounded_sequences_ ;
                test_msgs::msg::dds_::UnboundedSequences_Seq  bounded_sequence_of_unbounded_sequences_ ;
                test_msgs::msg::dds_::Arrays_Seq  unbounded_sequence_of_arrays_ ;
                test_msgs::msg::dds_::BoundedSequences_Seq  unbounded_sequence_of_bounded_sequences_ ;
                test_msgs::msg::dds_::UnboundedSequences_Seq  unbounded_sequence_of_unbounded_sequences_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiNested_Seq, MultiNested_);

            NDDSUSERDllExport
            RTIBool MultiNested__initialize(
                MultiNested_* self);

            NDDSUSERDllExport
            RTIBool MultiNested__initialize_ex(
                MultiNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiNested__initialize_w_params(
                MultiNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiNested__finalize(
                MultiNested_* self);

            NDDSUSERDllExport
            void MultiNested__finalize_ex(
                MultiNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiNested__finalize_w_params(
                MultiNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiNested__finalize_optional_members(
                MultiNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiNested__copy(
                MultiNested_* dst,
                const MultiNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* MultiNested_ */

