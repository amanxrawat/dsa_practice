#include<bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int> arr , int k ){
    priority_queue<int> pq;
    int size = arr.size();

    for(int i = 0 ; i < k ; i ++){
        pq.push(arr[i]);
    }

    for(int j = k ; j < size ; j++){
        if(arr[j]<pq.top()){
            pq.pop();
            pq.push(arr[j]);
        }
    }

    return pq.top();

}

int main(){
    vector<int> arr = {13,15,3,2,1,6,9};
    int ans = findKthSmallest(arr,6);
    cout<<ans<<" answer ";

    return 0;
}