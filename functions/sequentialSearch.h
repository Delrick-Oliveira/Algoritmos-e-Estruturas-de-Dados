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

#endif