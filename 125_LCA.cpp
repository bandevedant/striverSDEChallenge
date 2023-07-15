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
// bool findPath(TreeNode<int> *root, int val,vector<int>&p){

//     if(root==NULL)
//     return false;
//     p.push_back(root->data);
//     if(root->data==val)
//     return true;
//     if((root->left && findPath(root->left,val,p)) || (root->right && findPath(root->right,val,p))){
//         return true;
//     }
//     p.pop_back();
//     return false;

// }
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    //O(N)
    if(root==NULL)
    return -1;

    if(root->data==x || root->data==y)
    return root->data;

    int left=lowestCommonAncestor(root->left,  x,  y);
    int right=lowestCommonAncestor(root->right,  x,  y);

    if(left==-1)
    return right;
    else if(right==-1)
    return left;

    return root->data;

        //O(N^2)
    // vector<int>p1,p2;
    // if(findPath(root,x,p1)==false || findPath(root,y,p2)==false){
    //     return -1;
    // }
    // int i;
    // for( i=0;i<p1.size() && i<p2.size();i++){
    //     if(p1[i]!=p2[i])
    //     break;
    // }
    // if(i!=0)
    // return p1[i-1];
    // else
    // return p1[0];
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
    