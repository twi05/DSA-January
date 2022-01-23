#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;

    Node(int val)
    {
        left = NULL;
        right = NULL;
        data = val;
    }
};

int depth(Node *node){
    if(node == NULL)
    return 0;

    return 1 + max(depth(node->left), depth(node->right));
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left  = new Node(4);
    // cout << root->left->left->data;
cout<<depth(root);
    return 0;
}