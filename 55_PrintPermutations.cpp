#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
void solve(int ind,int n,vector<string>&ans,string s){
    if(ind==n){
        ans.push_back(s);
        return;
    }
    for(int i=ind;i<n;i++){
        swap(s[i],s[ind]);
        solve(ind+1,n,ans,s);
        swap(s[i],s[ind]);
    }

}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    int n=s.size();
    solve(0,n,ans,s);
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
    