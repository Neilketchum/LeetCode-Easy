#include<bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char,int>count;
    for(int i = 0;i<magazine.length();i++){
        if(count.find(magazine[i])==count.end()){
            count[magazine[i]] = 1;
        }else{
            count[magazine[i]] += 1;
        }
    }    
    for(int i = 0;i<ransomNote.length();i++){
        if(count.find(ransomNote[i])==count.end()){
            return false;
        }        
        else if(count[ransomNote[i]]==0){
            return false;
        }
        count[ransomNote[i]] -= 1;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    if(canConstruct("aa","aab")){
        cout<<"Possible"<<endl;
    }else{
        cout<<"Not Possible"<<endl;
    }
    return 0;
}
