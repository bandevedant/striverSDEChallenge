#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
// bool isPalindrome(string s){
// 	int n=s.size();
// 	for(int i=0;i<n/2;i++){
// 		if(s[i]!=s[n-i-1])
// 		return false;
// 	}
// 	return true;
// }
vector<int>prefix_function(string s){
	int n=s.size();

	vector<int>pi(n);
	pi[0]=0;
	for(int i=1;i<n;i++){
		int j=pi[i-1];
		while(j>0 && s[i]!=s[j])
		j=pi[j-1];

		if(s[i]==s[j])
		j++;

		pi[i]=j;
	}
 return pi;
}
int minCharsforPalindrome(string str) {
	// Write your code here.
	//kmp algp of prefix function seem in solution
	string temp=str;
	reverse(temp.begin(),temp.end());
	str+='&';
	str+=temp;
	vector<int>ans=prefix_function(str);
	return temp.size()-ans[ans.size()-1];

	//from discussion forum best solution

	// int i=0,j=str.size()-1;
	// int x=j,ans=0;
	// while(i<j){
	// 	if(str[i]==str[j]){
	// 		i++;
	// 		j--;
	// 	}
	// 	else{
	// 		ans++;
	// 		i=0;
	// 		j=--x;
	// 	}

	// }
	// return ans;
	//tle for 1 tc
	// if(isPalindrome(str)) return 0;

	// for(int i=str.size()-1;i>=0;i--){
	// 	string temp=str.substr(0,i);
		
	//   if(isPalindrome(temp)) return str.size()-temp.size();
	// }
	// return 0;
	
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
    