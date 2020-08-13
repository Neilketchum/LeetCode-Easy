#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mp;
    vector<int>result;
    for(int i = 0;i<nums.size();i++){
        if(mp.find(target-nums[i])==mp.end()){
            mp.insert({nums[i],i});
        }else{
            result.push_back(mp[target-nums[i]]);
            result.push_back(i);
            // cout<<nums[i]<<endl;
            return result;
        }
    }    
    return result;    
}
int main(int argc, char const *argv[])
{
    vector<int>nums  = {3,2,4};
    vector<int>result = twoSum(nums,6);
    for(auto itr :result){
        cout<<itr<<endl;
    }
    return 0;
}
