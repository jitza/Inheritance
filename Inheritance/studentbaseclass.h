#ifndef STUDENTBASECLASS_H
#define STUDENTBASECLASS_H

#include <iostream>
using namespace std;

/* Name: Jenny Itza
 * ID: 2020152085
 * Course: CMPS2232
 * Project Description: This is a student registration system that uses inheritance.
 * Date: 3/12/2022
 */

class StudentBaseClass
{
private:
    string firstName;
    string lastName;
    string DoB;
    string startDate;
    int creditHours;

public:
    StudentBaseClass();
    StudentBaseClass(string, string, string, string, int);

    void setFirstName(string);
    string getFirstName();

    void setLastName(string);
    string getLastName();

    void setDateOfBirth(string);
    string getDateOfBirth();

    void setStartDate(string);
    string getStartDate();

    void setCreditHours(int);
    int getCreditHours();

    void print();


};

#endif // STUDENTBASECLASS_H
