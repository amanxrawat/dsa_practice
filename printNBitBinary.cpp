//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    void solve(int n, string tempAns, vector<string> &ans, int one, int zero) {
    if (n == 0) {
        if (one >= zero) {
            ans.push_back(tempAns);
        }
        return;
    }
    
    int countO = 0;
    int countZ =0;
    for(int i = 0 ; i<tempAns.size() ;i++){
        
        if(tempAns[i]=='1')countO++;
        else{
            countZ++;
        }
        if(countZ>countO)return;
    }

    n--;

    string tempPlusOne = tempAns + '1';
    solve(n, tempPlusOne, ans, one + 1, zero);

    string tempPlusZero = tempAns + '0';
    solve(n, tempPlusZero, ans, one, zero + 1);

    return;
}

vector<string> NBitBinary(int n) {
    string tempAns = "";
    vector<string> ans;
    int one = 0;
    int zero = 0;
    solve(n, tempAns, ans, one, zero);

    return ans;
}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends