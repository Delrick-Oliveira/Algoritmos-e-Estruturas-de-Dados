#include <iostream>
#include <vector>
#include <fstream>

#include "classes/SCL.h"

using namespace std;

int main(int argc, const char * argv[])
{
    SCL<int> lista;
    lista.insert(1);
    lista.insert(2);
    lista.insert(3);
    lista.print();
}

