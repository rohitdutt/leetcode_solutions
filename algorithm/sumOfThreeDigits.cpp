//its program to find the sum of three digits

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sumOfThreeDigits(vector<int>& nums, int target) {
    //initailaize the vector of size 3 with -1
    vector<int> result(3,-1);

    //sorting the vector
    sort(nums.begin(), nums.end());

    //iterate through the vector
    for(int i = 0; i < nums.size(); i++){
        /* subtract the current number from the target 
        and store it in a variable which will be the 
        target value for the other two numbers*/
        int targetForTwo = target - nums[i];
        //take two pointers to the left and right
        int left = i + 1;
        int right = nums.size() - 1;
        //while the left pointer is less than the right pointer
        while(left < right){
            //if the sum of the two numbers(numbers at left and right index) is equal to the target
            if(nums[left] + nums[right] == targetForTwo){
                /* store the numbers at the i'th , left and right 
                index  in the result vector and return the result vector
                */
                result[0] = nums[i];
                result[1] = nums[left];
                result[2] = nums[right];
                return result;
            }
            //if the sum of the two numbers(numbers at left and right index) is greater than the target
            else if(nums[left] + nums[right] > targetForTwo){
                //decrement the right pointer
                right--;
            }
            //if the sum of the two numbers(numbers at left and right index) is less than the target
            else{
                //increment the left pointer
                left++;
            }
        }
    }
    /* return the result vector if the loop is not 
    broken by the return statement which means 
    we did not find 3 numbers that add up to the target */ 
    return result;
}

//c++ main function
int main() {
    vector<int> nums = {2, 7, 11, -15 , 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, -14, -15};
    int target = -44;
    vector<int> result = sumOfThreeDigits(nums, target);
    cout << result[0] << " " << result[1] <<" "<< result[2] << endl;
    return 0;
}


