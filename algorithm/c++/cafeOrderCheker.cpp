#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool cafeOrderChecker(vector<int> takeOutOrders, vector<int> dineInOrders, vector<int> servedOrders)
    {
        int takeOutCounter = 0;
        int dineInCounter = 0;
        int servedCounter = 0;
        if (servedOrders.size() > takeOutOrders.size() + dineInOrders.size())
        {
            return false;
        }
        while (takeOutCounter < takeOutOrders.size() && dineInCounter < dineInOrders.size())
        {
            if (takeOutOrders[takeOutCounter] == servedOrders[servedCounter])
            {
                cout << takeOutOrders[takeOutCounter] << "take " << servedOrders[servedCounter] << endl;
                takeOutCounter++;
                servedCounter++;
                cout << takeOutCounter << "take counter" << servedCounter << endl;
            }
            else if (dineInOrders[dineInCounter] == servedOrders[servedCounter])
            {
                dineInCounter++;
                servedCounter++;
                cout << dineInOrders[dineInCounter] << " dine" << servedOrders[servedCounter] << endl;
            }
            else
            {
                return false;
            }
        }
        while (takeOutCounter < takeOutOrders.size())
        {
            if (takeOutOrders[takeOutCounter] == servedOrders[servedCounter])
            {
                takeOutCounter++;
                servedCounter++;
            }
            else
            {
                return false;
            }
        }
        while (dineInCounter < dineInOrders.size())
        {
            if (dineInOrders[dineInCounter] == servedOrders[servedCounter])
            {
                dineInCounter++;
                servedCounter++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> takeOutOrders = {1, 3, 5};
    vector<int> dineInOrders = {2, 4, 6};
    vector<int> servedOrders = {1, 2, 4, 6, 5, 3};
    cout << s.cafeOrderChecker(takeOutOrders, dineInOrders, servedOrders) << endl;
    return 0;
}
