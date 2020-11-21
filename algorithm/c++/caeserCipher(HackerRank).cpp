#include<iostream>
using namespace std;

class Solution{
    string cipheredString;
    public:
    string cipherText(int n,string s,int k){
        for(char i:s){
            cipheredString.push_back((char)((int)i+k));
        }
        return cipheredString;
    }
};

 
int main(int argc, char const *argv[]) {
    Solution s;
    int n,k;
    string uncipheredString;
    cin>>n;
    cin>>uncipheredString;
    cin>>k;
    cout<<s.cipherText(n,uncipheredString,k);
    return 0;
}
