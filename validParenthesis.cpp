#include<bits/stdc++.h>
using namespace std;
void isValid(string s) {
    stack<char>stk;

    for(int i = 0;i<s.length();i++){
        if(s[i] == '{'|| s[i]=='(' || s[i]=='['){
            stk.push(s[i]);
        }else if(s[i] == ')' && !stk.empty() && stk.top() == '('){
            stk.pop();
        }
        else if(s[i] == '}' && !stk.empty() && stk.top() == '{'){
            stk.pop();
        }
        else if(s[i] == ']' && !stk.empty() && stk.top() == '['){
            stk.pop();
        }else{
            
            return false;
        }
    }
}
int main(int argc, char const *argv[])
{
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    string s4 = "([)]";
    if(isValid(s1))cout<<"Valid"<<endl;
    if(isValid(s2))cout<<"Valid"<<endl;
    if(isValid(s3))cout<<"Valid"<<endl;
    if(isValid(s4))cout<<"Valid"<<endl;
    return 0;
}
