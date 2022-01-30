// https://leetcode.com/problems/deepest-leaves-sum/
#include <iostream>
using namespace std;
int main()
{
    return 0;
}
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
    int depth = 0;
    int d = 0;
    int deepestLeavesSum(TreeNode *root)
    {
        int sum = 0;
        result(root, sum, d);
        return sum;
    }
    void result(TreeNode *root, int &sum, int d)
    {
        if (!root)
            return;

        if (root->left == NULL && root->right == NULL)
        {
            if (depth < d)
            {
                sum = root->val;
                depth = d;
            }
            else
            {
                sum += root->val;
            }
        }
        else
        {
            result(root->left, sum, d + 1);
            result(root->right, sum, d + 1);
        }
    }
};
