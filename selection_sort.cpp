#include<iostream>
using namespace std;
#include<vector>

void selectionSort(vector<int> &arr){
    int size = arr.size();
    for(int i = 0; i<size; i++){
        // int min = arr[i];
        int minIndex=i;
        for(int j = i+1; j<size; j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
        cout<<"min index"<<minIndex<<endl;
        // int temp = arr[i];
        // arr[i]=arr[minIndex];
        // arr[minIndex]=temp;
    }
}

void printArray(vector<int> &arr){
    int size = arr.size();
    for(int j = 0; j<size; j++){
        cout<<arr[j]<<" ";
        }

}

int main()
{
    vector<int> nums={8,2,9,1,7,3,4,6,5};
    printArray(nums);
    cout<<"\n*************************\n";
    selectionSort(nums);
    cout<<"\n*************************\n";
    printArray(nums);
    return 0;
}