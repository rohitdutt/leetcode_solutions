#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        n -= 1;
        m -= 1;
        for (int i = nums1.size() - 1; i >= 0; i--)
        {
            if (m < 0)
            {
                nums1[i] = nums2[n];
                n--;
            }
            else if (n < 0)
            {
                nums1[i] = nums1[m];
                m--;
            }
            else if (nums1[m] >= nums2[n])
            {
                nums1[i] = nums1[m];
                m--;
            }
            else
            {
                nums1[i] = nums2[n];
                n--;
            }
        }
        for (int i : nums1)
        {
            cout << i << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums1{0};
    vector<int> nums2{1};
    s.merge(nums1, 0, nums2, 1);
    return 0;
}
