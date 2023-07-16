#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>*solve(vector<int> &arr, int start,int end){
    if(start>end)
    return NULL;

    int mid=start+(end-start)/2;
    TreeNode<int>*root=new TreeNode<int>(arr[mid]);
    
    root->left=solve(arr,start,mid-1);
    root->right=solve(arr,mid+1,end);

    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
   return solve(arr,0,n-1);
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
    