#include<bits/stdc++.h>
#define ll long long
using namespace std;
/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int>* solve(vector<int> &inOrder, vector<int> &postOrder,
                      int si,int ei,int &i){

    if(si>ei) return NULL;

    TreeNode<int>*root=new TreeNode<int>(postOrder[i--]);
    int j;

    for(int k=si;k<=ei;k++){
        if(inOrder[k]==root->data){
            j=k;
            break;
        }
    }
    root->right=solve(inOrder,postOrder,j+1,ei,i);
    root->left=solve(inOrder,postOrder,si,j-1,i);

    return root;

}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     int i=postOrder.size()-1;
   TreeNode<int>*ans= solve(inOrder,postOrder,0,inOrder.size()-1,i);
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
    