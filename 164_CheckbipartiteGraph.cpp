#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool dfs(int v,int c,vector<int> &color,vector<vector<int>> &edges){

    color[v]=c;

    int nc=(c==0)?1:0;

    for(int i=0;i<edges.size();i++){

        if(edges[v][i]==1){

            if(color[i]==-1){

                dfs(i,nc,color,edges);

            }else{

                if(color[i]==c)return false;

            }

        }

    }

    return true;

}

bool isGraphBirpatite(vector<vector<int>> &edges) {

    vector<int>color(edges.size(),-1);

    for(int i=0;i<edges.size();i++){

        if(color[i]==-1){

            if(!dfs(i,0,color,edges))return false;

        }

    }

    return true;

    // Write your code here.

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
    