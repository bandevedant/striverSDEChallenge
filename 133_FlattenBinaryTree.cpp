#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

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
//tc:O(N)
    //sc:O(N)
// void solve(TreeNode<int>*root,TreeNode<int>*&prev){

//     if(root==NULL)
//     return;

//     solve(root->right,prev);
//     solve(root->left,prev);

//     root->right=prev;
//     root->left=NULL;
//     prev=root;
// }

    //tc:O(N)
    //sc:O(1)
void solve(TreeNode<int>*root){
TreeNode<int>*curr=root;
    while(curr!=NULL){
        if(curr->left){
            TreeNode<int>*prev=curr->left;
            while(prev->right)
            prev=prev->right;

            prev->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;
        }
        curr=curr->right;
    }

}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    

    if(root==NULL)
    return NULL;
    solve(root);
    // TreeNode<int>*prev=NULL;
    // solve(root,prev);

    return root;
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
    