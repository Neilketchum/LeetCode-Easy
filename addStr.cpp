#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int j1=num1.length()-1;
        int j2=num2.length()-1;
        
        int carry=0;
        while(j1>=0||j2>=0){
            
            int num=0;
            
            if(j1>=0){
                num+=(num1[j1]-'0');
                j1--;
            }
            
            if(j2>=0){
                num+=(num2[j2]-'0');
                j2--;
            }
            
            num+=carry;
            
            carry=num/10;
            
            //cout<<num<<endl;
            ans+=(to_string(num%10));
        }
        
        while(carry){
            ans+=to_string(carry%10);
            carry=carry/10;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout<<s.addStrings("2341413434133325321","5234525224892284628947894717135732985612956")<<endl;    
    return 0;
}
