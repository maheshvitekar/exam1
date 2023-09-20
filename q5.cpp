#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    // Input date (year, month, day)
    int year, month, day;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day (1-31): ";
    cin >> day;

    // Create a tm structure and set the year, month, and day
    std::tm date = {0};
    date.tm_year = year - 1900; 
    date.tm_mon = month - 1;   // Months are zero-based
    date.tm_mday = day;

    // Calculate the day of the week
    std::mktime(&date);

    // Print the weekday
    switch (date.tm_wday) {
        case 0:
            std::cout << "Sunday" << std::endl;
            break;
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        default:
            std::cout << "Invalid date" << std::endl;
    }

    return 0;
}
