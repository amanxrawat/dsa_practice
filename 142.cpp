#include <iostream>

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool cycle(ListNode *head, ListNode *&slow, ListNode *&fast)
{
    while (fast != nullptr && slow != nullptr)
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
}

ListNode *detectCycle(ListNode *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    bool ans = cycle(head, slow, fast);
    if (ans)
    {
        slow = head;
        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    else
    {
        return nullptr;
    }
    return slow;
}