#include<bits/stdc++.h>
using namespace std;
// || !isalpha(s[j])|| !isdigit(s[j])
// || !isalpha(s[i])|| !isdigit(s[i])
bool isPalindrome(string s) {
        int i  = 0;
        int j = s.length() - 1;
        while(i<j){
            // s[i] = toupper(s[i]);
            // s[j] = toupper(s[j]);
            while( !isalnum(s[i]) && i <j){
                // cout<<"Hello"<<endl;
                i++;
            }
            while(!isalnum(s[j]) && i<j){
                j--;
            }
            if(toupper(s[i]) != toupper(s[j])){
                // cout<<s[i]<<endl;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
int main(int argc, char const *argv[])
{   
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s)<<endl;
    
    return 0;
}
