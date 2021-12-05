#include<iostream>
#include<stack>
#include<string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        for(char i:s){
            if(i != '#'){
                s1.push(i);
            }else if(!s1.empty()){
                s1.pop();
            }
        }
        stack<char> s2;
        for(char i:t){
            if(i != '#'){
                s2.push(i);
            }else if(!s2.empty()){
                s2.pop();
            }
        }
        while(!s1.empty()){
            if(s2.empty() || s2.top() != s1.top()){
                return false;
            }
            s1.pop();
            s2.pop();
        }
        
        return s1.empty() && s2.empty();
    }
};