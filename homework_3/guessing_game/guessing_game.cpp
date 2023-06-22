#include <iostream>
#include <random>

int GetRandomNumber(int smallest, int largest)
{
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution distribution{smallest, largest};

    return distribution(random_engine);
}

bool IsSmallestLessThanLargest(int smallest, int largest)
{
    bool result{false};
    if (smallest < largest)
    {
        result = true;
    }
    else
    {
        result = false;
        std::cout << "The small number must be smaller than the large number" << std::endl;
    }
    return result;
}

int main()
{
    std::cout << "Welcome to the GUESSING GAME!" << std::endl;
    std::cout << "I will generate a number and you will guess it!" << std::endl;

    int smallest{};
    int largest{};
    do
    {
        std::cout << "Please provide the smallest number: ";
        std::cin >> smallest;

        std::cout << "Please provide the largest number: ";
        std::cin >> largest;
    } while (!IsSmallestLessThanLargest(smallest, largest));

    int random_number = GetRandomNumber(smallest, largest);
    std::cout << "I've generated a number. Try to guess it!" << std::endl;

    int guess{0};
    bool found{false};
    int tries{1};
    while (!found)
    {
        std::cout << "Please provide the next guess: ";
        std::cin >> guess;
        if (guess == random_number)
        {
            found = true;
            std::cout << "You've done it! You guessed the number " << random_number << " in " << tries << " guesses!" << std::endl;
        }
        else if (guess < random_number)
        {
            tries++;
            std::cout << "Your number is too small. Try again!" << std::endl;
        }
        else
        {
            tries++;
            std::cout << "Your number is too big. Try again!" << std::endl;
        }
    }

    return 0;
}