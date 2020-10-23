

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Defaults_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Defaults__1627515287_h
#define Defaults__1627515287_h

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

            extern const char *Defaults_TYPENAME;

            struct Defaults_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Defaults_TypeSupport;
            class Defaults_DataWriter;
            class Defaults_DataReader;
            #endif

            class Defaults_ 
            {
              public:
                typedef struct Defaults_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Defaults_TypeSupport TypeSupport;
                typedef Defaults_DataWriter DataWriter;
                typedef Defaults_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* Defaults__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Defaults_Seq, Defaults_);

            NDDSUSERDllExport
            RTIBool Defaults__initialize(
                Defaults_* self);

            NDDSUSERDllExport
            RTIBool Defaults__initialize_ex(
                Defaults_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Defaults__initialize_w_params(
                Defaults_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Defaults__finalize(
                Defaults_* self);

            NDDSUSERDllExport
            void Defaults__finalize_ex(
                Defaults_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Defaults__finalize_w_params(
                Defaults_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Defaults__finalize_optional_members(
                Defaults_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Defaults__copy(
                Defaults_* dst,
                const Defaults_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Defaults_ */

