#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void sequence(string str, vector<string>& ans, string output, int index){
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }

    // exclude
    sequence(str,ans,output,index+1);

    // include
    char temp = str[index];
    output.push_back(temp);
    sequence(str,ans,output,index+1);
}

bool isSubsequence(string s, string t){
    vector<string> ans;
    string output = "";
    int index = 0;
    sequence(t,ans,output,index);
    if (std::count(ans.begin(), ans.end(), s)) {
        return true;
    }
    return false;
		
}

int main()
{
    bool ans = isSubsequence("abc", "ahbgdc");
    if(ans)cout<<"true";
    else cout<<"false";
    return 0;
}

/* 
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/

 