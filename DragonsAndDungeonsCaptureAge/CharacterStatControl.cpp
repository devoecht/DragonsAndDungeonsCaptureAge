#include "pch.h"
#include "CharacterStatControl.h"
#if __has_include("CharacterStatControl.g.cpp")
#include "CharacterStatControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    int32_t CharacterStatControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void CharacterStatControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
