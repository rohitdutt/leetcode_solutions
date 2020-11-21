#include<iostream>
#include<tuple>
#include<vector>
using namespace std;

class Solution{
    vector<int> v;
    public:
    vector<int> maxAndMinInArray(vector<int> v1){
        for(int i=0;i<v1.size();i++){
            if(i==0){
                v.push_back(v1[i]);
                v.push_back(v1[i]);
            }
            if(v1[i]<v[0]){
                v[0]=v1[i];
            }
            if(v1[i]>v[1]){
                v[1]=v1[i];
            }
        }
        return v;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v{5,7,4,77,1,6,9};
    vector<int> ans;
    ans = s.maxAndMinInArray(v);
    cout<<"Min -> "<<ans[0];
    cout<<"Max -> "<<ans[1];
    return 0;
}
