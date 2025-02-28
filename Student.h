#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string sname, fname, course, sem, grp, batch, dob, add;
    float cgpa;
    int age;

    void getData();
    void showAllData();
    void showSimpleData();
};

#endif
