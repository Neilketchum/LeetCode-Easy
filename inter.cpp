#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(auto itr:nums1){
            st.insert(itr);
        }
        set<int>inter;
        for(int i = 0;i<nums2.size();i++){
            if(!(st.find(nums2[i])==st.end())){
                inter.insert(nums2[i]);
            }
        }
        vector<int>result;
        for(auto itr:inter){
            result.push_back(itr);
        }
        return result;
    }
};  