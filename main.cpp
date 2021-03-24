#include <iostream>
#include "methods.h"

void Something(Human &man)
{
    man.say();
}

int main()
{
    Human man;
    Student student;

    student.setAge(18);
    student.setColorHair("Black");
    student.setName("Vasya");

    Bacalavr bacalavr;
    bacalavr.setName("Kolya");

    Undergraduate undergraduate;
    undergraduate.setName("Nastya");

    Worker worker;
    worker.setName("Petya");

    WTF wtf;
    wtf.setName("WHO");

    Something(student);
    Something(bacalavr);
    Something(undergraduate);
    Something(worker);
    Something(wtf);

}
