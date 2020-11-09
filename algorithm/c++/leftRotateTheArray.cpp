#include<iostream>
#include<vector>
using namespace std;

class Solution{
    vector<int> v2;
    public:
    vector<int> leftRotateTheArray(vector<int>& v1,int d){
        int i=d;
        while(i<v1.size()){
            v2.push_back(v1[i]);
            i++;
        }
        i=0;
        while (i<d){
            v2.push_back(v1[i]);
            i++;
        }
        
        return v2;
    }
};
 
int main(int argc, char const *argv[]) {
    Solution s;
    vector<int> v1{1,2,3,4,5};
    v1=s.leftRotateTheArray(v1,2);
    for(int i:v1){
        cout<<i<<endl;
    }
    return 0;
}
