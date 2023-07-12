#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
vector<int>z_function(string s){
	int n=s.size();
	vector<int>z(n,0);
	int l=0,r=0;
	for(int i=1;i<n;i++){
		if(i<r){
			z[i]=min(r-i,z[i-l]);
		}
		while(i+z[i]<n && s[z[i]]==s[i+z[i]])
		z[i]++;
		if(i+z[i]>r){
			l=i;
			r=i+z[i];
		}
	}
	return z;
}
int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
	
	p+='#';
	p+=s;
	int cnt=0;
	vector<int>ans=z_function(p);
	for(int i=0;i<ans.size();i++){
		if(ans[i]==m)
		cnt++;
	}
	return cnt;
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
    