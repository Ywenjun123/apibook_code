///
/// \file   main.cpp
/// \author Martin Reddy
/// \brief  A class template for a 2D Coordinate.
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#include "coord2d.h"
#include <iostream>

using namespace apibook;
using std::cout;
using std::endl;

int main(int, char **)
{
    // create a new double-precision 2D coordinate
    Coord2D<double> coord(0.0, 0.0);
    // change the coordinate
    coord.Add(1.0, 2.0);

    // output the current value of the coordinate
    cout << "Coord = " << coord.GetX() << ", " << coord.GetY() << endl;

    return 0;
}
