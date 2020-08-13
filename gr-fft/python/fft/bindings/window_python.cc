/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(window.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b55c3b96105267729782fc5262efa28a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fft/window.h>
// pydoc.h is automatically generated in the build directory
#include <window_pydoc.h>

void bind_window(py::module& m)
{
    using window = gr::fft::window;


    py::class_<window, std::shared_ptr<window>>(m, "window", D(window))


        .def_static("max_attenuation",
                    &window::max_attenuation,
                    py::arg("type"),
                    py::arg("beta") = 6.7599999999999998,
                    D(window, max_attenuation))


        .def_static("coswindow",
                    (std::vector<float>(*)(int, float, float, float)) & window::coswindow,
                    py::arg("ntaps"),
                    py::arg("c0"),
                    py::arg("c1"),
                    py::arg("c2"),
                    D(window, coswindow, 0))


        .def_static("coswindow",
                    (std::vector<float>(*)(int, float, float, float, float)) &
                        window::coswindow,
                    py::arg("ntaps"),
                    py::arg("c0"),
                    py::arg("c1"),
                    py::arg("c2"),
                    py::arg("c3"),
                    D(window, coswindow, 1))


        .def_static("coswindow",
                    (std::vector<float>(*)(int, float, float, float, float, float)) &
                        window::coswindow,
                    py::arg("ntaps"),
                    py::arg("c0"),
                    py::arg("c1"),
                    py::arg("c2"),
                    py::arg("c3"),
                    py::arg("c4"),
                    D(window, coswindow, 2))


        .def_static(
            "rectangular", &window::rectangular, py::arg("ntaps"), D(window, rectangular))


        .def_static("hamming", &window::hamming, py::arg("ntaps"), D(window, hamming))


        .def_static("hann", &window::hann, py::arg("ntaps"), D(window, hann))


        .def_static("hanning", &window::hanning, py::arg("ntaps"), D(window, hanning))


        .def_static("blackman", &window::blackman, py::arg("ntaps"), D(window, blackman))


        .def_static(
            "blackman2", &window::blackman2, py::arg("ntaps"), D(window, blackman2))


        .def_static(
            "blackman3", &window::blackman3, py::arg("ntaps"), D(window, blackman3))


        .def_static(
            "blackman4", &window::blackman4, py::arg("ntaps"), D(window, blackman4))


        .def_static("blackman_harris",
                    &window::blackman_harris,
                    py::arg("ntaps"),
                    py::arg("atten") = 92,
                    D(window, blackman_harris))


        .def_static("blackmanharris",
                    &window::blackmanharris,
                    py::arg("ntaps"),
                    py::arg("atten") = 92,
                    D(window, blackmanharris))


        .def_static("nuttall", &window::nuttall, py::arg("ntaps"), D(window, nuttall))


        .def_static("nuttal", &window::nuttal, py::arg("ntaps"), D(window, nuttal))


        .def_static("blackman_nuttall",
                    &window::blackman_nuttall,
                    py::arg("ntaps"),
                    D(window, blackman_nuttall))


        .def_static("blackman_nuttal",
                    &window::blackman_nuttal,
                    py::arg("ntaps"),
                    D(window, blackman_nuttal))


        .def_static(
            "nuttall_cfd", &window::nuttall_cfd, py::arg("ntaps"), D(window, nuttall_cfd))


        .def_static(
            "nuttal_cfd", &window::nuttal_cfd, py::arg("ntaps"), D(window, nuttal_cfd))


        .def_static("flattop", &window::flattop, py::arg("ntaps"), D(window, flattop))


        .def_static("kaiser",
                    &window::kaiser,
                    py::arg("ntaps"),
                    py::arg("beta"),
                    D(window, kaiser))


        .def_static("bartlett", &window::bartlett, py::arg("ntaps"), D(window, bartlett))


        .def_static("welch", &window::welch, py::arg("ntaps"), D(window, welch))


        .def_static("parzen", &window::parzen, py::arg("ntaps"), D(window, parzen))


        .def_static("exponential",
                    &window::exponential,
                    py::arg("ntaps"),
                    py::arg("d"),
                    D(window, exponential))


        .def_static("riemann", &window::riemann, py::arg("ntaps"), D(window, riemann))


        .def_static("build",
                    &window::build,
                    py::arg("type"),
                    py::arg("ntaps"),
                    py::arg("beta") = 6.76,
                    D(window, build))

        ;


    py::enum_<gr::fft::window::win_type>(m, "win_type")
        .value("WIN_HAMMING", gr::fft::window::WIN_HAMMING)                 // 0
        .value("WIN_HANN", gr::fft::window::WIN_HANN)                       // 1
        .value("WIN_BLACKMAN", gr::fft::window::WIN_BLACKMAN)               // 2
        .value("WIN_RECTANGULAR", gr::fft::window::WIN_RECTANGULAR)         // 3
        .value("WIN_KAISER", gr::fft::window::WIN_KAISER)                   // 4
        .value("WIN_BLACKMAN_hARRIS", gr::fft::window::WIN_BLACKMAN_hARRIS) // 5
        .value("WIN_BLACKMAN_HARRIS", gr::fft::window::WIN_BLACKMAN_HARRIS) // 5
        .value("WIN_BARTLETT", gr::fft::window::WIN_BARTLETT)               // 6
        .value("WIN_FLATTOP", gr::fft::window::WIN_FLATTOP)                 // 7
        .export_values();
}
