#include<iostream>
using namespace std;
//reverse an array

void reverseArray(int arr[], int size){
     int min,max,temp;
     min = 0;
     max=size-1;
     while(min<=max){
          temp = arr[min];
          arr[min]=arr[max];
          arr[max]=temp;
          min++;
          max--;
     }
}

void printArray(int arr[],int size){
     for(int j =0;j<size;j++){
          cout<<arr[j];
          cout<<" - ";
     }
}

int main(){
     int size;
     cout<<"enter how many elements you want to enter in the array";
     cin>>size;
     int numbers[50]={0};
     
     for(int i =0;i<size;i++)
     {
          cout << "enter the "<< i+1 <<" element :";
          cin>>numbers[i];
          cout<<endl;
     }

     printArray(numbers,size);
     reverseArray(numbers,size);
     cout<<"printing the array in reverse"<<endl;
     printArray(numbers,size);

     return 0;
}