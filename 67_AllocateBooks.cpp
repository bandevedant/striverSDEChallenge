#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
bool isPossible(int n,int m, vector<int>&time,long long mid){
	long long  temp=0;
	long long cnt=0;
	for(int i=0;i<m;i++){
		if(temp+time[i]<=mid){
			temp+=time[i];
		}
		else{
			cnt++;
			temp=time[i];
		}
	}
	return cnt<n;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	//learn from striver ---bouncer
	

	

 

    long long ans=0;

    long long low=*max_element(time.begin(),time.end()),high=accumulate(time.begin(),time.end(),0LL);
	while(low<=high){
		long long mid=low+(high-low)/2;
		if(isPossible(n,m,time,mid)){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
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
    