#include<iostream>
using namespace std;

class Solution{
    public:
    bool isPalindrome(string s){
        int i=0;
        int j=s.size()-1;
        while (i<=j)
        {
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.isPalindrome("ro");
    return 0;
}
