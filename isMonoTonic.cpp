class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int inc = 0;
        int dec = 0;
        for(int i = 0;i<A.size()-1;i++){
            if(A[i+1]>A[i]){
                inc++;
            }else if(A[i+1]<A[i]){
                dec++;
            }
        }
        if(inc == 0 || dec == 0){
            return true;
        }else{
            return false;
        }
    }
};