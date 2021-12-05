#include<iostream>
#include<vector>
using namespace std;

void printSubArrays(vector<int>& vec1){
    for (int i = 0; i < vec1.size(); i++){
        for (int j = i; j < vec1.size(); j++){
            for(int k = i; k <= j; k++){
                cout<<vec1[k]<<", ";
            }     
            cout<<endl;  
        }
    }
}

int main(int argc, char const *argv[]){
    vector<int> vec1 = {1, 5, 789, 45};
    printSubArrays(vec1);
    return 0;
}
