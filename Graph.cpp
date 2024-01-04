//
// Created by km029333 on 12/21/2023.
//
#include <iostream>
#include "EdgeList.cpp"
#include <string>
#include <queue>
#include <stack>
using namespace std;

class Graph{
public:
    int size;
    EdgeList* edges;
    string* words;

    Graph(int size){
        this->size = size;
        edges = new EdgeList[size];
        words = new string[size];
    }

    int findWordIndex(string& word){
        for (int i = 0; i < size; ++i) {
            if(words[i] == word){
                return i;
            }
        }
        return -1;
    }

    void addEdge(string& word1, string& word2){
        if(findWordIndex(word1) != -1 && findWordIndex(word2) != -1){
            edges[findWordIndex(word1)].addEdge(word2);
            edges[findWordIndex(word2)].addEdge(word1);
        }
    }

    void BFS(string& start, string& target){

        if (start == target){
            cout << start << endl;
            return;
        }

        bool* visited = new bool[size]();
        int* prev = new int[size]();
        fill_n(prev,size,-1);
        Queue queue = new Queue();

        while (!queue.isEmpty()){

        }

    }

    ~Graph(){
        delete[] edges;
        delete[] words;
    }
};