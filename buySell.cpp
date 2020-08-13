#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int>prices = {7,1,5,3,6,4};
     int min = INT_MAX;
        int totmax = 0;
        for(int i = 0 ;i<prices.size();i++){
            if(prices[i] < min){
                min = prices[i];
            }
            else{
                totmax = max(totmax,prices[i] - min);
            }
        }
        cout<<totmax<<endl;
   return totmax;
}
