#include "sophomorestudent.h"

SophomoreStudent::SophomoreStudent(string fn, string ln, string dob, string sd, int ch, bool gp):
    UndergraduateStudent(fn,ln,dob,sd,ch)
{
    setGraduationPass(gp);
}

void SophomoreStudent::setGraduationPass(bool gp)
{
    graduationPass = gp;

}

bool SophomoreStudent::getGraduationPass()
{
    return graduationPass;
}

void SophomoreStudent::print()
{
    cout<<"Sophomore Student: ";
    UndergraduateStudent::print();
    cout<<"Graduation Pass: "<<getGraduationPass()<<endl<<endl;
}
