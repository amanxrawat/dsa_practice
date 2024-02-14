#include<bits/stdc++.h>
using namespace std;

struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
const long long unsigned int MOD = 1000000007;
long long unsigned int decimalValue(Node *head)
        {   
            Node*temp = head;
            vector<int> binary;
           while(temp!=NULL){
               binary.push_back(temp->data);
               temp = temp->next;
           }
           
           int size = binary.size();
           long long unsigned int ans= 0;
           for(int i = 0; i<size ;i++){
               int index = size - i - 1;
            long long unsigned int val = binary[index];
            ans = (ans )+ ( (val << i)) % MOD;
            ans = ans%MOD;
           }
           
           return (ans%MOD);
           
        }
long long unsigned int decimalValue(Node *head)
        {   
            long long unsigned int out = 0, mod = 1e9 + 7;
            Node* temp = head;

            while (temp) {
                out = (out << 1) % mod;
                out = (out + temp->data) % mod;
                temp = temp->next;
            }

        return out;
    }        

int main(){
    vector<bool> temp ;
    temp.push_back(1);
    bool ans = true;
    return 0;
}