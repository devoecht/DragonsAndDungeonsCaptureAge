#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "CharacterStatControl.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct CharacterStatControl : CharacterStatControlT<CharacterStatControl>
    {
        CharacterStatControl() {};

        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) {
            return m_propertyChanged.add(value);
        }

        void PropertyChanged(event_token const& token) {
            m_propertyChanged.remove(token);
        }

        int16_t CharacterStatValue() const;
        void CharacterStatValue(int16_t value);

    private:
        int16_t m_CharacterStatValue = 0;

        event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharacterStatControl : CharacterStatControlT<CharacterStatControl, implementation::CharacterStatControl>
    {
    };
}
