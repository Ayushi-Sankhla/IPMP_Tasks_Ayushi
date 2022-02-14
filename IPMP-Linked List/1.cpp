#include<iostream>
// #include<bits/c++.h>
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
void insertAtBegin(node* &head,int val){
node*n=new node(val);
n->next=head;
head=n;

}
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
void displayNthNodeFromEnd(node* head,int loc)
{
    int len=0,i;
    node* temp=head;
    while(temp->next!=NULL)     {
            len++;
        temp=temp->next;

    }
    if(len<loc)
        return;
        temp=head;
        for(i=1;i<len-loc+1;i++)
        {
            temp=temp->next;
        }
         cout<<temp->data;
}
int main()
{
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
   insertAtEnd(head,3);

    display(head);
    cout<<" nth node from end  ";
    displayNthNodeFromEnd(head,3);

    cout<<"  no. of times the element appeared  "<<search(head,3);
    return 0;
}
