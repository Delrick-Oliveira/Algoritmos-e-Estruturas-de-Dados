#ifndef TSPGREED_H
#define TSPGREED_H

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

#endif