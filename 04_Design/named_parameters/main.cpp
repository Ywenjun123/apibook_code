///
/// \file   main.cpp
/// \author Martin Reddy
/// \brief  Example of the Named Parameter Idiom (NPI)
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#include "timer.h"

using namespace apibook;

int main(int, char **)
{
    // The NPI lets you create method chains to simulate optional params
    Timer timer = Timer().SetDelay(10.0).SetSingleShot(true).Start();

    return 0;
}
