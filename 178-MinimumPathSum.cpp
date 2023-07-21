#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
//memo and recursion
// int solve(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp){

//    if(i==0 && j==0 )
//    return grid[0][0];

//    if(i<0 || j<0)
//    return 1e9;//as we want to minimum path sum on adding max value it will be 
//    //ignored 
//    if(dp[i][j]!=-1)
//    return dp[i][j];

//    int up=grid[i][j]+solve(i-1,j,grid,dp);
//    int left=grid[i][j]+solve(i,j-1,grid,dp);

//    return dp[i][j]=min(left,up);
// }
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n=grid.size();
    int m=grid[0].size();

//   vector<vector<int>>dp(n,vector<int>(m,-1));
//memoiation 
//  return solve(n-1,m-1,grid,dp);
//tabulation
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(i==0 && j==0)
//         dp[i][j]=grid[0][0];
//         else{
//             int up=grid[i][j];
//             if(i>0)
//             up+=dp[i-1][j];
//             else
//             up+=1e9;
//             int left=grid[i][j];
//             if(j>0)
//             left+=dp[i][j-1];
//             else
//             left+=1e9;

//             dp[i][j]=min(up,left);
//         }
//     }
// }
//return dp[n-1][m-1];

//space optimisation
vector<int>prev(m,0);
for(int i=0;i<n;i++){
    vector<int>curr(m,0);
    for(int j=0;j<m;j++){
        if(i==0 && j==0)
        curr[j]=grid[0][0];
        else{
            int up=grid[i][j];
            if(i>0)
            up+=prev[j];
            else
            up+=1e9;
            int left=grid[i][j];
            if(j>0)
            left+=curr[j-1];
            else
            left+=1e9;

            curr[j]=min(up,left);
        }
    }
    prev=curr;
}
return prev[m-1];

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
    