#include<iostream>
using namespace std;

int partition(int *arr, int start , int end){
    int pivot = arr[start];

    // count the elements smaller than pivot element

    int count = 0;
    for(int i = start+1 ;i<=end ; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    // placing the pivot to the right index

    int pivotIndex = start + count;
    swap(arr[pivotIndex],arr[start]);

    int i = start, j = end;
    while(i<pivotIndex && j>pivotIndex){

        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int *arr, int start , int end){
    
    // base case
    if(start>=end){
        return ;
    }

    // partition
    int p = partition(arr,start,end);

    // recursive call for right and left part
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);

}

int main()
{
    int arr[] = {3,8,5,6,1,2,9,8};
    int n = 8;
    quickSort(arr,0,n-1);
    for(int i = 0;i<n ; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}