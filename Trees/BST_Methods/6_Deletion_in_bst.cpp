
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
    TreeNode *search(TreeNode *root, int key)
    {
        if (!root)
            return NULL;
        TreeNode *prev = NULL;
        while (root != NULL)
        {
            prev = root;
            if (root->val == key)
            {
                return prev;
            }
            else if (root->val > key)
                root = root->left;
            else
                root = root->right;
        }
        return NULL;
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        TreeNode *prev = search(root, key);
        if (!prev)
        {
            return root;
        }
        else
        {
            if(prev->left->left ==NULL || prev->right->right ==NULL){
                prev->left = prev->left->left ;
                prev->right = prev->right->right;

            }
            if (prev->val > key)
            {
                prev->left ->left = 
            }
        }
    }
};
int main()
{

    return 0;
}