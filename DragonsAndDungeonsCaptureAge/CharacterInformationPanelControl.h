#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "CharacterInformationPanelControl.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct CharacterInformationPanelControl : CharacterInformationPanelControlT<CharacterInformationPanelControl>
    {
        CharacterInformationPanelControl() {}

        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) {
            return m_propertyChanged.add(value);
        }

        void PropertyChanged(event_token const& token) {
            m_propertyChanged.remove(token);
        }

        static Windows::UI::Xaml::DependencyProperty CharacterNameProperty() {
            return m_characterNameProperty;
        }

        static void OnCurrentCharacterNameChanged(Windows::UI::Xaml::DependencyObject d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs e);

        winrt::hstring CharacterName();
        void CharacterName(winrt::hstring const& value);

    private:
        static Windows::UI::Xaml::DependencyProperty m_characterNameProperty;
        winrt::hstring m_characterName = L"UnSet";

        event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharacterInformationPanelControl : CharacterInformationPanelControlT<CharacterInformationPanelControl, implementation::CharacterInformationPanelControl>
    {
    };
}
