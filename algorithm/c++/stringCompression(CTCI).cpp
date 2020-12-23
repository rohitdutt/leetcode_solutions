#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string stringCompression(string str)
    {
        string result;
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            count++;
            if (str[i] != str[i + 1])
            {
                result = result + str[i] + to_string(count);
                count = 0;
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.stringCompression("aabbccc");
    return 0;
}
