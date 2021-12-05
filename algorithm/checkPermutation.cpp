#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

// check if 2 strings are permuation of each other

bool checkPermutation(string s1, string s2){
    unordered_map<char,int> um1;
    if(s1.length() != s2.length()){
        return false;
    }
    for(char i:s1){
        if(um1.find(i) != um1.end()){
            um1[i] = um1[i] + 1; 
        }else{
            um1[i] = 1;
        }
    }
    for(char i:s2){
        um1[i] = um1[i] - 1;
    }
    for(auto& i:um1){
        if(i.second != 0){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[]){
    cout<<checkPermutation("hllo","llho");
    return 0;
}
