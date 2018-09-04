#ifndef SCL_H
#define SCL_H
#include<iostream>
#include "Node.h"

//simple chained list ENG
//lista simplesmente encadeada PT-BR

using namespace std;

template<class T>
class SCL
{
    private:
    Node<T> *first, *last;
    int size;
    public:
        SCL();
        void insert(T item);
        Node<T>* predecessor(Node<T>* node);
        bool isEmpty();
        Node<T>* search(T item);
        void remove(Node<T>* node);
        void remove(T item);
        void print();
        int getSize();
        Node<T>* getNode(int index);
};

template<class T>
SCL<T>::SCL()
{
    first = new Node<T>();
    first->setNext(NULL);
    last = first;
    size = 0;
}

template<class T>
void SCL<T>::insert(T item)
{
    last->setNext(new Node<T>());
    last = last->getNext();
    last->setNext(NULL);
    last->setItem(item);
    size++;
}


template<class T>
bool SCL<T>::isEmpty()
{
    return first == last;
}

template<class T>
Node<T>* SCL<T>::predecessor(Node<T>* node)
{
    Node<T>* p = first->getNext();
    while(p->getNext() != node)
    {
        p = p->getNext();
    }
    return p;
}

template<class T>
void SCL<T>::remove(Node<T>* node)
{
    if(isEmpty() || node == NULL || node == first)
    {
        cout << "impossível remover" << endl;
    }
    else
    {
        Node<T>* p = predecessor(node);
        p->setNext(node->getNext());
        if(p->getNext() == NULL) last = p;
        cout << "Nó com item " << node->getItem() << " removido" << endl;
        delete node;
        size--;
    }   
}
//funcionando
template<class T>
void SCL<T>::remove(T item)
{
    Node<T>* node = search(item);
    if(isEmpty() || node == NULL || node == first)
    {
        cout << "impossível remover" << endl;
    }
    else
    {
        Node<T>* p = predecessor(node);
        p->setNext(node->getNext());
        if(p->getNext() == NULL) last = p;
        cout << "Nó com item " << node->getItem() << " removido" << endl;
        delete node;
        size--;
    }   
}
//working
template<class T>
Node<T>* SCL<T>::search(T item)
{
    Node<T>* p = first->getNext();
    while (p != NULL && p->getItem() != item)
    {
        p = p->getNext();
    }
    return p;
}

//working
template<class T>
void SCL<T>::print()
{
   Node<T> * p = first->getNext();
   while(p != NULL)
   {
       cout << p->getItem()<<"\t";
       p = p->getNext();
   }
   cout << endl;
}

//working
template<class T>
int SCL<T>::getSize()
{
    return this->size;
}

//working
template<class T>
Node<T>* SCL<T>::getNode(int index)
{
    if(index > size || index <= 0)
    {
        cout << "index not valid!" << endl;
        return NULL;
    }
    else
    {
        int i=1;
        Node<T>* p = first->getNext();
        while (i<index)
        {
            p = p->getNext();
            i++;
        }
        return p;
    }
}
   
#endif