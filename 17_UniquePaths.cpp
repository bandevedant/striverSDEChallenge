#include<bits/stdc++.h>
#define ll long long
using namespace std;
//memoization
#include <bits/stdc++.h> 
int solve(int row,int col,int m,int n,vector<vector<int>>dp){

	if(row==m-1 && col==n-1){
		return 1;
	}
	if(row>=m || col>=n){
		return 0;
	}
	if(dp[row][col]!=-1)
	return dp[row][col];
	
	return dp[row][col]= solve(row,col+1,m,n,dp) + solve(row+1,col,m,n,dp);

}
int uniquePaths(int m, int n) {
	// Write your code here.
	
    vector<vector<int>>dp(m,vector<int>(n,-1));
	return solve(0,0,m,n,dp);
	
}
//recursion
#include <bits/stdc++.h> 
int solve(int row,int col,int m,int n){

	if(row==m-1 && col==n-1){
		return 1;
	}
	if(row>=m || col>=n){
		return 0;
	}
	
	
	return solve(row,col+1,m,n) + solve(row+1,col,m,n);

}
int uniquePaths(int m, int n) {
	// Write your code here.
	
	return solve(0,0,m,n);
	
}
//tabulation
#include <bits/stdc++.h> 

int uniquePaths(int m, int n) {
	// Write your code here.
	
    vector<vector<int>>dp(m,vector<int>(n,-1));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0)
			dp[i][j]=1;
			else{
				int up=0,left=0;
				if(i>0) 
				up =dp[i-1][j];
				if(j>0)
                left=dp[i][j-1];

				dp[i][j]=up+left;
			}
           
		}
	}
	return dp[m-1][n-1];
	
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
    