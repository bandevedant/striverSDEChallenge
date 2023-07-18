#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n) {

  // Write your code here
  vector<int> ans;
  priority_queue<int> mxhp;
  priority_queue<int, vector<int>, greater<int>> mnhp;

  for (int i = 0; i < n; i++) {
    if (mxhp.empty() || mxhp.top() >= arr[i])
      mxhp.push(arr[i]);
    else
      mnhp.push(arr[i]);
    if (mxhp.size() > mnhp.size() + 1) {
      mnhp.push(mxhp.top());
      mxhp.pop();
    } else if (mxhp.size() < mnhp.size()) {
      mxhp.push(mnhp.top());
      mnhp.pop();
    }

    if (i % 2 == 0) {
      ans.push_back(mxhp.top());
    } else {
      ans.push_back((mxhp.top() + mnhp.top()) / 2);
    }
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
    