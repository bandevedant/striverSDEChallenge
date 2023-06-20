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
        solve(root->left,ans);
        solve(root->right,ans);
        ans.push_back(root->data);
    }

}
//leanred from video
void solveIterative(TreeNode *root, vector<int> &ans) {
  //  if(root==NULL)
  // return;
  stack<TreeNode *> st;
  TreeNode *curr = root;

  while (curr != NULL || !st.empty()) {
    if (curr != NULL) {
      st.push(curr);
      curr = curr->left;
    } 
    else {
      TreeNode *temp = st.top()->right;
      if (temp == NULL) {
        temp = st.top();
        st.pop();
        ans.push_back(temp->data);
        while (!st.empty() && temp == st.top()->right) {
          temp = st.top();
          st.pop();
          ans.push_back(temp->data);
        }
      } 
      else {
        curr = temp;
      }
    }
  }
}
vector<int> getPostOrderTraversal(TreeNode *root)
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
    