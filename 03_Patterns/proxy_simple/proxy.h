///
/// \file   proxy.h
/// \author Martin Reddy
/// \brief  A simple example of a Proxy design pattern.
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#ifndef PROXY_H
#define PROXY_H

namespace apibook {

class Original;

///
/// A Proxy class that wraps access to an Original class.
///
class Proxy
{
public:
    Proxy();
    ~Proxy();

    /// Call through to the Original::DoSomething() function
    bool DoSomething(int value);

    // prevent copying of this class because we have a pointer data member
    Proxy(const Proxy &) = delete;
    const Proxy &operator=(const Proxy &) = delete;

private:
    Original *mOrig;
};

}  // namespace apibook

#endif
