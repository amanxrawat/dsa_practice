#include <iostream>
#include <map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool floydsLoopDetection(ListNode *head)
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


ListNode* startingpoint(ListNode *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && slow != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
        if (fast == nullptr)
        {
            return nullptr;
        }
        fast = fast->next;

        if (fast == slow)
        {
            slow = head;
            while (fast != slow )
            {   
                fast = fast->next;
                slow = slow->next;
            }

            return slow; 
        }
    }
}


int main()
{

    return 0;
}