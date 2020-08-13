#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct node TreeNode *left = NULL;
    struct node TreeNode *right = NULL
}

  int sum=0;
    int inorder(TreeNode* root,int L,int R)
    {
        if(root){
        inorder(root->left,L,R);
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        inorder(root->right,L,R);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root)return 0;
        return inorder(root,L,R);
    }