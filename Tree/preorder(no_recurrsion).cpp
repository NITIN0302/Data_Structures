#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* creaTree(int val,TreeNode* root)
{
    if(val == -1)
    {
        return NULL;
    }
    root = new TreeNode(val);
    int a;
    cout<<"Enter the value in left Node of "<<val<<": ";
    cin>>a;
    root->left = creaTree(a,root->left);

    cout<<"Enter the value in right Node of "<<val<<": ";
    cin>>a;
    root->right = creaTree(a,root->right);
    return root;
}

void preorder(TreeNode* root)
{
    stack<TreeNode*> s;
    while(1)
    {
        while(!root)
        {
            s.push(root);
            cout<<root->val<<" ";
            root = root->left;
        }
        if(s.empty())
        {
            break;
        }
        root = s.top();
        root = root->right;
    }
}

int main()
{
    int val;
    cout<<"Enter the value of root: ";
    cin>>val;
    TreeNode *root = creaTree(val,root);
    preorder(root);
    return 0;
}