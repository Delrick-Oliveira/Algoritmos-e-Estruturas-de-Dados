#ifndef SCL_H
#define SCL_H
#include<iostream>
#include "Node.h"

//simple chained list ENG
//lista simplesmente encadeada

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
        Node<T>* Search(T item);
        T remove(Node<T>* node);
        void print();
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
    while(p.getNext() != node)
    {
        p = p.getNext();
    }
    return p;
}

template<class T>
T SCL<T>::remove(Node<T>* node)
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
        cout << "Nó com item " << node.getItem() << " removido" << endl;
        delete node;
        size--;
    }   
}

template<class T>
Node<T>* SCL<T>::Search(T item)
{
    Node<T>* p = first->getNext();
    while (p != NULL && p->getItem != item)
    {
        p = p.getNext();
    }
    return p;
}


template<class T>
void SCL<T>::print()
{
   Node<T> * p = first->getNext();
   while(p != NULL)
   {
       cout << p->getItem()<<"\t";
       p = p->getNext();
   }
}

#endif