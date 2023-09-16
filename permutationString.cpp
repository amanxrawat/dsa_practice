#include<iostream>
using namespace std;
#include<vector>

void generatePermutation(string &str, vector<string> &ans,int index){
    if(index>=str.length()){
        ans.push_back(str);
        return ;
    }
    
    for(int i = index ; i<str.length() ; i++){
        swap(str[index],str[i]);
        generatePermutation(str,ans,index+1);
        swap(str[index],str[i]);
    }

}

vector<string> permutation(string &str){
    vector<string> ans = {};
    int index=0;

    generatePermutation(str,ans,index);

    return ans;
}

void printVector(vector<string>&nums){
    for(int i = 0;i<nums.size();i++){
        cout<<" "<<nums[i];
    }
}

int main()
{
    string var = "abc";
    vector<string> ans = permutation(var);
    printVector(ans);
    return 0;
}