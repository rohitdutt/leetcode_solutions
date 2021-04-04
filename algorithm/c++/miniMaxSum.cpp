#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void miniMaxSum(vector<int> arr)
    {
        long min = 0;
        long max = 0;
        long minSum = 0;
        long maxSum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i == 0)
            {
                min = arr[i];
                max = arr[i];
            }
            else
            {
                if (arr[i] > max)
                {
                    minSum += max;
                    max = arr[i];
                }
                else
                {
                    minSum += arr[i];
                }

                if (arr[i] < min)
                {
                    maxSum += min;
                    min = arr[i];
                }
                else
                {
                    maxSum += arr[i];
                }
            }
        }
        cout << minSum << " " << maxSum << endl;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v1{1, 2, 3, 4, 5};
    s.miniMaxSum(v1);
    return 0;
}
