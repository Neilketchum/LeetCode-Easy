#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "RLLLLRRRLR";
    int count = 0;
    int bal = 0;
    for(int i  = 0;i<s.length();i++){
        if(s[i] == 'L'){
            count++;
        }else if(s[i] == 'R'){
            count--;
        }
        if(count == 0){
            bal++;
        }
    }
    cout<<bal<<endl;
    return 0;
}
