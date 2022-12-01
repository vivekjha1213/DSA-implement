#include<iostream>
using namespace std;
class Node{
public:
int data;

Node* next;




};
void print_list(Node* n){

while(n!=NULL){
    cout<<n->data<<endl;
   n= n->next;

}
void push(Node** head_ref,int new_data)
{

    Node* new_Node = new Node();
   new_Node->data = new_data;
   new_Node->next=(*head_ref);
   (*head_ref) = new_node;

}

int main(){

Node* head=NULL;
Node* second=NULL;
Node* third=NULL;

head =  new Node();
second = new Node();
third = new Node;

head -> data =1;
head ->next=second;

head ->data=2;
second ->next=third;

head ->data = 3;
third ->next = NULL;
print_list(&head,1);
push(Node);


    return 0;
}