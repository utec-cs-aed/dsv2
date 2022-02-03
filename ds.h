#ifndef DS_H
#define DS_H

#include <vector>
using namespace std;

template <typename T>
class DisjoinSet // interface
{
public:
    /*
    * x, y are indexes
    */ 
   
    virtual  ~DisjoinSet();

    //MakseSet the element with index x
    virtual void MakeSet(int x) = 0;    
    //Find the root of x (with optimization by rank)
    virtual int Find(int x) = 0;
    //Find the root of x (with optimization path compression)
    virtual int FindPathCompression(int x) = 0;
    //Union two sets represented by x and y (apply rank)
    virtual void Union(int x, int y) = 0;
    
    //check whether there is a path between x and y
    virtual bool isConnected(int x, int y) = 0;
    //total number of elements
    virtual int size() = 0; 
    //number of sets
    virtual int sets() = 0; 
    //total number of elements that belong to the set of x
    virtual int size(int x) = 0; //Complejidad?
    //add the element to the set of x
    virtual void add(T element, int x);
    //return all elements that belong to the set of x
    virtual vector<T> getElementsSet(int x);//Complejidad?
};

#endif