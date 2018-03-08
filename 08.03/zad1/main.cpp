#include <iostream>
#include <string>
#include <user.h>
#include "subject.h"

using namespace std;
int main()
{
    Subject s1("subj1",3);
    s1.addStudent(student("login","haslo",2));
    s1.addStudent(student("login2","haslo2",2));

    Subject s2=s1; //Subject s2(s1);

    count <<s1.getName()<<endl;
    s2.addStudent(student("login3","haslo",2));


    bool ok;
    cout<<s1.check(1,ok).getlogin()<<endl;


    return 0;
}
