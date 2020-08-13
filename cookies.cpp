#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int s,int e){
    int i = s-1;
    int j = s;
    for(;j<=e-1;){
        if(arr[j]<=arr[e]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void QuickSort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}
int findContentChildren(vector<int>& g, vector<int>& s) {
        int contentChildren  = 0;
        int i = g.size() -1;
        int j = s.size() -1;
        while(i>=0 && j>= 0){
            if(s[j]>=g[i]){
                i--;
                j--;
                contentChildren++;
            }
            else{
                i--;
            }
        }
        return contentChildren;
}
int main(int argc, char const *argv[])
{
    vector<int>child = {1,2,3};
    vector<int>choclate = {1,1};
    // QuickSort(child,0,child.size()-1);
    QuickSort(choclate,0,choclate.size()-1);
    cout<<findContentChildren(child,choclate)<<endl;
    return 0;
}
