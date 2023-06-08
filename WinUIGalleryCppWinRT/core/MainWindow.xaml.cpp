#include "pch.h"
#include "MainWindow.xaml.h"
#include "MainWindow.g.cpp"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Media;

namespace winrt::WinUIGalleryCppWinRT::implementation
{
	MainWindow::MainWindow()
	{
		SystemBackdrop(MicaBackdrop());
	}
}
