#include <iostream>
#include <nagl.h>
using namespace std;

int main()
{
    Array<double , 10> a ;
    for(int i=0;i<a.getsize();i++){
        a[i]=i;
        count<<a[i]<< " ";
    }
    Array<double , 20> b ;
    for(int i=0;i<b.getsize();i++){
        b[i]=i+.09;
        count<<b[i]<< " ";
    }
    return 0;
}
