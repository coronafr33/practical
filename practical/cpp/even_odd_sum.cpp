#include <iostream>
using namespace std;

int main() {
    int n, evenSum = 0, oddSum = 0;

    cout << "Sum of Even and Odd Numbers\n";
    cout << "-------------------------\n";
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            evenSum += i;  // Add even numbers
        } else {
            oddSum += i;   // Add odd numbers
        }
    }

    cout << "\nResults:\n";
    cout << "Sum of even numbers from 1 to " << n << ": " << evenSum << endl;
    cout << "Sum of odd numbers from 1 to " << n << ": " << oddSum << endl;

    return 0;
} 