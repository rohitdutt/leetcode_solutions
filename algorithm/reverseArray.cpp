#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& vec1){
    int start = 0;
    int end = vec1.size() - 1;
    while(start < end){
        swap(vec1[start] , vec1[end]);
        start++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> vec1 = {20, 45, 66, 87, 90, 64};
    for(int i = 0; i<vec1.size();i++){
        cout<<vec1[i]<<endl;
    }
    reverseArray(vec1);
    for(int i = 0; i<vec1.size();i++){
        cout<<vec1[i]<<endl;
    }
    return 0;
}
