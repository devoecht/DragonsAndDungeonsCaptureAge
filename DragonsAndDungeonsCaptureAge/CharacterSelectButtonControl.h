#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "CharacterSelectButtonControl.g.h"

#include "CharactherViewModel.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct CharacterSelectButtonControl : CharacterSelectButtonControlT<CharacterSelectButtonControl>
    {
        CharacterSelectButtonControl(){}

        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) {
            return m_propertyChanged.add(value);
        }

        void PropertyChanged(event_token const& token) {
            m_propertyChanged.remove(token);
        }

        DragonsAndDungeonsCaptureAge::CharactherViewModel CharacterEntry();
        void CharacterEntry(DragonsAndDungeonsCaptureAge::CharactherViewModel const& value);

        winrt::hstring CharacterName();
        void CharacterName(winrt::hstring const& value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    private:
        DragonsAndDungeonsCaptureAge::CharactherViewModel m_characterEntry{ nullptr };
        winrt::hstring m_characterName = L"NotSet";

        event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharacterSelectButtonControl : CharacterSelectButtonControlT<CharacterSelectButtonControl, implementation::CharacterSelectButtonControl>
    {
    };
}
