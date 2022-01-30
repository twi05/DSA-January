#include <iostream>
#include <vector>
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
    void preorder(TreeNode *t, vector<int> &v)
    {
        if (!t)
            return;

        v.push_back(t->val);
        preorder(t->left,v);
        preorder(t->right,v);
        }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> first;
        vector<int> second;

        preorder(p, first);
        preorder(q, second);

        if(first.size() != second.size()){
            return false;
        }
        for(int i=0; i<first.size(); i++){
            if(first[i]!= second[i])
            return false;

        }
        return true;
    }
};

int main()
{

    return 0;
}