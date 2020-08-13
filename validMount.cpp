#include<bits/stdc++.h>
using namespace std;
bool validMountainArray(vector<int>& A) {
        int brk;
        for(int i = 0;i<A.size();i++){
            if(i == A.size()-1){
                return false;
            }
            if(A[i]>A[i+1]){
                brk = i;
                break;
            }
        }
        for(int i = brk + 1;i<A.size();i++){
            if(A[i] < A[i+1]){
                return false;
            }
        }
        return true;
    }

int main(int argc, char const *argv[])
{
    vector<int>v = {0,1};
    cout<<validMountainArray(v)<<endl;    
    return 0;
}
