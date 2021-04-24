// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "message_info/msg/detail/vision_geometry__struct.h"
#include "message_info/msg/detail/vision_geometry__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "message_info/msg/detail/field_circular_arc__functions.h"
#include "message_info/msg/detail/field_line_segment__functions.h"
// end nested array functions include
bool message_info__msg__field_line_segment__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__field_line_segment__convert_to_py(void * raw_ros_message);
bool message_info__msg__field_circular_arc__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__field_circular_arc__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__vision_geometry__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("message_info.msg._vision_geometry.VisionGeometry", full_classname_dest, 48) == 0);
  }
  message_info__msg__VisionGeometry * ros_message = _ros_message;
  {  // field_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->field_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // field_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->field_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // goal_depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->goal_depth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // field_arcs_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_arcs_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->field_arcs_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ball_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ball_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ball_slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball_slope");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ball_slope = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ball_intercept
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball_intercept");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ball_intercept = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_angular_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boundary_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->boundary_width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // field_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'field_lines'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!message_info__msg__FieldLineSegment__Sequence__init(&(ros_message->field_lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create message_info__msg__FieldLineSegment__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    message_info__msg__FieldLineSegment * dest = ros_message->field_lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__field_line_segment__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // field_arcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_arcs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'field_arcs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!message_info__msg__FieldCircularArc__Sequence__init(&(ros_message->field_arcs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create message_info__msg__FieldCircularArc__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    message_info__msg__FieldCircularArc * dest = ros_message->field_arcs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__field_circular_arc__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // goal_plus
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_plus");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->goal_plus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal_minus
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_minus");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->goal_minus)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal_plus_half
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_plus_half");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->goal_plus_half)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal_minus_half
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_minus_half");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->goal_minus_half)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__vision_geometry__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VisionGeometry */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._vision_geometry");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VisionGeometry");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__VisionGeometry * ros_message = (message_info__msg__VisionGeometry *)raw_ros_message;
  {  // field_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->field_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->field_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->goal_depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_arcs_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->field_arcs_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_arcs_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ball_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ball_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ball_slope
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ball_slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball_slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ball_intercept
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ball_intercept);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball_intercept", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_angular_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boundary_width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->boundary_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boundary_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_lines
    PyObject * field = NULL;
    size_t size = ros_message->field_lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__FieldLineSegment * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->field_lines.data[i]);
      PyObject * pyitem = message_info__msg__field_line_segment__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_arcs
    PyObject * field = NULL;
    size_t size = ros_message->field_arcs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__FieldCircularArc * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->field_arcs.data[i]);
      PyObject * pyitem = message_info__msg__field_circular_arc__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_arcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_plus
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->goal_plus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_plus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_minus
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->goal_minus);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_minus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_plus_half
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->goal_plus_half);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_plus_half", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_minus_half
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->goal_minus_half);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_minus_half", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
