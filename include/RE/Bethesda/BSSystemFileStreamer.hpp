#pragma once

namespace RE::BSSystemFileStreamer
{
	inline void UncacheAll(bool a_block)
	{
		using func_t = decltype(&UncacheAll);
		static REL::Relocation<func_t> func{ RE::ID::BSSystemFileStreamer::UncacheAll };
		return func(a_block);
	}
}
