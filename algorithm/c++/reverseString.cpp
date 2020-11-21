#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    string reverseTheArray(string& s){
        int i=0;
        int j=s.size()-1;
        int temp=0;
        //using 2pointers
        while(i<j){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;

    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    string s1="Rohitdutt";
    s.reverseTheArray(s1);
    for(char i:s1){
        cout<<i<<endl;
    }
    return 0;
}
