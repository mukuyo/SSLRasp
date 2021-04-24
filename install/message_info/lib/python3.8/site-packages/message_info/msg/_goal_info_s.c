// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/GoalInfo.idl
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
#include "message_info/msg/detail/goal_info__struct.h"
#include "message_info/msg/detail/goal_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__goal_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("message_info.msg._goal_info.GoalInfo", full_classname_dest, 36) == 0);
  }
  message_info__msg__GoalInfo * ros_message = _ros_message;
  {  // their
    PyObject * field = PyObject_GetAttrString(_pymsg, "their");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->their)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // our
    PyObject * field = PyObject_GetAttrString(_pymsg, "our");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose2_d__convert_from_py(field, &ros_message->our)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // field_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->field_width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // field_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->field_length = (int32_t)PyLong_AsLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__goal_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GoalInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._goal_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GoalInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__GoalInfo * ros_message = (message_info__msg__GoalInfo *)raw_ros_message;
  {  // their
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->their);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "their", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // our
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose2_d__convert_to_py(&ros_message->our);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "our", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->field_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->field_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_length", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
