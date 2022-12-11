// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
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
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__struct.h"
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cocoax_interfaces__msg__cocoa_test_monitor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("cocoax_interfaces.msg._cocoa_test_monitor.CocoaTestMonitor", full_classname_dest, 58) == 0);
  }
  cocoax_interfaces__msg__CocoaTestMonitor * ros_message = _ros_message;
  {  // posx
    PyObject * field = PyObject_GetAttrString(_pymsg, "posx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posy
    PyObject * field = PyObject_GetAttrString(_pymsg, "posy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posz
    PyObject * field = PyObject_GetAttrString(_pymsg, "posz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velx
    PyObject * field = PyObject_GetAttrString(_pymsg, "velx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vely
    PyObject * field = PyObject_GetAttrString(_pymsg, "vely");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vely = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velz
    PyObject * field = PyObject_GetAttrString(_pymsg, "velz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cocoax_interfaces__msg__cocoa_test_monitor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CocoaTestMonitor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cocoax_interfaces.msg._cocoa_test_monitor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CocoaTestMonitor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cocoax_interfaces__msg__CocoaTestMonitor * ros_message = (cocoax_interfaces__msg__CocoaTestMonitor *)raw_ros_message;
  {  // posx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vely
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vely);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vely", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
