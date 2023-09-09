#include<iostream>
#include<vector>
#include<string>
using namespace std;

void combination(vector<string> &ans,string output, int index , string digits,string mapping[]){
    //  base case
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }

    // 
    int number = digits[index]-'0';
    string value = mapping[number];

    for(int i = 0 ; i<value.length(); i++){
        output.push_back(value[i]);
        combination(ans,output,index+1,digits,mapping);
        output.pop_back();
    }

}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if(digits.length()==0){
        return ans;
    }
    string output;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};        
    combination(ans,output,index,digits,mapping);
    return ans;
}

int main()
{
    
    return 0;
}