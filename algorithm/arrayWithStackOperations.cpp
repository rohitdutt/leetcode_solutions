//import vector and string
#include <vector>
#include <string>
#include<iostream>

using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> result;
    int count = 0;
    for(int i=1; i<=n && count<target.size() ; i++){
        result.push_back("Push");
        if(i == target[count]){
            count++;
        }else{
            result.push_back("Pop");
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
