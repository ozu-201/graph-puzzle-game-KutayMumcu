//
// Created by km029333 on 12/21/2023.
//
#include "Edge.cpp"
#include <string>
using namespace std;

class EdgeList{
public:
    Edge* head;
    EdgeList(){
        this->head = nullptr;
    }

    void addEdge(string& word){
        Edge* newEdge = new Edge(word);
        newEdge->next = head;
        head = newEdge;
    }
};