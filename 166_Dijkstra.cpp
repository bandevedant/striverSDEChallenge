#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {

// Write your code here.

vector<int>dis(vertices,INT_MAX);

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

dis[source]=0;

vector<pair<int,int>> adj[vertices];

for(auto i:vec)

{

adj[i[0]].push_back({i[1],i[2]});

adj[i[1]].push_back({i[0],i[2]});

}

pq.push({0,source});

while(!pq.empty()){

int dist=pq.top().first;

int node=pq.top().second;

pq.pop();

for(auto it:adj[node]){

int ewt=it.second;

int adjNode=it.first;

if(dist+ewt<dis[adjNode]){

dis[adjNode]=dist+ewt;

pq.push({dis[adjNode],adjNode});

}

}

}

return dis;

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
    