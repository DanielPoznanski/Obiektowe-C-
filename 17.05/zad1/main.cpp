#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

//zadanie 1
template <typename T>
T& minBetween(T *b, T *e){
   T &min=*b;
   for(T *i=b;i<e;i++){
       if(min>*i)
           min=*i;
   }
   return min;
}

//zadanie 2
template <>
string& minBetween(string *b, string *e){
   string *pos=b;
   string minCopy=*b , current;
   transform(minCopy.begin(),minCopy.end(),minCopy.begin(),::toupper);
   for(string *i=b;i<e;i++){
       current=*i;
       transform(current.begin(),current.end(),current.begin(),::toupper);
       if(minCopy.compare(current)>0){
           minCopy=current;
           pos=i;
       }
   }
   return *pos;
}

//zadanie 3
template<template <typename ...> class C, typename T>
T &minOfContainer(C<T> &container){
    T &min=*container.begin();
    for(const T& it: container){
        if(it<min)
            min=it;
    }
    return min;
}


int main()
{   //do zadania 2
    //string a[]={"kota","ma","Ala","azzaAa"};
    //cout<<minBetween(a,a+4)<<endl;


    //do zadania 3
    vector<int> a;
    a.push_back(2);
    a.push_back(7);
    a.push_back(9);
    a.push_back(-2);
    a.push_back(21);


    cout<<minOfContainer(a)<<endl;

    //do zadani 4
    return 0;
}
