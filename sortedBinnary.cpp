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
    TreeNode*  constructBst(vector<int>& nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid = left + (right-left)/2;
        TreeNode *current =  new TreeNode(nums[mid]);
        current->val = nums[mid];
        current->left = constructBst(nums,left,mid-1);
        current->right = constructBst(nums,mid+1,right);
        return current;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        return constructBst(nums,0,nums.size()-1);
    }
};