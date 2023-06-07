#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
   int n=arr.size();
   unordered_map<int,int>m;
   // for(int i=0;i<n;i++){
   //   m[arr[i]]++;
   // }
   for(int i=0;i<n;i++){
      if(m[s-arr[i]]){
        int k= m[s-arr[i]];
         // m[arr[i]]--;
         while(k--)
         ans.push_back({min(arr[i],s-arr[i]),max(arr[i],s-arr[i])});
      }
       m[arr[i]]++;
   }
   
   sort(ans.begin(),ans.end());
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
    