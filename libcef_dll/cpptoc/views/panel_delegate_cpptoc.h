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
// $hash=34ff5c8e65a795c9e23d4c3a831a58081a9e534e$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_PANEL_DELEGATE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_PANEL_DELEGATE_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_panel_delegate_capi.h"
#include "include/views/cef_panel_delegate.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefPanelDelegateCppToC
    : public CefCppToCRefCounted<CefPanelDelegateCppToC,
                                 CefPanelDelegate,
                                 cef_panel_delegate_t> {
 public:
  CefPanelDelegateCppToC();
  virtual ~CefPanelDelegateCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_PANEL_DELEGATE_CPPTOC_H_
