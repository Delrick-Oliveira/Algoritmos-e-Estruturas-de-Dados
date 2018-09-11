#ifndef UTIL_H
#define UTIL_H


template<typename T>
bool isInList(T elem, vector<T> list);
{
    bool inList;
    inList = false;
    for(int i=0; i<list.size();i++)
    {
        if (elem == list[i]) inList = true;       
    }
    return inList;
}

#endif