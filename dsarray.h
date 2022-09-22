#ifndef DSARRAY_H
#define DSARRAY_H

template <typename T>
class DisjoinSetArray
{
private:
    // define the structures
public:
    // implement all functions
    DisjoinSetArray(vector<T> data);  
    ~DisjoinSet();   
    /*
    * x, y are indexes
    */ 
    //MakseSet the element with index x
    void MakeSet(int x) = 0;    
    //Find the root of x (with optimization by rank)
    int Find(int x) = 0;
    //Find the root of x (with optimization path compression)
    int FindPathCompression(int x) = 0;
    //Union two sets represented by x and y (apply rank)
    void Union(int x, int y) = 0;
    
    //check whether there is a path between x and y
    bool isConnected(int x, int y) = 0;
    //total number of elements
    int size() = 0; 
    //number of sets
    int sets() = 0; 
    //total number of elements that belong to the set of x
    int size(int x) = 0; //Complejidad?
    //add the element to the set of x
    void add(T element, int x);
    //return all elements that belong to the set of x
    vector<T> getElementsSet(int x);//Complejidad?
};

#endif