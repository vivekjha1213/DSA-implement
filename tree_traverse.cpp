#include<iostream>
using namespace std;

struct Node {

    int data;
    struct Node* left,*right;
   
    Node(int data)
 {
 this->data = data;
left=right=NULL;

    }


};


void preorder(Node* root){

if (root == NULL)
return;

      cout<<root->data<<"\t";
     preorder(root->left);
       preorder(root->right);
 
  
 



}

void level_order(Node* root){










}

int main(){

struct Node* root = new Node(1);

root->left = new Node(2);

root->right= new Node(3);

root->left->left = new Node(4);
root->left->right = new Node(5);


preorder(root);


    return (0);
}


