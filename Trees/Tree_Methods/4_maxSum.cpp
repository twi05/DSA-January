

#include <iostream>

using namespace std;
int main()
{

    return 0;
} /**
   * Definition for a binary tree node.
   * struct TreeNode {
   *     int val;
   *     TreeNode *left;
   *     TreeNode *right;
   *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
   *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
   * };
   */
class Solution
{
public:
    int maxPathSum(TreeNode *root)
    {

        int maxi = INT_MIN;
        sum(root, maxi);
        return maxi;
    }

    int sum(TreeNode *root, int &maxi)
    {
        if (!root)
            return ;

        int lsum = max(0,sum(root->left, maxi));
        int rsum = max(0, sum(root->right, maxi));

        maxi = max(maxi, lsum + rsum + root->val);

        return root->val + max(lsum, rsum);
    }
};

// Something Wrong in below code;
class Solution
{
public:
    int maxPathSum(TreeNode *root)
    {

        int maxi = INT_MIN;
        sum(root, maxi);
        return maxi;
    }

    int sum(TreeNode *root, int &maxi)
    {
        if (!root)
            return 0;

        int lsum = sum(root->left, maxi);
        int rsum = sum(root->right, maxi);

        maxi = max(maxi, root->val);
        maxi = max(maxi, lsum);
        maxi = max(maxi, rsum);
        maxi = max(maxi, lsum + rsum + root->val);

        return root->val + max(lsum, rsum);
    }
};