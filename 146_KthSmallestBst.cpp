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
void solve(TreeNode<int>* root,vector<int>&ino){
    if(root==NULL)
    return;

    solve(root->left,ino);
    ino.push_back(root->data);
    solve(root->right,ino);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    vector<int>ino;
    solve(root,ino);
    return ino[k-1];
    
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
    