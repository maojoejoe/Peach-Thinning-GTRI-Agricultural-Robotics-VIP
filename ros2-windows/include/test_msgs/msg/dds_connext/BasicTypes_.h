

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BasicTypes_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BasicTypes__132266141_h
#define BasicTypes__132266141_h

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

            extern const char *BasicTypes_TYPENAME;

            struct BasicTypes_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BasicTypes_TypeSupport;
            class BasicTypes_DataWriter;
            class BasicTypes_DataReader;
            #endif

            class BasicTypes_ 
            {
              public:
                typedef struct BasicTypes_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BasicTypes_TypeSupport TypeSupport;
                typedef BasicTypes_DataWriter DataWriter;
                typedef BasicTypes_DataReader DataReader;
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

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BasicTypes__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BasicTypes_Seq, BasicTypes_);

            NDDSUSERDllExport
            RTIBool BasicTypes__initialize(
                BasicTypes_* self);

            NDDSUSERDllExport
            RTIBool BasicTypes__initialize_ex(
                BasicTypes_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BasicTypes__initialize_w_params(
                BasicTypes_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BasicTypes__finalize(
                BasicTypes_* self);

            NDDSUSERDllExport
            void BasicTypes__finalize_ex(
                BasicTypes_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BasicTypes__finalize_w_params(
                BasicTypes_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BasicTypes__finalize_optional_members(
                BasicTypes_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BasicTypes__copy(
                BasicTypes_* dst,
                const BasicTypes_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* BasicTypes_ */

