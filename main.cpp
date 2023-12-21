//
// Created by km029333 on 12/21/2023.
//
#include <iostream>
using namespace std;
#include "fstream"
#include "Graph.cpp"

bool onlyOneLetterDifferent(string word1, string word2){
    int count = 0;
    for (int i = 0; i < word1.size() - 1; i++) {
        if (word1[i] != word2[i]){
            if (++count > 1){
                return false;
            }
        }
    }
    return count == 1;
}

int main() {
    ifstream file("C:\\Users\\TEMP\\Downloads\\english-dictionary.txt");

    if (!file.is_open()){
        cout << "file couldn't initialize" << endl;
    }

}
