#include <Python.h>
#include <pybind11/numpy.h>
#include <cstdio>
#include <iostream>
#include <pybind11/stl.h>
#include <numpy/arrayobject.h>
#include <Console.h>
#include <model/Model.h>
#include <rng/RNG.h>
#include <util/nainf.h>
#include <version.h>
#include <rng/RNGFactory.h>

#include <cstring>
#include <sstream>

using namespace std;



namespace py = pybind11;
namespace jags {}
namespace{
    using namespace jags;

    py::object JagsError;

}


int main(){
    cout <<"hello22" << endl;

    return 0;
}
