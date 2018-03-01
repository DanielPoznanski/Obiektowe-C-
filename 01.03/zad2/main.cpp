#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="Ala ma kota ma zenka";
    string a="ma";
    string z="nie ma";
    size_t pos=s.find(a);
    while(pos!=string::npos){   //pozycja różna od -1
    if(pos!=string::npos){
        s.replace(pos,a.size(),z);
        pos=s.find(a,pos+z.size());

    }
}
        cout <<s<<endl;


    return 0;

}

