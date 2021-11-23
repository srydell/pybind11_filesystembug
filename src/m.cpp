#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <filesystem>
#include <string>

namespace py = pybind11;

std::string toString(std::filesystem::path const& p) {
	return p.string();
}

PYBIND11_MODULE(m, m) {
	m.def("toString", &toString, "", py::arg("p"));
}