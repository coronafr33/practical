#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Find Greatest Number\n";
    cout << "------------------\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    if(num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the greatest number";
    }
    else if(num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the greatest number";
    }
    else {
        cout << num3 << " is the greatest number";
    }
    cout << endl;

    return 0;
} 