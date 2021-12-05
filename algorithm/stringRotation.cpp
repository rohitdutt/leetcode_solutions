#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

bool stringRotation(string s1, string s2) {
    if(s1.length() != s2.length()) return false;

    s1 += s1;
    
    cout<<s1.find(s2)<<endl;

    if(s1.find(s2) != string::npos) return true;

    return false;
}

int main(int argc, char const *argv[]){
    cout<<stringRotation("waterbottle","boptlewater")<<endl;
    return 0;
}
