#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Solution
{
public:
    Node *SortedMerge(Node *node1, Node *node2)
    {
        
        if (node1 == NULL && node2 == NULL)
            return NULL;

        Node *res = NULL;

        
        while (node1 != NULL && node2 != NULL)
        {
            if (node1->data <= node2->data)
            {
                Node *temp = node1->next;

                node1->next = res;
                res = node1;
                node1 = temp;
            }

            else
            {
                Node *temp = node2->next;
                node2->next = res;
                res = node2;
                node2 = temp;
            }
        }
        while (node1 != NULL)
        {
            Node *temp = node1->next;
            node1->next = res;
            res = node1;
            node1 = temp;
        }

        
        while (node2 != NULL)
        {
            Node *temp = node2->next;
            node2->next = res;
            res = node2;
            node2 = temp;
        }

        return res;
    }
};

int main()
{
    return 0;
}