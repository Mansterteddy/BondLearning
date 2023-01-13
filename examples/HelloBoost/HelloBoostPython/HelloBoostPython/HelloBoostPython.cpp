#define BOOST_PYTHON_STATIC_LIB

#include <boost/python.hpp>
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>


char const* hello_boost() {
    return "Hello Boost::Python!";
}

BOOST_PYTHON_MODULE(HelloBoostPython) {
    boost::python::def("hello_boost", hello_boost);
}