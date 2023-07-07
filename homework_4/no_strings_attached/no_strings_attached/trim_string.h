#pragma once
#include <iostream>
#include <vector>

namespace no_strings_attached {

enum class Side { kLeft,
                  kRight,
                  kBoth };

std::string Trim(const std::string& str,
                 char char_to_trim,
                 Side side);

std::string Trim(const std::string& str);
}  // namespace no_strings_attached