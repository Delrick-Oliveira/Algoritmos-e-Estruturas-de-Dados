#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include "Edge.h"

typedef int Vertex;

template<class EdgeKey>
class Graph
{
    private:
        int order, size;
        list<Edge<EdgeKey,Vertex>>* adj;
        void destroy();
    public:
        Graph(int);
        void initialize(int order);
        void insertEdge(Vertex v1, Vertex v2);
        void insertEdge(Vertex v1, Vertex v2, int weight);
        void print();
};

template<class EdgeKey>
Graph<EdgeKey>::Graph(int order)
{
    initialize(order);
}

template<class EdgeKey>
void Graph<EdgeKey>::initialize(int order)
{
    if(this->order!=0) destroy();
    this->order = order;
    adj = new list<Edge<EdgeKey, Vertex>>[order+1];
    size = 0;
}

template<class EdgeKey>
void Graph<EdgeKey>::insertEdge(Vertex v1, Vertex v2)
{
    Edge e;
    e.setTarget(v2);
    adj[v1].push_back(e);
    e.setTarget(v1);
    adj[v2].push_back(e);
    size++;
}

template<class EdgeKey>
void Graph<EdgeKey>::insertEdge(Vertex v1, Vertex v2, int weight)
{
    Edge e;
    e.setTarget(v2);
    e.setWeight(weight);
    adj[v1].push_back(e);
    e.setTarget(v1);
    adj[v2].push_back(e);
    size++;
}


template<class EdgeKey>
void Graph<EdgeKey>::print()
{
       
}

#endif