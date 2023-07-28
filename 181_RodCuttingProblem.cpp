#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>>dp(n,vector<int>(n+1,-1));
	for(int j=0;j<=n;j++){
		dp[0][j]=j*price[0];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<=n;j++){
			int notTake=0+dp[i-1][j];
			int take=INT_MIN;
			if(i+1<=j)
			take=price[i]+dp[i][j-i-1];

			dp[i][j]=max(take,notTake);
		}
	}
	return dp[n-1][n];
	
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
    