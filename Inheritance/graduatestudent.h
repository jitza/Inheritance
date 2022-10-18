#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "studentbaseclass.h"

class GraduateStudent : public StudentBaseClass
{
public:
    GraduateStudent();
    GraduateStudent(string, string, string, string, int);
    void print();
};

#endif // GRADUATESTUDENT_H
