///
/// \file   plugin2.h
/// \author Martin Reddy
/// \brief  An example plugin built against the plugin API.
///
/// Copyright (c) 2010-2024, Martin Reddy. All rights reserved.
/// Distributed under the X11/MIT License. See LICENSE.txt.
/// See https://APIBook.com/ for the latest version.
///

#include "pluginapi.h"
#include <iostream>

class DirectXRenderer : public IRenderer
{
public:
    bool LoadScene(const char *filename) { return true; }
    void SetViewportSize(int w, int h) {}
    void SetCameraPos(double x, double y, double z) {}
    void SetLookAt(double x, double y, double z) {}
    void Render() { std::cout << "DirectX Render" << std::endl; }
};

PLUGIN_FUNC IRenderer *CreateRenderer()
{
    return new DirectXRenderer;
}

PLUGIN_FUNC void DestroyRenderer(IRenderer *r)
{
    delete r;
}

PLUGIN_DISPLAY_NAME("DirectX Renderer");

PLUGIN_INIT()
{
    // register our new renderer
    std::cout << "PLUGIN_INIT" << std::endl;
    RegisterRenderer("directx", CreateRenderer, DestroyRenderer);
    return 0;
}
