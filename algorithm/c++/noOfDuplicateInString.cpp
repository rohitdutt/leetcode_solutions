#include<iostream>
#include<unordered_map>
using namespace std;

class Solution{
    unordered_map<char,int> um1;
    unordered_map<char , int>::iterator it;
    public:
    void noOfDuplicateInString(string s){
        for(char c:s){
            if(um1[c]){
                um1.at(c) += 1;
            }else{
                um1[c]=1;
            }
        }
        for (auto const& x : um1){
            if(x.second>1){
                cout<<x.first << " came "<<x.second<<" times"<<endl;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    s.noOfDuplicateInString("  ");
    return 0;
}
