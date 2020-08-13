#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_set<char>vowels;
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
    string s = "neil@DESKTOP-7A99AFR:/mnt/e/neil_stuff/LeetCode-Easy";
    int i = 0;
    string result  = "";
    for(int i  = 0;i<s.length();i++){
        if(vowels.find(s[i]) == vowels.end()){
            result+=s[i];
        }
    }
    cout<<s<<endl;
    cout<<result<<endl;
    return 0;
}
