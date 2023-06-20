#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void solve(TreeNode *root,vector<int>&ans){

    // if(root==NULL)
    // return;

    if(root!=NULL){
        ans.push_back(root->data);
        solve(root->left,ans);
        solve(root->right,ans);
    }

}
void solveIterative(TreeNode *root,vector<int>&ans){
     if(root==NULL)
    return;
    stack<TreeNode*>st;
    st.push(root);
    while( !st.empty()){
         TreeNode* curr=st.top();
        ans.push_back(curr->data);
        st.pop();
    
        if(curr->right!=NULL) st.push(curr->right);
        if(curr->left!=NULL) st.push(curr->left);
    }
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
     vector<int>ans;
    solve(root,ans);
    return ans;
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
    