#include<iostream>
using namespace std;
int getPivot(int arr[], int size){

    if(size==1){
        return 0;
    }
    else if(size==2){
        if(arr[0]<arr[1]){
            return 0;
        }
        else{
            return 1;
        }
    }


    int start = 0;
    int end = size-1;

    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[]={1,3};
    int ans=getPivot(arr,2);
    cout<<"answer  is "<<ans<<endl;
    return 0;
}