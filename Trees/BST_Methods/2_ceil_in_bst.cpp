// Ceil of BST

#include <iostream>
using namespace std;

int ceil(TreeNode *root, int key)
{

    int ceil = -1;
    if (root->data == key)
    {
        ceil = root->data;
        return ceil;
    }
    else if (root->data > key)
    {
        ceil = root->data;
        root = root->right;
    }
    else
    {
        ceil = root->data;
        root = root->left;
    }
}

int main()
{

    return 0;
}