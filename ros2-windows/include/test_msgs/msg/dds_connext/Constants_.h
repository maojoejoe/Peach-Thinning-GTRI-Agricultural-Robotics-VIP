

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Constants_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Constants__54204227_h
#define Constants__54204227_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace test_msgs {
    namespace msg {
        namespace dds_ {
            namespace Constants_Constants {
                static const DDS_Boolean BOOL_CONST_= DDS_BOOLEAN_TRUE;
                static const DDS_Octet BYTE_CONST_= 50;
                static const DDS_Octet CHAR_CONST_= 100;
                static const DDS_Float FLOAT32_CONST_= 1.125000;
                static const DDS_Double FLOAT64_CONST_= 1.125000;
                static const DDS_Octet INT8_CONST_= 206;
                static const DDS_Octet UINT8_CONST_= 200;
                static const DDS_Short INT16_CONST_= -1000;
                static const DDS_UnsignedShort UINT16_CONST_= 2000;
                static const DDS_Long INT32_CONST_= -30000;
                static const DDS_UnsignedLong UINT32_CONST_= 60000;
                static const DDS_LongLong INT64_CONST_= -40000000LL;
                static const DDS_UnsignedLongLong UINT64_CONST_= 50000000ULL;
            } /* namespace Constants_Constants  */

            extern const char *Constants_TYPENAME;

            struct Constants_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Constants_TypeSupport;
            class Constants_DataWriter;
            class Constants_DataReader;
            #endif

            class Constants_ 
            {
              public:
                typedef struct Constants_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Constants_TypeSupport TypeSupport;
                typedef Constants_DataWriter DataWriter;
                typedef Constants_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Constants__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Constants_Seq, Constants_);

            NDDSUSERDllExport
            RTIBool Constants__initialize(
                Constants_* self);

            NDDSUSERDllExport
            RTIBool Constants__initialize_ex(
                Constants_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Constants__initialize_w_params(
                Constants_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Constants__finalize(
                Constants_* self);

            NDDSUSERDllExport
            void Constants__finalize_ex(
                Constants_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Constants__finalize_w_params(
                Constants_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Constants__finalize_optional_members(
                Constants_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Constants__copy(
                Constants_* dst,
                const Constants_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Constants_ */

