#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
bool isPossible(vector<int>&pos,int dist,int c){
   int cnt=1;
   int last=pos[0];
   for(int i=1;i<pos.size();i++){
	   if(pos[i]-last>=dist){
		   last=pos[i];
		   cnt++;
	   }
	  if(cnt==c)
	  return true;
   }
   return false;
}
int chessTournament(vector<int> pos , int n ,  int c){
	// Write your code here
	sort(pos.begin(),pos.end());
//1 tc
    // for(int i=1;i<=pos[n-1]-pos[0];i++){
	// 	if(isPossible(pos,i,c))
	// 	continue;
	// 	else
	// 	return i-1;
	// }

//binary search
int l=1,h=pos[n-1]-pos[0];
int ans=-1;
while(l<=h){
	int mid=l+(h-l)/2;
	if(isPossible(pos,mid,c)){
		ans=mid;
		l=mid+1;
	}
	else{
		h=mid-1;
	}
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
    