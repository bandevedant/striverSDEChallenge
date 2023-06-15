#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include "bits/stdc++.h"

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
		int j=0;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			continue;
		}
		else{
			j++;
			arr[j]=arr[i];
		}
	}
	
  return j+1;
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
    