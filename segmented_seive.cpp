#include<iostream>
using namespace std;
#include<math.h>
#include<vector>

void printVector(vector<int>&nums){
    for(int i = 0;i<nums.size();i++){
        cout<<" "<<nums[i];
    }
}
void printVector(vector<bool>&nums){
    for(int i = 0;i<nums.size();i++){
        cout<<" "<<nums[i];
    }
}

vector<int> countPrimes(int n) {
    int count = 0;
    vector<bool> prime(n+1,true);
    vector<int> ans;
    prime[0]=0;
    prime[1]=0;

    for(int i = 2;i<=n;i++){
        if(prime[i]){
            ans.push_back(i);
            for(int j = 2*i; j<n; j = j+i){
                prime[j]=0;
            }
        }
    }
    return ans;
}

vector<int> segmented_seive(int low , int high ){
    // getting all the primes till the square root of the high number

    vector<int> primes = countPrimes(sqrt(high));
    // printVector(primes);
    vector<bool> num((high-low),true);
    for(auto i : primes){
        int firstMul = ((low/i)*i);
        if(firstMul<low){
            firstMul=firstMul+i;
        }
        cout<<"first multiple is "<<firstMul<<endl;
        int firstIndex = firstMul-low;
        cout<<"first index is "<< firstIndex<<endl;

        for(int j = firstIndex; j<=high ;j+=i){
            num[j]=false;
        }
    }
    cout<<"the nums vector after the loops is "<<endl;
    printVector(num);
    cout<<endl;

    vector<int> ans;
    for(int i = low ; i<=high ;i++){
        int index = i-low;
        if(num[index]==true){
            ans.push_back(i);
        }
    }
    return ans;
}



int main()
{
    vector<int > primes = countPrimes(11);
    vector<int> ans = segmented_seive(110,130);
    printVector(primes);
    cout<<"the prime numbers between 110 and 130 are "<<endl;
    printVector(ans);
    return 0;
}