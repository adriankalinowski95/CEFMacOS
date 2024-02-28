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
// $hash=1d904dc9bf2d32baf0841fb55b4ba2d905d0bf83$
//

#include "libcef_dll/ctocpp/views/textfield_ctocpp.h"
#include "libcef_dll/cpptoc/views/textfield_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_delegate_cpptoc.h"
#include "libcef_dll/ctocpp/views/browser_view_ctocpp.h"
#include "libcef_dll/ctocpp/views/button_ctocpp.h"
#include "libcef_dll/ctocpp/views/panel_ctocpp.h"
#include "libcef_dll/ctocpp/views/scroll_view_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/ctocpp/views/window_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTextfield> CefTextfield::CreateTextfield(
    CefRefPtr<CefTextfieldDelegate> delegate) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: delegate

  // Execute
  cef_textfield_t* _retval =
      cef_textfield_create(CefTextfieldDelegateCppToC::Wrap(delegate));

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetPasswordInput(bool password_input) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_password_input)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_password_input(_struct, password_input);
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsPasswordInput() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_password_input)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_password_input(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetReadOnly(bool read_only) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_read_only)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_read_only(_struct, read_only);
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsReadOnly() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefTextfieldCToCpp::GetText() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_text)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetText(const CefString& text) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty()) {
    return;
  }

  // Execute
  _struct->set_text(_struct, text.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::AppendText(const CefString& text) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, append_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty()) {
    return;
  }

  // Execute
  _struct->append_text(_struct, text.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::InsertOrReplaceText(const CefString& text) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, insert_or_replace_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty()) {
    return;
  }

  // Execute
  _struct->insert_or_replace_text(_struct, text.GetStruct());
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::HasSelection() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_selection)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_selection(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefTextfieldCToCpp::GetSelectedText() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selected_text)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_selected_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SelectAll(bool reversed) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, select_all)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->select_all(_struct, reversed);
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::ClearSelection() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clear_selection)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->clear_selection(_struct);
}

NO_SANITIZE("cfi-icall") CefRange CefTextfieldCToCpp::GetSelectedRange() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selected_range)) {
    return CefRange();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_range_t _retval = _struct->get_selected_range(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SelectRange(const CefRange& range) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, select_range)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->select_range(_struct, &range);
}

NO_SANITIZE("cfi-icall") size_t CefTextfieldCToCpp::GetCursorPosition() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_cursor_position)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_cursor_position(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetTextColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_text_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_text_color(_struct, color);
}

NO_SANITIZE("cfi-icall") cef_color_t CefTextfieldCToCpp::GetTextColor() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_text_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_text_color(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetSelectionTextColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_selection_text_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_selection_text_color(_struct, color);
}

NO_SANITIZE("cfi-icall")
cef_color_t CefTextfieldCToCpp::GetSelectionTextColor() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_text_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_selection_text_color(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetSelectionBackgroundColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_selection_background_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_selection_background_color(_struct, color);
}

NO_SANITIZE("cfi-icall")
cef_color_t CefTextfieldCToCpp::GetSelectionBackgroundColor() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_background_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_selection_background_color(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetFontList(const CefString& font_list) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_font_list)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: font_list; type: string_byref_const
  DCHECK(!font_list.empty());
  if (font_list.empty()) {
    return;
  }

  // Execute
  _struct->set_font_list(_struct, font_list.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::ApplyTextColor(cef_color_t color,
                                        const CefRange& range) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, apply_text_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->apply_text_color(_struct, color, &range);
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::ApplyTextStyle(cef_text_style_t style,
                                        bool add,
                                        const CefRange& range) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, apply_text_style)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->apply_text_style(_struct, style, add, &range);
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::IsCommandEnabled(
    cef_text_field_commands_t command_id) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_command_enabled)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_command_enabled(_struct, command_id);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::ExecuteCommand(cef_text_field_commands_t command_id) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, execute_command)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->execute_command(_struct, command_id);
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::ClearEditHistory() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clear_edit_history)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->clear_edit_history(_struct);
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetPlaceholderText(const CefString& text) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_placeholder_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty()) {
    return;
  }

  // Execute
  _struct->set_placeholder_text(_struct, text.GetStruct());
}

NO_SANITIZE("cfi-icall") CefString CefTextfieldCToCpp::GetPlaceholderText() {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_placeholder_text)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_placeholder_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetPlaceholderTextColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_placeholder_text_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_placeholder_text_color(_struct, color);
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetAccessibleName(const CefString& name) {
  shutdown_checker::AssertNotShutdown();

  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_accessible_name)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty()) {
    return;
  }

  // Execute
  _struct->set_accessible_name(_struct, name.GetStruct());
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefTextfieldCToCpp::AsBrowserView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_browser_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_view_t* _retval = _struct->as_browser_view(_struct);

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefButton> CefTextfieldCToCpp::AsButton() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_button)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_t* _retval = _struct->as_button(_struct);

  // Return type: refptr_same
  return CefButtonCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefPanel> CefTextfieldCToCpp::AsPanel() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_panel)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_panel_t* _retval = _struct->as_panel(_struct);

  // Return type: refptr_same
  return CefPanelCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefScrollView> CefTextfieldCToCpp::AsScrollView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_scroll_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_scroll_view_t* _retval = _struct->as_scroll_view(_struct);

  // Return type: refptr_same
  return CefScrollViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTextfield> CefTextfieldCToCpp::AsTextfield() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_textfield)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_textfield_t* _retval = _struct->as_textfield(_struct);

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefString CefTextfieldCToCpp::GetTypeString() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_type_string)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_type_string(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefTextfieldCToCpp::ToString(bool include_children) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, to_string)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->to_string(_struct, include_children);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsValid() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_valid)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsAttached() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_attached)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_attached(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::IsSame(CefRefPtr<CefView> that) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_same)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->is_same(_struct, CefViewCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefViewDelegate> CefTextfieldCToCpp::GetDelegate() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_delegate)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_delegate_t* _retval = _struct->get_delegate(_struct);

  // Return type: refptr_diff
  return CefViewDelegateCppToC::Unwrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefWindow> CefTextfieldCToCpp::GetWindow() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_window)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_t* _retval = _struct->get_window(_struct);

  // Return type: refptr_same
  return CefWindowCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") int CefTextfieldCToCpp::GetID() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetID(int id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_id)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_id(_struct, id);
}

NO_SANITIZE("cfi-icall") int CefTextfieldCToCpp::GetGroupID() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_group_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_group_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetGroupID(int group_id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_group_id)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_group_id(_struct, group_id);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefTextfieldCToCpp::GetParentView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_parent_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_parent_view(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefTextfieldCToCpp::GetViewForID(int id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_view_for_id)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_view_for_id(_struct, id);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetBounds(const CefRect& bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_bounds)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_bounds(_struct, &bounds);
}

NO_SANITIZE("cfi-icall") CefRect CefTextfieldCToCpp::GetBounds() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefRect CefTextfieldCToCpp::GetBoundsInScreen() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds_in_screen)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds_in_screen(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetSize(const CefSize& size) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_size(_struct, &size);
}

NO_SANITIZE("cfi-icall") CefSize CefTextfieldCToCpp::GetSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetPosition(const CefPoint& position) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_position)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_position(_struct, &position);
}

NO_SANITIZE("cfi-icall") CefPoint CefTextfieldCToCpp::GetPosition() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_position)) {
    return CefPoint();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_position(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetInsets(const CefInsets& insets) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_insets)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_insets(_struct, &insets);
}

NO_SANITIZE("cfi-icall") CefInsets CefTextfieldCToCpp::GetInsets() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_insets)) {
    return CefInsets();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_insets_t _retval = _struct->get_insets(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefSize CefTextfieldCToCpp::GetPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_preferred_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SizeToPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, size_to_preferred_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->size_to_preferred_size(_struct);
}

NO_SANITIZE("cfi-icall") CefSize CefTextfieldCToCpp::GetMinimumSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_minimum_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefSize CefTextfieldCToCpp::GetMaximumSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_maximum_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int CefTextfieldCToCpp::GetHeightForWidth(int width) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_height_for_width(_struct, width);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::InvalidateLayout() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, invalidate_layout)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->invalidate_layout(_struct);
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetVisible(bool visible) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_visible)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_visible(_struct, visible);
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsVisible() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_visible)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_visible(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsDrawn() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_drawn)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_drawn(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetEnabled(bool enabled) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_enabled)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_enabled(_struct, enabled);
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsEnabled() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_enabled)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_enabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::SetFocusable(bool focusable) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_focusable)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_focusable(_struct, focusable);
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsFocusable() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_focusable)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_focusable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefTextfieldCToCpp::IsAccessibilityFocusable() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_accessibility_focusable)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_accessibility_focusable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefTextfieldCToCpp::RequestFocus() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, request_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->request_focus(_struct);
}

NO_SANITIZE("cfi-icall")
void CefTextfieldCToCpp::SetBackgroundColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_background_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_background_color(_struct, color);
}

NO_SANITIZE("cfi-icall") cef_color_t CefTextfieldCToCpp::GetBackgroundColor() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_background_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_background_color(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::ConvertPointToScreen(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_screen)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_screen(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::ConvertPointFromScreen(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_screen)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_screen(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::ConvertPointToWindow(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_window)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_window(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::ConvertPointFromWindow(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_window)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_window(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::ConvertPointToView(CefRefPtr<CefView> view,
                                            CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_view)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->convert_point_to_view(
      _struct, CefViewCToCpp::Unwrap(view), &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefTextfieldCToCpp::ConvertPointFromView(CefRefPtr<CefView> view,
                                              CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_view)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->convert_point_from_view(
      _struct, CefViewCToCpp::Unwrap(view), &point);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefTextfieldCToCpp::CefTextfieldCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTextfieldCToCpp::~CefTextfieldCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_textfield_t*
CefCToCppRefCounted<CefTextfieldCToCpp, CefTextfield, cef_textfield_t>::
    UnwrapDerived(CefWrapperType type, CefTextfield* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefTextfieldCToCpp,
                                   CefTextfield,
                                   cef_textfield_t>::kWrapperType =
    WT_TEXTFIELD;
