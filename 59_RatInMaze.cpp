#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
void solve(int i,int j,vector<vector<int> > &maze, int n,
vector<vector<int>>&ans, vector<vector<int>>&res){
 
 if(i<0 || j<0 || i>=n || j>=n || ans[i][j]==1 || maze[i][j]==0)
 return;
  if(i==n-1 && j==n-1){
    vector<int >temp;
    ans[i][j]=1;
    for(int row=0;row<n;row++){
      for(int col=0;col<n;col++){
        temp.push_back(ans[row][col]);
      }
    }
    ans[i][j]=0;
    res.push_back(temp);
    return;
  }
    ans[i][j]=1;
    solve(i+1,j,maze,n,ans,res);
    solve(i,j+1,maze,n,ans,res);
    solve(i-1,j,maze,n,ans,res);
    solve(i,j-1,maze,n,ans,res);
    ans[i][j]=0;
  
   
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
  vector<vector<int>>ans(n,vector<int>(n,0));
  vector<vector<int>>res;
  if(maze[0][0]==1)
  solve(0,0,maze,n,ans,res);

  return res;
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
    