#include<iostream>
//#include<bits/c++.h>
using namespace std;
class node{
    public:
int data;
node* next;

node(int val)
{
    data=val;
    next=NULL;
}
};

void insertAtEnd(node* &head,int val){
  node* n=new node(val);
  if(head==NULL)
  {
      head=n;
      return;
  }
  node* temp=head;
  while(temp->next!=NULL)
  {

      temp=temp->next;
  }
  temp->next=n;
  // n->next already have null value
}

void display(node *head)       {
node* temp=head;
while(temp->next!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<temp->data;

}
int search(node* &head, int val){
   node* temp=head;
   int c=0;
   while(temp->next!=NULL){
   if(temp->data!=val)
   {
       c++;
   }
   temp=temp->next;
   }
   return c;
}

node* reverseLinkedList(node* &head){
node* curr=head;
node* prev=NULL;
while(curr!=NULL){
    node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
return prev;
}
int main(){

node* head=NULL;
cout<<"Linked List: ";
insertAtEnd(head,1);
insertAtEnd(head,2);
insertAtEnd(head,3);
insertAtEnd(head,4);
display(head);
cout<<endl;
cout<<"Reversed Linked list: ";
node* newhead=reverseLinkedList(head);
display(newhead);
return 0;

}

