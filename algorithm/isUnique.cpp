#include<iostream>
#include<string>
#include<vector>
using namespace std;

int isUnique(string s){
    vector<bool> v1( 128, false);
    for(char i:s){
        int temp = (int)i;
        if(v1[temp] == true){
            return false;
        }
        v1[temp] = true;
    }
    return true;
}

int main(int argc, char const *argv[]){
    cout<<isUnique("arwd");
    return 0;
}
