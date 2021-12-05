#include<iostream>
#include<string>
#include <algorithm>
#include<unordered_map>

using namespace std;

bool palindromePermutation(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    unordered_map<char, int> um1;
    for(char i:s){
        if(um1.find(i) == um1.end()){
            um1[i] = 1;
        }else{
            um1[i] += 1;
        }
    }
    int count = 0;
    for(auto i:um1){
        if(i.first != ' ')
            count += i.second % 2;
    }
    return count <= 1;
}

int main(int argc, char const *argv[]){
    cout<<palindromePermutation("aab")<<endl;
    return 0;
}
