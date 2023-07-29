#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 

void dfs(int v,vector<vector<int>> &ad,vector<int> &visited,stack<int>&st){

    visited[v]=1;

    for(auto n:ad[v]){

        if(visited[n]==0){

            dfs(n,ad,visited,st);

        }

    }

    st.push(v);

}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {

    stack<int>st;

    int n=v;

    vector<vector<int>> ad(n);

    for(int i=0;i<edges.size();i++){

        int u=edges[i][0],v=edges[i][1];

        ad[u].push_back(v);

    }

    vector<int>visited(n,0);

    for(int i=0;i<n;i++){

        if(visited[i]==0){

            dfs(i,ad,visited,st);

        }

    }

    vector<int>ans;

    while(!st.empty()){

        ans.push_back(st.top());

        st.pop();

    }

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
    