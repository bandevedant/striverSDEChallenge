#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
long solve(int ind, int value,int *denominations,vector<vector<long>>&dp){
   
   if(ind==0){
       if(value%denominations[0]==0)
       return 1;
       else
       return 0;
   }
   if(dp[ind][value]!=-1) return dp[ind][value];

   long notTake=solve(ind-1,value,denominations,dp);
   long take=0;
   if(denominations[ind]<=value)
   take=solve(ind,value-denominations[ind],denominations,dp);

   return dp[ind][value]= take+notTake;

}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long>>dp(n,vector<long>(value+1,-1));
    return solve(n-1,value,denominations,dp);
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
    