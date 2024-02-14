#include<bits/stdc++.h>
using namespace std;

const char* reverse(const char *S, int len)
{
    stack<char> s1;
    char* ans = new char[len + 1];
    ans[len] = '\0';
    
    for(int i = 0 ; i<len ; i++){
        s1.push(S[i]);
    }

    int index = 0;
    while (!s1.empty())
    {
        ans[index++] = s1.top();
        s1.pop();
    }
    
    return ans ;
}


int main(){
    const char* temp = "hello";
    const char* ans = reverse(temp, 5);
    cout <<ans;
    return 0;
}