#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    queue<int> q;    
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
        int size = q.size();
        size--;
        while(size--){
            int val = q.front();
            q.push(val);
            q.pop();
        }
    }
    
    int pop() {
        int val = q.front();
        q.pop();
        return val;
        
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(){

    return 0 ;
}