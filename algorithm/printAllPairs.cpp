#include<iostream>
#include<vector>
using namespace std;

void printAllPairs(vector<int>& vec1){
    for (int i = 0; i < vec1.size(); i++){
        int x = vec1[i];
        for (int j = i+1; j < vec1.size(); j++){
            int y = vec1[j]; 
            cout<<x<<" , "<<y<<endl;
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[]){
    vector<int> vec1 = {1, 5, 789, 45};
    printAllPairs(vec1);
    return 0;
}
