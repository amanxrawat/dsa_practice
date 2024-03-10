#include<bits/stdc++.h>
using namespace std;

bool func(string& a, string& b)
{
    return a+b > b+a;
}
class Solution{
public:
	string printLargest(int n, vector<string> &arr)
	{
	    sort(arr.begin(), arr.end(), func);
        string out;
        for (auto s : arr)
            out+=s;
        return out;
	}
};


int main(){
    vector<string> ans = {"3", "30", "34", "5", "9"};
    Solution sol;
    sol.printLargest(5,ans);
    // printLargest(5,ans);
    return 0;
}