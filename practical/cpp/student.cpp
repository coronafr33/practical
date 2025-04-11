#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    // Member function to display student details
    void display() {
        cout << "Student Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    string name;
    int rollNo;

    cout << "Student Information System\n";
    cout << "-----------------------\n";
    
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollNo;

    // Create student object
    Student student(name, rollNo);

    cout << "\n";
    // Display student information
    student.display();

    return 0;
} 