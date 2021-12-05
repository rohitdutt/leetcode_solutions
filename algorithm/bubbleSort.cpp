#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr){
    for(int times = 1; times <= arr.size() - 1; times++){
        for(int j = 0; j <= arr.size() - times -1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        } 
    }
}

int main(int argc, char const *argv[]){
    vector<int> arr{-1, 3, 4, 1, 20, -9, 4};
    for(auto& i:arr){
        cout<< i << " , ";
    }
    cout<<endl;
    bubbleSort(arr);
    for(auto& i:arr){
        cout<< i << " , ";
    }
    return 0;
}
