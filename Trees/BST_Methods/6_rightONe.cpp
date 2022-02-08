
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
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (!root)
            return root;

        if (root->val == key)
        {
            return helper(root);
        }
        TreeNode* dummy = root;
        while(root!=NULL){
            if(root->val>key){
                if(root->left!=NULL && root->left->val ==key){
                    root->left = helper(root->left);
                }
                else
                root= root->left;
            }
            else{
              if(root->val<key){
                if(root->right!=NULL && root->right->val ==key){
                    root->right = helper(root->right);
                }
                else
                root= root->right;
            }
            }
        }
        return dummy;
    }

    TreeNode *helper(TreeNode *root)
    {
        if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
            return root->left;
        TreeNode* rightChild = root->right;
        TreeNode * lastRight = findLastRight(root->left);
        lastRight->right = rightChild; 

        return root->left;
    }

    TreeNode* findLastRight(TreeNode* root){
        if(root->right ==NULL)return root;
        return findLastRight(root->right);
    }
};

int main()
{

    return 0;
}