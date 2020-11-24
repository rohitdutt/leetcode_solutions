#include<iostream>
#include<stack>
using namespace std;

class Solution{
    stack<int> s1,s2;
    public:
    void push(int a){
        s1.push(a);
        if(s2.empty()){
            s2.push(a);
        }else if(a<=s2.top()){
            s2.push(a);
        }
    }

    bool isEmpty(){
        return s1.empty();
    }

    bool isFull(int n){
        if(s1.size()>=n){
            return true;
        }else{
            return false;
        }
    }

    int pop(){
        if(s1.top()==s2.top()){
            s2.pop();
        }
        int top = s1.top();
        s1.pop();
        return top;
    }

    int getMin(){
        return s2.top();
    }

};

int main(int argc, char const *argv[])
{
    Solution s;
    return 0;
}
