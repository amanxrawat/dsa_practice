#include<iostream>
using namespace std;

int reverse(int x){
    int digit,ans =0;
    while(x!=0){
        digit=x%10;
        if(ans>(INT32_MAX)/10 ||ans<(INT32_MIN)/10){
            return 0;
        }
        ans=ans*10+digit;
        x=x/10;
    }
    return ans;
}

int main(){

    int ans = reverse(1236547896);
    cout<<"answer is "<<ans;
     return 0;
}