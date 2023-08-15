#include<iostream>
using namespace std;

int subtractProductAndSum(int n){
    int temp1=1;
    int temp2=0;
    while(n>0){
        temp1=temp1*(n%10);
        temp2=temp2+(n%10);
        n=n/10;    
    }
    return (temp1-temp2);
}

int main(){
    int ans = subtractProductAndSum(234);
    int ans2 = subtractProductAndSum(333);
    cout<<"answer is "<< ans<< " "<<ans2 <<endl;
    return 0;
}