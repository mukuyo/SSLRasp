// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/RefereeTeamInfo.idl
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
#include "message_info/msg/detail/referee_team_info__struct.h"
#include "message_info/msg/detail/referee_team_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__referee_team_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("message_info.msg._referee_team_info.RefereeTeamInfo", full_classname_dest, 51) == 0);
  }
  message_info__msg__RefereeTeamInfo * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->score = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_cards
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_cards");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_cards = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yellow_card_times
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_card_times");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'yellow_card_times'");
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
    if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->yellow_card_times), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    uint32_t * dest = ros_message->yellow_card_times.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyLong_Check(item));
      uint32_t tmp = PyLong_AsUnsignedLong(item);

      memcpy(&dest[i], &tmp, sizeof(uint32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // yellow_cards
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_cards");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yellow_cards = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timeouts
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeouts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeouts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timeout_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeout_time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // goalie
    PyObject * field = PyObject_GetAttrString(_pymsg, "goalie");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goalie = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__referee_team_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RefereeTeamInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._referee_team_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RefereeTeamInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__RefereeTeamInfo * ros_message = (message_info__msg__RefereeTeamInfo *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // score
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_cards
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_cards);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_cards", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_card_times
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "yellow_card_times");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->yellow_card_times.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->yellow_card_times.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->yellow_card_times.size * sizeof(uint32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // yellow_cards
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yellow_cards);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_cards", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeouts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timeouts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeouts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timeout_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goalie
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->goalie);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goalie", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
