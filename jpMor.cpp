#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string line;
    cin>>line;
    if(!isalpha(line[0]) || isalpha(line[1]) || line.length() != 2){
        cout<<"Error"<<endl;
        return 0;
    }
    char alpha = line[0];
    int n = line[1] - '0';
    map<char,int>val;
    val.insert({'a',0});
    val.insert({'b',1});
    val.insert({'c',2});
    val.insert({'d',3});
    val.insert({'e',4});
    val.insert({'f',5});
    val.insert({'g',6});
    val.insert({'h',7});
    // cout<<val[alpha]<<endl;
    // cout<<val.count(alpha)<<endl;
    // cout<<n<<endl;
    if(n>8 || val.count(alpha) == 0){
        cout<<"Error"<<endl;
    }
    else{
        if((val[alpha] + n)%2==0 )
            cout<<"White"<<endl;
        else{
            cout<<"Black"<<endl;
        }
    }
    return 0;
}
