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
#include <thread>

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

CefBrowserSettings getBrowserSettings() {
        return {};
}

class SimpleRenderHandler : public CefRenderHandler {
public:
    void GetViewRect(CefRefPtr<CefBrowser> browser, CefRect& rect) override {
        rect = CefRect(0, 0, 1, 1);
        return;
    }

    virtual void OnPaint(CefRefPtr<CefBrowser> browser, PaintElementType type, const RectList& dirtyRects, const void* buffer, int width, int height) override {
        // Nie rób nic, ponieważ nie chcemy wyświetlać zawartości.
    }

    IMPLEMENT_REFCOUNTING(SimpleRenderHandler);
};


class SimpleClient : public CefClient {
public:
    SimpleClient(): renderHandler(new SimpleRenderHandler) {}

    virtual CefRefPtr<CefRenderHandler> GetRenderHandler() override {
        return renderHandler;
    }

private:
    CefRefPtr<SimpleRenderHandler> renderHandler;

    IMPLEMENT_REFCOUNTING(SimpleClient);
};

void myThread(){
    CefWindowInfo windowInfo{};
    if (false) {
        // windowInfo.SetAsWindowless(nullptr);
    }
    auto browserSettings = getBrowserSettings();
    
    CefRefPtr<SimpleClient> m_client = new SimpleClient();
    
    CefBrowserHost::CreateBrowser(windowInfo, m_client.get(), "www.google.com", browserSettings, nullptr, nullptr);
}



#import <Cocoa/Cocoa.h>
#include "include/cef_application_mac.h"

/*
// Receives notifications from the application.
@interface SimpleAppDelegate : NSObject <NSApplicationDelegate>

- (void)createApplication:(id)object;
- (void)tryToTerminateApplication:(NSApplication*)app;
@end

// Provide the CefAppProtocol implementation required by CEF.
@interface SimpleApplication : NSApplication <CefAppProtocol> {
 @private
  BOOL handlingSendEvent_;
}
@end

@implementation SimpleApplication
- (BOOL)isHandlingSendEvent {
  return handlingSendEvent_;
}

- (void)setHandlingSendEvent:(BOOL)handlingSendEvent {
  handlingSendEvent_ = handlingSendEvent;
}

- (void)sendEvent:(NSEvent*)event {
  CefScopedSendingEvent sendingEventScoper;
  [super sendEvent:event];
}

- (void)terminate:(id)sender {
  SimpleAppDelegate* delegate =
      static_cast<SimpleAppDelegate*>([NSApp delegate]);
  [delegate tryToTerminateApplication:self];
  // Return, don't exit. The application is responsible for exiting on its own.
}
@end

@implementation SimpleAppDelegate

// Create the application on the UI thread.
- (void)createApplication:(id)object {
  [[NSBundle mainBundle] loadNibNamed:@"MainMenu"
                                owner:NSApp
                      topLevelObjects:nil];

  // Set the delegate for application events.
  [[NSApplication sharedApplication] setDelegate:self];
}

- (void)tryToTerminateApplication:(NSApplication*)app {
  // SimpleHandler* handler = SimpleHandler::GetInstance();
  // if (handler && !handler->IsClosing()) {
  //   handler->CloseAllBrowsers(false);
  // }
}

- (NSApplicationTerminateReply)applicationShouldTerminate:
    (NSApplication*)sender {
  return NSTerminateNow;
}
@end
*/

int main(int argc, char* argv[]) {
    CefScopedLibraryLoader library_loader;
    if (!library_loader.LoadInMain()) {
      return 1;
    }

    CefMainArgs mainArgs(argc, argv);
    CefRefPtr<CefCommandLine> command_line = CefCommandLine::CreateCommandLine();
    command_line->InitFromArgv(argc, argv);
    
    
    CefRefPtr<CefApp> app{};
    void* sandbox_info = nullptr;
    auto exitCode = CefExecuteProcess(mainArgs, nullptr, sandbox_info);
    if(exitCode >= 0) {
        return exitCode;
    }
    
    auto frameworkPath = GetFrameworkPath(false);
    CefSettings settings{};
    settings.no_sandbox = true;
    
    CefString(&settings.accept_language_list) = "pl,pl-PL";
    
    if (!CefInitialize(mainArgs, settings, app.get(), nullptr)) {
      return 1;
    }
    
    /*
    NSObject* delegate = [[SimpleAppDelegate alloc] init];
    [delegate performSelectorOnMainThread:@selector(createApplication:)
                               withObject:nil
                            waitUntilDone:NO];
    */

    std::thread ths(myThread);
    CefRunMessageLoop();
    while(1) {
        std::this_thread::sleep_for(std::chrono::seconds(100));
    }
    // Shut down CEF.
    CefShutdown();
    
    return 1;
}
