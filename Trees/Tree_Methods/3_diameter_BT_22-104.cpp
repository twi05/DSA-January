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
class Solution
{
public:
    int maxi = 0;
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return max(height(root->left), height(root->right));
    }

    void result(TreeNode *root)
    {
        if (!root)
            return ;

        int lheight = height(root->left);
        int rheight = height(root->left);

        maxi = max(maxi, lheight + rheight);

        result(root->left);
        result(root->right);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        result(root);
        return maxi;
    }
};
