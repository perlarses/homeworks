#include <no_strings_attached/trim_string.h>

#include <iostream>
#include <vector>

namespace no_strings_attached {

std::string Trim(const std::string& str) {
    return Trim(str, ' ', Side::kBoth);
}

std::string Trim(const std::string& str,
                 char char_to_trim,
                 Side side) {
    std::size_t start(0);
    std::size_t end(str.length() - 1);

    switch (side) {
        case no_strings_attached::Side::kLeft:
            start = str.find_first_not_of(char_to_trim);
            break;
        case no_strings_attached::Side::kRight:
            end = str.find_last_not_of(char_to_trim);
            break;
        case no_strings_attached::Side::kBoth:
            start = str.find_first_not_of(char_to_trim);
            end = str.find_last_not_of(char_to_trim);
            break;
        default:
            break;
    }
    if (start == std::string::npos) { start = 0; }
    auto result = str.substr(start, end - start + 1);
    return result;
}
}  // namespace no_strings_attached