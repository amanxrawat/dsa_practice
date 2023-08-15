#include<iostream>
using namespace std;

int modExpo(int x , int n , int m){
    int result = 1;

    while(n>0){
        if(n&1){
            result = 1LL*(result * (x)%m)%m;
        }
        x = 1LL*((x)%m * (x)%m)%m;

        n=n>>1;
    }
    return result;
}
int main()
{
    int ans = modExpo(5,5,25);
    cout<< "answer is "<< ans;
    
    return 0;
}