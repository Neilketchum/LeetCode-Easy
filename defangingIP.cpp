#include<bits/stdc++.h>
using namespace std;
string defangIPaddr(string address) {
        string result = "";
        for(int i = 0;i!='\0';i++){
            if(address[i] == "."){
                result += "[.]";
            }else{
                result+= address[i];
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{
    cout<<defangIPaddr("1.1.1.1")<<endl; 
    return 0;
}
