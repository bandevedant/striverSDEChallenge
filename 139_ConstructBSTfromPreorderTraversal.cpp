#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* solve(vector<int> &preOrder,int &ind,
         int lowerbound,int upperbound){

  if(ind==preOrder.size() )
  return NULL;

   TreeNode<int>*root=NULL;

   if(ind<preOrder.size()){
    root=new TreeNode<int>(preOrder[ind]);
    ind++;
   }
   if(ind<preOrder.size() && preOrder[ind]<root->data && preOrder[ind]>=lowerbound)
    root->left=solve(preOrder,ind,lowerbound,root->data);
   if(ind<preOrder.size() && preOrder[ind]>=root->data && preOrder[ind]<upperbound)
    root->right=solve(preOrder,ind,root->data+1,upperbound);

    return root;

}
// TreeNode<int>* solve(vector<int> &preOrder,int &ind,int upperbound){

//   if(ind==preOrder.size() || preOrder[ind]>upperbound)
//   return NULL;

//     TreeNode<int>*root=new TreeNode<int>(preOrder[ind++]);
//     root->left=solve(preOrder,ind,root->data);
//     root->right=solve(preOrder,ind,INT_MAX);

//     return root;

// }
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int ind=0;
    return solve(preOrder,ind,INT_MIN,INT_MAX);
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
    