#include<iostream>
using namespace std;
// #include<vector>

int findDuplicate(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
        cout<<"ans is "<<ans<<endl;
    }
    cout<<"second loop:";
    for(int i=1;i<size;i++){
        ans = ans^i;
        cout<<"ans is "<<ans<<endl;
    }
    return ans;
}
int main(){
    int arr[]={1,2,2,3};
    int ans;
    ans=findDuplicate(arr,4);
    cout<<ans;
    return 0;
}