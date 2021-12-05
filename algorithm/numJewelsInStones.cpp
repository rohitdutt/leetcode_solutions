#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_map<char, bool> um1;
    int count = 0;
    for(char i:jewels){
        um1[i] = true;
    }
    for(char i:stones){
        if(um1[i]){
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]){
    string jewels = "widh";
    string stones = "hiJipoasp";
    cout<< numJewelsInStones(jewels, stones);
    return 0;
}
