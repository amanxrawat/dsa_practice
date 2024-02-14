#include<bits/stdc++.h>
using namespace std;

bool redundantBrackets(string s){
    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            if(!st.empty())st.pop();
        }
    }

    if(st.empty()) return false;
    return true;

}


int main(){

    string s = "((a+b))";
    cout<<redundantBrackets(s);
    return 0;
}