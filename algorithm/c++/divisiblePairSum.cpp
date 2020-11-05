#include<iostream>
#include<vector>
using namespace std;

class Solution{
    int res=0;
public: 
    int divisiblePairSum(vector<int> v1 , int k){
        for(int i: v1){
            for(int j: v1){
                if(!((i+j)%k)&&(i<j)){
                    res++;
                }
            }
        }
        return res;
    }
};
 
int main() {
    Solution s;
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    cout<<s.divisiblePairSum(v,6);
    return 0;
}
