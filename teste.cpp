#include <iostream>
#include <vector>
#include <fstream>

#include "classes/Graph.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Graph grafo(4);
    grafo.insertEdge(1,2,10);
    grafo.insertEdge(1,4,20);
    grafo.insertEdge(1,3,15);
    grafo.insertEdge(2,4,25);
    grafo.insertEdge(2,3,35);
    grafo.insertEdge(3,4,30);
    grafo.print();
    return 0;
}

