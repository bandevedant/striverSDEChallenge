#include<bits/stdc++.h>
#define ll long long
using namespace std;

int findMajorityElement(int arr[], int n) {
  // Write your code here.
   int cnt=0;
   int el;
   for(int i=0;i<n;i++){
	   if(cnt==0){
		   cnt++;
		   el=arr[i];
	   }
	   else if(el==arr[i]){
		   cnt++;
	   }else{
		   cnt--;
	   }
   }
   int c=0;
  for(int i=0;i<n;i++){
	  if(arr[i]==el)
	  c++;
  }
  if(c>n/2)
   return el;


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
    