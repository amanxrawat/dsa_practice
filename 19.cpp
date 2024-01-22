#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
    ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        int positionToRemove = -1;
        ListNode * temp = head;
        ListNode * temp2 = head;
        while(temp!= NULL){
            temp = temp->next;
            count++;
        }

        positionToRemove = count - n +1;
        count = 0;
        ListNode* prev = head;

        while(temp2!=NULL){
            count++;
            if(count == positionToRemove-1){
                break;
            }
            prev = temp;
            temp=temp->next;
        }

        prev->next = temp->next;

        return head;

    }
};
