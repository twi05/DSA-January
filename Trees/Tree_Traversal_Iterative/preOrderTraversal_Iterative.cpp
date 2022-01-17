#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;

    Node(int val)
    {
        left = NULL;
        right = NULL;
        data = val;
    }
};

vector<int> preOrderTraversal(Node *root)
{
    vector<int> ans;

    stack<Node*> s;
    s.push(root);

    while (!s.empty())
    {
        Node *node = s.top();
        s.pop();

        ans.push_back(node->data);
        if (node->right != NULL)
            s.push(node->right);
        if (node->left != NULL)
            s.push(node->left);
    }
    return ans;
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    // cout << root->left->left->data;
vector<int> ans;
  ans=  preOrderTraversal(root);
  for(int i=0;i<ans.size(); i++){
      cout<<ans[i];
  }
    return 0;
}