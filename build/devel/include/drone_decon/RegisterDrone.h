// Generated by gencpp from file drone_decon/RegisterDrone.msg
// DO NOT EDIT!


#ifndef DRONE_DECON_MESSAGE_REGISTERDRONE_H
#define DRONE_DECON_MESSAGE_REGISTERDRONE_H


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
struct RegisterDrone_
{
  typedef RegisterDrone_<ContainerAllocator> Type;

  RegisterDrone_()
    : drone_id(0)  {
    }
  RegisterDrone_(const ContainerAllocator& _alloc)
    : drone_id(0)  {
  (void)_alloc;
    }



   typedef uint32_t _drone_id_type;
  _drone_id_type drone_id;





  typedef boost::shared_ptr< ::drone_decon::RegisterDrone_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drone_decon::RegisterDrone_<ContainerAllocator> const> ConstPtr;

}; // struct RegisterDrone_

typedef ::drone_decon::RegisterDrone_<std::allocator<void> > RegisterDrone;

typedef boost::shared_ptr< ::drone_decon::RegisterDrone > RegisterDronePtr;
typedef boost::shared_ptr< ::drone_decon::RegisterDrone const> RegisterDroneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drone_decon::RegisterDrone_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drone_decon::RegisterDrone_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drone_decon::RegisterDrone_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drone_decon::RegisterDrone_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drone_decon::RegisterDrone_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drone_decon::RegisterDrone_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drone_decon::RegisterDrone_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drone_decon::RegisterDrone_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drone_decon::RegisterDrone_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d2b88006655e09d50ef5be4d2a6c794";
  }

  static const char* value(const ::drone_decon::RegisterDrone_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d2b88006655e09dULL;
  static const uint64_t static_value2 = 0x50ef5be4d2a6c794ULL;
};

template<class ContainerAllocator>
struct DataType< ::drone_decon::RegisterDrone_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drone_decon/RegisterDrone";
  }

  static const char* value(const ::drone_decon::RegisterDrone_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drone_decon::RegisterDrone_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 drone_id\n\
";
  }

  static const char* value(const ::drone_decon::RegisterDrone_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drone_decon::RegisterDrone_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.drone_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RegisterDrone_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drone_decon::RegisterDrone_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drone_decon::RegisterDrone_<ContainerAllocator>& v)
  {
    s << indent << "drone_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.drone_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRONE_DECON_MESSAGE_REGISTERDRONE_H
