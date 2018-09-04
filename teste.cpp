#include <iostream>
#include <vector>
#include <fstream>

#include "classes/SCL.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int i;
    SCL<int> lista;
    lista.insert(1);
    lista.insert(2);
    lista.insert(3);
    Node<int>* node;
    lista.print();
    lista.remove(2);
    lista.print();
    cout << lista.getSize() << endl;
    node = lista.getNode(2);
    cout << "item obtido:" << node->getItem() << endl;
}

