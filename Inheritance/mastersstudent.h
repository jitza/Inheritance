#ifndef MASTERSSTUDENT_H
#define MASTERSSTUDENT_H

#include "graduatestudent.h"

class MastersStudent : public GraduateStudent
{
private:
    string advisor;
    string finalProTitle;
public:
    MastersStudent(string, string, string, string, int, string, string);

    void setAdvisor(string);
    string getAdvisor();

    void setFinalProTitle(string);
    string getFinalProTitle();

    void print();
};

#endif // MASTERSSTUDENT_H
