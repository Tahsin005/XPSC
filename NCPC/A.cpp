#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int month, year;
    // cout << "Enter the month (1-12): ";
    cin >> month;
    // cout << "Enter the year: ";
    cin >> year;

    // Initialize a tm struct with the desired month and year
    tm timeinfo = {};
    timeinfo.tm_year = year - 1900; // Years since 1900
    timeinfo.tm_mon = month - 1;     // Month index (0-11)
    timeinfo.tm_mday = 1;            // Day of the month (1-31)

    // Call mktime to normalize the struct
    mktime(&timeinfo);

    // The tm_wday field of the struct now holds the day of the week
    // Sunday = 0, Monday = 1, ..., Saturday = 6
    int day_of_week = timeinfo.tm_wday;

    // Print the day of the week
    switch (day_of_week) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        default: cout << "Invalid day"; break;
    }
    cout << endl;

    return 0;
}
