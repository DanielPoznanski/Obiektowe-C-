#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="Ala ma kota zenka";
    //cin>>s;
    char first='z';
    char last='a';
    for (unsigned int i = 0 ; i < s.size(); i ++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
        if(s[i]>='a' && s[i]<='z'){
        if(s[i]<first)
            first=s[i];
        if(s[i]>last)
            last=s[i];
    }}
    cout<< s <<endl<<first<<' '<<last<<endl;
    return 0;
}
