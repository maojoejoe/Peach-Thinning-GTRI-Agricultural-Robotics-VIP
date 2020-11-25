
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectoryPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "JointTrajectoryPoint_Support.h"
#include "JointTrajectoryPoint_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'JointTrajectoryPoint_' support classes.

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
            #define TTYPENAME   JointTrajectoryPoint_TYPENAME

            /* Defines */
            #define TDataWriter JointTrajectoryPoint_DataWriter
            #define TData       trajectory_msgs::msg::dds_::JointTrajectoryPoint_

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
            #define TTYPENAME   JointTrajectoryPoint_TYPENAME

            /* Defines */
            #define TDataReader JointTrajectoryPoint_DataReader
            #define TDataSeq    JointTrajectoryPoint_Seq
            #define TData       trajectory_msgs::msg::dds_::JointTrajectoryPoint_

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
            #define TTYPENAME    JointTrajectoryPoint_TYPENAME
            #define TPlugin_new  trajectory_msgs::msg::dds_::JointTrajectoryPoint_Plugin_new
            #define TPlugin_delete  trajectory_msgs::msg::dds_::JointTrajectoryPoint_Plugin_delete

            /* Defines */
            #define TTypeSupport JointTrajectoryPoint_TypeSupport
            #define TData        trajectory_msgs::msg::dds_::JointTrajectoryPoint_
            #define TDataReader  JointTrajectoryPoint_DataReader
            #define TDataWriter  JointTrajectoryPoint_DataWriter
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
    } /* namespace msg  */
} /* namespace trajectory_msgs  */

