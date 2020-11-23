#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
    unordered_map<int , int> um1;
    vector<int> v1;
public:
    vector<int> findDuplicates(vector<int>& nums) {
        for(int i:nums){
            if(um1[i]){
                um1.at(i) += 1;
            }else{
                um1[i]=1;
            }
        }
        for (auto const& x : um1){
            if(x.second>1){
                v1.push_back(x.first);
            }
        }
        return v1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v1{1 , 2 , 3 , 1 , 2};
    v1=s.findDuplicates(v1);
    for(int i:v1){
        cout<<i<<endl;
    }
    return 0;
}
