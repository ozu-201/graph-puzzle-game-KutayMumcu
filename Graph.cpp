//
// Created by km029333 on 12/21/2023.
//
#include "EdgeList.cpp"
using namespace std;

class Graph{
public:
    int size;
    EdgeList* edges;
    string* words;

    Graph(int size){
        this->size = size;
        edges = new EdgeList();
        words = new string[size];
    }

    EdgeList* getEdges(){
        return this->edges;
    }

    string* getWords(){
        return this->words;
    }
};