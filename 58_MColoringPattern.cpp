#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
bool isPossible(int node,vector<vector<int>> &mat,int n, int i,vector<int>&color){
 for(int k=0;k<n;k++){
     if( mat[k][node]==1 && color[k]==i){
         return false;
     }
 }
//  color[node]=i;
 return true;
}
bool solve(int node,vector<vector<int>> &mat,int n, int m,vector<int>&color){
 if(node==n){
     return true;
 }
 for(int i=1;i<=m;i++){
     if(isPossible(node,mat,n,i,color)){
        color[node]=i;
         if(solve(node+1,mat,n,m,color))
         return true;
         color[node]=0;
     }
 }
return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
vector<int>color(n,0);
 if(solve(0,mat,n,m,color))
 return "YES";
 else
 return "NO";
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
    