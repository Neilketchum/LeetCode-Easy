#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = 1;
            }else{
                mp[s[i]] +=1;
            }
        }
        for(int i = 0;i<s.length();i++){
            if(mp[s[i]]==1)return i;
        }
        return -1;
}
int main(int argc, char const *argv[])
{
    string s= "loveleetcode";
    int n = firstUniqChar(s);
    cout<<s[n]<<endl;
    return 0;
}
