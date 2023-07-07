#include <no_strings_attached/split_string.h>

#include <iostream>

int main() {
    std::cout << "Example program that splits strings." << std::endl;
    std::cout << std::endl;
    std::cout << "Please enter a string: ";
    std::string the_string("");
    std::getline(std::cin, the_string);
    std::vector<std::string> split_vector = no_strings_attached::Split(the_string, " ");
    std::cout << "Your split string: ";
    for (auto str : split_vector) { std::cout << " '" << str << "'"; }
    std::cout << std::endl;

    return 0;
}