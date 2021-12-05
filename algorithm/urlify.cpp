#include <iostream>
#include <string>

using namespace std;

void urlify(string& s, int l) {
    int i = s.length() - 1; 
    l = l - 1;
        while(i >= 0){
        if(s[l] != ' '){
            s[i--] = s[l];
        }else{
            s[i--] = '0';
            s[i--] = '2';
            s[i--] = '%';
        }
        l--;
    }
}

int main(int argc, char const *argv[])
{
    string s = "Mr John Smith    ";
    cout<<s.length()<<endl;
    urlify(s, 13);
    cout<<s<<endl;
    return 0;
}
