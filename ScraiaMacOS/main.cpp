#include <iostream>
#include "include/cef_app.h"
#include "include/cef_browser.h"
#include "include/cef_command_line.h"
#include "include/cef_render_handler.h"
#include "include/cef_string_visitor.h"
#include "include/wrapper/cef_closure_task.h"
#include "include/wrapper/cef_helpers.h"
#include "include/wrapper/cef_library_loader.h"

#include <libgen.h>
#include <mach-o/dyld.h>
#include <stdio.h>

#include <memory>
#include <sstream>

/*
 executable_path=/Users/adriankalinowski/Desktop/vs_projects/cef-project/
 */

/*
 void newMain(int argc, char* argv[]) {
     
     CefScopedLibraryLoader library_loader;
     if (!library_loader.LoadInMain()) {
       return;
     }
     
     CHECK([NSApp isKindOfClass:[SimpleApplication class]]);

     CefMainArgs main_args(argc, argv);
     CefExecuteProcess(main_args, nullptr, nullptr);
     CefSettings settings{};
     
     CefRefPtr<SimpleApp> app(new SimpleApp);

     // Initialize the CEF browser process. May return false if initialization
     // fails or if early exit is desired (for example, due to process singleton
     // relaunch behavior).
     if (!CefInitialize(main_args, settings, app.get(), nullptr)) {
       return;
     }
     
     NSObject* delegate = [[SimpleAppDelegate alloc] init];
     [delegate performSelectorOnMainThread:@selector(createApplication:)
                                withObject:nil
                             waitUntilDone:NO];
     
     // Run the CEF message loop. This will block until CefQuitMessageLoop() is
     // called.
     CefRunMessageLoop();

     // Shut down CEF.
     CefShutdown();
     
     delegate = nil;
 }
 
 
 
 */

const char kFrameworkPath[] =
    "Chromium Embedded Framework.framework/Chromium Embedded Framework";
const char kPathFromHelperExe[] = "../../..";
const char kPathFromMainExe[] = "../Frameworks";

std::string GetFrameworkPath(bool helper) {
  uint32_t exec_path_size = 0;
  int rv = _NSGetExecutablePath(NULL, &exec_path_size);
  if (rv != -1) {
    return std::string();
  }

  std::unique_ptr<char[]> exec_path(new char[exec_path_size]);
  rv = _NSGetExecutablePath(exec_path.get(), &exec_path_size);
  if (rv != 0) {
    return std::string();
  }

  // Get the directory path of the executable.
  const char* parent_dir = dirname(exec_path.get());
  if (!parent_dir) {
    return std::string();
  }

  // Append the relative path to the framework.
  std::stringstream ss;
  ss << parent_dir << "/" << (helper ? kPathFromHelperExe : kPathFromMainExe)
     << "/" << kFrameworkPath;
  return ss.str();
}


int main() {
    char path[250]{};
    uint32_t exec_path_size = 250;
    _NSGetExecutablePath(path, &exec_path_size);
    CefScopedLibraryLoader library_loader;
    if (!library_loader.LoadInMain()) {
      return 1;
    }
    
    CefMainArgs mainArgs{};
    CefRefPtr<CefApp> app{};
    void* sandbox_info = nullptr;
    
    auto exitCode = CefExecuteProcess(mainArgs, nullptr, sandbox_info);
    if(exitCode >= 0) {
        // The sub-process has completed so return here.
        return exitCode;
    }
    
    auto frameworkPath = GetFrameworkPath(false);
    std::string frameworkPath2 = "/Users/adriankalinowski/Library/Developer/Xcode/DerivedData/ScraiaMacOS-gtrsgfarfzdmaldtweykqymhrkkb/Build/Products/Debug/../Frameworks/Chromium Embedded Framework.framework/";
    CefSettings settings{};
    settings.no_sandbox = true;
    // settings.windowless_rendering_enabled = true;
    // settings.log_severity = LOGSEVERITY_DISABLE;
    // settings.pro
    CefString(&settings.accept_language_list) = "pl,pl-PL";

    //CefString(&settings.framework_dir_path).FromASCII(frameworkPath2.c_str());
    //CefString(&settings.main_bundle_path).FromASCII("/Users/adriankalinowski/Library/Developer/Xcode/DerivedData/ScraiaMacOS-gtrsgfarfzdmaldtweykqymhrkkb/Build/Products/Debug/../Frameworks/Chromium Embedded Framework.framework/");

    // CefRefPtr<SimpleApp> app(new SimpleApp);

    // Initialize the CEF browser process. May return false if initialization
    // fails or if early exit is desired (for example, due to process singleton
    // relaunch behavior).
    if (!CefInitialize(mainArgs, settings, app.get(), nullptr)) {
      return 1;
    }
    
    /*
    NSObject* delegate = [[SimpleAppDelegate alloc] init];
    [delegate performSelectorOnMainThread:@selector(createApplication:)
                               withObject:nil
                            waitUntilDone:NO];
    */
    // Run the CEF message loop. This will block until CefQuitMessageLoop() is
    // called.
    CefRunMessageLoop();

    // Shut down CEF.
    CefShutdown();
    
    return 1;
}
