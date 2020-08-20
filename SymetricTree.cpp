#include<bits/stdc++.h>
using namespace std;
// Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
class Solution {
public:
    bool symmetric(TreeNode *left,TreeNode *right){
        if(left == NULL || right == NULL){
            return left == NULL && right == NULL;
        }
        if(left->val != right->val){
            return false;
        }
        return symmetric(left->left,right->right) && symmetric(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }        
        return symmetric(root->left,root->right);
    }
};