#include "undergraduatestudent.h"

UndergraduateStudent::UndergraduateStudent(string fn, string ln, string dob, string sd, int ch)
    :StudentBaseClass(fn,ln,dob,sd,ch)
{

}

void UndergraduateStudent::print()
{
    cout<<"Undergraduate Student ";
    StudentBaseClass::print();

}
