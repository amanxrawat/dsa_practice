#include<bits/stdc++.h>
using namespace std;


// check my solution for answer
// wrong answer
class Solution{
    private:
        
        int sum(int arr[], int n , int i ,int j){
            int sum = 0;
            for(int k= i ; k<= j ; k++){
                sum += abs(arr[k]);
            }
            return sum;
        }
    
        void calculateSubArrayLength(int arr[], int n , int k , int & i , int & j , vector<int> &ans){
            if(j<i){
                return ;
            }
            
            if(sum(arr,n,i, j)%k == 0){
                ans.push_back(j-i+1);
                return;
            }
            
            // recursive call
            calculateSubArrayLength(arr, n , k , ++i , j , ans);
            calculateSubArrayLength(arr, n , k , i , --j , ans);
            calculateSubArrayLength(arr, n , k , ++i , --j , ans);
        }
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int i = 0 ; 
	    int j = n -1;
	    vector<int> ans;
	   
	    calculateSubArrayLength(arr,n,k,i,j,ans);
	    
	    return *max_element(ans.begin(), ans.end());
	    
	    // Complete the function
	}
};