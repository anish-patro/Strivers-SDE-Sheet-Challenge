#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
   LinkedListNode<int>* temp=head;
    map<LinkedListNode<int>*, LinkedListNode<int>*>m;
    while(temp){
        LinkedListNode<int>* newNode=new LinkedListNode<int>(temp->data);
        m[temp]=newNode;
        temp=temp->next;
    }
    LinkedListNode<int>* t=head;

    while(t){
      LinkedListNode<int>* node=m[t];
      node->next=m[t->next];
      node->random=m[t->random];
      t=t->next;
    }
    return m[head];
}
