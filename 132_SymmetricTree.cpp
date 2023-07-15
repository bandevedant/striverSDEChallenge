#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool solve(BinaryTreeNode<int>* rl,BinaryTreeNode<int>* rr){
       
       if(rl==NULL || rr==NULL)
       return true;
    
        if(rr->data!=rl->data)
        return false;

         return (solve(rl->left,rr->right) && solve(rl->right,rr->left));
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.  
    // mirrorTree(root);
    
    if(root==NULL)
    return true;
    BinaryTreeNode<int>*rl=root->left;
    BinaryTreeNode<int>*rr=root->right;
    return solve(rl,rr);
   

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
    