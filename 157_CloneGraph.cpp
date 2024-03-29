#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/

graphNode* dfs(graphNode* node,unordered_map<graphNode*,graphNode*>& um){
	vector<graphNode* > neighbor;
	graphNode* clone=new graphNode(node->data);
	um[node]=clone;
	for(auto it:node->neighbours){
		if(um.find(it)!=um.end()){
			neighbor.push_back(um[it]);
		}
		else{
			neighbor.push_back(dfs(it,um));
		}
	}
	clone->neighbours=neighbor;
	return clone;
}
graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
	unordered_map<graphNode*,graphNode*> um;
	if(node->neighbours.size()==0){
		graphNode* clone=new graphNode(node->data);
		return clone;
	}
	return dfs(node,um);
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
    