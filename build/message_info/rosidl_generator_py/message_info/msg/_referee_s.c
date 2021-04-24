// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/Referee.idl
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
#include "message_info/msg/detail/referee__struct.h"
#include "message_info/msg/detail/referee__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool message_info__msg__referee_team_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__referee_team_info__convert_to_py(void * raw_ros_message);
bool message_info__msg__referee_team_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__referee_team_info__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
bool message_info__msg__referee_game_event__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__referee_game_event__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__referee__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("message_info.msg._referee.Referee", full_classname_dest, 33) == 0);
  }
  message_info__msg__Referee * ros_message = _ros_message;
  {  // stage
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // play
    PyObject * field = PyObject_GetAttrString(_pymsg, "play");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->play = (Py_True == field);
    Py_DECREF(field);
  }
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // command_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yellow
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow");
    if (!field) {
      return false;
    }
    if (!message_info__msg__referee_team_info__convert_from_py(field, &ros_message->yellow)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // blue
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue");
    if (!field) {
      return false;
    }
    if (!message_info__msg__referee_team_info__convert_from_py(field, &ros_message->blue)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // designated_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "designated_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->designated_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // game_event
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_event");
    if (!field) {
      return false;
    }
    if (!message_info__msg__referee_game_event__convert_from_py(field, &ros_message->game_event)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__referee__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Referee */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._referee");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Referee");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__Referee * ros_message = (message_info__msg__Referee *)raw_ros_message;
  {  // stage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // play
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->play ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "play", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->info.data,
      strlen(ros_message->info.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow
    PyObject * field = NULL;
    field = message_info__msg__referee_team_info__convert_to_py(&ros_message->yellow);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue
    PyObject * field = NULL;
    field = message_info__msg__referee_team_info__convert_to_py(&ros_message->blue);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // designated_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->designated_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "designated_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_event
    PyObject * field = NULL;
    field = message_info__msg__referee_game_event__convert_to_py(&ros_message->game_event);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_event", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
