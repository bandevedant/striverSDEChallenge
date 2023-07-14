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

TreeNode<int>* solve(vector<int> &inorder, vector<int> &preorder,int si,int ei,int &i){

    if(si>ei) return NULL;

    TreeNode<int>*root=new TreeNode<int>(preorder[i++]);
    int j;

    for(int k=si;k<=ei;k++){
        if(inorder[k]==root->data){
            j=k;
            break;
        }
    }
    root->left=solve(inorder,preorder,si,j-1,i);
    root->right=solve(inorder,preorder,j+1,ei,i);

    return root;

}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    int i=0;
   TreeNode<int>*ans= solve(inorder,preorder,0,inorder.size()-1,i);
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
    