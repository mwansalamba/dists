#include<iostream>
using namespace std;
 struct node{
 int value;
 struct node *next;
 };
 
 int main(){
 node *head;
 node *A = new node();
 node *B = new node();
 node *C = new node();
 
 cin>>A->value;
 cin>>B->value;
 cin>>C->value;
 
 A->next=B;
 B->next=C;
 C->next=NULL;
 
 head = A;
 while(head != NULL){
 cout<<head->value;
 head = head->next;
 }
 return 0;
 }
