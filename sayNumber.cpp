#include<iostream>
using namespace std;
#include<vector>
vector<string> sayNumber(vector<string> & arr,int n){
    vector<string> ans;
    while(n>0){
        int number = n%10;
        n=n/10;
        // cout<<"the index is "<< number<<endl;
        ans.push_back(arr[number]);
    }
    // cout<<"safely returned"<<endl;
    return ans;
}

void printVector(vector<string>&nums){
    for(int i=nums.size()-1;i>=0;i--){
        cout<<" "<<nums[i];
    }
}

int main()
{
    vector<string> numbers ={"zero", "one", "two", "three","four", "five","six","seven","eight","nine"};

    vector<string> ans = sayNumber(numbers,512);

    printVector(ans);

    return 0;
}