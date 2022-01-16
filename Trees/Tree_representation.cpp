#include<iostream>
using namespace std;

struct Node{
    Node* left;
    Node * right;
    int data;

    Node( int val){
        left = NULL;
        right = NULL;
       data = val;
    }
    
};
int main(){
    Node * root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    cout<<root->left->left->data ;

return 0;
}