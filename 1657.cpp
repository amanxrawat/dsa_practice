#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);

        for (char ch : word1) {
            freq1[ch - 'a']++;
        }

        for (char ch : word2) {
            freq2[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0)) {
                return false;
            }
        }

        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }
};



// class Solution {
// private :
//     bool secondOperation(string word1 , string word2){
//         int ind = int('a');
//         int arr[26]={0};
//         for (auto a : word1)
//             arr[int(a)- ind]++;
            
//         int arr2[26]= {0};
//         for (auto a : word2)
//             arr2[int(a)- ind]++;
        
//         int cnt1 = 0;
//         int cnt2 = 0;

//         for(int i= 0 ; i<26 ; i++)
//             cnt1 += arr[i];
//         for(int i= 0 ; i<26 ; i++)
//             cnt2 += arr2[i];

//         if(cnt1==cnt2)return true;
//         return false;
//     }

// public:
//     bool closeStrings(string word1, string word2) {

//         int size1 = word1.size();
//         int size2 = word2.size();
//         if(size1 != size2) return false;
//         // operation one
//         int count1 = 0;
//         int count2 = 0;

//         for(int i = 0 , j = 0 ; i<size1, j<size2 ; i++,j++){
//             count1 += int(word1[i]);
//             count2 += int(word2[j]);
//         }

//         if( count1 == count2) return true;


//         for(int i = 0 ; i < size1 ; i++){
//             if(find(word2.begin(),word2.end(), word1[i]) != word2.end())
//                 continue;
//             return false;
//         }
//         // operation two
//         bool ans = secondOperation(word1, word2);
//         return ans;
//     }    
// };



int main(){
    return 0;
}