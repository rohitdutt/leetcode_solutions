#include<iostream>
#include<vector>
using namespace std;

void countingSort(vector<int>& arr){
    int largest = -1;
    for(int i:arr){
        largest = max(largest, i);
    }
    vector<int> freq(largest + 1, 0);
    for(int i: arr){
        freq[i]++; 
    }
    int index = 0;
    for(int i = 0; i <= largest; i++){
        while (freq[i] > 0){
            arr[index] = i;
            freq[i]--;
            index++;
        }
        
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {15 , 100,2,78,21,1,88, 21, 56, 23};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    countingSort(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
