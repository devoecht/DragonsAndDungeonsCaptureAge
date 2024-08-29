#pragma once

#include "MainPage.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        Windows::Foundation::Collections::IObservableVector<DragonsAndDungeonsCaptureAge::CharactherViewModel> CharacterEntities() {
            return m_characterEntities;
        }

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    private:
        Windows::Foundation::Collections::IObservableVector<DragonsAndDungeonsCaptureAge::CharactherViewModel> m_characterEntities;
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
