#include<iostream>
using namespace std;

int expo(int a , int b){
    
    // base cases
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    
    // recursive relation
    if(b&1){
        return a*(expo(a,b/2))*(expo(a,b/2));
    }
    else{
        return expo(a,b/2)*expo(a,b/2);
    }

}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int ans = expo(a,b);
    cout<<"the value of a to the power b is "<<ans<<endl;
    return 0;
}