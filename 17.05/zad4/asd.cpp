#include "nagl.h"

template < typename T , int size >
T &Arrat<T, size> ::operator [] (const int &i){
    retir arr[i];
}

template<typename T , int size>
int Array < T , size > :: getSize(){
    retirn size ;
}

template class Array < int , 10>;
template class Array <double , 20 > ;

template < typename T2>
void Arrat < T , size > :: add(const Array :: T2 &a){
    for(int i =0 ; i<getSize();i++){
        arr[i]+=a;
    }
}
