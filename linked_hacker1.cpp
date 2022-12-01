#include<iostream>
using namespace std;
class Node
{

public:
   int data;
   Node* next;
};

void print(Node* n){

while (n!=NULL)
{
    cout<<n->data<<"\n";

 n = n->next;


}


}




int main()
 
{
   Node* head =NULL;
   Node* second = NULL;

   head = new Node();
   second = new Node();

   head->data= 1;
   head->next =second;

    second->data= 2;
   second->next =NULL;


print(head);


   

    
    return 0;
}
