#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int count(string s){
        int countOne=0;
        for( int i : s){
            if(i=='1'){
                countOne++;
            }
        }
        return countOne;
    }

public:
/*
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
*/


    int numberOfBeams(vector<string>& bank) {
        int previous = 0;
        int current = 0;
        int laser = 0;

        for(int i = 0 ; i < bank.size() ; i++){
            current = count(bank[i]);
            if(current != 0){
                laser = laser + current*previous;
                previous = current;
            }

        }
        return laser;
    }

// first optimization attemp

    // int tnumberOfBeams(vector<string>& bank) {
    //     int previous = 0;
    //     int current = 0;
    //     int laser = 0;

    //     for(int i = 0 ; i < bank.size() ; i++){
    //         current = count(bank[i].begin(),bank[i].end(),'1');
    //         if(current != 0){
    //             laser = laser + current*previous;
    //             previous = current;
    //         }

    //     }
    //     return laser;
    // }
};

int main(){

    return 0;
}