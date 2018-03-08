#ifndef SUBJECT_H
#define SUBJECT_H
#include "student.h"

class Subject
{
    std::string name;
    int max,cur;
    student student2[100];
public:
    Subject(std::string name, int max);
    Subject(Subject &s);
    bool addStudent(student s);
    student &check(int index,bool &ok);
};

#endif // SUBJECT_H
