/*  Middle of the Linked List
 Given the head of a singly linked list, return the middle node of the linked list.
 If there are two middle nodes, return the second middle node.  */

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode * pt1 = head;
    ListNode * pt2 = head;

    while(pt2 != nullptr){

        pt2 = pt2->next;
        if(pt2 == nullptr){
            return pt1;
        }
        pt1 = pt1->next;
        pt2 = pt2->next;
    }

    return pt1;


}


int main(){
    return 0;
}