#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
string writeAsYouSpeak(int n) 
{
	// Write your code here.
	if(n==1) return "1";
	string temp="11";
	if(n==2)
	return temp;

	for(int i=3;i<=n;i++){
		string t="";
		int cnt=1;
		temp+='&';
		for(int j=1;j<temp.size();j++){
			if(temp[j]==temp[j-1]){
			cnt++;
			}
			else{
				t+=to_string(cnt);
				t+=temp[j-1];
				cnt=1;
			}
		}
		temp=t;
	} 	
	return temp;	
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
    