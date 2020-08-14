#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> digits) {
        for(int i = digits.size();i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
int main(int argc, char const *argv[])
{
    vector<int>result = plusOne({4,3,2,1});
    for(auto itr:result){
        cout<<itr<<endl;
    }
    return 0;
}
