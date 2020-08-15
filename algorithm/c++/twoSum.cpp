#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
    unordered_map<int,int> um1;
    int temp;
    vector<int> answer;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(um1[nums.at(i)]==nums.at(i)){
                answer.push_back(i);
            }else{
                temp=target-nums.at(i);
                cout<<"temp"<<temp<<endl;
                um1[nums.at(i)]=i;
                cout<<um1[nums.at(i)];
            }
        } 
        for(int i:answer){
            cout<<i;
        }             
        return answer;
    }
};

int main(){
    Solution s1;
    vector<int> values={2,3,5,6,7};
    values=s1.twoSum(values,9);

}