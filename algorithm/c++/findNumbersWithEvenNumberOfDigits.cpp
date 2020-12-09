#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int answer = 0;
        int count = 0;
        for (auto &i : nums)
        {
            while (i != 0)
            {
                i /= 10;
                count++;
            }
            if (count % 2 == 0)
            {
                answer++;
            }
            count = 0;
        }
        return answer;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v1{1, 6685, 55, 6, 4, 55, 5, 556, 6, 55, 4, 55, 5, 22, 5, 5, 6, 236, 5, 41, 2, 5, 5};
    cout << s.findNumbers(v1) << endl;
    return 0;
}
