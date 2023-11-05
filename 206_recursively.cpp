// 206 reverse a Linked List
// Given the head of a singly linked list, reverse the list, and return the reversed list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void reverse(ListNode*&head,ListNode*current , ListNode* previous){

    if(current == nullptr){
        head = previous;
        return ;
    }

    ListNode*fordward = current->next;
    reverse(head,fordward , current);
    current->next = previous;
    
}

class Solution {
public:

    ListNode*reverseList(ListNode*head){

        ListNode*previous = nullptr;
        ListNode*current = head;
        
        reverse(head,current, previous);
        return head;

    }
};