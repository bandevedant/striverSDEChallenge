#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
int solve(int ind,int w,vector<int> &values, vector<int> &weights,vector<vector<int>>&dp){
	if(ind==0 || w==0){
		if(weights[0]<=w)
		return dp[ind][w]=values[0];
		else
	    return 0;
	}
	if(dp[ind][w]!=-1) return dp[ind][w];
	int notTake=0+solve(ind-1,w,values,weights,dp);
	int take=INT_MIN;
	if(weights[ind]<=w){
		take=values[ind]+solve(ind-1,w-weights[ind],values,weights,dp);
	}
	return dp[ind][w]=max(take,notTake);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(w+1,-1));
return 	solve(n-1,w,values,weights,dp);

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
    