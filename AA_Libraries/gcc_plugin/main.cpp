///
/// \file   main.cpp
/// \author Martin Reddy
/// \brief  Loading plugin libraries on Unix with GCC.
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#include <cstdlib>
#include <dlfcn.h>
#include <iostream>
#include <string>

int main(int argc, char **)
{
    typedef void (*FuncPtrT)(const std::string &);
    const char *error;

    // open the dynamic library
    void *handle = dlopen("libplugin.dylib", RTLD_LOCAL | RTLD_LAZY);
    if (!handle) {
        std::cout << "Cannot load plugin!" << std::endl;
        exit(1);
    }
    dlerror();

    // get the DoSomething() function from the plugin
    FuncPtrT fptr = (FuncPtrT) dlsym(handle, "DoSomething");
    if ((error = dlerror())) {
        std::cout << "Cannot find function in plugin: " << error << std::endl;
        exit(1);
    }

    // call the DoSomething() function
    (*fptr)("Hello There!");

    // close the shared library
    dlclose(handle);

    return 0;
}
