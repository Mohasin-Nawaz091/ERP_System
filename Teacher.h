#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>

using namespace std;

class Teacher {
public:
	string tname, fname, subj, sem, clas,gen,qual, dob, add;
    float points;
    int age;

	void getData();
    void showAllData();
    void showSimpleData();   


};

#endif