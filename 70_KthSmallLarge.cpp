#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	O(nlogn)
	vector<int>ans;
	sort(arr.begin(),arr.end());
	ans.push_back(arr[k-1]);
	ans.push_back(arr[n-k]);
	return ans;
	//O(n^2)
	//we can use  of two priority queue so 
	// priority_queue<int>pq1;
	// priority_queue<int,vector<int>,greater<int>>pq2;
	// for(int i=0;i<n;i++){
	// 	pq1.push(arr[i]);
	// 	pq2.push(arr[i]);
	// 	if(pq1.size()>k) 
	// 	pq1.pop();
	// 	if(pq2.size()>k) 
	// 	pq2.pop();

	// }
	// return {pq1.top(),pq2.top()};
	

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
    