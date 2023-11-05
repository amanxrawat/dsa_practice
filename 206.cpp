// 206 reverse a Linked List
// Given the head of a singly linked list, reverse the list, and return the reversed list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode*previous = nullptr;
        ListNode*current = head;
        while(current != nullptr){
            ListNode*fordward = current->next;
            current->next = previous;
            previous = current;
            current = fordward;
        }    

        return previous; 
    }
};