#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>

void dfs(int r[],int c[],int& row,int& col,vector<vector<int>>&vis,int** &arr,int n,int m){

   vis[row][col] = 1;

 

   for(int i=0;i<8;i++){

            int nrow = row + r[i];

            int ncol = col + c[i];

            if(nrow>=0 && nrow < n && ncol>=0 && ncol<m && arr[nrow][ncol] == 1 && !vis[nrow][ncol]){

                dfs(r,c,nrow,ncol,vis,arr,n,m);

            }

   }

}

 

int getTotalIslands(int** arr, int n, int m)

{

   vector<vector<int>>vis(n,vector<int>(m,0));

   int cnt = 0;

   int r[] = {0,1,1,1,0,-1,-1,-1};

   int c[] = {1,1,0,-1,-1,-1,0,1};

   for(int i = 0;i<n;i++){

      for(int j = 0;j<m;j++){

      if(!vis[i][j] && arr[i][j] == 1){

         cnt++;

         dfs(r,c,i,j,vis,arr,n,m);

      }

   }

   }

   return cnt;

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
    