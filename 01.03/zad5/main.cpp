#include <iostream>
#include <string>
#include <fstream>
#include <sstring>
using namespace std;

int main()
{
    ifstream file;
    file.open("text.txt");
    string line;

    stringstream ss;
    int sum;
    int val;
    char op;
    while(getline(file, line)){

        sum=0;

        ss.clear();
        ss.str(line);

        while(ss>>val){
    if(op=='+')
            sum+=val;
    else
        sum-=val;
        }
        cout<<sum;<<endl;
    }


    return 0;
}
