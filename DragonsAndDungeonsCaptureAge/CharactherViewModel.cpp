#include "pch.h"
#include "CharactherViewModel.h"
#if __has_include("CharactherViewModel.g.cpp")
#include "CharactherViewModel.g.cpp"
#endif

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
	//Name
	winrt::hstring CharactherViewModel::CharacterName() const
	{
		return m_characterName;
	}
	void CharactherViewModel::CharacterName(winrt::hstring value)
	{
		if (m_characterName != value)
		{
			m_characterName = value;
		}
	}

	//Race
	CharacterRace CharactherViewModel::CharacterRaceID() const
	{
		return m_characterRace;
	}
	void CharactherViewModel::CharacterRaceID(CharacterRace value)
	{
		if (m_characterRace != value)
		{
			m_characterRace = value;
		}
	}

	//class
	CharacterClass CharactherViewModel::CharacterClassID() const
	{
		return m_characterClass;
	}
	void CharactherViewModel::CharacterClassID(CharacterClass value)
	{
		if (m_characterClass != value)
		{
			m_characterClass = value;
		}
	}

	//Prime stat
	CharacterStatType CharactherViewModel::CharacterPrimeClassID() const
	{
		return m_characterPrimeStat;
	}
	void CharactherViewModel::CharacterPrimeClassID(CharacterStatType value)
	{
		if (m_characterPrimeStat != value)
		{
			m_characterPrimeStat = value;
		}
	}

	//Stat values
	int16_t CharactherViewModel::CharacterSTRStatValue() const
	{
		return m_CharacterSTRStatValue;
	}

	void CharactherViewModel::CharacterSTRStatValue(int16_t value)
	{
		if (m_CharacterSTRStatValue != value)
		{
			m_CharacterSTRStatValue = value;
		}
	}

	int16_t CharactherViewModel::CharacterINTStatValue() const
	{
		return m_CharacterINTStatValue;
	}

	void CharactherViewModel::CharacterINTStatValue(int16_t value)
	{
		if (m_CharacterINTStatValue != value)
		{
			m_CharacterINTStatValue = value;
		}
	}

	int16_t CharactherViewModel::CharacterWISStatValue() const
	{
		return m_CharacterWISStatValue;
	}

	void CharactherViewModel::CharacterWISStatValue(int16_t value)
	{
		if (m_CharacterWISStatValue != value)
		{
			m_CharacterWISStatValue = value;
		}
	}

	int16_t CharactherViewModel::CharacterDEXStatValue() const
	{
		return m_CharacterDEXStatValue;
	}

	void CharactherViewModel::CharacterDEXStatValue(int16_t value)
	{
		if (m_CharacterDEXStatValue != value)
		{
			m_CharacterDEXStatValue = value;
		}
	}

	int16_t CharactherViewModel::CharacterCONStatValue() const
	{
		return m_CharacterCONStatValue;
	}

	void CharactherViewModel::CharacterCONStatValue(int16_t value)
	{
		if (m_CharacterCONStatValue != value)
		{
			m_CharacterCONStatValue = value;
		}
	}

	int16_t CharactherViewModel::CharacterCHAStatValue() const
	{
		return m_CharacterCHAStatValue;
	}

	void CharactherViewModel::CharacterCHAStatValue(int16_t value)
	{
		if (m_CharacterCHAStatValue != value)
		{
			m_CharacterCHAStatValue = value;
		}
	}
	bool CharactherViewModel::IsCurrentSelectedCharacter() const
	{
		return m_isCurrentSelectedCharacter;
	}
	void CharactherViewModel::IsCurrentSelectedCharacter(bool value)
	{
		if (m_isCurrentSelectedCharacter != value)
		{
			m_isCurrentSelectedCharacter = value;
		}
	}
}
