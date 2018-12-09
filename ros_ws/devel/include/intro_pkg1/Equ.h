// Generated by gencpp from file intro_pkg1/Equ.msg
// DO NOT EDIT!


#ifndef INTRO_PKG1_MESSAGE_EQU_H
#define INTRO_PKG1_MESSAGE_EQU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intro_pkg1
{
template <class ContainerAllocator>
struct Equ_
{
  typedef Equ_<ContainerAllocator> Type;

  Equ_()
    : info()
    , value(0.0)  {
    }
  Equ_(const ContainerAllocator& _alloc)
    : info(_alloc)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  _info_type info;

   typedef double _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::intro_pkg1::Equ_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intro_pkg1::Equ_<ContainerAllocator> const> ConstPtr;

}; // struct Equ_

typedef ::intro_pkg1::Equ_<std::allocator<void> > Equ;

typedef boost::shared_ptr< ::intro_pkg1::Equ > EquPtr;
typedef boost::shared_ptr< ::intro_pkg1::Equ const> EquConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intro_pkg1::Equ_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intro_pkg1::Equ_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intro_pkg1

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'intro_pkg1': ['/home/stark/ROS_workspaces/ros_ws/src/intro_pkg1/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intro_pkg1::Equ_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intro_pkg1::Equ_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intro_pkg1::Equ_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intro_pkg1::Equ_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intro_pkg1::Equ_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intro_pkg1::Equ_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intro_pkg1::Equ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cbbb65bba7b391acb2e0a0d07ce1c8e4";
  }

  static const char* value(const ::intro_pkg1::Equ_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcbbb65bba7b391acULL;
  static const uint64_t static_value2 = 0xb2e0a0d07ce1c8e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::intro_pkg1::Equ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intro_pkg1/Equ";
  }

  static const char* value(const ::intro_pkg1::Equ_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intro_pkg1::Equ_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Information\n\
string info\n\
# Floating point value\n\
float64 value\n\
";
  }

  static const char* value(const ::intro_pkg1::Equ_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intro_pkg1::Equ_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.info);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Equ_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intro_pkg1::Equ_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intro_pkg1::Equ_<ContainerAllocator>& v)
  {
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
    s << indent << "value: ";
    Printer<double>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTRO_PKG1_MESSAGE_EQU_H
