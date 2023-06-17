/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(!head || !head->next) return head;
     Node* neww=head;
     Node* count=head;
     int c=1;
     while(count->next){
          c++;
          count=count->next;
     }
     k=k%c;
     for(int i=1;i<=k;i++){
          Node* temp=head;
          while(temp->next->next!=NULL){
               temp=temp->next;
          }
          Node* end=temp->next;
          end->next=head;
          temp->next=NULL;
          head=end;

     }
     return head;


}