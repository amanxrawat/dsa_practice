#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode * temp = l2;
        ListNode * temp1 = nullptr;
        ListNode * l1tail =l1;
        ListNode * l2tail =l2;
        
        int carry = 0;
        int value = 0;
        while(l1!=nullptr && temp!=nullptr){
            
            value = l1->val + temp->val + carry;
            carry = value/10;
            value=value%10;
            l1tail =l1;
            l2tail =temp;
            temp->val = value;
            temp= temp->next;
            l1 = l1->next;
        }


        if(l1!=nullptr){
            l2tail->next = l1;
            while (l1!=nullptr)
            {
                value = l1->val+carry;
                carry = value/10;
                value = value%10;

                l1->val = value;
                l1=l1->next;
            }
            

        }

        if(temp!=nullptr){
            while(temp != nullptr){
                value = temp->val+carry;
                carry = value/10;
                value = value%10;

                temp->val = value;
                temp=temp->next;
            }
        }

        if(carry>0){
            ListNode* newnode = new ListNode(carry);
            temp->next = newnode;
        }

        return l2;
    }
};

int main()
{
    return 0;
}