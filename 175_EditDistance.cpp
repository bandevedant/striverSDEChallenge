#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
int solve(int i, int j, string str1, string str2, vector<vector<int>> dp) {
  if (i == 0)
    return j;
  if (j == 0)
    return i;

  if (dp[i][j] != -1)
    return dp[i][j];

  if (str1[i - 1] == str2[j - 1]) {
    return dp[i][j] = solve(i - 1, j - 1, str1, str2, dp);
  }
  return dp[i][j] = 1 + min(solve(i - 1, j, str1, str2, dp),
                            min(solve(i, j - 1, str1, str2, dp),
                                solve(i - 1, j - 1, str1, str2, dp)));
  // replace //delete //insert
}
int editDistance(string str1, string str2) {
  // write you code here
  int n = str1.size();
  int m = str2.size();
  //   vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
  //   return solve(n , m , str1, str2, dp);
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

  for (int i = 0; i <= n; i++)
    dp[i][0] = i;
  for (int j = 1; j <= m; j++)
    dp[0][j] = j;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (str1[i - 1] == str2[j - 1]) {
         dp[i][j] = dp[i-1][j-1];
      }
      else
       dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
    }
  }
  return dp[n][m];
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
    