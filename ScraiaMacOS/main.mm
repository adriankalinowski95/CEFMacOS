// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that can
// be found in the LICENSE file.

#include <iostream>
#include "include/cef_app.h"
#include "include/wrapper/cef_library_loader.h"

// When generating projects with CMake the CEF_USE_SANDBOX value will be defined
// automatically. Pass -DUSE_SANDBOX=OFF to the CMake command-line to disable
// use of the sandbox.
#if defined(CEF_USE_SANDBOX)
#include "include/cef_sandbox_mac.h"
#endif

#include <iostream>
#include <mach-o/dyld.h>
#include <cstring>
// Entry point function for sub-processes.
int main(int argc, char* argv[]) {
    char path[250]{};
    uint32_t exec_path_size = 250;
    _NSGetExecutablePath(path, &exec_path_size);
    std::cout << "helper path: " << path << std::endl;
    
#if defined(CEF_USE_SANDBOX)
    std::cout << "helper sandbox path: " << path << std::endl;
  // Initialize the macOS sandbox for this helper process.
  CefScopedSandboxContext sandbox_context;
  if (!sandbox_context.Initialize(argc, argv)) {
    return 1;
  }
#endif

  // Load the CEF framework library at runtime instead of linking directly
  // as required by the macOS sandbox implementation.
  CefScopedLibraryLoader library_loader;
  if (!library_loader.LoadInHelper()) {
      std::cout << "can't load lib in helper path: " << path << std::endl;
    return 1;
  }

  auto newArgsCount = argc + 1;
  char** newArgs = new char*[newArgsCount];
  for (auto i =0; i < newArgsCount; i++){
      newArgs[i] = new char[512];
  }
    
  // Provide CEF with command-line arguments.
  
    for(auto i = 0; i < argc; i++) {
      newArgs[i] = argv[i];
      std::cout << newArgs[i] << std::endl;
      std::cout << argv[i] << std::endl;
    }

    strcpy(newArgs[argc],"--disable-gpu-shader-disk-cache");
    
    CefMainArgs main_args(newArgsCount, newArgs);

  // Execute the sub-process.
  return CefExecuteProcess(main_args, nullptr, nullptr);
}
