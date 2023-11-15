#include<iostream>
#include<map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//Part one :  check wheather a cycle is present in a linked list or not 

bool cycle(ListNode*head){

    if(head==nullptr){
        return false;
    }
    map<ListNode*, int> visited;
    ListNode *temp = head;
    while(temp != nullptr){
        if(visited[temp]==1){
            return true;
        }

        visited[temp]=1;
        temp = temp->next;

    }
    return false;

}




int main(){
    return 0;
}