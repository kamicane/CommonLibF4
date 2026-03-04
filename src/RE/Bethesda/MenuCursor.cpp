#include "RE/Bethesda/MenuCursor.hpp"

#include "RE/Bethesda/Settings.hpp"

namespace RE
{
	void MenuCursor::ConstrainForPipboy()
	{
		static REL::Relocation<Setting*> tlx{ ID::MenuCursor::PipboyConstraintTLX };
		static REL::Relocation<Setting*> tly{ ID::MenuCursor::PipboyConstraintTLY };
		static REL::Relocation<Setting*> width{ ID::MenuCursor::PipboyConstraintWidth };
		static REL::Relocation<Setting*> height{ ID::MenuCursor::PipboyConstraintHeight };
		SetCursorConstraintsRaw(
			tlx->GetUInt(),
			tly->GetUInt(),
			width->GetUInt(),
			height->GetUInt());
	}

	void MenuCursor::ConstrainForPipboyPA()
	{
		static REL::Relocation<Setting*> tlx{ ID::MenuCursor::PipboyConstraintTLX_PowerArmor };
		static REL::Relocation<Setting*> tly{ ID::MenuCursor::PipboyConstraintTLY_PowerArmor };
		static REL::Relocation<Setting*> width{ ID::MenuCursor::PipboyConstraintWidth_PowerArmor };
		static REL::Relocation<Setting*> height{ ID::MenuCursor::PipboyConstraintHeight_PowerArmor };
		SetCursorConstraintsRaw(
			tlx->GetUInt(),
			tly->GetUInt(),
			width->GetUInt(),
			height->GetUInt());
	}
}
