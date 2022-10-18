#ifndef SOPHOMORESTUDENT_H
#define SOPHOMORESTUDENT_H

#include "undergraduatestudent.h"


class SophomoreStudent : public UndergraduateStudent
{
private:
    bool graduationPass;

public:
    SophomoreStudent(string, string, string, string, int, bool);

    void setGraduationPass(bool);
    bool getGraduationPass();

    void print();
};

#endif // SOPHOMORESTUDENT_H
