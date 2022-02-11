#pragma once

#include <filesystem>
#include "Stl.hpp"

namespace TiltedPhoques
{
    std::filesystem::path GetPath() noexcept;
    String LoadFile(const std::filesystem::path& acPath) noexcept;
    bool SaveFile(const std::filesystem::path& acPath, const String& acData) noexcept;
}
