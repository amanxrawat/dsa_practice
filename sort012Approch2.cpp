#include<iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode*next;

    // constructor to insert data in the node
    ListNode(int data){
        this->data = data;
        this->next= NULL;
    }

    // destructor for the node class 
    ~ListNode(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"deleted ";
    }
};

// void insertAtEnd(ListNode* head,int data,ListNode*&tail){
//     ListNode* temp = head;
//     while(temp->next != NULL){
//         cout<<temp->data<<"--";
//         temp = temp->next;
//     }
//     ListNode * newnode = new ListNode(data);
//     temp->next = newnode;
//     tail=newnode;

// }

void insertAtEnd(ListNode*current,int data,ListNode*&tail ){
    tail->next = current;
    tail=current;
}


ListNode* sort012(ListNode*&head){
    ListNode* temp = head;

    ListNode* zerohead = new ListNode(-1);
    ListNode* zerotail = zerohead;
    ListNode* onehead = new ListNode(-1);
    ListNode* onetail = onehead;
    ListNode* twohead = new ListNode(-1);
    ListNode* twotail = twohead;



    while(temp!= nullptr){

        // wrong because every time the head is changing
        if(temp->data== 0){
            insertAtEnd(temp,0,zerotail);

        }
        else if(temp->data== 1){
            insertAtEnd(temp,1,onetail);

        }
        else if(temp->data== 2){
            insertAtEnd(temp,2,twotail);
        }

        temp = temp->next;
    }

    head = zerohead;
    zerotail->next = onehead->next;
    onetail->next = twohead->next;


    return head;
}