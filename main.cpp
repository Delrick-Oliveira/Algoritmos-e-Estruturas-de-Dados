#include <iostream>
#include <vector>
#include <fstream>
#include <iostream>
/*#include "functions/sequentialSearch.h"*/

using namespace std;

int main(int argc, const char * argv[])
{
    string line;
    fstream myfile("input.txt");
    // vector<int> lista1;
    //int i, x;
     if (myfile.is_open())
  {
    while ( istream::get(myfile,line) )
    {
        cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
    
   /* for(i=0;i<10;i++)
    {
        cin >> x;
        lista1.push_back(x);
    }
    
    cout << endl;
    cout << "conteúdo do vector v1 : \n"; 
    
    for (vector<int>::iterator it = lista1.begin(); it != lista1.end() ; it++) 
    {
        cout << *it <<" "; // valor na posição apontada por it
    }
    cout << endl;*/

        /*Person anil;
        anil.whatYouGot();*/
    return 0;
}

