#include<iostream>
#include<string>
#include<stack>
using namespace std;
// Input = "G()(al)"
// Output: "Goal"

// Explanation :
// G -> G
// () -> o
// (al) -> al

// The final concatenated result is "Goal".

// Example 2:

// Input = "G()()()()(al)"
// Output: "Gooooal"

string completeString(string input){
    string result;
    for(int i = 0; i < input.length() - 1; i++){
        if(input[i] == '(' && input[i+1] == ')'){
            result += 'o';
        }else if(input[i] != '(' && input[i] != ')'){
            result += input[i];
        }
    }
    return result;
}

int main(int argc, char const *argv[]){
    cout<<completeString("G()(al)")<<endl;
    return 0;
}
