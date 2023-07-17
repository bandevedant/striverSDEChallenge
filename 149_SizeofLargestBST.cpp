#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
//ref gfg website
struct Ret{
    int sz;
    int mx;
    int mn;
    int ans;
    bool isBST;
};

Ret solve(TreeNode<int>* root){
    
    if(root==NULL)
      return {0, INT_MIN, INT_MAX, 0, true};
    if(root->left==NULL && root->right==NULL)
      return {1, root->data, root->data, 1, true};

      Ret l=solve(root->left);
      Ret r=solve(root->right);

      Ret res;
      res.sz=1+l.sz+r.sz;

      if(l.isBST && r.isBST && l.mx<root->data && r.mn>root->data)
      {
          res.mn=min(l.mn,root->data);
          res.mx=max(r.mx,root->data);
          res.ans=l.ans+r.ans+1;
          res.isBST=true;
          return res;
      }
      res.ans=max(l.ans,r.ans);
      res.isBST=false;

      return res;
}



int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    return solve(root).ans;
    
}

int main(){
  
 srand(time(NULL));
ios::sync_with_stdio(false);
cin.tie(0);
 
int t;
cin>>t;
while(t--){

}
  return 0;
}
    