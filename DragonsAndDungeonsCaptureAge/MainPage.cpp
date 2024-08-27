#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

#include "CharactherViewModel.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    MainPage::MainPage()
    {
        m_characterEntities = single_threaded_observable_vector<DragonsAndDungeonsCaptureAge::CharactherViewModel>();
    }
    void MainPage::ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        //Do start stuff
    }
}
