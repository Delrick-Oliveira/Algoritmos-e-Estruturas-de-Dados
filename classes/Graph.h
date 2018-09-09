#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<iomanip>
#include "Edge.h"

typedef int Vertex;
typedef int Weight;

using namespace std;

class Graph
{
    private:
        int order, size;
        Weight **adj;
        void destroy();
    public:
        Graph(int order);
        void initialize(int order);
        //void insertEdge(Vertex v1, Vertex v2);
        void insertEdge(Vertex v1, Vertex v2, Weight weight);
        void print();    
};

Graph::Graph(int order)
{
    this->order = 0;
    this->size = 0;
    initialize(order);
}

void Graph::initialize(int order)
{
    if(this->order != 0) destroy();
    this->order = order;
    adj = new Weight *[order+1];
    for(int i = 0; i<=this->order; i++)
    {
        adj[i] = new int[order+1];
    }
    for(int i = 0; i<= this->order; i++)
    {
        for(int j = 0; j <= this->order; j++)
        {
            adj[i][j] = 0;
        }
    }
}

void Graph::insertEdge(Vertex v1, Vertex v2, Weight weight)
{
    adj[v1][v2]=weight;
    adj[v2][v1]=weight;
    size++;
}

void Graph::destroy()
{
    for (int i = 0; i <= this->order; i++)delete[] adj[i];
	delete[] adj;
	adj = 0;
}

   
void Graph::print()
{
    int k = 3;
    cout << "  ";
    for(int j = 1; j<= this->order;j++) cout << setw(k) << j;
    cout << endl;
    for(int j = 1; j<= this->order*k+3;j++) cout << "-";
    cout << endl;
    for(int i=1; i<= this->order;i++)
    {
        cout << setw(1) << i;
        cout << "|";
        for(int j = 1; j<= this-> order; j++)
        {
            cout << setw(k) << adj[i][j];
        }
        cout << endl;
    }
}

#endif