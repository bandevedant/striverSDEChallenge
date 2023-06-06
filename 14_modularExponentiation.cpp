#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	//tle partial passed
	// long long ans=1;
	// while(n--){
	// 	ans=(ans*x)%m;
		
	// }
	// return ans;
	long long ans=1;
	while(n>0){
		if(n&1){
			ans=(1ll*(ans)*(x%m))%m;
		}

		x=(1ll*(x)%m*(x)%m)%m;
		n=n>>1;

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
    