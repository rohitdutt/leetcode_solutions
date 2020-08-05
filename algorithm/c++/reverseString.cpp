#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    vector<char>& reverseString(vector<char>& s){
        char temp;
        if(s.empty()){
            return 0;
        }
        for(int i=0;i<=s.size()/2;i++){
            temp=s[i];
            s[i]=s[(s.size()-i)-1];
            s[(s.size()-i)-1]=temp;
        }
        return s;
    }
};
 
int main(){
        Solution s1;
        vector<char> cha;
        cha=s1.reverseString(cha);
        for (char c:cha){
            cout<<c;
        }
        
        return 0;
}
