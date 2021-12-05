#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr){
    for(int i = 0; i <= arr.size() - 2; i++){
        int current = arr[i];
        int min_pos = i;
        for(int j = i; j < arr.size(); j++){
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        swap(arr[i], arr[min_pos]);
    }
}

int main(int argc, char const *argv[]){
    vector<int> arr{-1, 3, 4, 1, 20, -9, 4};
    for(auto& i:arr){
        cout<< i << " , ";
    }
    cout<<endl;
    selectionSort(arr);
    for(auto& i:arr){
        cout<< i << " , ";
    }
    return 0;
}
