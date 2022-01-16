#include <iostream>
#include <vector>
#include <queue>

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

void preOrderTraversal(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

void InOrderTraversal(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    InOrderTraversal(node->left);
    cout << node->data << " ";
    InOrderTraversal(node->right);
}

void postOrderTraversal(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->data << " ";
}

vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;
    queue<Node *> q;

    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        Node *node = q.front();
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
        level.push_back(node->data);
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    // cout << root->left->left->data;

    // preOrderTraversal(root);
    // InOrderTraversal(root);
    // postOrderTraversal(root);

    vector<vector<int>> ans;
    ans = levelOrder(root);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}