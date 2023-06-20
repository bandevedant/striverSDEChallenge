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
void solveRecursive(TreeNode *root,vector<int>&ans){


    if(root!=NULL){
        solveRecursive(root->left,ans);
        ans.push_back(root->data);
       solveRecursive(root->right,ans);
    }

}
void solveIterative(TreeNode *root,vector<int>&ans){
   stack<TreeNode*>st;
   TreeNode* curr=root;
   
   while(curr!=NULL || !st.empty()){
       while(curr!=NULL){
           st.push(curr);
           curr=curr->left;
       }
       curr=st.top();
       st.pop();
       ans.push_back(curr->data);
       curr=curr->right;
       
   }
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ans;
    //  solveRecursive(root,ans);
     solveIterative(root,ans);
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
    