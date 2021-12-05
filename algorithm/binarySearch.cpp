#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> vec1, int key){
    int start = 0;
    int end = vec1.size() - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(vec1[mid] == key){
            return mid;
        }else if(key < vec1[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> vec1 = {1,4,6,12,15};
    cout<<binarySearch(vec1, 100);
    return 0;
}
