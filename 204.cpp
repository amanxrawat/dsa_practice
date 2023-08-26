#include<iostream>
using namespace std;
#include<vector>

int countPrimes(int n) {
    int count = 0;
    vector<bool> prime(n+1,true);

    prime[0]=0;
    prime[1]=0;

    for(int i = 2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j = 2*i; j<n; j = j+i){
                prime[j]=0;
            }
        }
    }
    return count;
}

int main()
{
    
    return 0;
}