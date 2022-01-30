// floor of BST

#include <iostream>
using namespace std;

// val <=key
int floorBST(TreeNode *root, int key)
{

    int floor = -1;
    if (root->data == key)
    {
        floor = root->data;
        return floor;
    }
    else if (root->data > key)
    {
        floor = root->data;
        root = root->right;
    }
    else
    {
        floor = root->data;
        root = root->left;
    }
}

int main()
{

    return 0;
}