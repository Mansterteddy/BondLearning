#define BOOST_PYTHON_STATIC_LIB

#include "example_reflection.h"
#include <bond/python/struct.h>

BOOST_PYTHON_MODULE(example)
{
    bond::python::struct_<example::Record>()
        .def();
}