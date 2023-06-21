#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include <bits/stdc++.h>
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
   vector<pair<int,int>>p;
    for(int i=0;i<start.size();i++){
      p.push_back({start[i], finish[i]});
    }
   sort(p.begin(),p.end(),cmp);
   int t=p[0].second;
   int cnt=1;
   for(int i=1;i<start.size();i++){
       if(p[i].first>=t){
           cnt++;
       t=p[i].second;
       }
   }
   return cnt;
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
    