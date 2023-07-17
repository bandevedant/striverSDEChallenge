#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
//pata nahi runtime error de raha he

class BSTiterator
{
    // private: 
    stack<BinaryTreeNode<int>*>st;
    bool reverse=true;
    //reverse->true--before
    //reverse->false---next
    // private:
    void pushAll(BinaryTreeNode<int>*root){
        for(;root!=NULL;){
            st.push(root);
            if(reverse==true)
            root=root->right;
            else
            root=root->left;
        }
    }
    public:
    BSTiterator(BinaryTreeNode<int> *root,bool isReverse)
    {
        // write your code here
        reverse=isReverse;
        pushAll(root);

    }

    int next()
    {
        // write your code here
        BinaryTreeNode<int>*temp=st.top();
        st.pop();
        if(!reverse)
        pushAll(temp->right);
        else
        pushAll(temp->left);

        return temp->data;
    }

    bool hasNext()
    {
        // write your code here
        return !st.empty();
    }
};
//naive approach O(N) space can do better in O(H) space using BST iterator
// void solve(BinaryTreeNode<int>* root,vector<int>&ino){
//     if(root==NULL)
//     return;

//     solve(root->left,ino);
//     ino.push_back(root->data);
//     solve(root->right,ino);
// }

int next(stack<BinaryTreeNode<int>*> &st, BinaryTreeNode<int>* root){
    BinaryTreeNode<int>* curr = st.top(); st.pop();
    int x = curr -> data;
    if (curr -> right == NULL) return x;
    curr = curr -> right;
    while (curr){
        st.push(curr);
        curr = curr -> left;
    }
    return x;
}
int before(stack<BinaryTreeNode<int>*> &st, BinaryTreeNode<int>* root){
    BinaryTreeNode<int>* curr = st.top(); st.pop();
    int x = curr -> data;
    if (curr -> left == NULL) return x;
    curr = curr -> left;
    while (curr){
        st.push(curr);
        curr = curr -> right;
    }
    return x;
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    //nice itrator approach to show in interview but have
    //complications

    stack<BinaryTreeNode<int>*> nst, bst;
        
    BinaryTreeNode<int>* curr = root ;
    while (curr){
        nst.push(curr);
        curr = curr -> left;
    }
    curr = root ;
    while (curr){
        bst.push(curr);
        curr = curr -> right;
    }
    int i = next(nst, root);
    int j = before(bst, root);
    while (i != j){
        int sum = i + j;
        if (sum == k) return true;
        else if (sum < k){
            i = next(nst, root);
        }else{
            j = before(bst, root);
        }
    }
    return false;
    // if(root==NULL)
    // return false;
    // //next
    // BSTiterator l(root->left,false);
    // //before
    // BSTiterator r(root->right,true);

    // int i=l.next();
    // int j=r.next();

    // while(i<j){
    //     // if(i==NULL || j==NULL)
    //     // return false;
    //     if(i+j==k)
    //     return true;
    //     else if(i+j<k)
    //     i=l.next();
    //     else
    //     j=r.next();
    // }
    // return false;


    // vector<int>ino;
    // solve(root,ino);

    // int l=0,h=ino.size()-1;

    // while(l<=h){
    //     if(ino[l]+ino[h]==k)
    //     return true;

    //     if(ino[l]+ino[h]<k)
    //     l++;
    //     else
    //     h--;
    // }
    // return false;
   
    
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
    