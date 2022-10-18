#include "mastersstudent.h"

MastersStudent::MastersStudent(string fn, string ln, string dob, string sd, int ch, string ad, string fp)
    :GraduateStudent(fn,ln,dob,sd,ch)
{
    setAdvisor(ad);
    setFinalProTitle(fp);
}

void MastersStudent::setAdvisor(string ad)
{
    advisor = ad;
}

string MastersStudent::getAdvisor()
{
    return advisor;
}

void MastersStudent::setFinalProTitle(string fp)
{
    finalProTitle = fp;
}

string MastersStudent::getFinalProTitle()
{
    return finalProTitle;
}

void MastersStudent::print()
{
    cout<<"Master Student ";
    GraduateStudent::print();
    cout<<"Advisor: "<<getAdvisor()
    <<"\nFinal Project Title: "<<getFinalProTitle()<<endl<<endl;
}
