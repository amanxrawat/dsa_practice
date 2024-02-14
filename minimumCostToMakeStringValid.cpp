#include <bits/stdc++.h> 
using namespace std;

int findMinimumCost(string str) {
    int size = str.size();
    if(size&1 )return -1;

    stack<char> st;
    int openingCount = 0;
    int closingCount = 0;

    for(int i = 0 ; i<size;i++){
        char element = str[i];
        if(element=='{'){
            st.push(element);
            openingCount++;
        }
        if(element =='}'){
            if(st.empty() || st.top() != '{'){
                st.push('}');
                closingCount++;
            }
            else{
                st.pop();
                openingCount--;
            }

        }
    }
    // cout<<openingCount << " " << closingCount <<endl;

    if(closingCount&1){
        return (openingCount+closingCount)/2 +1 ;
    }

    return (openingCount+closingCount)/2;

}

int main(){
    string s1 = "{{{}}}";
    string s2 = "}}}}";
    string s3 = "{{{{";
    string s4 = "}}}{{{";

    cout<<" s1 ";
    cout<<findMinimumCost(s1);
    cout<<" s2 ";
    cout<<findMinimumCost(s2);
    cout<<" s3 ";
    cout<<findMinimumCost(s3);
    cout<<" s4 ";
    cout<<findMinimumCost(s4);

    return 0;
}