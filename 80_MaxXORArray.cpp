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
int maximumXor(vector<int> arr)
{
    // Write your code here. 
    Trie trie;
    for(auto &it:arr){
        trie.insert(it);
    } 
    int mx=0;
    for(auto it:arr){
        mx=max(mx,trie.getMax(it));
    }
    return mx;
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
    