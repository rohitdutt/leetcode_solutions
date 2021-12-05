#include<iostream>
#include<string>
#include <vector>
#include<unordered_map>

using namespace std;

int oneAway(string s1, string s2) {
    vector<int> v1(128,0);
    int count = 0;
    if(s1.length() == s2.length()){
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i]){
                count++;
            }
        }
    }else{
        int i = 0 , j = 0;
        while(i < s1.length()){
            if(s1[i] != s2[j]){
                count++;
                i++;
            }else{
                i++;
                j++;
            }
        }
        
    }
    return count <= 1;
}

int main(int argc, char const *argv[]){
    cout<<oneAway("Pale", "Blle")<<endl;
    return 0;
}
