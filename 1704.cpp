#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int mid = s.size()/2;
        int firstHalf =0 ;
        int secondHalf =0 ;
        for(int i = mid -1 , j = mid ; i>=0, j<s.size() ; i-- , j++){
            if(s[i]=='a'|| s[i] == 'e' || s[i]=='i' || s[i] == 'o' ||s[i]=='u') firstHalf++;
            if(s[j]=='a'|| s[j] == 'e' || s[j]=='i' || s[j] == 'o' ||s[j]=='u') secondHalf++;
        }
        return (firstHalf == secondHalf);
    }
};

int main(){
    string name = "aman";
    int mid = name.size()/2;
    cout<<mid;
    Solution sol;
    cout<<endl<<sol.halvesAreAlike(name);
    return 0;
}