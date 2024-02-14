#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    bool anagram(string s1 , string s2){
        int s1size = s1.size();
        int s2size = s2.size();
        if(s1size != s2size)return false;
        int arr[26] = {0};

        for(int i = 0 ; i<s1size ; i++){
            arr[s1[i] - 'a']++;
            arr[s2[i]-'a']--;
        }

        for( int i = 0 ; i<26 ;i++)
            if(arr[i]!=0)return false;
        
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int size = strs.size();
        vector<bool> visited(size,0);
        for(int i = 0 ; i<size ; i++){
            if(visited[i]==1)continue;
            vector<string> temp;
            temp.push_back(strs[i]);
            for(int j = i+1;j<size ; j++){
                if(anagram(strs[i],strs[j]) && visited[j]!=1){
                    temp.push_back(strs[j]);
                    visited[j]=1;
                }
            }
            ans.push_back(temp);
            visited[i]=1;
        }
    return ans;
    }
};

bool anagram(string s1 , string s2){
        int arr[26] = {0};
        int s1size = s1.size();
        int s2size = s2.size();

        if(s1size != s2size)return false;

        for(int i = 0 ; i<s1size ; i++){
            int index = s1[i] - 'a';
            arr[index]++;

            int index2 = s2[i]-'a';
            arr[index2]--;
        }

        for( int i = 0 ; i<26 ;i++){
            if(arr[i]!=0)return false;
        }

        return true;
    }

int main(){

    cout<<anagram("tan","rat");

    return 0;
}