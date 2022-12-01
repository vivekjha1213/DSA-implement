#include<iostream>
using namespace std;
class Node{
public:
int data;
 Node* next;

};
void print(Node* n)
{
    cout<<""<<endl;

    while(n!=NULL){
        cout<<n->data <<endl;
        n = n->next;

    }
}
void push(Node** head,int new_data){

Node* new_node = new Node();
new_node->data = new_data;
new_node->next = (*head);
(*head) =  new_node;


}
int main(){

Node* head =NULL;

cout<<""<<endl;
push(&head,33);
cout<<""<<endl;
print(head);
    return 0;
}