#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
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
void leftview(TreeNode<int>* root,vector<int>&v){
    if(root==NULL)
    return;

    if(root->left){
        v.push_back(root->data);
        leftview(root->left,v);
    }
    else if(root->right){
        v.push_back(root->data);
        leftview(root->right,v);
    }
}
void bottomview(TreeNode<int>* root,vector<int>&v){
    if(root==NULL)
    return;

    bottomview(root->left,v);

    if(root->left==NULL && root->right==NULL)
    v.push_back(root->data);

    bottomview(root->right,v);

}
void rightview(TreeNode<int>* root,vector<int>&v){
     if(root==NULL)
     return;

    if(root->right){
        rightview(root->right,v);
        v.push_back(root->data);
    }
    else if(root->left){
        rightview(root->left,v);
        v.push_back(root->data);
    }

}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    //it is nothing but three different traversal 
    //left view 
    //bottom view
    //right view

    vector<int>v;
    // if(root==NULL)
    // return NULL;

    if(root->left==NULL && root->right==NULL)
    return {root->data};
    v.push_back(root->data);
    leftview(root->left,v);
    bottomview(root,v);
    rightview(root->right,v);

    return v;

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
    