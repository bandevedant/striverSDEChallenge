#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
void solve(int i,vector<int> &num,int sum, vector<int>&ans){

   if(i==num.size()){
       ans.push_back(sum);
       return ;
   }
   solve(i+1,num,sum+num[i],ans);
   solve(i+1,num,sum,ans);
}

vector<int> subsetSum(vector<int> &num) {
  // Write your code here.
  vector<int> ans;
  solve(0,num,0,ans);
sort(ans.begin(),ans.end());
  return ans;
//   int sum = 0;
//   vector<int> ans;
//   ans.push_back(0);
//   int n = num.size();
//   for (int i = 0; i < n; i++) {
//     sum += num[i];
//     ans.push_back(sum);
//     for (int j = i + 1; j < n; j++) {
//       sum += num[j];
//       ans.push_back(sum);
//     }
//     sum = 0;
//   }
//   sort(ans.begin(),ans.end());
//   return ans;
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
    