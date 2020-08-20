/**
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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void preorder(TreeNode *root,vector<int> &arr){
        if(root){
            arr.push_back(root->val);
            preorder(root->left,arr);
            preorder(root->right,arr);
        }
        arr.push_back(-1);
        return;
    }
    void inorder(TreeNode *root,vector<int> &arr){
        if(root){
            inorder(root->left,arr);
             arr.push_back(root->val);
            inorder(root->right,arr);
        }
        arr.push_back(-1);
        return;
    }
    void postorder(TreeNode *root,vector<int> &arr){
        if(root){
            postorder(root->left,arr);
            postorder(root->right,arr);
            arr.push_back(root->val);
        }
        arr.push_back(-1);
        return;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q==NULL){
            return true;
        }
       
        vector<int>ppre;
        vector<int>pin;
        vector<int>ppost;
        vector<int>qpre;
        vector<int>qpost;
        vector<int>qin;
        preorder(p,ppre);
        preorder(q,qpre);
        inorder(p,pin);
        inorder(q,qin);
        postorder(p,ppost);
        postorder(q,qpost);
        if(ppre == qpre && pin == qin && ppost ==qpost){
            return true;
        }
        return false;
    }
};