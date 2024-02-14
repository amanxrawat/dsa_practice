#include <bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> ans(n, -1);
    stack<long long> st;

    st.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        while (st.top() < arr[i])
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(arr[i]);
    }

    return ans;
}

int main()
{
    int n = 5;
    vector<long long> ans(n, -1);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}