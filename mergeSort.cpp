#include<iostream>
using namespace std;

void merge(int *arr,int start , int end){
    int mid = (start + end)/2;

    int len1 = mid-start+1;
    int len2 = end-mid;

    int *tempArr1 = new int[len1];
    int *tempArr2 = new int[len2];

    // copy the array into two parts temparr1 and temparr2
    int mainIndex = start;
    for(int i = 0; i<len1 ; i++){
        tempArr1[i]=arr[mainIndex++];
    }

    mainIndex = mid+1;
    for(int i = 0; i<len2 ; i++){
        tempArr2[i]=arr[mainIndex++];
    }

    // merge the two arrays using merge the two sorted array method
    int i = 0 , j = 0;
    mainIndex=start;
    while(i<len1 && j<len2){
        if(tempArr1[i]<tempArr2[j]){
            arr[mainIndex++] = tempArr1[i++];
        }
        else{
            arr[mainIndex++] = tempArr2[j++];
        }
    }

    // check if ary element left in the temp arrays

    while(i < len1){
            arr[mainIndex++] = tempArr1[i++];
    }
    while(j< len2){
            arr[mainIndex++] = tempArr2[j++];
    }
    // free memory
    delete []tempArr1;
    delete []tempArr2;
}


void mergeSort(int *arr, int start , int end){
    if(start>=end){
        return ; 
    }

    int mid = (start + end)/2;

    // sort left part
    mergeSort(arr,start,mid);

    // sort right part
    mergeSort(arr,mid+1,end);

    // merge the sub arrays
    merge(arr,start , end);
}

int main()
{
    int arr[5]={2,5,3,6,1};
    int n = 5;
    mergeSort(arr,0,n-1);

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}