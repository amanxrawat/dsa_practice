#include<iostream>
using namespace std;
#include<string>
#include<vector>

string compare(string s1,string s2){
    string temp="";
    for(int k=0;k<s1.length();k++){
        if(s1[k]==s2[k]){
            temp.push_back(s1[k]);
        }
        else{
            return temp;
        }
    }
    return temp;
}


string longestCommonPrefix(vector<string>& strs) {
    string temp1;
    temp1=strs[0];
    for(int i = 1; i<strs.size();i++){
        temp1 = compare(temp1,strs[i]);
    }
    return temp1;
}


int main()
{
    string answer;
    vector<string> names ={"car","cir"};
    answer = longestCommonPrefix(names);
    cout<<"answer is "<< answer;
    return 0;
}