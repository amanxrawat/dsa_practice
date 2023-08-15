#include <iostream>
using namespace std;
#include <string>

string removeDuplicates(string s1)
{
    int i = 0;
    while(i<s1.length())
    {
        if(s1[i]==s1[i+1]){
            s1.erase(i,2);
            i--;
            if(i<0){
                i=0;
            }    
        }
        else{
            i++;
        }
    }
    return s1;
}

string removeDuplicateRight(string s){
        int i=0;
        while(s[i]!=0)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                i--;
                if(i<0)
                {
                    i=0;
                }
            }
            else
            {
                i++;
            }
        }
        return s;
}

int main()
{
    string ans;
    ans = removeDuplicates("abbaca");
    cout<<"answer is ======";
    cout<<ans;

    return 0;
}