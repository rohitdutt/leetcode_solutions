#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> reverseTheArray(vector<int>& v1){
        int i=0;
        int j=v1.size()-1;
        int temp=0;
        while(i<j){
            temp = v1[i];
            v1[i] = v1[j];
            v1[j] = temp;
            i++;
            j--;
        }
        return v1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v1{1,56,4,2,7,9,6};
    s.reverseTheArray(v1);
    for(int i:v1){
        cout<<i<<endl;
    }
    return 0;
}
