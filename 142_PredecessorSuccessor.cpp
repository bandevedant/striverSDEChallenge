#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

//naive O(N) space do in O(H) space optimization
// void solve(BinaryTreeNode<int> *root, vector<int> &ino) {
//   if (root == NULL)
//     return;

//   solve(root->left, ino);
//   ino.push_back(root->data);
//   solve(root->right, ino);
// }
int successor(BinaryTreeNode<int> *root, int key){
    int suc=-1;
    while(root!=NULL){
        if(key>=root->data)
        root=root->right;
        else{
            suc=root->data;
            root=root->left;
        }
    }
    return suc;
}
int predecessor(BinaryTreeNode<int> *root, int key){
    int pred=-1;
    while(root!=NULL){
        if(key<=root->data){
            root=root->left;
        }
        else{
            pred=root->data;
            root=root->right;
        }
    }
    return pred;
}
pair<int, int> predecessorSuccessor(BinaryTreeNode<int> *root, int key) {
  // Write your code here.

   return {predecessor(root,key),successor(root,key)};

  //naive
//   vector<int> ino;
//   solve(root, ino);
//  int n=ino.size();
//   if (n < 2)
//     return {-1, -1};
//   if (n==2 && key==ino[0])
//   return{-1,ino[1]};
//   if(n==2 && key==ino[1])
//   return {ino[0],-1};
//   if (n >= 3) {

//       if (key == ino[0])
//         return {-1, ino[1]};
//       if (key == ino[n - 1])
//         return {ino[n - 2], -1};

//       for (int i = 1; i < n - 1; i++) {
//         if (ino[i] == key) {
//           return {ino[i - 1], ino[i + 1]};
//         }
//       }
//       // return {};
//     }
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
    