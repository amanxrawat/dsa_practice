#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// first mistake that i have taken the value of temp as a null pointer with will
// result in addrissing to null in temp->next=list1;

// second we don't need to use the while loops by using if we can do the remaining part.

class Solution
{
public:
    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     ListNode * temp = nullptr;
    //     ListNode * head = temp;
    //     while(list1!=nullptr && list2!=nullptr){
    //         if(list1->val <= list2->val){
    //             temp->next = list1;
    //             list1= list1->next;
    //             temp=temp->next;
    //         }
    //         else{
    //             temp->next = list2;
    //             list2= list2->next;
    //             temp=temp->next;
    //         }
    //     }

    //     while(list1!=nullptr){
    //             temp->next = list1;
    //             list1= list1->next;
    //             temp=temp->next;

    //     }
    //     while(list2!=nullptr){
    //             temp->next = list2;
    //             list2= list2->next;
    //             temp=temp->next;
    //     }
    //     return head->next;
    // }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp = new ListNode(-1);
        ListNode *head = temp;

        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val <= list2->val)
            {
                head->next = list1;
                list1 = list1->next;
            }
            else
            {
                head->next = list2;
                list2 = list2->next;
            }
            head = head->next;
        }

        if (list1 != nullptr)
        {
            head->next = list1;
        }
        if (list2 != nullptr)
        {
            head->next = list2;
        }

        // ListNode* merged = temp->next;
        // delete temp;
        // return merged;
        return temp->next;
    }
};