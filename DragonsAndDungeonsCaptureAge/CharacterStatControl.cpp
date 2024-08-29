#include "pch.h"
#include "CharacterStatControl.h"
#if __has_include("CharacterStatControl.g.cpp")
#include "CharacterStatControl.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
	int16_t CharacterStatControl::CharacterStatValue() const
	{
		return m_CharacterStatValue;
	}

	void CharacterStatControl::CharacterStatValue(int16_t value)
	{
		if (m_CharacterStatValue != value)
		{
			m_CharacterStatValue = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"CharacterCHAStatValue" });
		}
	}
}
