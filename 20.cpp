#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;

        for(int i = 0 ; i< s.size() ; i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') s1.push(s[i]);

            else{

                if(!s1.empty()){
                    char top = s1.top();
                    if(s[i] == ')'&& top == '(') s1.pop();
                    else if(s[i] == ']'&& top == '[' ) s1.pop();
                    else if(s[i] == '}'&& top == '{')s1.pop();
                    else return false;
                }
                else return false;

            }
        }
        if(s1.empty())
        return true;

        return false;
    }
};


int main(){

    return 0;
}