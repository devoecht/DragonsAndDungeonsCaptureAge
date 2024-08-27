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
        CharachterSelectionPanelControl() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharachterSelectionPanelControl : CharachterSelectionPanelControlT<CharachterSelectionPanelControl, implementation::CharachterSelectionPanelControl>
    {
    };
}
