#include "subject.h"

Subject::Subject(std::string name, int max)
{
    this->name=name;
    this->max=max;
    this->cur=0;
}

Subject::Subject(Subject &s)
{
    this->name=s.name;
    this->max=s.max;
    this->cur=0;
}

bool Subject::addStudent(student s)
{
    if(cur<max){
        student2[cur++]=s;
        return true;
    }
    return false;
}

student &Subject::check(int index, bool &ok)
{
    if(index>=0 && index < cur ){
        ok=true;
        return student2[index];

    }
    ok=false;
}
