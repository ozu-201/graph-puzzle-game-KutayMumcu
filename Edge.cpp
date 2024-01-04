//
// Created by km029333 on 12/21/2023.
//

#include <string>
using namespace std;

class Edge{
public:
    string word;
    Edge* next;

    Edge(string& s){
        this->next = nullptr;
        this->word = s;
    }
};