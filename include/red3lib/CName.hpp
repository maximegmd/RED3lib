#pragma once

#include <cstdint>
#include <string_view>

namespace red3lib
{

using CNameHash = uint32_t;

class [[nodiscard]] CName
{
public:
    CName() = default;
    CName(const wchar_t* text);

    // TODO: Implement other constructors.

    constexpr CName(const CName&) noexcept = default;
    constexpr CName& operator=(const CName&) noexcept = default;

    constexpr CName(CName&&) noexcept = default;
    constexpr CName& operator=(CName&&) noexcept = default;

    constexpr ~CName() noexcept = default;

    [[nodiscard]] std::wstring_view AsChar() const;
    [[nodiscard]] std::string_view AsAnsiChar() const;
    [[nodiscard]] bool IsNone() const;

private:
    std::uint32_t m_index{0}; // 00
};
} // namespace red3lib
