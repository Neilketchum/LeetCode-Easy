#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "Test1ng-Leet=code-Q!"; 
    int i  = 0;
    int j  = s.length() - 1;
    while(i < j){
        while(i<j && !isalpha(s[i])){
            i++;
        } 
        while(j>i && !isalpha(s[j])){
            j--;
        }
        swap(s[i++],s[j--]);
    }
    cout<<s<<endl;
    return 0;
}
