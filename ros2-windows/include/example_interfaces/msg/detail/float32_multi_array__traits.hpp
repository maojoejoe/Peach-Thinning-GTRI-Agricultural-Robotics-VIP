// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:msg\Float32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__TRAITS_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__TRAITS_HPP_

#include "example_interfaces/msg/detail/float32_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::msg::Float32MultiArray>()
{
  return "example_interfaces::msg::Float32MultiArray";
}

template<>
struct has_fixed_size<example_interfaces::msg::Float32MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::msg::Float32MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::msg::Float32MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__FLOAT32_MULTI_ARRAY__TRAITS_HPP_
