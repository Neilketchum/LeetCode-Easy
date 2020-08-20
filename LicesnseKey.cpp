#include<bits/stdc++.h>
using namespace std;
string LicenseKeyFormat(string S,int K){
    string result = "";
    int count = 0;
    int i =0;
    while(i<S.length()-1){
        if(S[i] == '-'){
            i--;
        }else if(count == K){
            result +=  '-';
            count = 0;
        }else{
            char c = 
            result += toupper(S[i]);
            count++;
            i--;
        }
    }
    return result;
}
int main(int argc, char const *argv[])
{
    cout<<LicenseKeyFormat("5F3Z-2e-9-w",4)<<endl;  
    return 0;
}
