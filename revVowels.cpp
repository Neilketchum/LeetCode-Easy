#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // cout<<"HI";
    string s  = "leetcode";
    // cout<<"HI";
    // int i = 0;
    unordered_set <char> vowels;
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');
    vowels.insert('A');
    vowels.insert('E');
    vowels.insert('I');
    vowels.insert('O');
    vowels.insert('U');
    int i = 0;
    int j = s.length() - 1;
    while(i<=j){
        while(i<j && vowels.find(s[i]) == vowels.end()){
            i++;
        }
        while(i<j && vowels.find(s[j]) == vowels.end()){
            j--;
        }
        swap(s[i],s[j]);
        i++;
        j--;
        cout<<i<<j<<endl;
     }
    cout<<s<<endl;
    return 0;
}
