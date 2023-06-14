#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
void solve(int ind,vector<int> &arr, vector<vector<int>>&ans,vector<int> &ds){

        ans.push_back(ds);
    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1])
        continue;
        ds.push_back(arr[i]);
        solve(i+1,arr,ans,ds);
        ds.pop_back();


    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
     
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(),arr.end());
     solve(0,arr,ans,ds );
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
    