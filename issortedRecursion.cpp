#include<iostream>
using namespace std;

bool isSorted( int arr[] , int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}


int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<*arr;
    cout<<*(arr+1);
    bool ans = isSorted(arr,5);
    cout<<endl;
    cout<<ans;

    return 0;
}