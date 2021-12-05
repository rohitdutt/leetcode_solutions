#include<iostream>
#include<vector>
#include<string>

using namespace std;

int compress(vector<char>& chars) {
    int index = 0;
    int i = 0;
    while(i < chars.size()){
        int j = i;
        while(j < chars.size() && chars[j] == chars[i]){
            j++;
        }
        chars[index] = chars[i];
        index++;
        if(j - i > 1){
            string temp = to_string(j - i);
            for(char x:temp){
                chars[index] = x;
                index++;
            }
        }
        i = j;
    }
    return index;
}

int main(int argc, char const *argv[])
{
    vector<char> chars = {'a','a', 'b', 'b' , 'b'};
    int i = compress(chars);
    for(int j = 0; j < i; j++){
        cout<<chars[j]<<endl;
    }
    return 0;
}
