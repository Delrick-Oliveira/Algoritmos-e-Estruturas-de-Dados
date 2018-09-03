#ifndef ITEM_H
#define ITEM_H
#include<iostream>

using namespace std;

template<typename T>
class Item
{
    private:
    T atrib1;
    public:
        Item();
        void show();
        void setAtrib(T atrib);
};

template<typename T>
Item<T>::Item(){}

template<typename T>
void Item<T>::setAtrib(T atrib)
{
    this->atrib1 = atrib;
}

template<typename T>
void Item<T>::show()
{
    cout<<atrib1<<endl;
}

#endif