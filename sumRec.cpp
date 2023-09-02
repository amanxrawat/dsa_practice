#include<iostream>
using namespace std;

int sumRecursion(int arr[],int size){
    if(size==0){
        return 0;
    }

    int sum = arr[0];
    sum = sum + sumRecursion(arr+1,size-1);
    return sum;
}


int main()
{
    int arr[] = {1,5,5,5,5};
    int ans = sumRecursion(arr,5);
    cout<<"the answer is "<<ans<<endl;
    return 0;
}