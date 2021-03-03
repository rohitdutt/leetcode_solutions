#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
    int start, end;

public:
    string reverseWordsInString(string s)
    {
        if (s.empty())
        {
            return s;
        }
        if (s[0] == ' ')
        {
            s.erase(s.begin());
        }
        if (s.at(s.size() - 1) == ' ')
        {
            s.pop_back();
        }
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
            {
                start = i;
            }
            if (s[i] == ' ')
            {
                end = i;
                reverse(s.begin() + start, s.begin() + end);
                start = i + 1;
            }
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};

int main(int argc, char const *argv[])
{
    string s = "cake pound steal";
    Solution solution;
    cout << solution.reverseWordsInString(s);
    return 0;
}
