#include "pch.h"
#include "CharachterSelectionPanelControl.h"
#if __has_include("CharachterSelectionPanelControl.g.cpp")
#include "CharachterSelectionPanelControl.g.cpp"
#endif

#include <CharactherViewModel.h>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    Windows::UI::Xaml::DependencyProperty CharachterSelectionPanelControl::m_characterEntitiesProperty =
        Windows::UI::Xaml::DependencyProperty::Register(
            L"CharacterEntities",
            winrt::xaml_typename<Windows::Foundation::Collections::IObservableVector<DragonsAndDungeonsCaptureAge::CharactherViewModel>>(),
            winrt::xaml_typename<DragonsAndDungeonsCaptureAge::CharachterSelectionPanelControl>(),
            Windows::UI::Xaml::PropertyMetadata(nullptr, Windows::UI::Xaml::PropertyChangedCallback(&CharachterSelectionPanelControl::OnCharacterEntitiesChanged))
        );


    void CharachterSelectionPanelControl::OnCharacterEntitiesChanged(Windows::UI::Xaml::DependencyObject d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs e)
    {
        auto parent = d.as<DragonsAndDungeonsCaptureAge::CharachterSelectionPanelControl>();
        auto characterEntities = parent.CharacterEntities();
        assert(characterEntities != nullptr);

        for (uint16_t i = 0; i < parent.CharacterCount(); i++)
        {
            auto charachterEntity = make<DragonsAndDungeonsCaptureAge::implementation::CharactherViewModel>();
            std::wstring characterName = L"Character " + std::to_wstring(i);
            charachterEntity.CharacterName(characterName);
            characterEntities.Append(charachterEntity);
        }
    }
}
