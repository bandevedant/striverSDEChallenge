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

//brute : O(N) if done with primary inorder traversal and iterate accordingly;
//optimised : O(h) auxillary space i.e everytime it take just height of node in space
class BSTiterator
{
    private: 
    stack<TreeNode<int>*>st;
    private:
    void pushAll(TreeNode<int>*root){
        for(;root!=NULL;st.push(root),root=root->left);
    }
    public:
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        pushAll(root);

    }

    int next()
    {
        // write your code here
        TreeNode<int>*temp=st.top();
        st.pop();
        if(temp->right)
        pushAll(temp->right);

        return temp->data;
    }

    bool hasNext()
    {
        // write your code here
        return !st.empty();
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
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
    