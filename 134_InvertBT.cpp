#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
bool pathRootToLeaf(TreeNode<int> *root,stack<TreeNode<int>*>&st, TreeNode<int> *leaf){

    if(root==NULL)
    return true;
    st.push(root);

    if(root->left==NULL && root->right==NULL){
        if(root->data==leaf->data)
        return true;
        else{
            st.pop();
            return false;
        }
    }
    bool left=false,right=false;
    
    if(root->left)
    left=pathRootToLeaf(root->left,st,leaf);
    if(left)
    return true;
    if(root->right)
    right=pathRootToLeaf(root->right,st,leaf);
    if(right)
    return true;

    st.pop();
    return false;
   

}
TreeNode<int> * invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
	// Write your code here.
    //awesome question 
    if(root==NULL)
    return NULL;

    stack<TreeNode<int>*>st;
    pathRootToLeaf(root,st,leaf);

    TreeNode<int>*newRoot=st.top();
    st.pop();

    TreeNode<int>*parent=newRoot;

    while(!st.empty()){
        TreeNode<int>*curr=st.top();
        st.pop();

        if(curr->left==parent){
            curr->left=NULL;
            parent->left=curr;
        }
        else{
            curr->right=curr->left;
            curr->left=NULL;
            parent->left=curr;
        }
        parent=parent->left;
    }
    return newRoot;
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
    