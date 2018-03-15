#include "household.h"
#include<iostream>

using namespace std;

Household::Household(Villager *v, int maxInh)
{
    inh=new Villager*[maxInh];
    for(int i=0;i<maxInh;i++)
        inh[i]=nullptr;

    inh[0]=v;
    this->maxInh=maxInh;
}

Household::~Household()
{
    delete [] inh;

}
bool Household::addVillager((Villager *v)){

    for(int i=0;i<maxInh;i++){
        if(inh[i]==nullptr){
            room=i;
        inh[i]=v;
        return true;
    }
        else
            return false;
     }
}


void Household::advance()
{
    bool f=false, m=false,ch=false;

    for (int i = 0 ; i<maxInh;i++){
        if(inh[i]!=nullptr){
            inh[i]->advance();
            if(inh[i]->readyToDie()){
                delte inh[i];
               inh[i]=nullptr;
               continue;
            }


            if(inh[i]->age()>=18 && inh[i]->age()<=40 && inh[i]->sex()=true)
                f=true;
            if(inh[i]->age()>=18 && inh[i]->age()<=40 && inh[i]->sex()=false)
                m=true;
            if(inh[i]->age()<5)
                ch=true;

        }



    }
    if(f && m && !ch){
        for(int i=0;i<maxInh;i++)
            if(inh[i]==nullptr)
                inh[i]=new Villager();
        break;
    }


    }
}
