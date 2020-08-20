#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    int lc,rc;
}
int sumLeft(struct node * root){
    if(root == NULL){
        return 0;
    }
    else if(root->lc!=NULL && root->lc->lc == NULL && root->lc->rc == NULL){
        return root->lc->val + sumLeft(root->rc);
    }
    else{
        return sumLeft(root->lc) + sumLeft(root->rc);
    }
}