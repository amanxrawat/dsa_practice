#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int> &nums)
{

    int noOfOperation = 0;
    unordered_map<int, int> mp;
    for (auto a : nums)
    {
        mp[a]++;
    }

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            return -1;
        }

        noOfOperation += i.second / 3 + i.second % 3;
    }
    return noOfOperation;
}

int main()
{
    return 0;
}