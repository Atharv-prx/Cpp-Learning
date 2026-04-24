// A user defines data type that consists of paired nameed-integer constants.
// Great if you have set of potential options.

#include <iostream>

enum Day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

int main()
{
    int input;
    std::cout << "Enter the day of the week (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    std::cin >> input;

    //Validate input type
    if (!(std::cin >> input)) {
    std::cout << "Invalid input type!" << std::endl;
    return 0;
    }

    // Validate first
    if (input < 0 || input > 6) {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }

    Day today = static_cast<Day>(input);

    switch(today)
    {
        case Sunday:
            std::cout << "Today is Sunday." << std::endl;
            break;
        case Monday:
            std::cout << "Today is Monday." << std::endl;
            break;
        case Tuesday:
            std::cout << "Today is Tuesday." << std::endl;
            break;
        case Wednesday:
            std::cout << "Today is Wednesday." << std::endl;
            break;
        case Thursday:
            std::cout << "Today is Thursday." << std::endl;
            break;
        case Friday:
            std::cout << "Today is Friday." << std::endl;
            break;
        case Saturday:
            std::cout << "Today is Saturday." << std::endl;
            break;
        default:
            std::cout << "Invalid input!" << std::endl;
    }

    return 0;
}