#include<bits/stdc++.h>
#define ll long long
using namespace std;
int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {

    // Write your code here.

  

    int matrix[n][n];

    for(int i=0;i<n;i++)

    {

 

        for(int j=0;j<n;j++)

        {

            matrix[i][j]=1e9;

        }

    }

       for(int i=0;i<n;++i){

            matrix[i][i]=0;

        }

    for(auto it:edges)

    {

        int u=it[0]-1;

        int v=it[1]-1;

        int wt=it[2];

        matrix[u][v]=wt;

    }

    for(int k=0;k<n;k++)

    {

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<n;j++)

            {

                 if(matrix[i][k] !=1e9 and matrix[k][j] !=1e9){

                        matrix[i][j]=min(matrix[i][j],

                        matrix[i][k]+matrix[k][j]);

              }

             }

 

        }

    }

 

    return matrix[src-1][dest-1];

    

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
    