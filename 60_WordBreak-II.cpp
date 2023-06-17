#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
void solve(int ind,string &s,string ds, vector<string>&ans,unordered_map<string,int>&mp)
{
    if(ind==s.size()){
        ans.push_back(ds);
        return ;
    }
    for(int i=ind;i<s.size();i++){
        string temp=s.substr(ind,i-ind+1);
        if(mp[temp]>=1){
            int n=ds.size();
            ds+=temp+" ";
            solve(i+1,s,ds,ans,mp);
            ds.erase(n);
        }
    }
    
        
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string>ans;
    unordered_map<string,int>mp;
    for(int i=0;i<dictionary.size();i++){
        mp[dictionary[i]]++;
    }
    solve(0,s,"",ans,mp);
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
    