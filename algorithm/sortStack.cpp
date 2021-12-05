//cpp program
#include <iostream>
#include <stack>
using namespace std;

stack<int> sortStack(stack<int> s)
{
    stack<int> tempStack;
    while(!s.empty()){
        int x = s.top();
        s.pop();
        while(!tempStack.empty() && tempStack.top() < x){
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(x);
    }
    
    return tempStack;
}

int main(int argc, char const *argv[]){
    stack<int> s;
    s.push(5);
    s.push(30);
    s.push(1);
    s.push(4);
    s.push(2);
    s = sortStack(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

