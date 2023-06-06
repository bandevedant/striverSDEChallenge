#include<bits/stdc++.h>
#define ll long long
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m) {
  int l = 0, r = m - 1;
  int t = 0, b = n - 1;
  int temp, k;
  if (m == 1 || n == 1){
      return;
  }
   while(l<r && t<b){
        temp=mat[t][l];
       for(int i=l+1;i<=r;i++){
            k=mat[t][i];
           mat[t][i]=temp;
           temp=k;
       }
       t++;

       for(int i=t;i<=b;i++){
            k=mat[i][r];
           mat[i][r]=temp;
           temp=k;
       }
       r--;
       for(int i=r;i>=l;i--){
           k=mat[b][i];
           mat[b][i]=temp;
           temp=k;
       }
       b--;
       for(int i=b;i>=t;i--){
           k=mat[i][l];
           mat[i][l]=temp;
           temp=k;
       }
       l++;

       mat[t-1][l-1]=temp;
   }

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
    