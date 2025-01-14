///
/// \file   singleton.cpp
/// \author Martin Reddy
/// \brief  An example of the Singleton design pattern.
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#include "singleton.h"
#include <iostream>

using std::cout;
using std::endl;

namespace apibook {

Singleton &Singleton::GetInstance()
{
    static Singleton instance;
    return instance;
}

Singleton::Singleton()
{
    cout << "Singleton created" << endl;
}

Singleton::~Singleton()
{
    cout << "Singleton destroyed" << endl;
}

int Singleton::GetState()
{
    // this is where you could return the singleton's state.
    // I'm keeping it simple for this example though
    return 42;
}

}  // namespace apibook