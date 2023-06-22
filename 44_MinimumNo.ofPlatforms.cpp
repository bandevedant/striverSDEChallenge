#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    //here is the intution any train can arrive 
    //only when we departure of train less than arricval 
    sort(at,at+n);
    sort(dt,dt+n);
    int cnt=1;
    int totdeparted=0;
    for(int i=1;i<n;i++){
        if(at[i]>dt[totdeparted])
        totdeparted++;
        else
        cnt++;
    }
    return cnt;
    //just passed 2 tc and quite space taking too
    // vector<pair<int,int>>vp;
    // for(int i=0;i<n;i++){
    //     vp.push_back({at[i],dt[i]});
    // }
    // sort(vp.begin(),vp.end(),cmp);
    // int temp=vp[0].second;
    // int cnt=1;
    // for(int i=1;i<n;i++){
    //     if(vp[i].first>=temp){
    //     temp=vp[i].second;
    //     }
    //     else
    //         cnt++;
    // }
    // return cnt;
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
    