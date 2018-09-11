#include <iostream>
#include <vector>
#include <fstream>
#include "classes/Graph.h"
#include "classes/Path.h"
#include "functions/TSPGreed.h"


using namespace std;

int main(int argc, const char * argv[])
{
    Graph graph(4);
    Path path;
    graph.insertEdge(1,2,10);
    graph.insertEdge(1,3,15);
    graph.insertEdge(1,4,20);
    graph.insertEdge(2,3,35);
    graph.insertEdge(2,4,25);
    graph.insertEdge(3,4,30);
    
    path = TSPGreed(graph, 1);
    path.print();
    
   return 0; 
}

    