#ifndef STUDENT_H
#define STUDENT_H
#include "user.h"

class student: public User
{
    int semestr;
public:
    student();
    student(std::string login , std::string haslo, int semestr);
};

#endif // STUDENT_H
