// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=68d0c97818be421d287f1cee92114c0b809fb9e3$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_PRINT_JOB_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_PRINT_JOB_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_print_handler_capi.h"
#include "include/cef_print_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefPrintJobCallbackCToCpp
    : public CefCToCppRefCounted<CefPrintJobCallbackCToCpp,
                                 CefPrintJobCallback,
                                 cef_print_job_callback_t> {
 public:
  CefPrintJobCallbackCToCpp();
  virtual ~CefPrintJobCallbackCToCpp();

  // CefPrintJobCallback methods.
  void Continue() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_PRINT_JOB_CALLBACK_CTOCPP_H_
