#include <iostream>
#include <vector>
#include <fstream>

// #define NIL -1;
#include "functions/sequentialSearch.h"

using namespace std;

/*template<class Type1, class Type2>
int sequentialSearch(Type1 key, vector<Type2> list, int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        if(key==list[i])
        {
            return i;
        }
    }
    return NIL;
}*/



int main(int argc, const char * argv[])
{
    int number;
    fstream myfile("input.txt");
    vector<int> lista1;
    int key, pos;
    key = 7;
    
    
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
    
    pos = sequentialSearch(key,lista1, lista1.size());
    
    cout << "a posição da chave é: " << pos << endl;

    return 0;
}

