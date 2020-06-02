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
/* BINDTOOL_HEADER_FILE(fft_shift.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(bf8f34cab55b363429d6445dbe6862d1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fft/fft_shift.h>
// pydoc.h is automatically generated in the build directory
#include <fft_shift_pydoc.h>

template <typename T>
void bind_fft_shift_template(py::module& m, const char* classname)
{
    // TODO: Finish the template binding code and determine what classes should be exposed

    // using fft_shift      = gr::blocks::fft_shift<T>;

    // py::class_<fft_shift, gr::sync_block, gr::block, gr::basic_block,
    // std::shared_ptr<fft_shift>>(m, classname)
    //     .def(py::init<size_t>,
    //         py::arg("vlen") = 1
    //     )
    //     .def("shift",&fft_shift
    //     )
    //     ;
}

void bind_fft_shift(py::module& m)
{
    // bind_fft_shift_template<std::int16_t>(m,"fft_shift_ss");
    // bind_fft_shift_template<std::int32_t>(m,"fft_shift_ii");
    // bind_fft_shift_template<float>(m,"fft_shift_ff");
    // bind_fft_shift_template<gr_complex>(m,"fft_shift_cc");
}