#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void traverselinkedlist(node* head){
  node* current =head;
  while(current!= nullptr){
    cout<<current->data<<" ";
    current=current->next;
  }

}
node* createnode(int data){
    node* newnode= new node();
    newnode->data = data;
    newnode->next=nullptr;
    return newnode;

}
int main(){
    node* head=createnode(10);
    head->next=createnode(20);
    head->next->next=createnode(30);
    traverselinkedlist(head);
return 0;};
