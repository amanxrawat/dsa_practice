#include<iostream>
using namespace std;
#include<vector>
int peakIndexInMountainArray(vector<int>& arr) {
        // int ans =-1 ;
        int start=0;
        int end= (arr.size()-1);
        while(start<end){
        int mid =start + (end-start)/2;
            if((arr[mid]>arr[mid+1]) && (arr[mid]>arr[mid-1])){
                return mid;
                // cout<<ans;
            }
            else if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else if(arr[mid]<arr[mid-1]){
                end=mid;
            }

            // cout<<"answer after while loop"<<mid<<endl;
            // mid =start + (end-start)/2;    
        }
}
int main(){
    vector<int> arr ={0,1,2,3,4,5,6,4,2,1};
    int ans=peakIndexInMountainArray(arr);
    cout<<"this is the answer  ";
    cout<<ans;
     return 0;
}