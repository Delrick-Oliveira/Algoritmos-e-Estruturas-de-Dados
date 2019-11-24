#ifndef EDGE_H
#define EDGE_H

using namespace std;

template<typename T, typename Vertex>

class Edge
{
    private:
        int weight;
        T key;
        Vertex target; 
    public:
        Edge();
        Edge(T key, Vertex target, int weight);
        void setWeight(int weight);
        void setKey(T key);
        void setTarget(Vertex target);
        int getWeight();
        T getKey();
        Vertex getTarget();
        void print();
};

template<typename T, typename Vertex>
Edge<T,Vertex>::Edge(){}

template<typename T, typename Vertex>
Edge<T,Vertex>::Edge(T key, Vertex target, int weight)
{
    this->weight = weight;
    this->key = key;
    this-> target = target;
}

template<typename T, typename Vertex>
void Edge<T,Vertex>::setWeight(int weight)
{
    this->weight = weight;
}

template<typename T, typename Vertex>
void Edge<T,Vertex>::setKey(T key)
{
    this->key = key;
}

template<typename T, typename Vertex>
void Edge<T,Vertex>::setTarget(Vertex target)
{
    this->target = target;
}

template<typename T, typename Vertex>
int Edge<T,Vertex>::getWeight()
{
    return this->weight;
}

template<typename T, typename Vertex>
T Edge<T,Vertex>::getKey()
{
    return this->key;
}

template<typename T, typename Vertex>
Vertex Edge<T,Vertex>::getTarget()
{
    return this->target;
}

template<typename T, typename Vertex>
void Edge<T,Vertex>::print()
{
    cout << "Edge: " << key << endl << "weight: " << weight << endl << "target: " << target << endl;
}

#endif