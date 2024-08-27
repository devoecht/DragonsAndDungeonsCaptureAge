#include "pch.h"
#include "CharacterSelectButtonControl.h"
#if __has_include("CharacterSelectButtonControl.g.cpp")
#include "CharacterSelectButtonControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    int32_t CharacterSelectButtonControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void CharacterSelectButtonControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void CharacterSelectButtonControl::ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
    {
        
    }
}
