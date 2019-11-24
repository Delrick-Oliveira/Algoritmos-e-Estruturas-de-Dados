#include <iostream>
#include <vector>
#include <fstream>
#include "classes/Graph.h"
#include "classes/Path.h"
//#include "functions/TSPGreed.h"


using namespace std;

int main(int argc, const char * argv[])
{
    int a;
    No<int> no(4);
    Item<string> item, item2;
    item.setAtrib("Delrick"); 
    No<Item<string>> no2(item);
    item2 = no2.getItem();
    item2.show();
}

    