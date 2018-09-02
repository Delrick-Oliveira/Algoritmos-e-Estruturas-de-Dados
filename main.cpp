#include <iostream>
#include <vector>
#include <fstream>

#include "functions/search.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int number;
    fstream myfile("input.txt");
    vector<int> lista1;
    int key = 7, pos = 0;
    
    
     if (myfile.is_open())
    {
        while (myfile >> number)
        {
            lista1.push_back(number);
        }
        myfile.close();
  }

  else cout << "Unable to open file"; 
 
    
    cout << endl;
    cout << "conteúdo do vector:" <<endl; 
    
    for (vector<int>::iterator it = lista1.begin(); it != lista1.end() ; it++) 
    {
        cout << *it <<" "; // valor na posição apontada por it
    }
    cout << endl;
    
    pos = binarySearch(key,lista1, lista1.size());
    
    cout << "a posição da chave é: " << pos << endl;

    return 0;
}

