#ifndef FRESHMANSTUDENT_H
#define FRESHMANSTUDENT_H

#include "undergraduatestudent.h"


class FreshmanStudent : public UndergraduateStudent
{
public:
    FreshmanStudent(string, string, string, string, int);
    void print();
};

#endif // FRESHMANSTUDENT_H
