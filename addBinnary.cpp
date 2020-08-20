#include<bits/stdc++.h>
using namespace std;
string addBinnary(string a,string b){
    int i = a.length()-1,j = b.length()-1,carry = 0;
    string result = "";
    while(i >=0 || j >= 0){
        int sum = carry;
        if(i>=0){
            sum = sum + (a[i--] - '0');
        }
        if(j>=0){
            sum  = sum + (b[j--] - '0');
        }
        result = result + to_string(sum%2);

        carry = sum/2;
    }
    if(carry > 0){
        result   = result + '1';
    }
     i = 0;
     j = result.length() -1;
     while(i<j){
         swap(result[i++],result[j--]);
     }
     return result;
}
int main(int argc, char const *argv[])
{
    cout<<addBinnary("1010","1011")<<endl;
    return 0;
}
