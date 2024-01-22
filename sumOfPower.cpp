#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int primeSum(int num ){
        int prime = 0;
        for(int j = 2 ; j<= num ; j++ ){
            if(num<=1){
                return prime;
            }
            if(num%j==0){
                prime++;
                num = num/j;
                j=1;
                
            }
        }
        return prime;
    }
public:
	int sumOfPowers(int a, int b){
	    int count = 0;
	    for(int i = a  ; i <= b ; i++){
	        count += primeSum(i);
	        cout<<count<<endl;
	    }
	    return count;
	}
};



int main(){
    Solution sol;
    sol.sumOfPowers(9,12);

    return 0;
}