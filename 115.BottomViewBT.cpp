#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    
    vector<int>ans;
    if(root==NULL)
    return ans;

   map<int,BinaryTreeNode<int> *>mp;
    mp[0]=root;

    queue<pair<BinaryTreeNode<int> *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        BinaryTreeNode<int> *curr=it.first;
        if(curr->left){
            mp[it.second-1]=curr->left;
            q.push({curr->left,it.second-1});
        }
        if(curr->right){
            mp[it.second+1]=curr->right;
            q.push({curr->right,it.second+1});
        }
    }
    for(auto it:mp){
        ans.push_back(it.second->data);
    }
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
    