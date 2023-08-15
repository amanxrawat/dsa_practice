#include<iostream>
using namespace std;

//swap alternative
// with for loop if can be done using two variable
void swapAlternative(int  arr[], int size){
    int ptrfirst,ptrsecond,temp;
    ptrfirst=0;
    ptrsecond=1;
    while(ptrfirst<(size-1)){
        temp=arr[ptrfirst];
        arr[ptrfirst]=arr[ptrsecond];
        arr[ptrsecond]=temp;
        ptrfirst+=2;
        ptrsecond+=2;
    }
}

void printArray(int arr[],int size){
     for(int j =0;j<size;j++){
        std::cout<<arr[j];
        std::cout<<" - ";
     }
}

int main(){
    int size;
    std::cout<<"enter how many elements you want to enter in the array";
    cin>>size;
    int numbers[50]={0};
    
    for(int i =0;i<size;i++)
    {
        std::cout << "enter the "<< i+1 <<" element :";
        cin>>numbers[i];
        std::cout<<endl;
    }
    printArray(numbers,size);
    swapAlternative(numbers,size);
    std::cout<<"printing the array after alternative swap"<<endl;
    printArray(numbers,size);
    return 0;
}