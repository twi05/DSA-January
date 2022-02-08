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
Node *create(Node *root)
{
    Node *p, *t;
    int x;
    queue <Node*> q;
    cout<<"Enter val for root";
    cin>>x;
    p = new Node(x);
    q.push(p);

    while(!q.empty())
    {
        p = q.front();
     q.pop();
        cout<<"Enter left value";
        cin>> x;
        t = new Node(x);
        p->left = t;
        q.push(t);
    }




}
int main()
{

    Node *root = NULL;
    root = create(root);
    return 0;
}