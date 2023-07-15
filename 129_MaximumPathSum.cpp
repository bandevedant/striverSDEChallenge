#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
 int solve(TreeNode<int>*root, int &res){

     if(root==NULL)
     return 0;
     
      int l=solve(root->left,res);
      int r=solve(root->right,res);
    //in case of negative inetgers are also included
     int temp=max(max(l,r)+root->val,root->val);
     int ans=l+r+root->val;

     res=max(ans,res);

     return temp;

}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL || root->left==NULL || root->right==NULL)
    return -1;
     int res=0;
    solve(root,res);
    return res;
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
    