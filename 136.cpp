#include<iostream>
using namespace std;
void uniqueNumber(int *arr,int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
        cout<<ans<<" ";
    }
    cout<<ans;

}


int main(){
    int arr[]={7,8,9,7,8,4,9};
    uniqueNumber(arr,7);

    return 0;
}