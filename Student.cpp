#include "Student.h"

void Student::getData() {
    cout << "Enter Your Name: ";
    cin.ignore();
    getline(cin, sname);
    
    cout << "Enter Your Father's Name: ";
    getline(cin, fname);

    cout << "Enter Your Age: ";
    cin >> age;

    cout << "Enter Your Date of Birth: ";
    cin.ignore();
    getline(cin, dob);

    cout << "Enter Your Address: ";
    getline(cin, add);

    cout << "Enter Your Course: ";
    getline(cin, course);

    cout << "Enter Your Batch: ";
    getline(cin, batch);

    cout << "Enter Your Group: ";
    getline(cin, grp);

    cout << "Enter Your Semester: ";
    getline(cin, sem);

    cout << "Enter Your CGPA: ";
    cin >> cgpa;
}

void Student::showAllData() {
    cout << "\n--- Student Full Details ---\n";
    cout << "Name: " << sname << endl;
    cout << "Father's Name: " << fname << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Address: " << add << endl;
    cout << "Course: " << course << endl;
    cout << "Batch: " << batch << endl;
    cout << "Group: " << grp << endl;
    cout << "Semester: " << sem << endl;
    cout << "CGPA: " << cgpa << endl;
}

void Student::showSimpleData() {
    cout << "\n--- Basic Student Information ---\n";
    cout << "Name: " << sname << endl;
    cout << "Course: " << course << endl;
    cout << "Semester: " << sem << endl;
    cout << "CGPA: " << cgpa << endl;
}
