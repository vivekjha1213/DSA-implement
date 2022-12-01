#include<iostream>
using namespace std;


class Node{
int data;
Node* next;
};
void print_list(Node* n){
    
    while(n != NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}
void list_delete(Node** head){
    Node *temp;
    if(*head == NULL){
        return ;

        temp = *head;
        *head = (*head)->next;
        free(temp);
        return ;
    }

}
int main(){
    Node* 
    return 0;
}