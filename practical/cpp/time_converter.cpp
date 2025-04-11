#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Time Converter\n";
    cout << "--------------\n";
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    // Calculate hours, minutes and remaining seconds
    hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << "\nConverted Time:\n";
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
} 