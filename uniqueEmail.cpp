#include<bits/stdc++.h>
using namespace std;
int numUniqueEmails(vector<string>& emails) {
         unordered_set<string>st;
        for(string email:emails){
            string adress;
            for(int i = 0;i<email.length();i++){
                char c = email[i];
                if(c =='.')
                    continue;
                else if (c == '+'){
                    while(email[i] != '@'){
                        i++;
                    }
                    adress+= email.substr(i); 
                    break;
                }else if(c == '@'){
                    adress += email.substr(i);
                    break;
                }
                else{
                    adress += c;
                }
            }
            st.insert(adress);
        }
        for(auto itr:st){
            cout<<itr<<endl;
        }
        return st.size();
    }
// int numUniqueEmails(vector<string>& emails) {
//     set<string>st;
//     for(String email:email){
//         char adress[100];
//     }
// }
int main(int argc, char const *argv[])
{
    vector<string>mails = {"test.email+alex@leetcode.com", "test.email@leetcode.com"};
    
    std::cout << numUniqueEmails(mails) << std::endl;
    return 0;
}
