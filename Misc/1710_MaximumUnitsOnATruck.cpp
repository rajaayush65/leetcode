#include <bits/stdc++.h>
using namespace std;

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](auto &a, auto &b)
             { return b[1] < a[1]; });
        int maxUnit = 0;
        for (auto it : boxTypes)
        {
            int count = min(it[0], truckSize);
            maxUnit += count * it[1];
            truckSize -= count;
            if (!truckSize)
                return maxUnit;
        }
        return maxUnit;
    }
};

int main()
{
    fast_cin();
    Solution s;
    vector<vector<int>> v = {{5, 10}, {2, 5}, {4, 7}, {3, 9}};
    int truckSize = 10;
    cout << s.maximumUnits(v, truckSize);
    return 0;
}