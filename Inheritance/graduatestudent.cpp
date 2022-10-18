#include "graduatestudent.h"

GraduateStudent::GraduateStudent(string fn, string ln, string dob, string sd, int ch):
    StudentBaseClass(fn,ln,dob,sd,ch)
{

}

void GraduateStudent::print()
{
    cout<<"Graduate Student ";
    StudentBaseClass::print();

}
