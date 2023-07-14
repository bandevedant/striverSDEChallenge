#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
//O(n) as 
int diameter(TreeNode<int> *root,int &height){
    if(root==NULL){
    return 0;
    }
    int lh=diameter(root->left,height);
    int rh=diameter(root->right,height);
    height=max(height,lh+rh);
    return 1+max(lh,rh);
   
}
// int height(TreeNode<int> *root,int &res){
//     if(root==NULL){
//     return 0;
//     }
//     int lh=0,rh=0;
//     int ld=height(root->left,lh);
//     int rd=height(root->right,rh);
//     res= 1+max(lh,rh);
//     int ans=max(lh+rh,max(ld,rd));
//     return ans;
// }
// int height(TreeNode<int> *root){
//     if(root==NULL)
//     return 0;
    
//     int lh=height(root->left);
//     int rh=height(root->right);
//     return 1+max(lh,rh);
// }
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    // if(root==NULL)
    // return NULL;
   //O(n^2)
   //as T(n)=T(n-1)+O(n)
    // int d1=height(root->left)+height(root->right);
    // int d2=diameterOfBinaryTree(root->left);
    // int d3=diameterOfBinaryTree(root->right);

    // return max(d1,max(d2,d3));
     
     if(root==NULL)
     return 0;
     int height=0;
      diameter(root,height);
      return height;
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
    