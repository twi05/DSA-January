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
// O(N^2) Approach

class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return max(height(root->left), height(root->right)) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
                if (root == NULL)
            return 0;
        int lheight = height(root->left);
        int rheight = height(root->right);

        if (abs(lheight - rheight) > 1)
            return false;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        if (!left || !right)
        {
            return false;
        }
        return true;
    }

};

// O(N) Approach
/*
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return (dfs(root)!=-1);
    }


    int dfs(TreeNode * root){

        if(root==NULL)return 0;
      int lheight = dfs(root->left);
      int rheight = dfs(root->right);

    if(abs(lheight - rheight) >1)return -1;

    if(dfs(root->left) == -1) return -1;
    if(dfs(root->right) == -1) return -1;



    return max(lheight,rheight)+1;
    }

};*/
int main()
{

    return 0;
}