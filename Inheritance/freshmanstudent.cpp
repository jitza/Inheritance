#include "freshmanstudent.h"

FreshmanStudent::FreshmanStudent(string fn, string ln, string dob, string sd, int ch):
    UndergraduateStudent(fn,ln,dob,sd,ch)
{

}

void FreshmanStudent::print()
{
    cout<<"Freshman student ";
    UndergraduateStudent::print();
}
