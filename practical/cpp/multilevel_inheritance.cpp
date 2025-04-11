#include <iostream>
#include <string>
using namespace std;

// Base class
class Grandparent {
protected:
    string grandparentName;
public:
    Grandparent(string name) : grandparentName(name) {}
    void displayGrandparent() {
        cout << "Grandparent's name: " << grandparentName << endl;
    }
};

// Intermediate class
class Parent : public Grandparent {
protected:
    string parentName;
public:
    Parent(string pName, string gpName) 
        : Grandparent(gpName), parentName(pName) {}
    
    void displayParent() {
        displayGrandparent();
        cout << "Parent's name: " << parentName << endl;
    }
};

// Derived class
class Child : public Parent {
private:
    string childName;
public:
    Child(string cName, string pName, string gpName)
        : Parent(pName, gpName), childName(cName) {}
    
    void displayFamily() {
        cout << "\nFamily Tree:\n";
        cout << "-----------\n";
        cout << "Child's name: " << childName << endl;
        displayParent();
    }
};

int main() {
    string childName, parentName, grandparentName;

    cout << "Multilevel Inheritance Demo\n";
    cout << "-------------------------\n";
    
    cout << "Enter child's name: ";
    getline(cin, childName);
    cout << "Enter parent's name: ";
    getline(cin, parentName);
    cout << "Enter grandparent's name: ";
    getline(cin, grandparentName);

    // Create child object
    Child child(childName, parentName, grandparentName);
    
    // Display family tree
    child.displayFamily();

    return 0;
} 