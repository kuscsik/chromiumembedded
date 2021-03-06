// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
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

#include <algorithm>
#include "libcef_dll/ctocpp/print_settings_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefPrintSettings> CefPrintSettings::Create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_print_settings_t* _retval = cef_print_settings_create();

  // Return type: refptr_same
  return CefPrintSettingsCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefPrintSettingsCToCpp::IsValid() {
  if (CEF_MEMBER_MISSING(struct_, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_valid(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefPrintSettingsCToCpp::IsReadOnly() {
  if (CEF_MEMBER_MISSING(struct_, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_read_only(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefPrintSettings> CefPrintSettingsCToCpp::Copy() {
  if (CEF_MEMBER_MISSING(struct_, copy))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_print_settings_t* _retval = struct_->copy(struct_);

  // Return type: refptr_same
  return CefPrintSettingsCToCpp::Wrap(_retval);
}

void CefPrintSettingsCToCpp::SetOrientation(bool landscape) {
  if (CEF_MEMBER_MISSING(struct_, set_orientation))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_orientation(struct_,
      landscape);
}

bool CefPrintSettingsCToCpp::IsLandscape() {
  if (CEF_MEMBER_MISSING(struct_, is_landscape))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_landscape(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefPrintSettingsCToCpp::SetPrinterPrintableArea(
    const CefSize& physical_size_device_units,
    const CefRect& printable_area_device_units, bool landscape_needs_flip) {
  if (CEF_MEMBER_MISSING(struct_, set_printer_printable_area))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_printer_printable_area(struct_,
      &physical_size_device_units,
      &printable_area_device_units,
      landscape_needs_flip);
}

void CefPrintSettingsCToCpp::SetDeviceName(const CefString& name) {
  if (CEF_MEMBER_MISSING(struct_, set_device_name))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: name

  // Execute
  struct_->set_device_name(struct_,
      name.GetStruct());
}

CefString CefPrintSettingsCToCpp::GetDeviceName() {
  if (CEF_MEMBER_MISSING(struct_, get_device_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_device_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefPrintSettingsCToCpp::SetDPI(int dpi) {
  if (CEF_MEMBER_MISSING(struct_, set_dpi))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_dpi(struct_,
      dpi);
}

int CefPrintSettingsCToCpp::GetDPI() {
  if (CEF_MEMBER_MISSING(struct_, get_dpi))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_dpi(struct_);

  // Return type: simple
  return _retval;
}

void CefPrintSettingsCToCpp::SetPageRanges(const PageRangeList& ranges) {
  if (CEF_MEMBER_MISSING(struct_, set_page_ranges))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: ranges; type: simple_vec_byref_const
  const size_t rangesCount = ranges.size();
  cef_page_range_t* rangesList = NULL;
  if (rangesCount > 0) {
    rangesList = new cef_page_range_t[rangesCount];
    DCHECK(rangesList);
    if (rangesList) {
      for (size_t i = 0; i < rangesCount; ++i) {
        rangesList[i] = ranges[i];
      }
    }
  }

  // Execute
  struct_->set_page_ranges(struct_,
      rangesCount,
      rangesList);

  // Restore param:ranges; type: simple_vec_byref_const
  if (rangesList)
    delete [] rangesList;
}

size_t CefPrintSettingsCToCpp::GetPageRangesCount() {
  if (CEF_MEMBER_MISSING(struct_, get_page_ranges_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = struct_->get_page_ranges_count(struct_);

  // Return type: simple
  return _retval;
}

void CefPrintSettingsCToCpp::GetPageRanges(PageRangeList& ranges) {
  if (CEF_MEMBER_MISSING(struct_, get_page_ranges))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: ranges; type: simple_vec_byref
  size_t rangesSize = ranges.size();
  size_t rangesCount = std::max(GetPageRangesCount(), rangesSize);
  cef_page_range_t* rangesList = NULL;
  if (rangesCount > 0) {
    rangesList = new cef_page_range_t[rangesCount];
    DCHECK(rangesList);
    if (rangesList) {
       memset(rangesList, 0, sizeof(cef_page_range_t)*rangesCount);
    }
    if (rangesList && rangesSize > 0) {
      for (size_t i = 0; i < rangesSize; ++i) {
        rangesList[i] = ranges[i];
      }
    }
  }

  // Execute
  struct_->get_page_ranges(struct_,
      &rangesCount,
      rangesList);

  // Restore param:ranges; type: simple_vec_byref
  ranges.clear();
  if (rangesCount > 0 && rangesList) {
    for (size_t i = 0; i < rangesCount; ++i) {
      ranges.push_back(rangesList[i]);
    }
    delete [] rangesList;
  }
}

void CefPrintSettingsCToCpp::SetSelectionOnly(bool selection_only) {
  if (CEF_MEMBER_MISSING(struct_, set_selection_only))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_selection_only(struct_,
      selection_only);
}

bool CefPrintSettingsCToCpp::IsSelectionOnly() {
  if (CEF_MEMBER_MISSING(struct_, is_selection_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_selection_only(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefPrintSettingsCToCpp::SetCollate(bool collate) {
  if (CEF_MEMBER_MISSING(struct_, set_collate))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_collate(struct_,
      collate);
}

bool CefPrintSettingsCToCpp::WillCollate() {
  if (CEF_MEMBER_MISSING(struct_, will_collate))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->will_collate(struct_);

  // Return type: bool
  return _retval?true:false;
}

void CefPrintSettingsCToCpp::SetColorModel(ColorModel model) {
  if (CEF_MEMBER_MISSING(struct_, set_color_model))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_color_model(struct_,
      model);
}

CefPrintSettings::ColorModel CefPrintSettingsCToCpp::GetColorModel() {
  if (CEF_MEMBER_MISSING(struct_, get_color_model))
    return COLOR_MODEL_UNKNOWN;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_model_t _retval = struct_->get_color_model(struct_);

  // Return type: simple
  return _retval;
}

void CefPrintSettingsCToCpp::SetCopies(int copies) {
  if (CEF_MEMBER_MISSING(struct_, set_copies))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_copies(struct_,
      copies);
}

int CefPrintSettingsCToCpp::GetCopies() {
  if (CEF_MEMBER_MISSING(struct_, get_copies))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_copies(struct_);

  // Return type: simple
  return _retval;
}

void CefPrintSettingsCToCpp::SetDuplexMode(DuplexMode mode) {
  if (CEF_MEMBER_MISSING(struct_, set_duplex_mode))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_duplex_mode(struct_,
      mode);
}

CefPrintSettings::DuplexMode CefPrintSettingsCToCpp::GetDuplexMode() {
  if (CEF_MEMBER_MISSING(struct_, get_duplex_mode))
    return DUPLEX_MODE_UNKNOWN;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_duplex_mode_t _retval = struct_->get_duplex_mode(struct_);

  // Return type: simple
  return _retval;
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefPrintSettingsCToCpp,
    CefPrintSettings, cef_print_settings_t>::DebugObjCt = 0;
#endif

