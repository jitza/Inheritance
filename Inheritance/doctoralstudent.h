#ifndef DOCTORALSTUDENT_H
#define DOCTORALSTUDENT_H

#include "graduatestudent.h"

class DoctoralStudent : public GraduateStudent
{
private:
    string thesisTitle;
    string thesisDueDate;
public:
    DoctoralStudent(string, string, string, string, int, string, string);

    void setThesisTitle(string);
    string getThesisTitle();

    void setThesisDueDate(string);
    string getThesisDueDate();

    void print();
};

#endif // DOCTORALSTUDENT_H
