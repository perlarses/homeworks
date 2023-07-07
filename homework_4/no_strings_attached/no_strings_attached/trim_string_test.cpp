#include <gtest/gtest.h>
#include <no_strings_attached/trim_string.h>

#include <iostream>

TEST(TrimString, TrimLeftSpaces) {
    std::string split_vector = no_strings_attached::Trim("  hello ", ' ', no_strings_attached::Side::kLeft);
    std::string expected("hello ");
    EXPECT_EQ(split_vector, expected);
}

TEST(TrimString, TrimRightSpaces) {
    std::string split_vector = no_strings_attached::Trim("  hello ", ' ', no_strings_attached::Side::kRight);
    std::string expected("  hello");
    EXPECT_EQ(split_vector, expected);
}

TEST(TrimString, TrimAllSpaces) {
    std::string split_vector = no_strings_attached::Trim("  hello ", ' ', no_strings_attached::Side::kBoth);
    std::string expected("hello");
    EXPECT_EQ(split_vector, expected);
}

TEST(TrimString, TrimLefth) {
    std::string split_vector = no_strings_attached::Trim("hello", 'h', no_strings_attached::Side::kLeft);
    std::string expected("ello");
    EXPECT_EQ(split_vector, expected);
}

TEST(TrimString, TrimEmpty) {
    std::string split_vector = no_strings_attached::Trim("", ' ', no_strings_attached::Side::kBoth);
    std::string expected("");
    EXPECT_EQ(split_vector, expected);
}

TEST(TrimString, TrimEmptyEmpty) {
    std::string split_vector = no_strings_attached::Trim(" ", ' ', no_strings_attached::Side::kBoth);
    std::string expected("");
    EXPECT_EQ(split_vector, expected);
}
