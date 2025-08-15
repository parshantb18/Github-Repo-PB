/*Create a structure in C++ containing the details of Students as details below and a 
main function to execute the structure.*/

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "\nUpdating Student Details...\n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
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
