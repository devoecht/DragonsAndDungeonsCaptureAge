#include "pch.h"
#include "CharacterSelectButtonControl.h"
#if __has_include("CharacterSelectButtonControl.g.cpp")
#include "CharacterSelectButtonControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    CharacterSelectButtonControl::CharacterSelectButtonControl()
    {
        m_characterEntities = single_threaded_observable_vector<DragonsAndDungeonsCaptureAge::CharactherViewModel>();
    }

    DragonsAndDungeonsCaptureAge::CharactherViewModel CharacterSelectButtonControl::CharacterEntry()
    {
        return m_characterEntry;
    }

    void CharacterSelectButtonControl::CharacterEntry(DragonsAndDungeonsCaptureAge::CharactherViewModel const& value)
    {
        if (m_characterEntry != value)
        {
            m_characterEntry = value;

            //Set information for button display
            CharacterName(m_characterEntry.CharacterName());

            m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"CharacterEntry" });
        }
    }

    winrt::hstring CharacterSelectButtonControl::CharacterName()
    {
        return m_characterName;
    }

    void CharacterSelectButtonControl::CharacterName(winrt::hstring const& value)
    {
        if (m_characterName != value)
        {
            m_characterName = value;
            m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"CharacterName" });
        }
    }

    void CharacterSelectButtonControl::ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        m_characterEntry.IsCurrentSelectedCharacter(); //needs to be a settable value
    }
}
