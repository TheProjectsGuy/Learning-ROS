// Generated by gencpp from file intro_pkg1/FloatIOResponse.msg
// DO NOT EDIT!


#ifndef INTRO_PKG1_MESSAGE_FLOATIORESPONSE_H
#define INTRO_PKG1_MESSAGE_FLOATIORESPONSE_H


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
struct FloatIOResponse_
{
  typedef FloatIOResponse_<ContainerAllocator> Type;

  FloatIOResponse_()
    : output(0.0)  {
    }
  FloatIOResponse_(const ContainerAllocator& _alloc)
    : output(0.0)  {
  (void)_alloc;
    }



   typedef double _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FloatIOResponse_

typedef ::intro_pkg1::FloatIOResponse_<std::allocator<void> > FloatIOResponse;

typedef boost::shared_ptr< ::intro_pkg1::FloatIOResponse > FloatIOResponsePtr;
typedef boost::shared_ptr< ::intro_pkg1::FloatIOResponse const> FloatIOResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intro_pkg1::FloatIOResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intro_pkg1

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'intro_pkg1': ['/home/stark/ROS_workspaces/ros_ws/src/intro_pkg1/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5dd87a43ba76105996c6c8cafb738498";
  }

  static const char* value(const ::intro_pkg1::FloatIOResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5dd87a43ba761059ULL;
  static const uint64_t static_value2 = 0x96c6c8cafb738498ULL;
};

template<class ContainerAllocator>
struct DataType< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intro_pkg1/FloatIOResponse";
  }

  static const char* value(const ::intro_pkg1::FloatIOResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float64 output\n\
";
  }

  static const char* value(const ::intro_pkg1::FloatIOResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FloatIOResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intro_pkg1::FloatIOResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intro_pkg1::FloatIOResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    Printer<double>::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTRO_PKG1_MESSAGE_FLOATIORESPONSE_H
