#include <no_strings_attached/split_string.h>

#include <iostream>
#include <vector>

namespace no_strings_attached {
std::vector<std::string> Split(const std::string &str,
                               const std::string &delimiter) {
    int all_strings = INT32_MAX;
    return Split(str, delimiter, all_strings);
}

std::vector<std::string> Split(const std::string &str,
                               const std::string &delimiter,
                               int number_of_chunks_to_keep) {
    std::vector<std::string> split_vector = {};
    std::string sub_string = "";
    std::size_t current_position = 0;
    std::size_t delimiter_position = 0;

    while (std::string::npos != delimiter_position && number_of_chunks_to_keep > 0) {
        delimiter_position = str.find(delimiter, current_position);
        sub_string = str.substr(current_position, delimiter_position - current_position);
        split_vector.push_back(sub_string);
        current_position = delimiter_position + delimiter.length();
        number_of_chunks_to_keep--;
    }

    return split_vector;
}
}  // namespace no_strings_attached