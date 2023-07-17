#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
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

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root==NULL)
    return NULL;

    if(root->data==P->data || root->data==Q->data)
    return root;

    TreeNode<int>*L=LCAinaBST(root->left,P,Q);
    TreeNode<int>*R=LCAinaBST(root->right,P,Q);

    if(L==NULL)
    return R;
    if(R==NULL)
    return L;
    
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
    