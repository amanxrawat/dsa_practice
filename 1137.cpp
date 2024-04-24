#include<bits/stdc++.h>
using namespace std;

int tribonacci(int n) {
    if(n==0)return 0;
    int t0 = 0;
    int t1 = 1;
    int t2 = 1;
    int temp = 0;
    for(int i = 2 ; i< n ;i++){
        temp = t0+t1+t2;
        t0 = t1;
        t1 = t2;
        t2 = temp;
    }

    return t2;

}


int main(){

    return 0;
}