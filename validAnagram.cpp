#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    
    if(s.length() != t.length()){
        return false;
    }        
    int counts[26]  = {0};
    for(int i = 0 ;i<s.length();i++){
        counts[s[i]-'a']++;
        counts[t[i]-'a']--;
    }
    for(int i = 0;i<26;i++){
        // cout<<counts[i]<<endl;
        if(counts[i] !=0)return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    if(isAnagram("anagrama","nagaramb"))
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
