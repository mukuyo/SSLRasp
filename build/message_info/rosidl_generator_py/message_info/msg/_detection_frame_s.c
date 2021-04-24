// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/DetectionFrame.idl
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
#include "message_info/msg/detail/detection_frame__struct.h"
#include "message_info/msg/detail/detection_frame__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "message_info/msg/detail/detection_ball__functions.h"
#include "message_info/msg/detail/detection_robot__functions.h"
// end nested array functions include
bool message_info__msg__detection_ball__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__detection_ball__convert_to_py(void * raw_ros_message);
bool message_info__msg__detection_robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__detection_robot__convert_to_py(void * raw_ros_message);
bool message_info__msg__detection_robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__detection_robot__convert_to_py(void * raw_ros_message);
bool message_info__msg__detection_robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__detection_robot__convert_to_py(void * raw_ros_message);
bool message_info__msg__detection_robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__detection_robot__convert_to_py(void * raw_ros_message);
bool message_info__msg__detection_ball__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * message_info__msg__detection_ball__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__detection_frame__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("message_info.msg._detection_frame.DetectionFrame", full_classname_dest, 48) == 0);
  }
  message_info__msg__DetectionFrame * ros_message = _ros_message;
  {  // t_capture
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_capture");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_capture = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_sent
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_sent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_sent = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // camera_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // balls
    PyObject * field = PyObject_GetAttrString(_pymsg, "balls");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'balls'");
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
    if (!message_info__msg__DetectionBall__Sequence__init(&(ros_message->balls), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create message_info__msg__DetectionBall__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    message_info__msg__DetectionBall * dest = ros_message->balls.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__detection_ball__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // robots_yellow
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_yellow");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robots_yellow'");
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
    if (!message_info__msg__DetectionRobot__Sequence__init(&(ros_message->robots_yellow), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create message_info__msg__DetectionRobot__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    message_info__msg__DetectionRobot * dest = ros_message->robots_yellow.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__detection_robot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // robots_blue
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_blue");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robots_blue'");
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
    if (!message_info__msg__DetectionRobot__Sequence__init(&(ros_message->robots_blue), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create message_info__msg__DetectionRobot__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    message_info__msg__DetectionRobot * dest = ros_message->robots_blue.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__detection_robot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // our_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "our_robots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'our_robots'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 16;
    message_info__msg__DetectionRobot * dest = ros_message->our_robots;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__detection_robot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // their_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "their_robots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'their_robots'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 16;
    message_info__msg__DetectionRobot * dest = ros_message->their_robots;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!message_info__msg__detection_robot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ball
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball");
    if (!field) {
      return false;
    }
    if (!message_info__msg__detection_ball__convert_from_py(field, &ros_message->ball)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__detection_frame__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectionFrame */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._detection_frame");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectionFrame");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__DetectionFrame * ros_message = (message_info__msg__DetectionFrame *)raw_ros_message;
  {  // t_capture
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_capture);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_capture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_sent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_sent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_sent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->camera_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balls
    PyObject * field = NULL;
    size_t size = ros_message->balls.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__DetectionBall * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->balls.data[i]);
      PyObject * pyitem = message_info__msg__detection_ball__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "balls", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_yellow
    PyObject * field = NULL;
    size_t size = ros_message->robots_yellow.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__DetectionRobot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->robots_yellow.data[i]);
      PyObject * pyitem = message_info__msg__detection_robot__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "robots_yellow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_blue
    PyObject * field = NULL;
    size_t size = ros_message->robots_blue.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__DetectionRobot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->robots_blue.data[i]);
      PyObject * pyitem = message_info__msg__detection_robot__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "robots_blue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // our_robots
    PyObject * field = NULL;
    size_t size = 16;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__DetectionRobot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->our_robots[i]);
      PyObject * pyitem = message_info__msg__detection_robot__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "our_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // their_robots
    PyObject * field = NULL;
    size_t size = 16;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    message_info__msg__DetectionRobot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->their_robots[i]);
      PyObject * pyitem = message_info__msg__detection_robot__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "their_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ball
    PyObject * field = NULL;
    field = message_info__msg__detection_ball__convert_to_py(&ros_message->ball);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
