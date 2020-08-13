#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<string> &words,string order){
        map<char,int>ord;
    for(int i = 0;i<order.size();i++){
        ord.insert({order[i],i});
    }
    for(int i = 0;i<words.size()-1;i++){
        string first = words[i];
        string second = words[i+1];
        bool flag = false;
        int count = 0;
        for(int k = 0;k<min(first.length(),second.length());k++){
            if(ord[first[k]]>ord[second[k]] && flag == false){
                cout<<first[k]<<second[k]<<k<<endl;
                return false;
            }else if(ord[first[k]]==ord[second[k]] && flag == false){
                count++;
            }
            else{
                flag = true;
                // continue;
            }
        }

        if(count == min(first.length(),second.length()) ){
            if(second.length() < first.length()){
                return false;
            }
        }
    }
    
    return true;
}
int main(int argc, char const *argv[])
{
    vector<string>words = {"apple","app"};
    string order = "abcdefghijklmnopqrstuvwxyz";
    if(isSorted(words,order))
        cout<<"Yes";
    else{
        cout<<"No";
    }
    return 0;
}
