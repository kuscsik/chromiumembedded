// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#include "include/cef_app.h"
#include "include/capi/cef_app_capi.h"
#include "include/cef_origin_whitelist.h"
#include "include/capi/cef_origin_whitelist_capi.h"
#include "include/cef_scheme.h"
#include "include/capi/cef_scheme_capi.h"
#include "include/cef_task.h"
#include "include/capi/cef_task_capi.h"
#include "include/cef_url.h"
#include "include/capi/cef_url_capi.h"
#include "include/cef_v8.h"
#include "include/capi/cef_v8_capi.h"
#include "include/cef_web_plugin.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "include/cef_version.h"
#include "libcef_dll/cpptoc/app_cpptoc.h"
#include "libcef_dll/cpptoc/context_menu_handler_cpptoc.h"
#include "libcef_dll/cpptoc/cookie_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/domevent_listener_cpptoc.h"
#include "libcef_dll/cpptoc/domvisitor_cpptoc.h"
#include "libcef_dll/cpptoc/display_handler_cpptoc.h"
#include "libcef_dll/cpptoc/geolocation_handler_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_handler_cpptoc.h"
#include "libcef_dll/cpptoc/life_span_handler_cpptoc.h"
#include "libcef_dll/cpptoc/load_handler_cpptoc.h"
#include "libcef_dll/cpptoc/proxy_handler_cpptoc.h"
#include "libcef_dll/cpptoc/read_handler_cpptoc.h"
#include "libcef_dll/cpptoc/render_process_handler_cpptoc.h"
#include "libcef_dll/cpptoc/request_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resource_bundle_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resource_handler_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_handler_factory_cpptoc.h"
#include "libcef_dll/cpptoc/string_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/task_cpptoc.h"
#include "libcef_dll/cpptoc/v8accessor_cpptoc.h"
#include "libcef_dll/cpptoc/v8handler_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_info_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/write_handler_cpptoc.h"
#include "libcef_dll/ctocpp/auth_callback_ctocpp.h"
#include "libcef_dll/ctocpp/binary_value_ctocpp.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/browser_host_ctocpp.h"
#include "libcef_dll/ctocpp/callback_ctocpp.h"
#include "libcef_dll/ctocpp/context_menu_params_ctocpp.h"
#include "libcef_dll/ctocpp/cookie_manager_ctocpp.h"
#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domevent_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/ctocpp/dictionary_value_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/geolocation_callback_ctocpp.h"
#include "libcef_dll/ctocpp/jsdialog_callback_ctocpp.h"
#include "libcef_dll/ctocpp/list_value_ctocpp.h"
#include "libcef_dll/ctocpp/menu_model_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_element_ctocpp.h"
#include "libcef_dll/ctocpp/process_message_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/response_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_registrar_ctocpp.h"
#include "libcef_dll/ctocpp/stream_reader_ctocpp.h"
#include "libcef_dll/ctocpp/stream_writer_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/ctocpp/v8exception_ctocpp.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_info_ctocpp.h"
#include "libcef_dll/ctocpp/xml_reader_ctocpp.h"
#include "libcef_dll/ctocpp/zip_reader_ctocpp.h"

// Define used to facilitate parsing.
#define CEF_GLOBAL


// GLOBAL METHODS - Body may be edited by hand.

CEF_GLOBAL int CefExecuteProcess(const CefMainArgs& args,
    CefRefPtr<CefApp> application) {
  int build_revision = cef_build_revision();
  if (build_revision != CEF_REVISION) {
    // The libcef build revision does not match the CEF API revision.
    DCHECK(false);
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: application

  // Execute
  int _retval = cef_execute_process(
      &args,
      CefAppCppToC::Wrap(application));

  // Return type: simple
  return _retval;
}

CEF_GLOBAL bool CefInitialize(const CefMainArgs& args,
    const CefSettings& settings, CefRefPtr<CefApp> application) {
  int build_revision = cef_build_revision();
  if (build_revision != CEF_REVISION) {
    // The libcef build revision does not match the CEF API revision.
    DCHECK(false);
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: application

  // Execute
  int _retval = cef_initialize(
      &args,
      &settings,
      CefAppCppToC::Wrap(application));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL void CefShutdown() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_shutdown();

#ifndef NDEBUG
  // Check that all wrapper objects have been destroyed
  DCHECK_EQ(CefAuthCallbackCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefBinaryValueCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefBrowserCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefBrowserHostCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefCallbackCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefContextMenuHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefContextMenuParamsCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefCookieManagerCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefCookieVisitorCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDOMDocumentCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDOMEventCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDOMEventListenerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDOMNodeCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDOMVisitorCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefDictionaryValueCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefDisplayHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefFrameCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefGeolocationCallbackCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefGeolocationHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefJSDialogCallbackCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefJSDialogHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefLifeSpanHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefListValueCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefLoadHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefMenuModelCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefPostDataCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefPostDataElementCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefProcessMessageCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefProxyHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefReadHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefRenderProcessHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefRequestCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefRequestHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefResourceBundleHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefResourceHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefResponseCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefSchemeHandlerFactoryCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefSchemeRegistrarCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefStreamReaderCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefStreamWriterCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefStringVisitorCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefTaskCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefV8AccessorCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefV8ContextCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefV8ExceptionCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefV8HandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefV8ValueCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefWebPluginInfoCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefWebPluginInfoVisitorCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefWriteHandlerCppToC::DebugObjCt, 0);
  DCHECK_EQ(CefXmlReaderCToCpp::DebugObjCt, 0);
  DCHECK_EQ(CefZipReaderCToCpp::DebugObjCt, 0);
#endif  // !NDEBUG
}

CEF_GLOBAL void CefDoMessageLoopWork() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_do_message_loop_work();
}

CEF_GLOBAL void CefRunMessageLoop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_run_message_loop();
}

CEF_GLOBAL void CefQuitMessageLoop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_quit_message_loop();
}

CEF_GLOBAL bool CefAddCrossOriginWhitelistEntry(const CefString& source_origin,
    const CefString& target_protocol, const CefString& target_domain,
    bool allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(!source_origin.empty());
  if (source_origin.empty())
    return false;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(!target_protocol.empty());
  if (target_protocol.empty())
    return false;
  // Verify param: target_domain; type: string_byref_const
  DCHECK(!target_domain.empty());
  if (target_domain.empty())
    return false;

  // Execute
  int _retval = cef_add_cross_origin_whitelist_entry(
      source_origin.GetStruct(),
      target_protocol.GetStruct(),
      target_domain.GetStruct(),
      allow_target_subdomains);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRemoveCrossOriginWhitelistEntry(
    const CefString& source_origin, const CefString& target_protocol,
    const CefString& target_domain, bool allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(!source_origin.empty());
  if (source_origin.empty())
    return false;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(!target_protocol.empty());
  if (target_protocol.empty())
    return false;
  // Verify param: target_domain; type: string_byref_const
  DCHECK(!target_domain.empty());
  if (target_domain.empty())
    return false;

  // Execute
  int _retval = cef_remove_cross_origin_whitelist_entry(
      source_origin.GetStruct(),
      target_protocol.GetStruct(),
      target_domain.GetStruct(),
      allow_target_subdomains);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefClearCrossOriginWhitelist() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_clear_cross_origin_whitelist();

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRegisterSchemeHandlerFactory(const CefString& scheme_name,
    const CefString& domain_name,
    CefRefPtr<CefSchemeHandlerFactory> factory) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty())
    return false;
  // Unverified params: domain_name, factory

  // Execute
  int _retval = cef_register_scheme_handler_factory(
      scheme_name.GetStruct(),
      domain_name.GetStruct(),
      CefSchemeHandlerFactoryCppToC::Wrap(factory));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefClearSchemeHandlerFactories() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_clear_scheme_handler_factories();

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefCurrentlyOn(CefThreadId threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_currently_on(
      threadId);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefPostTask(CefThreadId threadId, CefRefPtr<CefTask> task) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = cef_post_task(
      threadId,
      CefTaskCppToC::Wrap(task));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefPostDelayedTask(CefThreadId threadId,
    CefRefPtr<CefTask> task, int64 delay_ms) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task.get());
  if (!task.get())
    return false;

  // Execute
  int _retval = cef_post_delayed_task(
      threadId,
      CefTaskCppToC::Wrap(task),
      delay_ms);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefParseURL(const CefString& url, CefURLParts& parts) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return false;

  // Execute
  int _retval = cef_parse_url(
      url.GetStruct(),
      &parts);

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefCreateURL(const CefURLParts& parts, CefString& url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_create_url(
      &parts,
      url.GetWritableStruct());

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL bool CefRegisterExtension(const CefString& extension_name,
    const CefString& javascript_code, CefRefPtr<CefV8Handler> handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension_name; type: string_byref_const
  DCHECK(!extension_name.empty());
  if (extension_name.empty())
    return false;
  // Verify param: javascript_code; type: string_byref_const
  DCHECK(!javascript_code.empty());
  if (javascript_code.empty())
    return false;
  // Unverified params: handler

  // Execute
  int _retval = cef_register_extension(
      extension_name.GetStruct(),
      javascript_code.GetStruct(),
      CefV8HandlerCppToC::Wrap(handler));

  // Return type: bool
  return _retval?true:false;
}

CEF_GLOBAL void CefVisitWebPluginInfo(
    CefRefPtr<CefWebPluginInfoVisitor> visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor.get());
  if (!visitor.get())
    return;

  // Execute
  cef_visit_web_plugin_info(
      CefWebPluginInfoVisitorCppToC::Wrap(visitor));
}

