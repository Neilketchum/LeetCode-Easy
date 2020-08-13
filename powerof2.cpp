#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPowerOfTwo(int n) {
        long long i = 1;
        while(i<n){
            i = i * 2;
        }
        return i == n;
        
}
int main(int argc, char const *argv[])
{
    if(isPowerOfTwo(1)){
        cout<<"y"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    if(isPowerOfTwo(2)){
        cout<<"y"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    if(isPowerOfTwo(256)){
        cout<<"y"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    if(isPowerOfTwo(512)){
        cout<<"y"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
