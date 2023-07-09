#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>

int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    vector<vector<int>>vis(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
            q.push({{i,j},0});
            vis[i][j]=1;
            }
        }
    }
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,-1,0,+1};
        int tm=0;
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();


        for(int i=0;i<4;i++){
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && 
            !vis[nrow][ncol] && grid[nrow][ncol]==1){
                q.push({{nrow,ncol},t+1});
                vis[nrow][ncol]=1;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]==1)
            return -1;
        }
    }
    return tm;
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
    