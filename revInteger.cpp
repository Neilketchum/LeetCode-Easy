class Solution {
public:
    int reverse(long long x) {
        if(x>=2147483647 || x<=-2147483647){
            return 0;
        }
         bool negative = x<0?true:false;
        if(negative){
            x = x*-1;
        }
        long long reverse  = 0;
        
        while(x>0){
            reverse = (reverse*10) + x%10;
            x = x/10;
        }
   
        if(negative){
            reverse = reverse*-1;
        }
        if(reverse>2147483647 || reverse<-2147483647){
            return 0;
        }
        else{
            return (int)reverse;
        }
    }
};