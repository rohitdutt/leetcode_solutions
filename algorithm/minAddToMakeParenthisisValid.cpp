//cpp program
#include <iostream> 
#include <string>
#include <stack>

using namespace std;

// int minAddToMakeValid(string s){
//     stack<char> st;
//     for(char c: s){
//         if(c == '('){
//             st.push(c);
//         }else if(c == ')' && !st.empty() && st.top() == '('){
//             st.pop();
//         }else{
//             st.push(c);
//         }
//     }
//     return st.size();
// }

int minAddToMakeValid(string s){
    int open = 0;
    int count = 0;
    for(char c:s){
        cout<<c<<endl;
        if(c == '('){
            open++;
        }else if(c == ')' && open > 0){
            open--;
        }else{
            count++;
        }
    }
    return open + count;
}

int main(int argc, char const *argv[]){
    string s = "()))((";
    cout<<minAddToMakeValid(s)<<endl;
    return 0;
}
