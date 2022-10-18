#ifndef UNDERGRADUATESTUDENT_H
#define UNDERGRADUATESTUDENT_H

#include "studentbaseclass.h"


class UndergraduateStudent : public StudentBaseClass
{

public:
    UndergraduateStudent();
    UndergraduateStudent(string, string, string, string, int);
    void print();

};

#endif // UNDERGRADUATESTUDENT_H
