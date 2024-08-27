#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "CharachterSelectionPanelControl.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct CharachterSelectionPanelControl : CharachterSelectionPanelControlT<CharachterSelectionPanelControl>
    {
        CharachterSelectionPanelControl() {}

        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& value) {
            return m_propertyChanged.add(value);
        }

        void PropertyChanged(event_token const& token) {
            m_propertyChanged.remove(token);
        }

        Windows::Foundation::Collections::IObservableVector<DragonsAndDungeonsCaptureAge::CharactherViewModel> CharacterEntities()
        {
            auto entities = GetValue(m_characterEntitiesProperty);
            return entities.as<Windows::Foundation::Collections::IObservableVector<DragonsAndDungeonsCaptureAge::CharactherViewModel>>();
        }

        void CharacterEntities(Windows::Foundation::Collections::IObservableVector<DragonsAndDungeonsCaptureAge::CharactherViewModel> const& value)
        {
            SetValue(m_characterEntitiesProperty, value);
        }

        static Windows::UI::Xaml::DependencyProperty CharacterEntitiesProperty() {
            return m_characterEntitiesProperty;
        }

        uint32_t CharacterCount() {
            return m_characterCount;
        }

        void CharacterCount(uint32_t value) {
            if (m_characterCount != value)
            {
                m_characterCount = value;
                m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"SpawnCount" });
            }           
        }

        static void OnCharacterEntitiesChanged(Windows::UI::Xaml::DependencyObject d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs e);

    private:
        static Windows::UI::Xaml::DependencyProperty m_characterEntitiesProperty;
        event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;

        uint32_t m_characterCount = 5;//5 premade characters
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharachterSelectionPanelControl : CharachterSelectionPanelControlT<CharachterSelectionPanelControl, implementation::CharachterSelectionPanelControl>
    {
    };
}
