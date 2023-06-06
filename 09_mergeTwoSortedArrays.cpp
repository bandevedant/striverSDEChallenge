#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=m-1,j=n-1;
	int k=m+n-1;
	while(i>=0 || j>=0){
		if(arr1[i]>=arr2[j]){
			arr1[k]=arr1[i];
			k--;
			i--;
		}
		else{
			arr1[k]=arr2[j];
			j--;
			k--;
		}
	}
	return arr1;
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
    