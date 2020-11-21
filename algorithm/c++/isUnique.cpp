#include<iostream>
#include<functional>
#include<vector>
using namespace std;

class Solution{
    int a[128] = {0}; 
    public:
    bool isUnique(string s){
        hash<char> hash_of_char;
        for(char c:s){
            if(a[(int)c]==1){
                return false;
            }else{
                a[(int)c]=1;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.isUnique("afghk2#0(a");
    return 0;
}
