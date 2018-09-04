#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
    private:
        T item;
        Node* next;
    public:
        Node();
        Node(T item);
        T getItem();
        void setItem(T item);
        Node* getNext();
        void setNext(Node* node);
};

template<class T>
Node<T> :: Node()
{
    this->next = NULL;    
}

template<class T>
Node<T>::Node(T item)
{
    this->item = item;
    this->next = NULL;    
}

template<class T>
T Node<T>::getItem()
{
    return this->item;    
}

template<class T>
void Node<T>::setItem(T item)
{
    this->item = item;    
}

template<class T>
Node<T>* Node<T>::getNext()
{
    return this->next;    
}

template<class T>
void Node<T>::setNext(Node<T>* node)
{
    this->next = node;
}




#endif