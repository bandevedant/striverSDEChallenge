#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 

int matrixMultiplication(vector<int> &arr, int N)

{

    int dp[N][N];

    

    for(int i=1;i<N;i++)dp[i][i]=0;

 

    for(int i=N-1;i>=1;i--){

        for(int j=i+1;j<N;j++){

            int mini=1e9;

 

            for(int k=i;k<j;k++){

                

                int steps=arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];

 

                if(steps<mini)mini=steps;

                  }

                

                dp[i][j]= mini;

 

        }

    }

 

    return dp[1][N-1];

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
    