#include <iostream>

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Two pointer approch
bool hasCycle(ListNode *head)
{
    
    if (head == nullptr)
    {
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr)
    {

        fast = fast->next;
        slow = slow->next;
        if (fast == nullptr)
        {
            return false;
        }
        fast = fast->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}
