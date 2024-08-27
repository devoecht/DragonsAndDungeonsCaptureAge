#pragma once

#include "CharactherViewModel.g.h"

namespace winrt::DragonsAndDungeonsCaptureAge::implementation
{
    struct CharactherViewModel : CharactherViewModelT<CharactherViewModel>
    {
        CharactherViewModel() = default;

        winrt::hstring CharacterName() const;
        void CharacterName(winrt::hstring value);

        CharacterRace CharacterRaceID() const;
        void CharacterRaceID(CharacterRace value);

        CharacterClass CharacterClassID() const;
        void CharacterClassID(CharacterClass value);

        CharacterStatType CharacterPrimeClassID() const;
        void CharacterPrimeClassID(CharacterStatType value);

        int16_t CharacterSTRStatValue() const;
        void CharacterSTRStatValue(int16_t value);

        int16_t CharacterINTStatValue() const;
        void CharacterINTStatValue(int16_t value);

        int16_t CharacterWISStatValue() const;
        void CharacterWISStatValue(int16_t value);

        int16_t CharacterDEXStatValue() const;
        void CharacterDEXStatValue(int16_t value);

        int16_t CharacterCONStatValue() const;
        void CharacterCONStatValue(int16_t value);

        int16_t CharacterCHAStatValue() const;
        void CharacterCHAStatValue(int16_t value);

    private:
        winrt::hstring m_characterName = L"Default Name";
        CharacterRace m_characterRace = CharacterRace::Unknown;
        CharacterClass m_characterClass = CharacterClass::Unknown;
        CharacterStatType m_characterPrimeStat = CharacterStatType::Unknown;

        int16_t m_CharacterSTRStatValue = 0;
        int16_t m_CharacterINTStatValue = 0;
        int16_t m_CharacterWISStatValue = 0;
        int16_t m_CharacterDEXStatValue = 0;
        int16_t m_CharacterCONStatValue = 0;
        int16_t m_CharacterCHAStatValue = 0;
    };
}

namespace winrt::DragonsAndDungeonsCaptureAge::factory_implementation
{
    struct CharactherViewModel : CharactherViewModelT<CharactherViewModel, implementation::CharactherViewModel>
    {
    };
}
