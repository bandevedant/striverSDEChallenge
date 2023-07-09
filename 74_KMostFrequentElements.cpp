#include<bits/stdc++.h>
#define ll long long
using namespace std;

#include <bits/stdc++.h> 

vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
     vector<pair<int,int>>v;
    for(auto &it:mp){
        v.push_back({it.second,it.first});
    }
    sort(v.rbegin(),v.rend());
    vector<int>ans;
    int cnt=0;
    for(auto it:v){
        if(cnt==k)
        break;
        ans.push_back(it.second);
        cnt++;
    }
    sort(ans.begin(),ans.end());
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
    