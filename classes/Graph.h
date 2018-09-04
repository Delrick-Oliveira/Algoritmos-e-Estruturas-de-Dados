#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include "Edge.h"

typedef int Vertex;

template<class EdgeK, VertexK>
class Graph
{
    private:
        int order, size;
        list<Edge<EdgeT,VertexT>* adj;
        void destroy();
    public:
        Graph(int);
        void initialize(int order);
        void insertEdge(Edge, Edge);
        void print();
};

template<class Edge>
void Graph<Edge>::Graph(int order)
{
    initialize(order);
}

template<class Edge>
void Graph<Edge>::initialize(int order)
{
    if(this->order!=0) destroy();
    this->order = order;
    adj = new list<Edge>[order+1];
    size = 0;
}

template<class Edge>
void Graph<Edge>::insertEdge(Vertex v1, Vertex v2)
{
    adj[v1].insert(v2);
}

template<class Edge>
void Graph<Edge>::Graph(int order)
{
    initialize(order);
}

#endif