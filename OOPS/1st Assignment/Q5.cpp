/*Differentiate between private and public access/scope. Perform the question no. 4 
with class instead of structure with having the data members private and some 
member functions in private scope and some in public scope. */

/*  PRIVATE ACCESS:-
  -Members declared as private can be accessed only inside the same class.
  -Can't be accessed directly outside the class
  -Used for data hiding and encapsulation
  -Default access level for classes

    PUBLIC ACCESS:-
  -Members declared as public can be accessed from anywhere the object is visible
  -Used for outside interaction
  -Default access level for structures.*/



#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void inputBasicDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
    }

public:
    void addDetails() {
        inputBasicDetails();
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "\nUpdating Student Details...\n";
        inputBasicDetails();
    }

    void updateCGPA() {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel() {
        cout << "Enter New Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();
    return 0;
}
