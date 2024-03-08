#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
        int size = s.size();
        int lastIndex = size-1;
        while(s[lastIndex] ==' ')lastIndex--;
        int count = 0;
        while( lastIndex>=0&& s[lastIndex]!=' '){
            count++;
            lastIndex--;
        }
        return count;
}

int main(){

    cout<<lengthOfLastWord("hello world  ");
    return 0;
}