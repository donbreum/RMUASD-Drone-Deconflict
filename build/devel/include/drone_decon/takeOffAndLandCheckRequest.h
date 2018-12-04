// Generated by gencpp from file drone_decon/takeOffAndLandCheckRequest.msg
// DO NOT EDIT!


#ifndef DRONE_DECON_MESSAGE_TAKEOFFANDLANDCHECKREQUEST_H
#define DRONE_DECON_MESSAGE_TAKEOFFANDLANDCHECKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace drone_decon
{
template <class ContainerAllocator>
struct takeOffAndLandCheckRequest_
{
  typedef takeOffAndLandCheckRequest_<ContainerAllocator> Type;

  takeOffAndLandCheckRequest_()
    : drone_id(0)
    , isAsending(false)  {
    }
  takeOffAndLandCheckRequest_(const ContainerAllocator& _alloc)
    : drone_id(0)
    , isAsending(false)  {
  (void)_alloc;
    }



   typedef uint32_t _drone_id_type;
  _drone_id_type drone_id;

   typedef uint8_t _isAsending_type;
  _isAsending_type isAsending;





  typedef boost::shared_ptr< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> const> ConstPtr;

}; // struct takeOffAndLandCheckRequest_

typedef ::drone_decon::takeOffAndLandCheckRequest_<std::allocator<void> > takeOffAndLandCheckRequest;

typedef boost::shared_ptr< ::drone_decon::takeOffAndLandCheckRequest > takeOffAndLandCheckRequestPtr;
typedef boost::shared_ptr< ::drone_decon::takeOffAndLandCheckRequest const> takeOffAndLandCheckRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drone_decon

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'drone_decon': ['/home/andkgl/wspace/catkin_ws/src/RMUASD-Drone-Deconflict/drone_decon/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d18bfc2001b6bb9f57d5c299264ba92c";
  }

  static const char* value(const ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd18bfc2001b6bb9fULL;
  static const uint64_t static_value2 = 0x57d5c299264ba92cULL;
};

template<class ContainerAllocator>
struct DataType< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drone_decon/takeOffAndLandCheckRequest";
  }

  static const char* value(const ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint32 drone_id\n\
bool isAsending\n\
\n\
";
  }

  static const char* value(const ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.drone_id);
      stream.next(m.isAsending);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct takeOffAndLandCheckRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drone_decon::takeOffAndLandCheckRequest_<ContainerAllocator>& v)
  {
    s << indent << "drone_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.drone_id);
    s << indent << "isAsending: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isAsending);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRONE_DECON_MESSAGE_TAKEOFFANDLANDCHECKREQUEST_H
