#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),    right(right) {}
};
 
class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        bool ans = false;
        result(root, targetSum, ans);
        return ans;

    }

    void result(TreeNode *root, int targetSum, bool &ans)
    {
        if (!root)
        {
           return;
        }
        if( root->left == NULL && root->right==NULL){
             if (targetSum  - root->val  == 0)
            {
                ans = true;
            }
            return;
        }

        result(root->left, targetSum - root->val,ans);
        result(root->right, targetSum - root->val,ans);
    }
};

int main(){

return 0;
}