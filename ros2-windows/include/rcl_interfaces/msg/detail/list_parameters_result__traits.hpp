// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rcl_interfaces:msg\ListParametersResult.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__DETAIL__LIST_PARAMETERS_RESULT__TRAITS_HPP_
#define RCL_INTERFACES__MSG__DETAIL__LIST_PARAMETERS_RESULT__TRAITS_HPP_

#include "rcl_interfaces/msg/detail/list_parameters_result__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rcl_interfaces::msg::ListParametersResult>()
{
  return "rcl_interfaces::msg::ListParametersResult";
}

template<>
struct has_fixed_size<rcl_interfaces::msg::ListParametersResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rcl_interfaces::msg::ListParametersResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rcl_interfaces::msg::ListParametersResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__MSG__DETAIL__LIST_PARAMETERS_RESULT__TRAITS_HPP_
