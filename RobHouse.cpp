#include<bits/stdc++.h>
using namespace std;
int Max_Rob(vector<int>& nums,int i,int * dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=0){
            return dp[i];
        }
        return dp[i] =  max(Max_Rob(nums,i+2,dp)+nums[i],Max_Rob(nums,i+3,dp)+nums[i+1]);
    }
int rob(vector<int>& nums) {
        int dp[120] = {0}; 
        return Max_Rob(nums,0,dp);
           
    }
int robBU(vector<int>& nums){
    int dp[nums.size()];
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]);
    for(int i = 2;i<nums.size();i++){
        dp[i] = max(nums[i] + dp[i-2],dp[i-1]);
    }
    return dp[nums.size()-1];
}
int main(int argc, char const *argv[])
{
    vector<int>nums = {2,1,1,2};
    cout<<robBU(nums)<<endl;
    return 0;
}