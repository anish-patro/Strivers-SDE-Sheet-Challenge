#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head) return true;
    if(head->next==NULL) return true;
        LinkedListNode<int> *fre=head;
        // ListNode* fre1=head;
        LinkedListNode<int> * slow=head;
       LinkedListNode<int> * fast=head;
        LinkedListNode<int> * temp=NULL;
        while(fast && fast->next){
             temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        LinkedListNode<int> * curr=slow;
        LinkedListNode<int> *  prev=NULL;
        LinkedListNode<int> * next=NULL;
        while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
        }
        while(fre){
            if(fre->data!=prev->data) return false;
            fre=fre->next;
            prev=prev->next;
 
        }
       return true;
    
}