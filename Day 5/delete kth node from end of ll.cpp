/*
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
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(head==NULL) return NULL;
    // start->next=head;
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    while(K--){
        if(fast==NULL) return head;
        fast=fast->next;
    }

    while(fast!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next;
    }
    if(prev==NULL){
        Node* temp=head->next;
        delete head;
        return temp;
    }
    prev->next=slow->next;
    delete slow;
    return head;
}
