#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void bitwiseAND(int n,int k){
        cout<<n&k;
    }
};

int main(){
    Solution s;
    s.bitwiseAND(6,9);
    return 0;
}