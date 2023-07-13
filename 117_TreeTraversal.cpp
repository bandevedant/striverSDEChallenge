#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

void preorder(BinaryTreeNode<int> *root,vector<int>&temp){
    if(root==NULL)
    return;

    temp.push_back(root->data);
    preorder(root->left,temp);
    preorder(root->right,temp);
}
void postorder(BinaryTreeNode<int> *root,vector<int>&temp1){
    if(root==NULL)
    return;

    postorder(root->left,temp1);
    postorder(root->right,temp1);
    temp1.push_back(root->data);
}
void inorder(BinaryTreeNode<int> *root,vector<int>&temp2){
    if(root==NULL)
    return;

    inorder(root->left,temp2);
    temp2.push_back(root->data);
    inorder(root->right,temp2);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans(3);

   
    vector<int>temp;
    inorder(root,temp);
    ans.push_back(temp);

    vector<int>temp1;
    preorder(root,temp1);
    ans.push_back(temp1);

     vector<int>temp2;
    postorder(root,temp2);
    ans.push_back(temp2);


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
    