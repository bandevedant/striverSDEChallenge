#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
      vector<int>ans;
    if(root==NULL)
    return ans;

  map<int,vector<int>>mp;
    mp[0].push_back(root->data);

    queue<pair<TreeNode<int> *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        TreeNode<int> *curr=it.first;
        
        if(curr->left){
            mp[it.second-1].push_back(curr->left->data);
            q.push({curr->left,it.second-1});
        }
        if(curr->right){
            mp[it.second+1].push_back(curr->right->data);
            q.push({curr->right,it.second+1});
        }
    }
    for(auto it:mp){
        for(auto i:it.second)
        ans.push_back(i);
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
    