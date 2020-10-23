

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Strings_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Strings__1139879764_h
#define Strings__1139879764_h

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
            namespace Strings_Constants {
                static const DDS_Char * STRING_CONST_= "Hello world!";
            } /* namespace Strings_Constants  */

            extern const char *Strings_TYPENAME;

            struct Strings_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Strings_TypeSupport;
            class Strings_DataWriter;
            class Strings_DataReader;
            #endif

            class Strings_ 
            {
              public:
                typedef struct Strings_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Strings_TypeSupport TypeSupport;
                typedef Strings_DataWriter DataWriter;
                typedef Strings_DataReader DataReader;
                #endif

                DDS_Char *   string_value_ ;
                DDS_Char *   string_value_default1_ ;
                DDS_Char *   string_value_default2_ ;
                DDS_Char *   string_value_default3_ ;
                DDS_Char *   string_value_default4_ ;
                DDS_Char *   string_value_default5_ ;
                DDS_Char *   bounded_string_value_ ;
                DDS_Char *   bounded_string_value_default1_ ;
                DDS_Char *   bounded_string_value_default2_ ;
                DDS_Char *   bounded_string_value_default3_ ;
                DDS_Char *   bounded_string_value_default4_ ;
                DDS_Char *   bounded_string_value_default5_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Strings__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Strings_Seq, Strings_);

            NDDSUSERDllExport
            RTIBool Strings__initialize(
                Strings_* self);

            NDDSUSERDllExport
            RTIBool Strings__initialize_ex(
                Strings_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Strings__initialize_w_params(
                Strings_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Strings__finalize(
                Strings_* self);

            NDDSUSERDllExport
            void Strings__finalize_ex(
                Strings_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Strings__finalize_w_params(
                Strings_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Strings__finalize_optional_members(
                Strings_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Strings__copy(
                Strings_* dst,
                const Strings_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Strings_ */

