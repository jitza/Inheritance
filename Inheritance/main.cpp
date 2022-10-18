#include "studentbaseclass.h"
#include "undergraduatestudent.h"
#include "freshmanstudent.h"
#include "sophomorestudent.h"
#include "graduatestudent.h"
#include "doctoralstudent.h"
#include "mastersstudent.h"

int main()
{
    //Creating student base class obj
    StudentBaseClass student1("Jade", "Hamilton", "1/4/2000", "6/3/2016", 20);
    student1.print();
    cout<<"---------------------------------------------------------------\n";

    //Creating undergraduate student obj
    UndergraduateStudent student2("Will", "smith", "3/12/1970", "7/8/2012", 3);
    student2.print();
    cout<<"---------------------------------------------------------------\n";

    //Creating Freshman student obj
    FreshmanStudent student3("kyle", "Herbert", "11/3/1840", "6/25/2020", 10);
    student3.print();
    cout<<"---------------------------------------------------------------\n";

    //Creating Sophomore student obj
    SophomoreStudent student4("Millan", "Uky", "8/12/1960", "6/23/2018", 18, true);
    student4.print();
    cout<<"---------------------------------------------------------------\n";

    //Creating graduate stident obj
    GraduateStudent student5("Jay", "Cassanova", "2/9/1988", "4/30/2000", 45);
    student5.print();
    cout<<"---------------------------------------------------------------\n";

    //Creating Doctoral student obj
    DoctoralStudent student6("Mel", "Sham", "5/28/1970", "5/9/2000", 10, "Resources", "10/24/2018");
    student6.print();
    cout<<"---------------------------------------------------------------\n";

    //Creating Master student obj
    MastersStudent student7("Demi", "Garcia", "1/11/1970", "4/5/2000", 10, "Jesus May", "MicroTechnology");
    student7.print();
    cout<<"---------------------------------------------------------------\n";

    return 0;
}
