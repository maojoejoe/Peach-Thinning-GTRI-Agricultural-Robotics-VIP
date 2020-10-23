
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MoveBase_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "MoveBase_Support.h"
#include "MoveBase_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_Goal_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_Goal_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_Goal_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_Goal_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_Goal_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_Goal_DataReader
            #define TDataSeq    MoveBase_Goal_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_Goal_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_Goal_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_Goal_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_Goal_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_Goal_
            #define TDataReader  MoveBase_Goal_DataReader
            #define TDataWriter  MoveBase_Goal_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_SendGoal_Request_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_SendGoal_Request_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_SendGoal_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_SendGoal_Request_DataReader
            #define TDataSeq    MoveBase_SendGoal_Request_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_SendGoal_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_SendGoal_Request_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_SendGoal_Request_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_SendGoal_Request_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_SendGoal_Request_
            #define TDataReader  MoveBase_SendGoal_Request_DataReader
            #define TDataWriter  MoveBase_SendGoal_Request_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_SendGoal_Response_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_SendGoal_Response_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_SendGoal_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_SendGoal_Response_DataReader
            #define TDataSeq    MoveBase_SendGoal_Response_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_SendGoal_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_SendGoal_Response_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_SendGoal_Response_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_SendGoal_Response_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_SendGoal_Response_
            #define TDataReader  MoveBase_SendGoal_Response_DataReader
            #define TDataWriter  MoveBase_SendGoal_Response_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_Result_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_Result_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_Result_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_Result_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_Result_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_Result_DataReader
            #define TDataSeq    MoveBase_Result_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_Result_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_Result_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_Result_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_Result_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_Result_
            #define TDataReader  MoveBase_Result_DataReader
            #define TDataWriter  MoveBase_Result_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_GetResult_Request_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_GetResult_Request_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_GetResult_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_GetResult_Request_DataReader
            #define TDataSeq    MoveBase_GetResult_Request_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_GetResult_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_GetResult_Request_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_GetResult_Request_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_GetResult_Request_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_GetResult_Request_
            #define TDataReader  MoveBase_GetResult_Request_DataReader
            #define TDataWriter  MoveBase_GetResult_Request_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_GetResult_Response_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_GetResult_Response_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_GetResult_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_GetResult_Response_DataReader
            #define TDataSeq    MoveBase_GetResult_Response_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_GetResult_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_GetResult_Response_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_GetResult_Response_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_GetResult_Response_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_GetResult_Response_
            #define TDataReader  MoveBase_GetResult_Response_DataReader
            #define TDataWriter  MoveBase_GetResult_Response_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_Feedback_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_Feedback_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_Feedback_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_Feedback_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_Feedback_DataReader
            #define TDataSeq    MoveBase_Feedback_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_Feedback_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_Feedback_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_Feedback_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_Feedback_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_Feedback_
            #define TDataReader  MoveBase_Feedback_DataReader
            #define TDataWriter  MoveBase_Feedback_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */
namespace move_base_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MoveBase_FeedbackMessage_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter MoveBase_FeedbackMessage_DataWriter
            #define TData       move_base_msgs::action::dds_::MoveBase_FeedbackMessage_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   MoveBase_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader MoveBase_FeedbackMessage_DataReader
            #define TDataSeq    MoveBase_FeedbackMessage_Seq
            #define TData       move_base_msgs::action::dds_::MoveBase_FeedbackMessage_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    MoveBase_FeedbackMessage_TYPENAME
            #define TPlugin_new  move_base_msgs::action::dds_::MoveBase_FeedbackMessage_Plugin_new
            #define TPlugin_delete  move_base_msgs::action::dds_::MoveBase_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport MoveBase_FeedbackMessage_TypeSupport
            #define TData        move_base_msgs::action::dds_::MoveBase_FeedbackMessage_
            #define TDataReader  MoveBase_FeedbackMessage_DataReader
            #define TDataWriter  MoveBase_FeedbackMessage_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace move_base_msgs  */

