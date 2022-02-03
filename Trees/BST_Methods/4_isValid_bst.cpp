
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),         left (left), right(right) {}
};

class Solution
{
public:
    bool isLesser(TreeNode *root, int val)
    {
        if (!root)
            return true;
        if (root->val < val && isLesser(root->left, val) && isLesser(root->right, val))
           return true;

        else
            return false;
    }
    bool isGreater(TreeNode *root, int val)
    {
        if (!root)
            return true;
        if (root->val > val && isGreater(root->left, val) && isGreater(root->right, val))
            return true;

        else
            return false;
    }

    bool isValidBST(TreeNode *root)
    {

        if (!root)
            return true;
        if (isLesser(root->left, root->val) && isGreater(root->right, root->val) && isValidBST(root->left) && isValidBST(root->right))
        {
            return true;
        }
        else
            return false;
    }
};
