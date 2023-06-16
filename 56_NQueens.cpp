#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
bool isSafe(int row,int col,int n,vector<vector<int>>&board){
     //case when no cross diagonal queen is killed as we are
     // checking placing queen 
     //in board so only queens before the pos are threat
     int duprow=row,dupcol=col;
    
    
     while(row>=0 && col>=0){
         if(board[row][col]==1)
         return false;
         row--;
         col--;
     }
     
     
     //check for queen in same col
     row=duprow,col=dupcol;
     while(col>=0){
         if(board[row][col]==1)
         return false;
         col--;
     }
     //check for queen in right diagonal 
     col=dupcol;
     while(col>=0 && row<n){
         if(board[row][col]==1)
         return false;
        col--;
         row++;
     }
     return true;
     
}
void solve(int col,int n, vector<vector<int>>&board,vector<vector<int>>&ans){
   if(col==n){
       vector<int>temp;
       for(auto it:board){
           for(int i=0;i<n;i++){
               temp.push_back(it[i]);
           }
       }
           ans.push_back(temp);
   }
   for(int row=0;row<n;row++){
       if(isSafe(row,col,n,board)){
           board[row][col]=1;
           solve(col+1,n,board,ans);
           board[row][col]=0;
       }
   }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>board(n,vector<int>(n,0));
    vector<vector<int>>ans;
   solve(0,n,board,ans);    
    return ans; 
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
    