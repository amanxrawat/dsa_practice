#include<iostream>
using namespace std;

bool isSubsequence(string s, string t){
    int i=0,j=0;
    for(j;j<t.length();j++){
        if(s[i]==t[j]){
            i++;
        }
    }
    if(i==s.length()){
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
A subsequence of a string is a new string that is formed from the original string by deleting some
(can be none) of the characters without disturbing the relative positions of the remaining characters.
(i.e., "ace" is a subsequence of "abcde" while "aec" is not).
 */