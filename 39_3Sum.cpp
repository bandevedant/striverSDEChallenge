#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	int sum=0;
	for(int i=0;i<n-2;i++){
		int l=i+1,h=n-1;
		// sum+=arr[i];
		while(l<h){
			sum=arr[i]+arr[l]+arr[h];
			if(sum==K){
				ans.push_back({arr[i],arr[l],arr[h]});
				l++;
				h--;
				while(l<n && arr[l]==arr[l-1])
				l++;
				while(h>i && arr[h]==arr[h+1])
				h--;
			}
			else if(sum>K){
				h--;
			}else{
				l++;
			}
		}
		while(i<n-1 && arr[i]==arr[i+1])
		i++;
	}
	// if(ans.size()==0)
	// return {{-1}};
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
    