#include "studentbaseclass.h"

StudentBaseClass::StudentBaseClass()
{

}
StudentBaseClass::StudentBaseClass(string fn, string ln, string dob, string sd, int ch ){
    setFirstName(fn);
    setLastName(ln);
    setDateOfBirth(dob);
    setStartDate(sd);
    setCreditHours(ch);
}

void StudentBaseClass::setFirstName(string fn)
{
      firstName = fn;
}

string StudentBaseClass::getFirstName()
{
    return firstName;
}

void StudentBaseClass::setLastName(string ln)
{
    lastName = ln;
}

string StudentBaseClass::getLastName()
{
    return  lastName;
}

void StudentBaseClass::setDateOfBirth(string dob)
{
    DoB = dob;
}

string StudentBaseClass::getDateOfBirth()
{
    return DoB;
}

void StudentBaseClass::setStartDate(string sd)
{
    startDate = sd;
}

string StudentBaseClass::getStartDate()
{
    return startDate;
}

void StudentBaseClass::setCreditHours(int ch)
{
 creditHours = ch;
}

int StudentBaseClass::getCreditHours()
{
    return creditHours;
}

void StudentBaseClass::print()
{
    cout<<"Student Base Class: "<<endl
    <<getFirstName()<<" "<<getLastName()
    <<"\nDate of Birth: "<<getDateOfBirth()
    <<"\nStart Date: "<<getStartDate()
    <<"\nCredit Hours: "<<getCreditHours()<<endl;
}

