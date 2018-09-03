#ifndef NO_H
#define NO_H

template<class T>
class No
{
    private:
    T item;
    No* next;
    public:
        No();
        No(T item);
        T getItem();
        void setItem(T item);
        No* getNext();
        void setNext(No* no);
};

template<class T>
No<T>::No()
{
    this->next = NULL;    
}

template<class T>
No<T>::No(T item)
{
    this->item = item;    
}

template<class T>
T No<T>::getItem()
{
    return this->item;    
}

template<class T>
void No<T>::setItem(T item)
{
    this->item = item;    
}

template<class T>
No<T>* No<T>::getNext()
{
    return this->next;    
}

template<class T>
void No<T>::setNext(No<T>* no)
{
    this->next = no;
}

#endif