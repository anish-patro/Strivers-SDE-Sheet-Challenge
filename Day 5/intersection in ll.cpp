/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/
#include<bits/stdc++.h>
Node* findIntersection(Node *headA, Node *headB)
{
    //Write your code here
        Node* temp1=headA;
        Node* temp2=headB;
        while(temp1!=temp2){
            if(temp1!=NULL)
            temp1=temp1->next;
            else
            temp1=headB;
            if(temp2!=NULL)
            temp2=temp2->next;
            else
            temp2=headA;
        }
        return temp1;
      
}