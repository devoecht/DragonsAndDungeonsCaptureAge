#include "pch.h"
#include "CharacterInformationPanelControl.h"
#if __has_include("CharacterInformationPanelControl.g.cpp")
#include "CharacterInformationPanelControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    Windows::UI::Xaml::DependencyProperty CharacterInformationPanelControl::m_characterNameProperty =
        Windows::UI::Xaml::DependencyProperty::Register(
            L"CharacterName",
            winrt::xaml_typename<hstring>(),
            winrt::xaml_typename<DragonsAndDungeonsCaptureAge::CharacterInformationPanelControl>(),
            Windows::UI::Xaml::PropertyMetadata{ winrt::box_value(L""), Windows::UI::Xaml::PropertyChangedCallback{ &CharacterInformationPanelControl::OnCurrentCharacterNameChanged } }
        );

    winrt::hstring CharacterInformationPanelControl::CharacterName()
    {
        return m_characterName;
    }
    void CharacterInformationPanelControl::CharacterName(winrt::hstring const& value)
    {
        if (m_characterName != value)
        {
            m_characterName = value;
            m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"CharacterName" });
        }
    }

    void CharacterInformationPanelControl::OnCurrentCharacterNameChanged(Windows::UI::Xaml::DependencyObject d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs e)
    {
        auto parent = d.as<DragonsAndDungeonsCaptureAge::CharacterInformationPanelControl>();
        parent.CharacterName(parent.CharacterName());
    }
}
