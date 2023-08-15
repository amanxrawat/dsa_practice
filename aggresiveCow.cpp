#include<iostream>
using namespace std;
#include<vector>

bool isPossible(vector<int> &stalls, int cows,int mid){
     int distance;
     int cowCount = 1;
     int lastPos=stalls[0];

     for(int i = 0; i<stalls.size(); i++){

          if(stalls[i]-lastPos>= mid){
               cowCount++;
               if(cowCount==cows){
                    return true;
               }
               lastPos=stalls[i];
          }
     }
     return false;
}


int aggressiveCows(vector<int> &stalls,int cows){
     // sort(stalls.begin(),stalls.end());
     int start = 0;
     int max=stalls[0],min=0;;

     for(int i =1; i<stalls.size()-1; i++){
          if(max<stalls[i]){
               max=stalls[i];
          }
     }
     for(int i =0; i<stalls.size()-1; i++){
          if(min>stalls[i]){
               min=stalls[i];
          }
     }

     int end = max-min;
     int mid=start+(end-start)/2;
     int ans=0;

     while(start<=end){
          if(isPossible(stalls,cows,mid)){
               ans=mid;
               start=mid+1;
          }
          else{
               end=mid-1;
          }
          mid=start+(end-start)/2;
     }
     return ans;
}

int main(){
     
     return 0;
}