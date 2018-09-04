#include <iostream>
#include <vector>
#include <fstream>

#include "classes/Edge.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Edge<int,int> aresta1(1,10,2);
    aresta1.print();
    aresta1.setKey(15);
    aresta1.print();
}

