#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";
        if(strs.size() == 0) return "";
        int index = 0;
    // cout<<"Hello"<<endl;
        for(int j = 0;j<strs[0].length();j++){
            char c = strs[0][j];
            for(int i = 1;i<strs.size();i++){
                // cout<<c<<strs[i][index]<<endl;
                if(c != strs[i][index] || index >= strs[i].length()){
                    return lcp;
                }
            }
            index++;
            lcp += c;
            // cout<<c;
            // cout<<lcp;
    }
    return lcp;
 }
int main(int argc, char const *argv[])
{
    vector<string> strs = {"flower","flow","flight"};
    
    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}
