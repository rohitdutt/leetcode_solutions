#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    int i = 0, j = 1;
    for(j; j < nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 2, 2, 3, 3};
    cout<<removeDuplicates(nums);
    return 0;
}
