#include<bits/stdc++.h>
using namespace std;

int calHcf(int a , int b ){

    while(b!=0){
        int temp = b;

        b= a%b;

        a=temp;
    }

    return a;
}

int main(){

    int ans;

    ans = calHcf(25,30);

    cout<<endl<<ans;

    return 0;
}