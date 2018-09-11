#ifndef PATH_H
#define PATH_H
#include<iostream>
#include<vector>

using namespace std;

class Path
{
    private:
        int totalweight;
        vector<int> path;
    public:
        Path();
        Path(int totalweight, vector<int> path);
        int getTotalWeight();
        vector<int> getPath();
        void setTotalWeight(int totalweight);
        void setPath(vector<int>);
        void addPath(int vertex);
        void addWeight(int weight);
        void print();
};


Path::Path(){}


Path::Path(int totalweight, vector<int> path)
{
    this->totalweight = totalweight;
    this->path = path;
}


int Path::getTotalWeight()
{
    return this->totalweight;
}

vector<int> Path::getPath()
{
    return this->path;
}

void Path::setTotalWeight(int totalweight)
{
    this->totalweight = totalweight;
}

void Path::setPath(vector<int> path)
{
    this->path = path;
}

void Path::addWeight(int weight)
{
    totalweight+=weight;
}

void Path::addPath(int vertex)
{
    path.push_back(vertex);
}

void Path::print()
{
    cout << "totalweight: " << totalweight << endl;
    cout << "Path: " << path[0];
    for(int i = 1; i<path.size(); i++)
    {
        cout << " -> " << path[i];
    }
    cout <<endl;
}

#endif