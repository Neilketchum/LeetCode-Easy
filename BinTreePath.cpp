#include<bits/stdc++.h>
using namespace std;
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
class Solution {
public:
    void dfs(TreeNode *root,string path,vector<string> &treePath){
        path += to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            treePath.push_back(path);
            
        }
        if(root->left!=NULL){
            dfs(root->left,path + "->",treePath);
        }
        if(root->right!=NULL){
            dfs(root->right,path + "->",treePath);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>treePath;
        if(root==NULL){
            return treePath;
        }
        dfs(root,"",treePath);
        return treePath;
    }   
};

