#ifndef TSPGREED_H
#define TSPGREED_H

#include <iostream>
#include <vector>
#include "../classes/Graph.h"
#include "../classes/Path.h"
#include "Util.h"

Path TSPGreed(Graph graph, int start)
{
    int ** adj;
    int totalweight, min;
    vector<int> visited;
    Path path;
    adj = graph.getAdj();
    min = 0;
    visited.push_back(start);
    for(int i=1; i<= graph.getSize(); i++)
    {
        
    }
}

#endif