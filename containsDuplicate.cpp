#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>mp;
        for(int i = 0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}
