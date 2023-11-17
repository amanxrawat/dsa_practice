#include<iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* sort012(ListNode*head){ 
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    ListNode* temp = head;
    while(temp!=nullptr){

        if(temp->val == 0){
            count0++;
        }
        else if(temp->val == 1){
            count1++;
        }
        else{
            count2++;
        }
        temp= temp->next;
    }

    while(temp!=nullptr){
        if(count0>0){
            temp->val = 0;
            count0--;
        }
        else if(count1>0){
            temp->val = 1;
            count1--;
        }
        else if(count2>0){
            temp->val = 2;
            count2--;
        }
        temp = temp->next;
    }
    return head;
}