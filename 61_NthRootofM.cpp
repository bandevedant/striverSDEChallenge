#include<bits/stdc++.h>
#define ll long long
using namespace std;
int NthRoot(int n, int m) {
  // Write your code here.
  long long  i=1,ans=1;
	   while(pow(i,n)<=m){
    	   ans=pow(i,n);
    	   if(ans==m)
    	   return i;
    	       i++;
	   }
	   return -1;
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
    