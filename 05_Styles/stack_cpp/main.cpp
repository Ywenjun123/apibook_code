///
/// \file   main.cpp
/// \author Martin Reddy
/// \brief  An example of an object-oriented C++ style API.
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#include "stack.h"
#include <iostream>

using namespace apibook;
using std::cout;
using std::endl;

int main(int, char **)
{
    // create a new stack
    IntStack stack;

    // push and pop an integer to the stack
    cout << "Empty: " << stack.IsEmpty() << endl;
    stack.Push(10);
    cout << "Empty: " << stack.IsEmpty() << endl;
    int val = stack.Pop();
    cout << "Popped off: " << val << endl;
    cout << "Empty: " << stack.IsEmpty() << endl;

    return 0;
}