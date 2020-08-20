#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int> nums, int k) {
        map<int,vector<int>>mp;
        for(int i = 0;i<nums.size();i++){
            int current = nums[i];
            if(mp.find(current)!=mp.end()){
                cout<<"RELAY  "<<current<<"\t"<<mp[current].size()<<endl;
                for(int j = 0;i<mp[current].size();j++){
                    cout<<"Eh;;o"<<endl;
                    if(abs(mp[current][j] - i)<=k){
                        return true;    
                    }
                }
                
                mp[current].push_back(i);
            }else{
                mp[current].push_back(i);
            }
           
        }
        for(auto itr:mp){
            cout<<itr.first<<"---> ";
            for(auto in:itr.second){
                cout<<in<<" ";
            }
            cout<<endl;
        }
        return false;
}
int main(int argc, char const *argv[])
{
    cout<<containsNearbyDuplicate({1,0,1,1},1)<<endl;
    return 0;
}
