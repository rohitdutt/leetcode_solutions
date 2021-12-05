#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr){
    for(int i = 1; i <= arr.size() - 1; i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        } 
        arr[prev + 1] = current;
    }
}

int main(int argc, char const *argv[]){
    vector<int> arr{-1, 3, 4, 1, 20, -9, 4};
    for(auto& i:arr){
        cout<< i << " , ";
    }
    cout<<endl;
    insertionSort(arr);
    for(auto& i:arr){
        cout<< i << " , ";
    }
    return 0;
}
