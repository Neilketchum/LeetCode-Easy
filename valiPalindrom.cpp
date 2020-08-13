#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int i ,int j){
    
    while(i<j){
        if(s[i++]!=s[j--])return false;
    }
    return true;
}
bool validPalindrome(string s) {
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return  isPalindrome(s,i,j-1)||isPalindrome(s,i+1,j);
        }
        i++;
        j--;

    }   
    return true;     
}
int main(int argc, char const *argv[])
{
    if(validPalindrome("abca")){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Not Posstible";
    }
    return 0;
}
