#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &booksPages, int students, int max){
     int PageSum = 0;
     int studentCount =1;

     for(int i = 0; i<booksPages.size() ;i++ ){
          if(PageSum+booksPages[i]<=max){
               PageSum += booksPages[i];
          }
          else{
               studentCount++;
               if(studentCount>students||booksPages[i]>max){
                    return false;
               }
               PageSum=booksPages[i];
          }
     }
     return true;

}


int minPageAllocated(vector<int>&booksPages,int students){
     int start =0;
     int sum=0;
     int ans =-1;
     for(int i =0; i<booksPages.size(); i++){
          sum = sum+booksPages[i];
     }

     int end = sum;
     int mid=start+(end-start)/2;

     while(start<=end){
          if(isPossible(booksPages,students,mid)){
               end=mid-1;
               ans = mid;
          }

          else{
               start=mid-1;
          }
          mid=start+(end-start)/2;
          return ans;
     }     
}

int main(){
    
     return 0;
}