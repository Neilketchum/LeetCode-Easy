#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
    stack<char>sStack;
    stack<char>tStack;
    for(int i = 0;i<s.length();i++){
        if(s[i]!='#')
            sStack.push(s[i]);
        else if(!sStack.empty()){
            sStack.pop();
        }
    }
    for(int i = 0;i<t.length();i++){
        if(t[i]!='#')
            tStack.push(t[i]);
        else if(!tStack.empty()){
            tStack.pop();
        }
    }
    while(!sStack.empty()){
        char current = sStack.top();
        sStack.pop();
        // cout<<current<<endl;
        if(tStack.empty() || current != tStack.top()){
            return false;
        }
        tStack.pop();
    }
    return sStack.empty() && tStack.empty();
}
// bool backspaceCompare1(string s,string t){
//     int i = s.length() - 1;
//     int j = t.length() - 1;
//     while(i!=0||j !=0){
//         if(s[i]=='#'){
//             i = i -2;
//             while(s[i]=='#'){
//                 i = i-2;
//             }
//         }
//         if(t[j]=='#'){
//             j = j -2;
//             while(t[j]=='#'){
//                 j = j-2;
//             }
//         }
//         if(s[i]!=t[j]){
//             cout<<s[i]<<t[j]<<endl;
//             return false;
//         }
//         i--;
//         j--;
//     }
//     cout<<i<<j<<endl;
//     return i ==0 && j ==0;
// }
int main(int argc, char const *argv[])
{
    string  S = "a#c#c", T = "b";
    if(backspaceCompare1("ab#c","ad#c")){
        cout<<"Same";
    }else{
        cout<<"Not same";
    }

    return 0;
}
