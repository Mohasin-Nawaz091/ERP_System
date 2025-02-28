#include "Teacher.h"

    void Teacher :: getData() {
        cout << "Enter Teacher's Name: ";
        cin.ignore();
        getline(cin, tname);
        
        cout << "Enter Teacher's Father's Name: ";
        getline(cin, fname);

        cout << "Enter Teacher's Age: ";
        cin >> age;
		
		 cout << "Enter Teacher's gender: ";
        cin.ignore();
        getline(cin, gen);
        cout << "Enter Teacher's Date of Birth: ";
        getline(cin, dob);

        cout << "Enter Teacher's Address: ";
        getline(cin, add);

        cout << "Enter Teacher's Subject: ";
        getline(cin, subj);

        cout << "Enter Teacher's Qualification: ";
        getline(cin, qual);

        cout << "Enter Techer's semester: ";
        getline(cin, sem);

        cout << "Enter Teacher's Points: ";
        cin >> points;
    }

    void Teacher :: showAllData() {
        cout << "\n--- Teacher's Full Details ---\n";
        cout << "Name: " << tname << endl;
        cout << "Father's Name: " << fname << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gen << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Address: " << add << endl;
        cout << "Subject: " << subj << endl;
        cout << "Qualification: " << qual << endl;
        cout << "Semester: " << sem << endl;
        cout << "Points: " << points << endl;
    }

    void Teacher :: showSimpleData() {
        cout << "\n--- Basic Teacher's Information ---\n";
          cout << "Name: " << tname << endl;
           cout << "Subject: " << subj << endl;
        cout << "Semester: " << sem << endl;
           cout << "Points: " << points << endl;
    }

