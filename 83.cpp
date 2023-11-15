// 83. Remove duplicate from storted linked list 

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* current = head;
    while(current->next !=NULL){
        if( (current->next != nullptr)&& current->val == current->next->val){
            ListNode*nodetodelete = current->next;
            current->next = current->next->next; 
            delete(nodetodelete);
        }

        else{
            current = current->next;
        }

    }
    return head;  
}

int main(){

    return 0;
}