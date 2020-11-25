

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WStrings_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WStrings__1383621687_h
#define WStrings__1383621687_h

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

            extern const char *WStrings_TYPENAME;

            struct WStrings_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WStrings_TypeSupport;
            class WStrings_DataWriter;
            class WStrings_DataReader;
            #endif

            class WStrings_ 
            {
              public:
                typedef struct WStrings_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WStrings_TypeSupport TypeSupport;
                typedef WStrings_DataWriter DataWriter;
                typedef WStrings_DataReader DataReader;
                #endif

                DDS_Wchar *   wstring_value_ ;
                DDS_Wchar *   wstring_value_default1_ ;
                DDS_Wchar *   wstring_value_default2_ ;
                DDS_Wchar *   wstring_value_default3_ ;
                DDS_Wchar *   array_of_wstrings_ [3];
                DDS_WstringSeq  bounded_sequence_of_wstrings_ ;
                DDS_WstringSeq  unbounded_sequence_of_wstrings_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WStrings__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WStrings_Seq, WStrings_);

            NDDSUSERDllExport
            RTIBool WStrings__initialize(
                WStrings_* self);

            NDDSUSERDllExport
            RTIBool WStrings__initialize_ex(
                WStrings_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WStrings__initialize_w_params(
                WStrings_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WStrings__finalize(
                WStrings_* self);

            NDDSUSERDllExport
            void WStrings__finalize_ex(
                WStrings_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WStrings__finalize_w_params(
                WStrings_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WStrings__finalize_optional_members(
                WStrings_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WStrings__copy(
                WStrings_* dst,
                const WStrings_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* WStrings_ */

