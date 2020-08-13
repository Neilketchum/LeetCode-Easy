#include<bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>max_heap;
        for(auto itr:stones){
            max_heap.push(itr);
        }
        while(max_heap.size() > 1){
            int stoneOne = max_heap.top();
            max_heap.pop();
            int stoneTwo = max_heap.top();
            max_heap.pop();
            if(stoneOne!=stoneTwo){
                max_heap.push(stoneOne - stoneTwo);
            }
        }
        if(max_heap.size() == 1){
            return max_heap.top();
        }       
        return 0 ;
}
int main(int argc, char const *argv[])
{
    vector<int>stones = {2,7,4,1,8,1};
    cout<<lastStoneWeight(stones)<<endl;
    
    return 0;
}
