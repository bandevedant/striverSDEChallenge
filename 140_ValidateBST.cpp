#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
bool solve(BinaryTreeNode<int> *root,long long mn,long long mx){
   
   if(root==NULL)
   return true;
   if(root->data>mx || root->data<mn)
   return false;

   return (solve(root->left,mn,root->data) && solve(root->right,root->data,mx));
   
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    // if(root==NULL)
    // return true;
    // if(root->left==NULL && root->right==NULL)
    // return true;
    return solve(root,INT_MIN,INT_MAX);
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
    