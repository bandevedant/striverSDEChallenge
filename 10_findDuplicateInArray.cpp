#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	// int mx=*max_element(arr.begin(),arr.end());
	// int mp[mx+1];

	//brute

// 	map<int,int>mp;
// 	for(int i=0;i<n;i++){
// 		mp[arr[i]]++;
// 	}
//   for(auto it:mp){
// 	  if(it.second!=1)
// 	  return it.first;
//   }

// optimal
for(int i=0;i<n;i++){
	arr[arr[i]%n]+=n;
}
for(int i=0;i<n;i++){
	if(arr[i]>=2*n)
	return i;
}
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
    