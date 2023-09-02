#include<iostream>
using namespace std;


int binarySearch(int arr[],int element,int start ,int end){
    int mid = start + (end- start)/2;

    //base case 
    // if element not found
    if(start>end){
        return -1;
    }

    // base case
    // element found
    if(element==arr[mid]){
        return mid;
    }

    if(arr[mid]>element){
        // int ans = binarySearch(arr, element, start,mid-1);
        // return ans;
        // instead of this we can do

        return binarySearch(arr, element, start,mid-1);
    }

    if(arr[mid]<element){
        return binarySearch(arr,element, mid+1,end);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int ans = binarySearch(arr,5,0,7);
    cout<<"the index of the element is "<<ans;
    return 0;
}