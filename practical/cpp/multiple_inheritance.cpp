#include <iostream>
#include <string>
using namespace std;

// First base class
class Father {
protected:
    string fatherName;
public:
    Father(string name) : fatherName(name) {}
    void displayFather() {
        cout << "Father's name: " << fatherName << endl;
    }
};

// Second base class
class Mother {
protected:
    string motherName;
public:
    Mother(string name) : motherName(name) {}
    void displayMother() {
        cout << "Mother's name: " << motherName << endl;
    }
};

// Derived class inheriting from both Father and Mother
class Child : public Father, public Mother {
private:
    string childName;
public:
    Child(string child, string father, string mother) 
        : Father(father), Mother(mother), childName(child) {}
    
    void displayChild() {
        cout << "\nFamily Information:\n";
        cout << "----------------\n";
        cout << "Child's name: " << childName << endl;
        displayFather();
        displayMother();
    }
};

int main() {
    string childName, fatherName, motherName;

    cout << "Multiple Inheritance Demo\n";
    cout << "----------------------\n";
    
    cout << "Enter child's name: ";
    getline(cin, childName);
    cout << "Enter father's name: ";
    getline(cin, fatherName);
    cout << "Enter mother's name: ";
    getline(cin, motherName);

    // Create child object
    Child child(childName, fatherName, motherName);
    
    // Display information
    child.displayChild();

    return 0;
} 