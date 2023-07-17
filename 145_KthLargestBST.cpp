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
void solve(TreeNode<int>* root,vector<int>&ino){
    if(root==NULL)
    return;

    solve(root->left,ino);
    ino.push_back(root->data);
    solve(root->right,ino);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    vector<int>ino;
    solve(root,ino);
    if(k<=ino.size())
    return ino[ino.size()-k];
    else
    return -1;
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
    