#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h> 
struct meeting{
  
};
bool cmp(vector<int>&a,vector<int>&b){
    if(a[0]<b[0])
    return true;
    else if(a[0]>b[0])
    return false;
    //as for same time meeting with smaller index is preferred 
    else if(a[2]<b[2])
    return true;

    return false;
    // return a[1]<b[1];
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n=start.size();
    vector<int>ans;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        v.push_back({end[i],start[i],i+1});
    }
   sort(v.begin(),v.end(),cmp);
   int temp=v[0][0];
   ans.push_back(v[0][2]);
   for(int i=1;i<n;i++){
       if(temp<v[i][1]){
           ans.push_back(v[i][2]);
       temp=v[i][0];
       }
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
    