#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
bool solve(int i,int k,int n,vector<int> &arr,vector<vector<int>> &dp){

    if(k==0)
    return true;
    if(i==0)
    return arr[0]==k;
    if(dp[i][k]!=-1) return dp[i][k];
    
    bool notTake=solve(i-1,k,n,arr,dp);
    bool take=false;
    if(arr[i]<=k)
    take=solve(i-1,k-arr[i],n,arr,dp);

    return  dp[i][k]= take|| notTake;
    
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    return solve(n-1,k,n,arr,dp);
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
    