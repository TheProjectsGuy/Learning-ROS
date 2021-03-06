// Generated by gencpp from file intro_pkg1/FloatIO.msg
// DO NOT EDIT!


#ifndef INTRO_PKG1_MESSAGE_FLOATIO_H
#define INTRO_PKG1_MESSAGE_FLOATIO_H

#include <ros/service_traits.h>


#include <intro_pkg1/FloatIORequest.h>
#include <intro_pkg1/FloatIOResponse.h>


namespace intro_pkg1
{

struct FloatIO
{

typedef FloatIORequest Request;
typedef FloatIOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FloatIO
} // namespace intro_pkg1


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::intro_pkg1::FloatIO > {
  static const char* value()
  {
    return "6c59364dede48a4429627e3e0efa7049";
  }

  static const char* value(const ::intro_pkg1::FloatIO&) { return value(); }
};

template<>
struct DataType< ::intro_pkg1::FloatIO > {
  static const char* value()
  {
    return "intro_pkg1/FloatIO";
  }

  static const char* value(const ::intro_pkg1::FloatIO&) { return value(); }
};


// service_traits::MD5Sum< ::intro_pkg1::FloatIORequest> should match 
// service_traits::MD5Sum< ::intro_pkg1::FloatIO > 
template<>
struct MD5Sum< ::intro_pkg1::FloatIORequest>
{
  static const char* value()
  {
    return MD5Sum< ::intro_pkg1::FloatIO >::value();
  }
  static const char* value(const ::intro_pkg1::FloatIORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::intro_pkg1::FloatIORequest> should match 
// service_traits::DataType< ::intro_pkg1::FloatIO > 
template<>
struct DataType< ::intro_pkg1::FloatIORequest>
{
  static const char* value()
  {
    return DataType< ::intro_pkg1::FloatIO >::value();
  }
  static const char* value(const ::intro_pkg1::FloatIORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::intro_pkg1::FloatIOResponse> should match 
// service_traits::MD5Sum< ::intro_pkg1::FloatIO > 
template<>
struct MD5Sum< ::intro_pkg1::FloatIOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::intro_pkg1::FloatIO >::value();
  }
  static const char* value(const ::intro_pkg1::FloatIOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::intro_pkg1::FloatIOResponse> should match 
// service_traits::DataType< ::intro_pkg1::FloatIO > 
template<>
struct DataType< ::intro_pkg1::FloatIOResponse>
{
  static const char* value()
  {
    return DataType< ::intro_pkg1::FloatIO >::value();
  }
  static const char* value(const ::intro_pkg1::FloatIOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INTRO_PKG1_MESSAGE_FLOATIO_H
