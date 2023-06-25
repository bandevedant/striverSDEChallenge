#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 

//learned
void solve(stack<int> &st,int k){
    if(st.empty() || (!st.empty() && st.top()<k)){
		st.push(k);
		return;
	}
	int t=st.top();
	st.pop();
	solve(st,k);
	st.push(t);
}
void sortStack(stack<int> &st)
{
	// Write your code here
	if(st.empty())
	return;
	int k=st.top();
	st.pop();
	sortStack(st);
	
	solve(st,k);

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
    