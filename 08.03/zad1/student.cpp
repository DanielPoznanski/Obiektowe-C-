#include "student.h"

student::student() : User("","")
{

}

student::student(std::string login, std::string haslo, int semestr) : User(login , haslo)
{
    this->semestr=semestr;
}
