#include <gtest/gtest.h>
#include <no_strings_attached/split_string.h>

#include <iostream>

TEST(SplitString, ReturnTwoWordsUsingOneSpaceDelim) {
    std::vector<std::string> split_vector = no_strings_attached::Split("Hello World!", " ");
    std::vector<std::string> expected{"Hello", "World!"};
    EXPECT_EQ(split_vector, expected);
}

TEST(SplitString, ReturnThreeplusWordsUsingOneSpaceDelim) {
    std::vector<std::string> split_vector = no_strings_attached::Split("Hello World!  Again!", " ");
    std::vector<std::string> expected{"Hello", "World!", "", "Again!"};
    EXPECT_EQ(split_vector, expected);
}

TEST(SplitString, ReturnOnlyTwoWordsOfFiveUsingOneSpaceDelim) {
    std::vector<std::string> split_vector = no_strings_attached::Split("Only two words of five", " ", 2);
    std::vector<std::string> expected{"Only", "two"};
    EXPECT_EQ(split_vector, expected);
}

TEST(SplitString, ReturnZeroWordsOfTwoUsingOneSpaceDelim) {
    std::vector<std::string> split_vector = no_strings_attached::Split("Only two words", " ", 0);
    std::vector<std::string> expected{};
    EXPECT_EQ(split_vector, expected);
}

TEST(SplitString, ReturnThreeWordsUsingTwoLettersDelim) {
    std::vector<std::string> split_vector = no_strings_attached::Split("aaabaaba", "aa");
    std::vector<std::string> expected{"", "ab", "ba"};
    EXPECT_EQ(split_vector, expected);
}

TEST(SplitString, ReturnEmptyWhenEmpty) {
    std::vector<std::string> split_vector = no_strings_attached::Split("", " ");
    std::vector<std::string> expected{""};
    EXPECT_EQ(split_vector, expected);
}

TEST(SplitString, ReturnEmptyWhenSpace) {
    std::vector<std::string> split_vector = no_strings_attached::Split(" ", " ");
    std::vector<std::string> expected{"", ""};
    EXPECT_EQ(split_vector, expected);
}
