#ifndef TSP_H
#define TSP_H

#include <vector>
#include "../classes/Graph.h"
#include "../classes/Path.h"
#include "Util.h"
#include <bits/stdc++.h>

using namespace std;

Path TSPGreed(Graph graph, int start)
{
    int ** adj;
    int totalweight, min, vertex, nextVertex;
    Path path;
    
    adj = graph.getAdj();
    vertex = start;
    path.addToPath(start);
   
    
    while(path.getSize() < graph.getOrder())
    {
        min = INT_MAX;
        for(int i=1; i<= graph.getOrder(); i++)
        {
            if (!isInList(i, path.getPath()))
            {
                if (adj[vertex][i] < min)
                {
                    min = adj[vertex][i];
                    nextVertex = i;
                }
            }
        }
        vertex = nextVertex;
        path.addToPath(vertex);
        path.addWeight(min); 
    }
   path.addToPath(start);
   path.addWeight(adj[vertex][start]);
   return path;
}

Path TSPBruteForce(Graph graph, int start)
{
    Path path;
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
            path.setPath(vertex);
        }
    } while (next_permutation(vertex.begin(), vertex.end()));
    
    vertex = path.getPath();
    vertex.push_back(start);
    vertex.insert(vertex.begin(), 1);
    path.setPath(vertex);
    return path;
}

#endif