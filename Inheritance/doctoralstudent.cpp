#include "doctoralstudent.h"

DoctoralStudent::DoctoralStudent(string fn, string ln, string dob, string sd, int ch, string tt, string td):
    GraduateStudent(fn,ln,dob,sd,ch)
{
    setThesisTitle(tt);
    setThesisDueDate(td);
}

void DoctoralStudent::setThesisTitle(string tt)
{
    thesisTitle = tt;
}

string DoctoralStudent::getThesisTitle()
{
    return thesisTitle;
}

void DoctoralStudent::setThesisDueDate(string td)
{
    thesisDueDate = td;
}

string DoctoralStudent::getThesisDueDate()
{
    return thesisDueDate;
}

void DoctoralStudent::print()
{
    cout<<"Doctoral Student ";
    GraduateStudent::print();
    cout<<"Thesis Titile: "<<getThesisTitle()
    <<"\nThesis Due Date: "<<getThesisDueDate()<<endl<<endl;

}
