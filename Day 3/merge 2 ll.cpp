#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL) return second;
    if(second==NULL) return first;

    Node<int> *neww=NULL;
    Node<int> *tail=NULL;

    if(first->data < second->data) {
        neww=first; 
        first=first->next;
        }
    else {
        neww=second;
        second=second->next;
        }
        tail=neww;
    while(first!=NULL && second!=NULL){
        if(first->data < second->data){
                  tail->next=first;
                  tail=tail->next;
                  first=first->next;
        }
        else{
            tail->next=second;
            tail=tail->next;
            second=second->next;
        }
        
    } 
    if(first!=NULL){
        tail->next=first;
    }
     else{
        tail->next=second;
    }
    return neww;
}
