#pragma once

namespace RE
{
	namespace BSRandom
	{
		inline std::uint32_t UnsignedInt(std::uint32_t a_min, std::uint32_t a_max)
		{
			using func_t = decltype(&BSRandom::UnsignedInt);
			static REL::Relocation<func_t> func{ ID::BSRandom::UnsignedInt };
			return func(a_min, a_max);
		}
	}
}
