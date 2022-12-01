#include<iostream>
using namespace std;
class Node{
public:
int data ;
Node* next;
};

void print(Node* n){
    while(n!=NULL){
        
    cout<<n->data<<"\n";
    n = n->next;
    }

}

void push(Node** head,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    (*head)=new_node;
}
void after(Node** prev_node,int new_data){
    if(prev_node == NULL){
        cout<<"over flow conditon\n";
        return ;
        Node* new_node = new Node();
        new_node->data = new_data;
        new_node->next=new_node;

    }
}


int main(){
    Node *head = NULL;
push(&head,8);
print(head);

after(&head,9);

print(head);


return 0;

}
