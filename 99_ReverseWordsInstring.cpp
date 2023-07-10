#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>

string reverseString(string &str){
	// Write your code here.
	string ans;
	stack<string>st;
	for(int i=0;i<str.size();i++){
		if(str[i]==' ')
		continue;
		string word="";
		while(i<str.size() && str[i]!=' ' ){
			word+=str[i];
			i++;
		}
		st.push(word);
		
	}	
	while(!st.empty()){
		ans+=st.top();
		st.pop();
		if(!st.empty())
		ans+=" ";
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
    