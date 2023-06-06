#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
  int m=intervals.size();
   
        for(int j=0;j<m;j++){
           if(ans.empty() || ans.back()[1]<intervals[j][0]){
               ans.push_back(intervals[j]);
           }
           else{
               ans.back()[1]=max(ans.back()[1],intervals[j][1]);
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
    