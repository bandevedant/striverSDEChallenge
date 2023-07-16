#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
#include<bits/stdc++.h>


string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
 //do this question on leetcode better expalnation and use preoder traversal too
 //this level order
 //striver
    if(root == NULL){
        return "";
    }
    string ans;
    queue<TreeNode<int> *>q;
    q.push(root);
    while(q.empty()==false){
        TreeNode<int> * curr = q.front();
        q.pop();
        if(curr==NULL){
            ans+="#,";
            continue;
            }
           ans+= to_string(curr->data);
            ans+=",";
            q.push(curr->left);
            q.push(curr->right);
        
    }
    return ans;

}

TreeNode<int>* deserializeTree(string &seri)
{
 //    Write your code here for deserializing the tree
    if(seri.size() == 0){
        return NULL;
    }
    stringstream s(seri);
    string str;
    getline(s,str,',');
    TreeNode<int>* root = new TreeNode<int>(stoi(str));
    queue<TreeNode<int>*>q;
    q.push(root);
    while(q.empty()==false){
        TreeNode<int>* curr = q.front();
        q.pop();
        getline(s,str,',');
        if(str == "#"){
            curr->left = NULL;
        }
        else{
            TreeNode<int>* leftNode = new TreeNode<int> (stoi(str));
            curr->left = leftNode;
            q.push(leftNode);
        }
        getline(s,str,',');
        if(str == "#"){
            curr->right = NULL;
        }
        else{
            TreeNode<int>* rightNode = new TreeNode<int> (stoi(str));
            curr->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;

}

//yeh bhi logic me sahi he par pata nahi kyu galat he
//preorder traversal

// int num(string &serialized,int &ind){
//     string str="";
//     while(serialized[ind]!=" "){
//         str+=serialized[ind];
//         ind++;

//     }
//     if(str=="#")
//     return -1;
//     return stoi(str);
// }
// TreeNode<int>*solveD(string &serialized,int &ind){
//    int val=num(serialized,ind);
//    TreeNode<int>*ans=(val==-1) ? NULL : new TreeNode<int>(val);
//    if(ans){
//        ans->left=solveD(serialized,ind);
//        ans->right=solveD(serialized,ind);
//    }
//    return ans;
// }
// string serializeTree(TreeNode<int> *root) {
//   //    Write your code here for serializing the tree
//   //cant figure whats wrong
//   if(root==NULL)
//   return "-1";
  
//   return to_string(root->data)+" "+serializeTree(root->left)+serializeTree(root->right);

// }

// TreeNode<int> *deserializeTree(string &serialized) {
//   //    Write your code here for deserializing the tree
//   int ind=0;

//   return solveD(serialized,ind);
  
// }


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
    