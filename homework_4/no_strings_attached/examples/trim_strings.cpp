#include <no_strings_attached/trim_string.h>

#include <iostream>

int main() {
    std::cout << "Example program that trims strings." << std::endl;
    std::cout << "Please enter a string: ";
    std::string the_string("");
    std::getline(std::cin, the_string);
    std::string trimmed = no_strings_attached::Trim(the_string);
    std::cout << "Your trimmed string: '" << trimmed << "'" << std::endl;

    return 0;
}