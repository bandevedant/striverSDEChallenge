#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
  // Write your code here.
  vector<int> ans;
  if (root == NULL)
    return ans;

  map<int, TreeNode<int> *> mp;
  mp[0] = root;

  queue<pair<TreeNode<int> *, int>> q;
  q.push({root, 0});

  while (!q.empty()) {
    auto it = q.front();
    q.pop();
    TreeNode<int> *curr = it.first;
    if (curr->left) {
      if (mp[it.second - 1] == NULL) {
        mp[it.second - 1] = curr->left;
      }
      q.push({curr->left, it.second - 1});
    }
    if (curr->right) {
      if (mp[it.second + 1] == NULL) {
        mp[it.second + 1] = curr->right;
      }
      q.push({curr->right, it.second + 1});
    }
  }
  for (auto it : mp) {
    ans.push_back(it.second->val);
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
    