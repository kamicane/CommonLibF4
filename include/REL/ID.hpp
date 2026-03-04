#pragma once

#include "REL/IDDB.hpp"
#include "REL/Module.hpp"

namespace REL
{
	class ID
	{
	public:
		constexpr ID() noexcept = default;

		explicit constexpr ID(std::uint64_t a_id) noexcept :
			_id(a_id)
		{
		}

		constexpr ID& operator=(std::uint64_t a_id) noexcept
		{
			_id = a_id;
			return *this;
		}

		[[nodiscard]] std::uintptr_t address() const { return base() + offset(); }
		[[nodiscard]] constexpr std::uint64_t id() const noexcept { return _id; }
		[[nodiscard]] std::size_t offset() const { return IDDB::get().id2offset(_id); }

	private:
		[[nodiscard]] static std::uintptr_t base() { return Module::get().base(); }

		std::uint64_t _id{ static_cast<std::uint64_t>(-1) };
	};

	class RelocationID
	{
	public:
		constexpr RelocationID() noexcept = default;

		explicit constexpr RelocationID(
		    [[maybe_unused]] std::uint64_t a_f4ID,
		    [[maybe_unused]] std::uint64_t a_ngID) noexcept
		{
	#ifdef ENABLE_FALLOUT_F4
		    _f4ID = a_f4ID;
	#endif
	#ifdef ENABLE_FALLOUT_NG
		    _ngID = a_ngID;
	#endif
		}

		explicit constexpr RelocationID(
			[[maybe_unused]] std::uint64_t a_f4ID,
			[[maybe_unused]] std::uint64_t a_ngID,
			[[maybe_unused]] std::uint64_t a_aeID) noexcept
		{
#ifdef ENABLE_FALLOUT_F4
			_f4ID = a_f4ID;
#endif
#ifdef ENABLE_FALLOUT_NG
			_ngID = a_ngID;
#endif
#ifdef ENABLE_FALLOUT_AE
			_aeID = a_aeID;
#endif
		}

		[[nodiscard]] std::uintptr_t address() const
		{
			auto thisOffset = offset();
			return thisOffset ? base() + offset() : 0;
		}

		[[nodiscard]] std::size_t offset() const
		{
			auto thisID = id();
			return thisID ? IDDB::get().id2offset(thisID) : 0;
		}

		[[nodiscard]] FALLOUT_REL std::uint64_t id() const noexcept
		{
			switch (Module::GetRuntime()) {
#ifdef ENABLE_FALLOUT_NG
				case Module::Runtime::NG:
					return _ngID;
#endif
#ifdef ENABLE_FALLOUT_F4
				case Module::Runtime::F4:
					return _f4ID;
#endif
#ifdef ENABLE_FALLOUT_AE
				case Module::Runtime::AE:
					return _aeID;
#endif
				default:
					return 0;
			}
		}

		[[nodiscard]] FALLOUT_REL explicit operator ID() const noexcept
		{
			return ID(id());
		}

	private:
		[[nodiscard]] static std::uintptr_t base() { return Module::get().base(); }

#ifdef ENABLE_FALLOUT_F4
		std::uint64_t _f4ID{ 0 };
#endif
#ifdef ENABLE_FALLOUT_NG
		std::uint64_t _ngID{ 0 };
#endif

#ifdef ENABLE_FALLOUT_AE
		std::uint64_t _aeID{ 0 };
#endif
	};

	class VariantID
	{
	public:
		constexpr VariantID() noexcept = default;

		explicit constexpr VariantID(
			[[maybe_unused]] std::uint64_t a_f4ID,
			[[maybe_unused]] std::uint64_t a_ngID,
			[[maybe_unused]] std::uint64_t a_aeID) noexcept
		{
#ifdef ENABLE_FALLOUT_F4
			_f4ID = a_f4ID;
#endif
#ifdef ENABLE_FALLOUT_NG
			_ngID = a_ngID;
#endif
#ifdef ENABLE_FALLOUT_AE
			_aeID = a_aeID;
#endif
		}

		[[nodiscard]] std::uintptr_t address() const
		{
			auto thisOffset = offset();
			return thisOffset ? base() + offset() : 0;
		}

		[[nodiscard]] std::size_t offset() const
		{
			switch (Module::GetRuntime()) {
#ifdef ENABLE_FALLOUT_NG
				case Module::Runtime::NG:
					return _ngID ? IDDB::get().id2offset(_ngID) : 0;
#endif
#ifdef ENABLE_FALLOUT_F4
				case Module::Runtime::F4:
					return _f4ID ? IDDB::get().id2offset(_f4ID) : 0;
#endif
#ifdef ENABLE_FALLOUT_AE
				case Module::Runtime::AE:
					return _aeID ? IDDB::get().id2offset(_aeID) : 0;
#endif
				default:
					return 0;
			}
		}

	private:
		[[nodiscard]] static std::uintptr_t base() { return Module::get().base(); }

#ifdef ENABLE_FALLOUT_F4
		std::uint64_t _f4ID{ 0 };
#endif
#ifdef ENABLE_FALLOUT_NG
		std::uint64_t _ngID{ 0 };
#endif

#ifdef ENABLE_FALLOUT_AE
	std::uint64_t _aeID{ 0 };
#endif
	};
}
