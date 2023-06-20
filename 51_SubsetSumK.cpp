#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include <bits/stdc++.h> 
void solve(int ind,vector<int>&v, vector<vector<int>>&ans,vector<int>&temp,int k){
    if(ind>=v.size()){
    if(k==0){
        ans.push_back(temp);
    }
        return;

    }
    temp.push_back(v[ind]);
    solve(ind+1,v,ans,temp,k-v[ind]);
    temp.pop_back();
    solve(ind+1,v,ans,temp,k);


}

vector<vector<int>> findSubsetsThatSumToK(vector<int> v, int n, int k)
{
    // Write your code here.
     vector<vector<int>>ans;
     vector<int>temp;
    solve(0,v,ans,temp,k);
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
    