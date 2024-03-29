#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>

void dfs(int node, vector<int>adj[],vector<int>&vis,stack<int>&st){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it])
            dfs(it,adj,vis,st);
        }
        st.push(node);    
}
void dfsT(int node, vector<int>adjT[],vector<int>&vis,vector<int>&scc){
        vis[node]=1;
        scc.push_back(node);
        for(auto it:adjT[node]){
            if(!vis[it])
            dfsT(it,adjT,vis,scc);
        }    
}
vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges)
{
        vector<int>adj[n],adjT[n];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adjT[it[1]].push_back(it[0]);
        }
         vector<int>vis(n,0);
         stack<int>st;
         for(int i=0;i<n;++i){
             if(!vis[i]){
                 dfs(i,adj,vis,st);
             }
         }
         for(int i=0;i<n;++i) vis[i]=0;
         vector<vector<int>>scc;
         while(!st.empty()){
             int node=st.top();
             st.pop();
            vector<int>temp;
            if(!vis[node]){
                dfsT(node,adjT,vis,temp);
            }
            scc.push_back(temp);
         }
         return scc;
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
    