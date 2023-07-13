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
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int>ans;
    if(root==NULL)
    return {};

    deque<BinaryTreeNode<int>*>q;
    bool flag=false;

    q.push_front(root);

    while(!q.empty()){
        
        int n=q.size();

        for(int i=0;i<n;i++){
            if(flag==false){
                BinaryTreeNode<int> *temp=q.front();
                q.pop_front();
                ans.push_back(temp->data);
                if(temp->left)
                q.push_back(temp->left);
                if(temp->right)
                q.push_back(temp->right);
            }
            else{
                BinaryTreeNode<int> *curr=q.back();
                q.pop_back();
                ans.push_back(curr->data);
                if(curr->right)
                q.push_front(curr->right);
                if(curr->left)
                q.push_front(curr->left);
            }
        }
        flag=!flag;

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
    