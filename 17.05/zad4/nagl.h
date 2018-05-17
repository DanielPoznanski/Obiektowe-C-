#ifndef NAGL_H
#define NAGL_H

template <typename T, int size>
class Array{
    T arr[size];
public:
    T& operator[](int &i);
    int getSize();
    template<typename T2>
    void add(const T2)

};



#endif // NAGL_H
