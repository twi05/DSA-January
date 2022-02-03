#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void insertion(TreeNode *root, int data)
{
    TreeNode *prev = NULL;

    while (root != NULL)
    {
        prev = root;
        if (root->val == data)
        {
            return;
        }
        else if (root->val < data)
            root = root->right;
        else
            root = root->left;
    }

    TreeNode *new_node = new TreeNode;
    new_node->val = data;
    if (prev->val > data)
    {
        prev->left = new_node;
    }
    else
        prev->right = new_node;
}

int main()
{

    return 0;
}
