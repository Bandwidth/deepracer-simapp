// Generated by gencpp from file deepracer_msgs/GetVisualsResponse.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETVISUALSRESPONSE_H
#define DEEPRACER_MSGS_MESSAGE_GETVISUALSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Pose.h>

namespace deepracer_msgs
{
template <class ContainerAllocator>
struct GetVisualsResponse_
{
  typedef GetVisualsResponse_<ContainerAllocator> Type;

  GetVisualsResponse_()
    : link_names()
    , visual_names()
    , ambients()
    , diffuses()
    , speculars()
    , emissives()
    , transparencies()
    , visibles()
    , geometry_types()
    , mesh_geom_filenames()
    , mesh_geom_scales()
    , poses()
    , success(false)
    , status_message()
    , status()
    , messages()  {
    }
  GetVisualsResponse_(const ContainerAllocator& _alloc)
    : link_names(_alloc)
    , visual_names(_alloc)
    , ambients(_alloc)
    , diffuses(_alloc)
    , speculars(_alloc)
    , emissives(_alloc)
    , transparencies(_alloc)
    , visibles(_alloc)
    , geometry_types(_alloc)
    , mesh_geom_filenames(_alloc)
    , mesh_geom_scales(_alloc)
    , poses(_alloc)
    , success(false)
    , status_message(_alloc)
    , status(_alloc)
    , messages(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _link_names_type;
  _link_names_type link_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _visual_names_type;
  _visual_names_type visual_names;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _ambients_type;
  _ambients_type ambients;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _diffuses_type;
  _diffuses_type diffuses;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _speculars_type;
  _speculars_type speculars;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _emissives_type;
  _emissives_type emissives;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _transparencies_type;
  _transparencies_type transparencies;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _visibles_type;
  _visibles_type visibles;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _geometry_types_type;
  _geometry_types_type geometry_types;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _mesh_geom_filenames_type;
  _mesh_geom_filenames_type mesh_geom_filenames;

   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3_<ContainerAllocator> >::other >  _mesh_geom_scales_type;
  _mesh_geom_scales_type mesh_geom_scales;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_message_type;
  _status_message_type status_message;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _status_type;
  _status_type status;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _messages_type;
  _messages_type messages;





  typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetVisualsResponse_

typedef ::deepracer_msgs::GetVisualsResponse_<std::allocator<void> > GetVisualsResponse;

typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsResponse > GetVisualsResponsePtr;
typedef boost::shared_ptr< ::deepracer_msgs::GetVisualsResponse const> GetVisualsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.link_names == rhs.link_names &&
    lhs.visual_names == rhs.visual_names &&
    lhs.ambients == rhs.ambients &&
    lhs.diffuses == rhs.diffuses &&
    lhs.speculars == rhs.speculars &&
    lhs.emissives == rhs.emissives &&
    lhs.transparencies == rhs.transparencies &&
    lhs.visibles == rhs.visibles &&
    lhs.geometry_types == rhs.geometry_types &&
    lhs.mesh_geom_filenames == rhs.mesh_geom_filenames &&
    lhs.mesh_geom_scales == rhs.mesh_geom_scales &&
    lhs.poses == rhs.poses &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message &&
    lhs.status == rhs.status &&
    lhs.messages == rhs.messages;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ea1d75463da94ce6f8ea172b14f758a";
  }

  static const char* value(const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ea1d75463da94ceULL;
  static const uint64_t static_value2 = 0x6f8ea172b14f758aULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/GetVisualsResponse";
  }

  static const char* value(const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] link_names\n"
"string[] visual_names\n"
"std_msgs/ColorRGBA[] ambients\n"
"std_msgs/ColorRGBA[] diffuses\n"
"std_msgs/ColorRGBA[] speculars\n"
"std_msgs/ColorRGBA[] emissives\n"
"float64[] transparencies\n"
"int8[] visibles\n"
"uint16[] geometry_types\n"
"string[] mesh_geom_filenames\n"
"geometry_msgs/Vector3[] mesh_geom_scales\n"
"geometry_msgs/Pose[] poses\n"
"bool success\n"
"string status_message\n"
"int8[] status                        # status of each request: true if succeeded otherwise false\n"
"string[] messages\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_names);
      stream.next(m.visual_names);
      stream.next(m.ambients);
      stream.next(m.diffuses);
      stream.next(m.speculars);
      stream.next(m.emissives);
      stream.next(m.transparencies);
      stream.next(m.visibles);
      stream.next(m.geometry_types);
      stream.next(m.mesh_geom_filenames);
      stream.next(m.mesh_geom_scales);
      stream.next(m.poses);
      stream.next(m.success);
      stream.next(m.status_message);
      stream.next(m.status);
      stream.next(m.messages);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetVisualsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::GetVisualsResponse_<ContainerAllocator>& v)
  {
    s << indent << "link_names[]" << std::endl;
    for (size_t i = 0; i < v.link_names.size(); ++i)
    {
      s << indent << "  link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_names[i]);
    }
    s << indent << "visual_names[]" << std::endl;
    for (size_t i = 0; i < v.visual_names.size(); ++i)
    {
      s << indent << "  visual_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.visual_names[i]);
    }
    s << indent << "ambients[]" << std::endl;
    for (size_t i = 0; i < v.ambients.size(); ++i)
    {
      s << indent << "  ambients[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.ambients[i]);
    }
    s << indent << "diffuses[]" << std::endl;
    for (size_t i = 0; i < v.diffuses.size(); ++i)
    {
      s << indent << "  diffuses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.diffuses[i]);
    }
    s << indent << "speculars[]" << std::endl;
    for (size_t i = 0; i < v.speculars.size(); ++i)
    {
      s << indent << "  speculars[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.speculars[i]);
    }
    s << indent << "emissives[]" << std::endl;
    for (size_t i = 0; i < v.emissives.size(); ++i)
    {
      s << indent << "  emissives[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.emissives[i]);
    }
    s << indent << "transparencies[]" << std::endl;
    for (size_t i = 0; i < v.transparencies.size(); ++i)
    {
      s << indent << "  transparencies[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.transparencies[i]);
    }
    s << indent << "visibles[]" << std::endl;
    for (size_t i = 0; i < v.visibles.size(); ++i)
    {
      s << indent << "  visibles[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.visibles[i]);
    }
    s << indent << "geometry_types[]" << std::endl;
    for (size_t i = 0; i < v.geometry_types.size(); ++i)
    {
      s << indent << "  geometry_types[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.geometry_types[i]);
    }
    s << indent << "mesh_geom_filenames[]" << std::endl;
    for (size_t i = 0; i < v.mesh_geom_filenames.size(); ++i)
    {
      s << indent << "  mesh_geom_filenames[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mesh_geom_filenames[i]);
    }
    s << indent << "mesh_geom_scales[]" << std::endl;
    for (size_t i = 0; i < v.mesh_geom_scales.size(); ++i)
    {
      s << indent << "  mesh_geom_scales[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.mesh_geom_scales[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_message);
    s << indent << "status[]" << std::endl;
    for (size_t i = 0; i < v.status.size(); ++i)
    {
      s << indent << "  status[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.status[i]);
    }
    s << indent << "messages[]" << std::endl;
    for (size_t i = 0; i < v.messages.size(); ++i)
    {
      s << indent << "  messages[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.messages[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETVISUALSRESPONSE_H
