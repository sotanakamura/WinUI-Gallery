#pragma once

#include "MainWindow.g.h"

namespace winrt::WinUIGalleryCppWinRT::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
    };
}

namespace winrt::WinUIGalleryCppWinRT::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
