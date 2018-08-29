#include "sequentialSearch.h"
#include <vector>

template<class Type1, class Type2>
int sequentialSearch(Type1 key, vector<Type2> list, int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        if(key==list[i].key)
        {
            return i;
        }
    }
    return null;
}