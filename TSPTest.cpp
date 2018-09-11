#include <bits/stdc++.h>
#include <iostream>
#include "classes/Path.h"
#include "classes/Graph.h"
#include "functions/TSP.h"

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
    path = TSPBruteForce(graph, 1);
    //--------------------------------------//
    /*int start = 1;
    vector<int> vertex;
    path.setTotalWeight(INT_MAX); 
    int **adj;
    adj = graph.getAdj();
    
    for(int i=1; i <= graph.getOrder(); i++)
    {
        if(i!=start) vertex.push_back(i);
    }
    
    do
    {
        int currentWeight = 0;
        int currentVertex = start;
        for(int i = 0; i<vertex.size(); i++)
        {
            currentWeight += adj[currentVertex][vertex[i]];
            currentVertex = vertex[i];
        }
        currentWeight += adj[currentVertex][start];
        
        if (currentWeight < path.getTotalWeight())
        {
            path.setTotalWeight(currentWeight);
            vertex.push_front(start);
            vertex.push_back(start);
            path.setPath(vertex);
        }
    } while (next_permutation(vertex.begin(), vertex.end()));*/
    
    path.print();
    
    return 0;
}
