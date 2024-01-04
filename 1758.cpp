#include <bits/stdc++.h>

using namespace std;

int minOperations(string s){
    int count = 0;
    char first = s[0];
    char second = '1';
    if(first == '1'){
        second = '0';
    }

    for(int i = 0;i<s.size() ; i++){
        if(i&1){
            if(s[i] != second)
            count++;
        }
        else{
            if(s[i] != first){
                count++;
            }
        }
    }

    return count;
}

int main()
{

    return 0;
}