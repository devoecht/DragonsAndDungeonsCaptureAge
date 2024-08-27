#pragma once

#include "CharactherViewModel.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct CharactherViewModel : CharactherViewModelT<CharactherViewModel>
    {
        CharactherViewModel() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharactherViewModel : CharactherViewModelT<CharactherViewModel, implementation::CharactherViewModel>
    {
    };
}
