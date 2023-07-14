#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    //nice question
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL)
    return;
    int sum=0;
    if(root->left){
        sum+=root->left->data ;
    }
    if(root->right){
        sum+=root->right->data ;
    }
    //given condition 
    if(root->data<=sum)
    root->data= sum;
    else{
        if(root->left){
        root->left->data=root->data ;
        }
        if(root->right){
        root->right->data=root->data ;
        }
    }

    changeTree(root->left);
    changeTree(root->right);

    //backtrack
    int tot=0;
    if(root->left){
        tot+=root->left->data ;
    }
    if(root->right){
        tot+=root->right->data ;
    }
    if(root->left || root->right)
    root->data=tot;

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
    