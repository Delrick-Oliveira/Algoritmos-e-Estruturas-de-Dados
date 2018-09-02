#ifndef SEQUENTIALSEARCH_H
#define SEQUENTIALSEARCH_H
#include<vector>

#define NIL -1;

using namespace std;


template<typename T>
extern int sequentialSearch(T key, vector<T> list, int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        if(key==list[i])
        {
            return i;
        }
    }
    return NIL;
}

template<typename T>
extern int binarySearch(T key, vector<T> list, int tam)
{
    int i=0, j=tam-1, m=0;
    while(i<=j)
    {
        m = (i+j)/2;
        if(key == list[m]) return m;
        else if(key<list[m]) j=m-1;
        else i=m+1;
    }
    return NIL;
}

#endif