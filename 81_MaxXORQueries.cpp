#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include <bits/stdc++.h>
struct Node{
	Node* links[2];
	bool containsKey(int bit){
		return (links[bit]!=NULL);
	}
	Node* get(int bit){
		return links[bit];
    }
	void put(int bit,Node* node){
		links[bit]=node;
	}
};
class Trie{
	Node*root;
	public:
	Trie(){
		root=new Node();
	}
	public:
	void insert(int num){
	    Node*node=root;
		for(int i=31;i>=0;i--){
			int bit=(num>>i)&1;
			if(!node->containsKey(bit)){
				node->put(bit,new Node());
			}
			node=node->get(bit);
		}
	}
	public:
	int getMax(int num){
		Node*node=root;
		int mx=0;
		for(int i=31;i>=0;i--){
			int bit=(num>>i)&1;
			if(node->containsKey(1-bit)){
			    mx=mx | (1<<i);
				node=node->get(1-bit);
			}
			else{
				node=node->get(bit);
			}
		}
		return mx;
	}
};
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
	sort(arr.begin(),arr.end());
	vector<pair<int,pair<int,int>>>oq;
	int q=queries.size();
	for(int i=0;i<q;i++){
	 oq.push_back({queries[i][1],{queries[i][0],i}});
	}
	sort(oq.begin(),oq.end());
	vector<int>ans(q);
	Trie trie;
	int ind=0;
	int n=arr.size();

	for(int i=0;i<q;i++){
		int ai=oq[i].first;
		int xi=oq[i].second.first;
		int qind=oq[i].second.second;

		while(ind<n && arr[ind]<=ai){
			trie.insert(arr[ind]);
			ind++;
		}
		if(ind==0)
		ans[qind]=-1;
		else 
		ans[qind]=trie.getMax(xi);
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
    