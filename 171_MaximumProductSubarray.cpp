#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int maxi=INT_MIN;
	int mul=1;
	for(int i=0;i<n;i++){
		mul=mul*arr[i];
		maxi=max(maxi,mul);
		if(mul==0) mul=1;
	}
	 mul=1;
	for(int i=n-1;i>=0;i--){
		mul=mul*arr[i];
		maxi=max(maxi,mul);
		if(mul==0) mul=1;
	}
	return maxi;
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
    