#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
   //it seems level order traversal involved
   //just need to paly with pointers

    if(root==NULL){
    return;
    }
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
    BinaryTreeNode<int>*curr,*prev=NULL;
    for(int i=0;i<n;i++){

        curr=q.front();
        q.pop();
        if(curr->left)
        q.push(curr->left);
        if(curr->right)
        q.push(curr->right);

        if(prev){
        prev->next=curr;
        }
        prev=curr;

    }
        if(prev)
        prev->next=NULL;


    }
    

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
    