// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/Role.idl
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
#include "message_info/msg/detail/role__struct.h"
#include "message_info/msg/detail/role__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__role__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
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
    assert(strncmp("message_info.msg._role.Role", full_classname_dest, 27) == 0);
  }
  message_info__msg__Role * ros_message = _ros_message;
  {  // attacker
    PyObject * field = PyObject_GetAttrString(_pymsg, "attacker");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->attacker = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // goalie
    PyObject * field = PyObject_GetAttrString(_pymsg, "goalie");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goalie = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // defense
    PyObject * field = PyObject_GetAttrString(_pymsg, "defense");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    Py_ssize_t size = 10;
    int32_t * dest = ros_message->defense;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // offense
    PyObject * field = PyObject_GetAttrString(_pymsg, "offense");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    Py_ssize_t size = 10;
    int32_t * dest = ros_message->offense;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // offense_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "offense_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offense_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // defense_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "defense_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->defense_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__role__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Role */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._role");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Role");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__Role * ros_message = (message_info__msg__Role *)raw_ros_message;
  {  // attacker
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->attacker);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attacker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goalie
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->goalie);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goalie", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defense
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "defense");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->defense[0]);
    memcpy(dst, src, 10 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // offense
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "offense");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->offense[0]);
    memcpy(dst, src, 10 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // offense_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->offense_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offense_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defense_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->defense_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defense_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
