#include<bits/stdc++.h>
using namespace std;
bool isSame(struct TreeNode *s,struct TreeNode *t){
    if(s==NULL || t == NULL){
        return s==NULL && t==NULL;
    }
    else if(s->val == t->val){
        return isSame(s->left,t->left) && isSame(s->right||t->right);
    }else{
        return false;
    }
}
bool solution(tree s,tree t){
    if(s == nullptr)return false;
    else if(isSame(s,t)){
        return true;
    }else{
        if(isSame(s->left,t)||isSame(s->right,t){
            return true;
        }
    }
    
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
