#include "villager.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
string Villager::maleName[10]={"Mateusz","Andrzej","Yevhen","Jacek","Pawel","Sebastian","Jakub","Michal","Piotr","Grzegorz"};
string Villager::femaleName[10]={"Agata","Karolina","Beata","Ola","Ala"};
bool Villager::randomized=false;
int Villager::femaleCount=5;
int Villager::maleCount=10;

Villager::Villager()
{
    if(!randomized){
        srand(time(0));
        randomized=true;
    }

    m_maxAge=rand()%100+1;
    m_age=0;
    m_sex=rand()%2;

    if(m_sex)
        m_name=femaleName[rand()%femaleCount];
        else
        m_name=maleName[rand()%maleCount];

    cout<<m_name << "Just born" << endl;

}

Villager::Villager(string m_name, unsigned int m_age, unsigned int m_maxAge, bool m_sex)
{
    this->m_name=m_name;
    this->m_age=m_age;
    this->m_maxAge=m_maxAge;
    this->m_sex=m_sex;

    cout<<m_name<<" in age " <<m_age<<"Just arrived" <<endl;
}

Villager::~Villager()
{
    if(m_age==m_maxAge)
        cout<<m_name<<" died " << endl;
    else
        cout<<m_name<<" left"<<endl;
}


unsigned int Villager::name() const
{
    return m_name;
}

unsigned int Villager::maxAge() const
{
    return m_maxAge;
}

unsigned int Villager::age() const
{
    return m_age;
}

unsigned int Villager::maxAge() const
{
    return m_maxAge;
}

bool Villager::sex() const
{
    return m_sex;
}

void Villager::advance()
{
    m_age++;
}

bool Villager::readyToDie()
{
    return m_age==m_maxAge;
}

