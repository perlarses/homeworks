#include <iostream>
#include <string>
#include <map>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string name{};
    cout << "Welcome to the fortune teller program!" << endl;
    cout << "Please enter your name: ";
    cin >> name;

    std::map<std::string, std::string> seasons{{"spring", "STL guru"},
                                               {"summer", "C++ expert"},
                                               {"autumn", "coding beast"},
                                               {"winter", "software design hero"}};
    std::string time_of_year{};
    cout << "Please enter the time of year when you were born: " << endl;
    do
    {
        cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
        cin >> time_of_year;
    } while (seasons.find(time_of_year) == seasons.end());
    std::string noun = seasons.at(time_of_year);

    std::string adjective1{};
    std::string adjective2{};
    cout << "Please enter an adjective: ";
    cin >> adjective1;
    cout << "Please enter another adjective: ";
    cin >> adjective2;
    std::vector adjectives{adjective1, adjective2};
    int adjective_index = name.length() % adjectives.size();
    std::string adjective = adjectives.at(adjective_index);

    std::array endings{"eats UB for breakfast",
                       "finds errors quicker than the compiler",
                       "is not afraid of C++ error messages"};
    int ending_index = name.length() % endings.size();
    std::string ending = endings.at(ending_index);

    cout << endl;
    cout << name << ", the " << adjective << " " << noun << " that " << ending << endl;

    return 0;
}